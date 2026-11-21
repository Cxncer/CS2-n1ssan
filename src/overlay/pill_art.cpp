// n1ssan-dll / src/overlay/pill_art.cpp
//
// Draws the Armory's FPS capsule once per displayed value: a translucent purple
// gradient body, a soft white sheen across the top (the "glass"), a hairline rim,
// the white n1ssan mark on the left and the frame rate in white on the right.

#include "overlay/pill_art.h"

#include "overlay/n1ssan_mark.h"

#include <windows.h>
#include <gdiplus.h>

#include <cmath>
#include <cstdio>
#include <cstring>
#include <cwchar>
#include <memory>

#pragma comment(lib, "gdiplus.lib")
#pragma comment(lib, "ole32.lib")

namespace
{
    using namespace Gdiplus;

    ULONG_PTR g_gdiplusToken = 0;
    Bitmap* g_mark = nullptr;

    // The white n1ssan mark, decoded once from the embedded PNG.
    void LoadMark()
    {
        if (g_mark)
            return;

        HGLOBAL memory = GlobalAlloc(GMEM_MOVEABLE, kN1ssanMarkPngSize);
        if (!memory)
            return;

        void* destination = GlobalLock(memory);
        if (!destination)
        {
            GlobalFree(memory);
            return;
        }

        std::memcpy(destination, kN1ssanMarkPng, kN1ssanMarkPngSize);
        GlobalUnlock(memory);

        IStream* stream = nullptr;
        if (FAILED(CreateStreamOnHGlobal(memory, TRUE, &stream)) || !stream)
        {
            GlobalFree(memory);
            return;
        }

        Bitmap* mark = Bitmap::FromStream(stream);
        stream->Release();

        if (mark && mark->GetLastStatus() == Ok)
        {
            g_mark = mark;
            return;
        }

        delete mark;
    }
}

namespace PillArt
{
    bool Startup()
    {
        if (g_gdiplusToken)
            return true;

        GdiplusStartupInput input;
        ULONG_PTR token = 0;
        if (GdiplusStartup(&token, &input, nullptr) != Ok)
            return false;

        g_gdiplusToken = token;
        LoadMark();
        return true;
    }

