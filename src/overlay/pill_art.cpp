// n1ssan-dll / src/overlay/pill_art.cpp
//
// Draws the Armory's FPS capsule once per displayed value: a translucent body
// inside a bright purple rim, an inner bloom, the white n1ssan mark on the left,
// the frame rate in white and the frame time in a dimmer right-hand slot.
//
// The same capsule is drawn in the web UI while a workspace loads, so the two
// read as one object: the shape, the purple and the travelling light are shared
// ideas, not two separate looks.

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

    // A stadium: every corner is half the height, which is what the reference
    // capsule's ends are.
    void AddCapsule(GraphicsPath& path, const RectF& box)
    {
        const REAL radius = box.Height / 2.0f;

        path.AddArc(box.X, box.Y, 2.0f * radius, 2.0f * radius, 180.0f, 90.0f);
        path.AddArc(box.X + box.Width - 2.0f * radius, box.Y,
            2.0f * radius, 2.0f * radius, 270.0f, 90.0f);
        path.AddArc(box.X + box.Width - 2.0f * radius, box.Y + box.Height - 2.0f * radius,
            2.0f * radius, 2.0f * radius, 0.0f, 90.0f);
        path.AddArc(box.X, box.Y + box.Height - 2.0f * radius,
            2.0f * radius, 2.0f * radius, 90.0f, 90.0f);
        path.CloseFigure();
    }

    // The square a band gradient is built over. It has to hold the whole
    // rotated gradient, or GDI+ tiles the edges of it and a second band shows up
    // across the pill.
    RectF BandSquare(const RectF& frame)
    {
        const float diagonal =
            std::sqrt(frame.Width * frame.Width + frame.Height * frame.Height) * 1.7f;

        const PointF centre(frame.X + frame.Width / 2.0f, frame.Y + frame.Height / 2.0f);
        return RectF(centre.X - diagonal / 2.0f, centre.Y - diagonal / 2.0f,
            diagonal, diagonal);
    }

    // One narrow bright band through the middle of the pill, rotated by `angle`.
    // A conic gradient would be the exact shape of the reference's travelling
    // light, and GDI+ has none, so this is a rotating linear band: it appears on
    // one side of the capsule, slides around it and fades out on the other,
    // which is the same read at this size and costs one path fill.
    void RotateBand(LinearGradientBrush& brush, const RectF& frame, float angle)
    {
        const PointF centre(frame.X + frame.Width / 2.0f, frame.Y + frame.Height / 2.0f);

        Matrix rotation;
        rotation.RotateAt(angle, centre);
        brush.SetTransform(&rotation);
    }

    void SetBandStops(LinearGradientBrush& brush, Color mid)
    {
        const Color colors[5] = {
            Color(0, 0, 0, 0),
            Color(0, 0, 0, 0),
            mid,
            Color(0, 0, 0, 0),
            Color(0, 0, 0, 0),
        };
        const REAL positions[5] = { 0.0f, 0.42f, 0.5f, 0.58f, 1.0f };

        brush.SetInterpolationColors(colors, positions, 5);
    }

    bool ComposeCanvas(Bitmap& canvas, Graphics& g)
    {
        g.SetSmoothingMode(SmoothingModeAntiAlias);
        g.SetInterpolationMode(InterpolationModeHighQualityBicubic);
        g.SetPixelOffsetMode(PixelOffsetModeHalf);
        g.SetCompositingQuality(CompositingQualityHighQuality);
        g.SetTextRenderingHint(TextRenderingHintAntiAliasGridFit);
        return canvas.GetLastStatus() == Ok && g.GetLastStatus() == Ok;
    }

    bool ReadBack(Bitmap& canvas, PillArt::Pill& out)
    {
        BitmapData data;
        const Rect lockRect(0, 0, out.width, out.height);
        if (canvas.LockBits(&lockRect, ImageLockModeRead, PixelFormat32bppPARGB, &data) != Ok)
            return false;

        out.pixels.assign((size_t)out.width * (size_t)out.height * 4, 0);

        const uint8_t* source = static_cast<const uint8_t*>(data.Scan0);
        const int stride = data.Stride;
        for (int y = 0; y < out.height; ++y)
        {
            const uint8_t* row = stride >= 0
                ? source + (size_t)y * (size_t)stride
                : source + (size_t)(out.height - 1 - y) * (size_t)(-stride);
            std::memcpy(out.pixels.data() + (size_t)y * (size_t)out.width * 4,
                row, (size_t)out.width * 4);
        }

        canvas.UnlockBits(&data);
        return true;
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

    bool Compose(int fps, float frameMs, float scale, Pill& out, bool spike, float phase)
    {
        if (!g_gdiplusToken)
            return false;

        wchar_t label[16];
        swprintf_s(label, L"%d", fps);

        wchar_t timeLabel[24];

        if (!std::isfinite(frameMs) || frameMs < 0.0f)
            frameMs = 0.0f;

        swprintf_s(timeLabel, L"~%dms", (int)std::lround(frameMs));

        const float padLeft = 15.0f * scale;
        const float padRight = 16.0f * scale;
        const float gapMark = 9.0f * scale;
        const float gapDots = 12.0f * scale;
        const float markSide = 21.0f * scale;
        const float height = 41.0f * scale;
        const float dotRadius = 1.7f * scale;
        const float dotSpacing = 6.0f * scale;
        const float radiusStep = dotRadius * 2.0f + dotSpacing;
        const float dotsWidth = dotRadius * 6.0f + dotSpacing * 2.0f;
        const float numberSize = 19.0f * scale;
        const float timeSize = 10.5f * scale;

        std::unique_ptr<Font> font(new Font(L"Segoe UI Semibold", numberSize, FontStyleRegular, UnitPixel));
        if (font->GetLastStatus() != Ok)
            font.reset(new Font(L"Segoe UI", numberSize, FontStyleBold, UnitPixel));
        if (font->GetLastStatus() != Ok)
            return false;

        std::unique_ptr<Font> timeFont(new Font(L"Segoe UI Semibold", timeSize, FontStyleRegular, UnitPixel));
        if (timeFont->GetLastStatus() != Ok)
            timeFont.reset(new Font(L"Segoe UI", timeSize, FontStyleBold, UnitPixel));
        if (timeFont->GetLastStatus() != Ok)
            return false;

        float textWidth = 0.0f;
        float timeWidth = 0.0f;

        {
            Bitmap probe(1, 1, PixelFormat32bppPARGB);
            Graphics measure(&probe);
            RectF bounds;

            if (measure.MeasureString(label, -1, font.get(), PointF(0.0f, 0.0f), &bounds) != Ok)
                return false;
            textWidth = bounds.Width;

            if (measure.MeasureString(timeLabel, -1, timeFont.get(), PointF(0.0f, 0.0f), &bounds) != Ok)
                return false;
            timeWidth = bounds.Width;
        }

        const int width = (int)std::ceil(
            padLeft + markSide + gapMark + textWidth + gapDots + dotsWidth +
            gapDots + timeWidth + padRight + 3.0f);
        const int heightPx = (int)std::ceil(height);
        if (width < 8 || heightPx < 8)
            return false;

        out.width = width;
        out.height = heightPx;

        Bitmap canvas(width, heightPx, PixelFormat32bppPARGB);
        if (canvas.GetLastStatus() != Ok)
            return false;

        {
            Graphics g(&canvas);
            if (!ComposeCanvas(canvas, g))
                return false;

            const RectF frame(0.0f, 0.0f, (float)width, (float)heightPx);

            GraphicsPath shell;
            AddCapsule(shell, frame);

            // The band angle: one full turn per phase, offset so the light
            // starts at the mark and travels right, the way the reference's
            // highlight does.
            const float angle = phase * 360.0f - 90.0f;

            // Body between the rim and the inner capsule: the purple ring of the
            // reference, dark enough that the window inside it reads as black
            // glass rather than as a lavender bubble.
            LinearGradientBrush shellBody(frame,
                Color(220, 40, 10, 92),
                Color(232, 22, 4, 52),
                LinearGradientModeVertical);
            g.FillPath(&shellBody, &shell);

            // Outer halo, so the pill keeps its glow over a bright wall.
            Pen halo(Color(46, 150, 106, 255), 6.0f * scale < 3.0f ? 3.0f : 6.0f * scale);
            g.DrawPath(&halo, &shell);

            // Inner capsule: the darker translucent window the contents sit in.
            const REAL inset = 4.0f * scale < 2.0f ? 2.0f : 4.0f * scale;
            const RectF innerFrame(frame.X + inset, frame.Y + inset,
                frame.Width - inset * 2.0f, frame.Height - inset * 2.0f);

            GraphicsPath inner;
            AddCapsule(inner, innerFrame);

            LinearGradientBrush innerBody(innerFrame,
                Color(230, 32, 8, 70),
                Color(242, 14, 2, 34),
                LinearGradientModeForwardDiagonal);
            g.FillPath(&innerBody, &inner);

            // Bloom: brightest a little left of centre, exactly where the
            // reference's glow sits behind the battery.
            {
                g.SetClip(&inner);

                PathGradientBrush bloom(&inner);
                const PointF centre(innerFrame.X + innerFrame.Width * 0.44f,
                    innerFrame.Y + innerFrame.Height * 0.56f);
                bloom.SetCenterPoint(centre);
                bloom.SetCenterColor(Color(74, 158, 60, 255));

                Color surround[1] = { Color(0, 0, 0, 0) };
                INT count = 1;
                bloom.SetSurroundColors(surround, &count);
                g.FillPath(&bloom, &inner);

                // Sheen: the same bright band, clipped to the body, so the
                // gradient itself moves rather than a highlight sitting on top
                // of a static one.
                {
                    LinearGradientBrush sheen(BandSquare(frame), Color(0, 0, 0, 0),
                        Color(0, 0, 0, 0), LinearGradientModeHorizontal);
                    SetBandStops(sheen, Color(104, 226, 186, 255));
                    RotateBand(sheen, frame, angle + 42.0f);

                    g.FillPath(&sheen, &inner);
                }

                // Static glass: one white sheen that is brightest at the top
                // edge and gone by the bottom, which is what reads as glass.
                LinearGradientBrush gloss(innerFrame,
                    Color(14, 255, 255, 255),
                    Color(0, 255, 255, 255),
                    LinearGradientModeVertical);
                g.FillPath(&gloss, &inner);

                g.ResetClip();
            }

            // Hairline between body and rim, so the capsule keeps an edge.
            Pen innerRim(Color(120, 196, 158, 255), 1.2f);
            g.DrawPath(&innerRim, &inner);

            // Rim: a dim purple line everywhere, plus the travelling light on
            // the same path.
            Pen rim(Color(205, 186, 150, 255), 1.4f * scale < 1.0f ? 1.0f : 1.4f * scale);
            g.DrawPath(&rim, &shell);

            {
                LinearGradientBrush chase(BandSquare(frame), Color(0, 0, 0, 0),
                    Color(0, 0, 0, 0), LinearGradientModeHorizontal);
                SetBandStops(chase, Color(255, 246, 238, 255));
                RotateBand(chase, frame, angle);

                Pen light(&chase, 2.8f * scale < 1.5f ? 1.5f : 2.8f * scale);
                g.DrawPath(&light, &shell);
            }

            if (g_mark)
            {
                const float top = (heightPx - markSide) / 2.0f;
                g.DrawImage(g_mark, RectF(padLeft, top, markSide, markSide));
            }

            float cursor = padLeft + markSide + gapMark;

            {
                StringFormat format;
                format.SetAlignment(StringAlignmentNear);
                format.SetLineAlignment(StringAlignmentCenter);
                format.SetFormatFlags(StringFormatFlagsNoWrap);

                // Amber while a recent frame ran long, white otherwise: the same
                // signal as the [perf-spike] log line, visible in game.
                SolidBrush number(spike ? Color(255, 244, 178, 74) : Color(255, 255, 255, 255));

                const RectF box(cursor, 0.0f, textWidth + 2.0f, (float)heightPx);
                g.DrawString(label, -1, font.get(), box, &format, &number);
                cursor += textWidth + 2.0f;
            }

            cursor += gapDots;

            {
                SolidBrush dot(Color(168, 236, 224, 255));

                for (int i = 0; i < 3; ++i)
                {
                    const float cx = cursor + dotRadius + (float)i * radiusStep;
                    const float cy = heightPx / 2.0f;
                    g.FillEllipse(&dot, cx - dotRadius, cy - dotRadius,
                        dotRadius * 2.0f, dotRadius * 2.0f);
                }

                cursor += dotsWidth;
            }

            cursor += gapDots;

            {
                StringFormat format;
                format.SetAlignment(StringAlignmentNear);
                format.SetLineAlignment(StringAlignmentCenter);
                format.SetFormatFlags(StringFormatFlagsNoWrap);

                SolidBrush dim(Color(170, 226, 208, 255));

                const RectF box(cursor, 0.0f, timeWidth + 2.0f, (float)heightPx);
                g.DrawString(timeLabel, -1, timeFont.get(), box, &format, &dim);
            }
        }

        return ReadBack(canvas, out);
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

        out.width = width;
        out.height = heightPx;
        return ReadBack(canvas, out);
    }
}
