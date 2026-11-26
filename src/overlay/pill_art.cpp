// n1ssan-dll / src/overlay/pill_art.cpp
//
// Draws the Armory's capsules with GDI+. The reference is one shape: a stadium
// filled with a saturated gradient, a soft halo around it, a glassy highlight and
// white text. The frame-rate pill puts the n1ssan mark, the frame rate and the
// frame time on that shape in purple; the loading pill puts one centred word on it
// and keeps the travelling light. Same artwork, so the game and the web UI read as
// one object.
//
// The counter's pill is static: no band runs around its outline, and its bitmap is
// rebuilt only when the number or the frame time changes. A moving outline in the
// corner of the eye for a whole session is noise, and every recompose is a redraw
// on the render thread.

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

    constexpr float PI = 3.14159265358979f;

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

    // One point on the capsule's outline, `t` in 0..1 clockwise from the top-left
    // corner, with the outline's direction there (degrees) so the light can lie
    // along the edge.
    void PerimeterPoint(const RectF& box, float t, PointF& point, float& tangentDeg)
    {
        const float radius = box.Height / 2.0f;
        float straight = box.Width - box.Height;
        if (straight < 0.0f)
            straight = 0.0f;

        const float cap = PI * radius;
        const float total = 2.0f * straight + 2.0f * cap;

        point = PointF(box.X + box.Width / 2.0f, box.Y);
        tangentDeg = 0.0f;

        if (total <= 0.0f)
            return;

        float remaining = (t - std::floor(t)) * total;

        if (remaining < straight)
        {
            point = PointF(box.X + radius + remaining, box.Y);
            return;
        }
        remaining -= straight;

        if (remaining < cap)
        {
            const float angle = -PI / 2.0f + (remaining / cap) * PI;
            point = PointF(box.X + box.Width - radius + radius * std::cos(angle),
                box.Y + radius + radius * std::sin(angle));
            tangentDeg = angle * 180.0f / PI + 90.0f;
            return;
        }
        remaining -= cap;

        if (remaining < straight)
        {
            point = PointF(box.X + box.Width - radius - remaining, box.Y + box.Height);
            tangentDeg = 180.0f;
            return;
        }
        remaining -= straight;

        const float angle = PI / 2.0f + (std::fmin(std::fmax(remaining / cap, 0.0f), 1.0f)) * PI;
        point = PointF(box.X + radius + radius * std::cos(angle),
            box.Y + radius + radius * std::sin(angle));
        tangentDeg = angle * 180.0f / PI + 90.0f;
    }

    // One soft ellipse of light centred on `centre`, lying along `tangentDeg`.
    // `core` is the hot middle, `edge` the tail colour that fades to nothing at
    // the boundary: the focus scales squeeze the hot part so it reads as a band
    // and not a dot.
    void FillLight(Graphics& g, const PointF& centre, float tangentDeg,
        float length, float thickness, const Color& core, const Color& edge)
    {
        if (length <= 0.0f || thickness <= 0.0f)
            return;

        GraphicsPath blob;
        blob.AddEllipse(centre.X - length / 2.0f, centre.Y - thickness / 2.0f,
            length, thickness);

        Matrix rotation;
        rotation.RotateAt(tangentDeg, centre);
        blob.Transform(&rotation);

        PathGradientBrush brush(&blob);
        brush.SetCenterPoint(centre);
        brush.SetCenterColor(core);
        brush.SetFocusScales(0.45f, 0.16f);

        Color surround[1] = { edge };
        INT count = 1;
        brush.SetSurroundColors(surround, &count);

        g.FillPath(&brush, &blob);
    }

    // The capsule itself: a purple gradient body, a soft purple glow around it,
    // a white sheen on the top half and a hairline rim.
    //
    // It used to be a near-black body with a band of light travelling its rim,
    // recomposed five times a second. The frame-rate counter must not do that:
    // the pill sits in the corner for a whole session, and a moving outline in
    // the corner of the eye is noise. `phase` below 0 selects the static look -
    // one image, rebuilt only when the number changes - while the loading
    // capsule, which is on screen for five seconds, still passes a phase and
    // keeps its light.
    void PaintShell(Graphics& g, const RectF& frame, float scale, float phase)
    {
        const bool animated = phase >= 0.0f;

        GraphicsPath shell;
        AddCapsule(shell, frame);

        // Glow: one larger capsule of purple that fades to nothing at its edge,
        // so the pill lifts off whatever is behind it instead of being pasted
        // on. This is the reference's halo, in the counter's colour.
        {
            const float spread = 4.0f * scale < 2.0f ? 2.0f : 4.0f * scale;

            RectF glowFrame(frame.X - spread, frame.Y - spread,
                frame.Width + spread * 2.0f, frame.Height + spread * 2.0f);

            GraphicsPath glowPath;
            AddCapsule(glowPath, glowFrame);

            PathGradientBrush glow(&glowPath);
            glow.SetCenterColor(Color(130, 124, 58, 237));
            Color glowEdge[1] = { Color(0, 124, 58, 237) };
            INT glowCount = 1;
            glow.SetSurroundColors(glowEdge, &glowCount);
            g.FillPath(&glow, &glowPath);
        }

        // Body: violet at the top, deep purple at the bottom. Translucent, so the
        // game still reads through the capsule.
        LinearGradientBrush body(frame,
            Color(240, 167, 139, 250),
            Color(242, 109, 40, 217),
            LinearGradientModeVertical);
        g.FillPath(&body, &shell);

        // A wide, soft highlight on the left third: the reference capsule is lit
        // from one end rather than evenly, which is what makes it read as glass
        // and not as a flat chip.
        {
            g.SetClip(&shell);

            GraphicsPath highlightPath;
            highlightPath.AddEllipse(frame.X - frame.Width * 0.15f,
                frame.Y - frame.Height * 0.55f,
                frame.Width * 0.85f, frame.Height * 1.9f);

            PathGradientBrush highlight(&highlightPath);
            highlight.SetCenterColor(Color(44, 255, 235, 255));
            Color highlightEdge[1] = { Color(0, 255, 235, 255) };
            INT highlightCount = 1;
            highlight.SetSurroundColors(highlightEdge, &highlightCount);
            g.FillPath(&highlight, &highlightPath);

            g.ResetClip();
        }

        // Glass: one white sheen brightest at the top edge and gone by the middle.
        {
            const RectF sheenFrame(frame.X + 1.0f, frame.Y + 1.0f,
                frame.Width - 2.0f, frame.Height * 0.46f);

            GraphicsPath sheenPath;
            AddCapsule(sheenPath, sheenFrame);

            g.SetClip(&shell);
            LinearGradientBrush sheen(sheenFrame,
                Color(26, 255, 255, 255),
                Color(0, 255, 255, 255),
                LinearGradientModeVertical);
            g.FillPath(&sheen, &sheenPath);
            g.ResetClip();
        }

        // Rim: a hairline in light lavender, so the edge holds on a bright wall
        // without drawing a second visible line.
        Pen rim(Color(190, 216, 190, 255), 1.0f);
        g.DrawPath(&rim, &shell);

        if (!animated)
            return;

        const float radius = frame.Height / 2.0f;
        float straight = frame.Width - frame.Height;
        if (straight < 0.0f)
            straight = 0.0f;

        PointF light;
        float tangent = 0.0f;
        PerimeterPoint(frame, phase, light, tangent);

        // Long enough to read as a band and not a dot, short enough that it still
        // travels: two thirds of the flat edge plus a cap's worth of curve.
        const float bandLength = straight * 0.55f + radius * 1.5f;
        const float bandThickness = 0.5f * frame.Height;

        // A small halo around the light only: enough to lift it off the body,
        // small enough that the capsule stays readable everywhere else. Clipped
        // to a slightly larger capsule so the glow follows the shape instead of
        // being cut square by the bitmap's edge.
        {
            const float spread = 6.0f * scale < 3.0f ? 3.0f : 6.0f * scale;

            RectF haloFrame(frame.X - spread, frame.Y - spread,
                frame.Width + spread * 2.0f, frame.Height + spread * 2.0f);

            GraphicsPath haloPath;
            AddCapsule(haloPath, haloFrame);

            g.SetClip(&haloPath);

            FillLight(g, light, tangent, bandLength * 0.9f, bandThickness * 1.05f,
                Color(56, 214, 168, 255), Color(0, 158, 104, 255));

            g.ResetClip();
        }

        // The light itself, clipped to the rim band: everything inside the band
        // is the capsule's edge, so the gradient lands exactly on the outline.
        {
            const float inset = 1.8f * scale < 1.0f ? 1.0f : 1.8f * scale;

            RectF innerFrame(frame.X + inset, frame.Y + inset,
                frame.Width - inset * 2.0f, frame.Height - inset * 2.0f);

            GraphicsPath inner;
            AddCapsule(inner, innerFrame);

            // ExcludeClip takes a region, not a path: the inner capsule becomes
            // the hole, so what is left is the rim band.
            Region innerRegion(&inner);

            g.SetClip(&shell);
            g.ExcludeClip(&innerRegion);

            FillLight(g, light, tangent, bandLength, bandThickness * 0.62f,
                Color(255, 248, 236, 255), Color(0, 196, 150, 255));

            g.ResetClip();
        }
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

    std::unique_ptr<Font> MakeFont(float size, bool bold)
    {
        std::unique_ptr<Font> font(new Font(L"Segoe UI Semibold",
            size, FontStyleRegular, UnitPixel));
        if (font->GetLastStatus() != Ok)
            font.reset(new Font(L"Segoe UI", size, bold ? FontStyleBold : FontStyleRegular, UnitPixel));
        if (font->GetLastStatus() != Ok)
            font.reset();
        return font;
    }

    bool MeasureText(const wchar_t* text, Font& font, float& width, float& height)
    {
        Bitmap probe(1, 1, PixelFormat32bppPARGB);
        Graphics measure(&probe);

        RectF bounds;
        if (measure.MeasureString(text, -1, &font, PointF(0.0f, 0.0f), &bounds) != Ok)
            return false;

        width = bounds.Width;
        height = bounds.Height;
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

        const float padLeft = 10.0f * scale;
        const float padRight = 11.0f * scale;
        const float gapMark = 6.0f * scale;
        const float gapTime = 7.0f * scale;
        const float markSide = 15.0f * scale;
        const float height = 30.0f * scale;
        const float numberSize = 14.0f * scale;
        const float timeSize = 8.5f * scale;

        std::unique_ptr<Font> font = MakeFont(numberSize, true);
        std::unique_ptr<Font> timeFont = MakeFont(timeSize, false);
        if (!font || !timeFont)
            return false;

        float textWidth = 0.0f;
        float timeWidth = 0.0f;
        float ignoredHeight = 0.0f;

        if (!MeasureText(label, *font, textWidth, ignoredHeight) ||
            !MeasureText(timeLabel, *timeFont, timeWidth, ignoredHeight))
            return false;

        const float contentWidth =
            padLeft + markSide + gapMark + textWidth + gapTime + timeWidth + padRight + 3.0f;

        const int contentPx = (int)std::ceil(contentWidth);
        const int heightPx = (int)std::ceil(height);
        if (contentPx < 8 || heightPx < 8)
            return false;

        // Room around the capsule for the halo to fade into. The extra pixels are
        // transparent, so the caller only has to keep them on screen.
        const int margin = (int)std::ceil(10.0f * scale);
        const int width = contentPx + margin * 2;

        out.width = width;
        out.height = heightPx + margin * 2;

        Bitmap canvas(out.width, out.height, PixelFormat32bppPARGB);
        if (canvas.GetLastStatus() != Ok)
            return false;

        {
            Graphics g(&canvas);
            if (!ComposeCanvas(canvas, g))
                return false;

            const RectF frame((float)margin, (float)margin,
                (float)contentPx, (float)heightPx);

            PaintShell(g, frame, scale, phase);

            if (g_mark)
            {
                const float top = frame.Y + (frame.Height - markSide) / 2.0f;
                g.DrawImage(g_mark, RectF(frame.X + padLeft, top, markSide, markSide));
            }

            StringFormat format;
            format.SetAlignment(StringAlignmentNear);
            format.SetLineAlignment(StringAlignmentCenter);
            format.SetFormatFlags(StringFormatFlagsNoWrap);

            float cursor = frame.X + padLeft + markSide + gapMark;

            {
                // Amber while a recent frame ran long, white otherwise: the same
                // signal as the [perf-spike] log line, visible in game.
                SolidBrush number(spike ? Color(255, 244, 178, 74) : Color(255, 255, 255, 255));

                const RectF box(cursor, frame.Y, textWidth + 2.0f, frame.Height);
                g.DrawString(label, -1, font.get(), box, &format, &number);
                cursor += textWidth + 2.0f + gapTime;
            }

            {
                // The frame time is secondary: dim grey, small, after the number.
                SolidBrush dim(Color(205, 226, 214, 255));

                const RectF box(cursor, frame.Y, timeWidth + 2.0f, frame.Height);
                g.DrawString(timeLabel, -1, timeFont.get(), box, &format, &dim);
            }
        }

        return ReadBack(canvas, out);
    }

    bool ComposeLoading(float scale, Pill& out, float phase)
    {
        if (!g_gdiplusToken)
            return false;

        static const wchar_t* label = L"Loading...";

        const float fontSize = 15.0f * scale;
        const float padX = 28.0f * scale;
        const float height = 46.0f * scale;

        std::unique_ptr<Font> font = MakeFont(fontSize, true);
        if (!font)
            return false;

        float textWidth = 0.0f;
        float ignoredHeight = 0.0f;
        if (!MeasureText(label, *font, textWidth, ignoredHeight))
            return false;

        const int contentPx = (int)std::ceil(padX * 2.0f + textWidth + 4.0f);
        const int heightPx = (int)std::ceil(height);
        if (contentPx < 8 || heightPx < 8)
            return false;

        const int margin = (int)std::ceil(13.0f * scale);
        const int width = contentPx + margin * 2;

        out.width = width;
        out.height = heightPx + margin * 2;

        Bitmap canvas(out.width, out.height, PixelFormat32bppPARGB);
        if (canvas.GetLastStatus() != Ok)
            return false;

        {
            Graphics g(&canvas);
            if (!ComposeCanvas(canvas, g))
                return false;

            const RectF frame((float)margin, (float)margin,
                (float)contentPx, (float)heightPx);

            PaintShell(g, frame, scale, phase);

            StringFormat format;
            format.SetAlignment(StringAlignmentCenter);
            format.SetLineAlignment(StringAlignmentCenter);
            format.SetFormatFlags(StringFormatFlagsNoWrap);

            SolidBrush text(Color(255, 255, 255, 255));
            g.DrawString(label, -1, font.get(), frame, &format, &text);
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

        std::unique_ptr<Font> font = MakeFont(fontSize, true);
        if (!font)
            return false;

        float textWidth = 0.0f;
        float textHeight = 0.0f;
        if (!MeasureText(label, *font, textWidth, textHeight))
            return false;

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