    bool Compose(int fps, float scale, Pill& out, bool spike)
    {
        if (!g_gdiplusToken)
            return false;

        wchar_t label[16];
        swprintf_s(label, L"%d", fps);

        const float padLeft = 13.0f * scale;
        const float padRight = 15.0f * scale;
        const float gap = 9.0f * scale;
        const float markSide = 21.0f * scale;
        const float height = 37.0f * scale;
        const float fontSize = 15.5f * scale;

        std::unique_ptr<Font> font(new Font(L"Segoe UI Semibold", fontSize, FontStyleRegular, UnitPixel));
        if (font->GetLastStatus() != Ok)
            font.reset(new Font(L"Segoe UI", fontSize, FontStyleBold, UnitPixel));
        if (font->GetLastStatus() != Ok)
            return false;

        float textWidth = 0.0f;
        {
            Bitmap probe(1, 1, PixelFormat32bppPARGB);
            Graphics measure(&probe);
            RectF bounds;
            if (measure.MeasureString(label, -1, font.get(), PointF(0.0f, 0.0f), &bounds) != Ok)
                return false;
            textWidth = bounds.Width;
        }

        const int width = (int)std::ceil(padLeft + markSide + gap + textWidth + padRight + 3.0f);
        const int heightPx = (int)std::ceil(height);
        if (width < 8 || heightPx < 8)
            return false;

        Bitmap canvas(width, heightPx, PixelFormat32bppPARGB);
        if (canvas.GetLastStatus() != Ok)
            return false;

        {
            Graphics g(&canvas);
            g.SetSmoothingMode(SmoothingModeAntiAlias);
            g.SetInterpolationMode(InterpolationModeHighQualityBicubic);
            g.SetPixelOffsetMode(PixelOffsetModeHalf);
            g.SetCompositingQuality(CompositingQualityHighQuality);
            g.SetTextRenderingHint(TextRenderingHintAntiAliasGridFit);

            const float radius = heightPx / 2.0f;

            GraphicsPath capsule;
            capsule.AddArc(0.0f, 0.0f, 2.0f * radius, 2.0f * radius, 180.0f, 90.0f);
            capsule.AddArc(width - 2.0f * radius, 0.0f, 2.0f * radius, 2.0f * radius, 270.0f, 90.0f);
            capsule.AddArc(width - 2.0f * radius, heightPx - 2.0f * radius, 2.0f * radius, 2.0f * radius, 0.0f, 90.0f);
            capsule.AddArc(0.0f, heightPx - 2.0f * radius, 2.0f * radius, 2.0f * radius, 90.0f, 90.0f);
            capsule.CloseFigure();

            const RectF frame(0.0f, 0.0f, (float)width, (float)heightPx);

            // Body: one purple gradient over the whole capsule - light violet
            // at the top falling to a deep indigo at the bottom - kept
            // translucent so the scene reads through it. The first version
            // painted a second, half-height gradient over this one, and GDI+
            // tiles a linear gradient outside its own rectangle
            // (WrapModeTileFlipXY by default): that repeated band is the hard
            // horizontal seam across the middle of the pill in the screenshot.
            // Both gradients now cover the full capsule, so there is nothing
            // below them to repeat.
            LinearGradientBrush body(frame,
                Color(205, 150, 124, 255),
                Color(210, 72, 42, 164),
                LinearGradientModeVertical);
            g.FillPath(&body, &capsule);

            // Glass: a single white sheen that is brightest at the top edge and
            // fades to nothing by the bottom, which is what makes the capsule
            // read as glass rather than flat paint.
            LinearGradientBrush gloss(frame,
                Color(62, 255, 255, 255),
                Color(0, 255, 255, 255),
                LinearGradientModeVertical);
            g.FillPath(&gloss, &capsule);

            // Hairline rim so the capsule keeps an edge over bright scenes.
            const float rimWidth = 1.1f * scale < 1.0f ? 1.0f : 1.1f * scale;
            Pen rim(Color(74, 255, 255, 255), rimWidth);
            g.DrawPath(&rim, &capsule);

            if (g_mark)
            {
                const float top = (heightPx - markSide) / 2.0f;
                g.DrawImage(g_mark, RectF(padLeft, top, markSide, markSide));
            }

            StringFormat format;
            format.SetAlignment(StringAlignmentFar);
            format.SetLineAlignment(StringAlignmentCenter);
            format.SetFormatFlags(StringFormatFlagsNoWrap);

            const float textLeft = padLeft + markSide + gap;
            const RectF textBox(textLeft, 0.0f, width - textLeft - padRight, (float)heightPx);

            // Amber while a recent frame ran long, white otherwise: the same
            // signal as the [perf-spike] log line, visible in game.
            SolidBrush white(spike ? Color(255, 235, 140, 60) : Color(255, 255, 255, 255));
            g.DrawString(label, -1, font.get(), textBox, &format, &white);
        }

        BitmapData data;
        const Rect lockRect(0, 0, width, heightPx);
        if (canvas.LockBits(&lockRect, ImageLockModeRead, PixelFormat32bppPARGB, &data) != Ok)
            return false;

        out.width = width;
        out.height = heightPx;
        out.pixels.assign((size_t)width * (size_t)heightPx * 4, 0);

        const uint8_t* source = static_cast<const uint8_t*>(data.Scan0);
        const int stride = data.Stride;
        for (int y = 0; y < heightPx; ++y)
        {
            const uint8_t* row = stride >= 0
                ? source + (size_t)y * (size_t)stride
                : source + (size_t)(heightPx - 1 - y) * (size_t)(-stride);
            std::memcpy(out.pixels.data() + (size_t)y * (size_t)width * 4,
                row, (size_t)width * 4);
        }

        canvas.UnlockBits(&data);
        return true;
    }

    bool ComposeVersion(const char* text, float scale, Pill& out)
    {
        if (!g_gdiplusToken || !text || !*text)
            return false;

        wchar_t label[128];
        if (MultiByteToWideChar(CP_UTF8, 0, text, -1, label, 128) <= 0)
            return false;

        // Smaller than the pill text: this is a build stamp, not HUD.
        const float fontSize = 10.0f * scale;

        std::unique_ptr<Font> font(new Font(L"Segoe UI Semibold", fontSize, FontStyleRegular, UnitPixel));
        if (font->GetLastStatus() != Ok)
            font.reset(new Font(L"Segoe UI", fontSize, FontStyleBold, UnitPixel));
        if (font->GetLastStatus() != Ok)
            return false;

        float textWidth = 0.0f;
        float textHeight = 0.0f;
        {
            Bitmap probe(1, 1, PixelFormat32bppPARGB);
            Graphics measure(&probe);
            RectF bounds;
            if (measure.MeasureString(label, -1, font.get(), PointF(0.0f, 0.0f), &bounds) != Ok)
                return false;
            textWidth = bounds.Width;
            textHeight = bounds.Height;
        }

        const int pad = (int)std::ceil(2.0f * scale);
        const int width = (int)std::ceil(textWidth) + pad * 2 + 2;
        const int heightPx = (int)std::ceil(textHeight) + pad * 2;

        if (width < 8 || heightPx < 8)
            return false;

        Bitmap canvas(width, heightPx, PixelFormat32bppPARGB);
        if (canvas.GetLastStatus() != Ok)
            return false;

        {
            Graphics g(&canvas);
            g.SetSmoothingMode(SmoothingModeAntiAlias);
            g.SetTextRenderingHint(TextRenderingHintAntiAliasGridFit);
            g.SetCompositingQuality(CompositingQualityHighQuality);
            g.SetPixelOffsetMode(PixelOffsetModeHalf);

            StringFormat format;
            format.SetAlignment(StringAlignmentNear);
            format.SetLineAlignment(StringAlignmentCenter);
            format.SetFormatFlags(StringFormatFlagsNoWrap);

            const RectF box((float)pad, (float)pad,
                (float)width - pad * 2, (float)heightPx - pad * 2);

            // One dark shadow one pixel down-right: over a bright wall or the
            // sky the white on its own disappears, and the stamp has to stay
            // readable in a screenshot. A full outline smeared the glyphs at
            // this size, so it stays a single offset.
            SolidBrush shadow(Color(200, 0, 0, 0));
            g.DrawString(label, -1, font.get(),
                RectF(box.X + 1.0f, box.Y + 1.0f, box.Width, box.Height), &format, &shadow);

            SolidBrush white(Color(240, 255, 255, 255));
            g.DrawString(label, -1, font.get(), box, &format, &white);
        }

        BitmapData data;
        const Rect lockRect(0, 0, width, heightPx);
        if (canvas.LockBits(&lockRect, ImageLockModeRead, PixelFormat32bppPARGB, &data) != Ok)
            return false;

        out.width = width;
        out.height = heightPx;
        out.pixels.assign((size_t)width * (size_t)heightPx * 4, 0);

        const uint8_t* source = static_cast<const uint8_t*>(data.Scan0);
        const int stride = data.Stride;
        for (int y = 0; y < heightPx; ++y)
        {
            const uint8_t* row = stride >= 0
                ? source + (size_t)y * (size_t)stride
                : source + (size_t)(heightPx - 1 - y) * (size_t)(-stride);
            std::memcpy(out.pixels.data() + (size_t)y * (size_t)width * 4,
                row, (size_t)width * 4);
        }

        canvas.UnlockBits(&data);
        return true;
    }
}
