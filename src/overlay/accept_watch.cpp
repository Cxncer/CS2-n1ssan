// n1ssan-dll / src/overlay/accept_watch.cpp
//
// Auto accept without the Game Coordinator hook. CS2's accept popup is a wide,
// saturated green bar in the top middle of the screen; this copies that band of
// the frame the Present hook has just finished and counts the pixels that can
// only be that button.
//
// Why the frame and not a screen capture: the back buffer is already there,
// works in exclusive fullscreen, and costs one small CopySubresourceRegion
// twice a second - no window hooks, no GDI, no overlay window.
//
// The read is deferred by one check. Reading the copy in the same call as the
// copy itself makes Map wait for the GPU to finish a back-buffer copy, inside
// Present - a stalled frame that also froze the accept popup's own countdown.
// Issuing the copy here and reading it on the next check means the data is
// already there and Map returns immediately.

#include "overlay/accept_watch.h"

#include "diagnostics/log.h"
#include "inventory/auto_accept.h"

#include <d3d11.h>
#include <dxgi.h>

#include <cstdint>
#include <cstring>

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dxgi.lib")

namespace
{
    constexpr ULONGLONG CHECK_INTERVAL_MS = 450;
    constexpr int GREEN_HITS_REQUIRED = 2;
    constexpr int GREEN_MISSES_TO_REARM = 2;

    // Share of the scanned band that has to be accept-green. CS2's button fills
    // several percent of the band at every resolution, so a fraction this small
    // still needs a real bar and not a stray HUD element.
    constexpr float GREEN_FRACTION = 0.004f;

    struct Watcher
    {
        IDXGISwapChain* swap = nullptr;
        ID3D11Device* device = nullptr;
        ID3D11DeviceContext* context = nullptr;
        ID3D11Texture2D* staging = nullptr;

        UINT width = 0;
        UINT height = 0;
        UINT bandX = 0;
        UINT bandY = 0;
        UINT bandW = 0;
        UINT bandH = 0;
        bool bgra = true;

        ULONGLONG lastCheckMs = 0;
        int greenHits = 0;
        int greenMisses = 0;

        // A copy was issued on the previous check; its result is read now.
        bool copyPending = false;

        // One accept per popup: the button stays on screen until the accept
        // registers, and firing again every second is a pile of ready calls.
        bool armed = true;

        bool unavailable = false;
    };

    Watcher g_watcher;

    void ReleaseStaging(Watcher& w)
    {
        if (w.staging)
        {
            w.staging->Release();
            w.staging = nullptr;
        }
    }

    void Reset(Watcher& w)
    {
        ReleaseStaging(w);
        if (w.context) { w.context->Release(); w.context = nullptr; }
        if (w.device) { w.device->Release(); w.device = nullptr; }
        w.swap = nullptr;
        w.width = 0;
        w.height = 0;
        w.bgra = true;
        w.greenHits = 0;
        w.greenMisses = 0;
        w.copyPending = false;
    }

    bool Prepare(Watcher& w, IDXGISwapChain* swap)
    {
        if (w.unavailable)
            return false;

        if (w.swap != swap)
        {
            Reset(w);
            w.swap = swap;

            if (FAILED(swap->GetDevice(__uuidof(ID3D11Device),
                reinterpret_cast<void**>(&w.device))) || !w.device)
            {
                w.unavailable = true;
                Log("[accept-watch] swap chain has no D3D11 device; the button is not watched");
                return false;
            }

            w.device->GetImmediateContext(&w.context);
            if (!w.context)
            {
                w.unavailable = true;
                Log("[accept-watch] no immediate context; the button is not watched");
                return false;
            }
        }

        ID3D11Texture2D* buffer = nullptr;
        if (FAILED(swap->GetBuffer(0, __uuidof(ID3D11Texture2D),
            reinterpret_cast<void**>(&buffer))) || !buffer)
            return false;

        D3D11_TEXTURE2D_DESC desc{};
        buffer->GetDesc(&desc);
        buffer->Release();

        if (desc.Width < 320 || desc.Height < 240)
            return false;

        if (desc.Format == DXGI_FORMAT_B8G8R8A8_UNORM ||
            desc.Format == DXGI_FORMAT_B8G8R8A8_UNORM_SRGB)
        {
            w.bgra = true;
        }
        else if (desc.Format == DXGI_FORMAT_R8G8B8A8_UNORM ||
                 desc.Format == DXGI_FORMAT_R8G8B8A8_UNORM_SRGB)
        {
            w.bgra = false;
        }
        else
        {
            // HDR / 10-bit swap chains: the byte layout below would be wrong, so
            // the watch stays off instead of guessing at colours.
            w.unavailable = true;
            Log("[accept-watch] unsupported swap chain format %u; the button is not watched",
                static_cast<unsigned>(desc.Format));
            return false;
        }

        const bool resized = desc.Width != w.width || desc.Height != w.height || !w.staging;

        if (resized)
        {
            ReleaseStaging(w);

            w.width = desc.Width;
            w.height = desc.Height;

            // The accept popup sits at the top middle of the screen. The band is
            // generous around it on purpose - resolutions, aspect ratios and the
            // popup's own slide-in all move the button a little - but it is kept
            // as small as the button allows, because the copy and the read are
            // paid for out of the frame.
            w.bandX = (UINT)(w.width * 0.30f) & ~1u;
            w.bandY = (UINT)(w.height * 0.10f) & ~1u;
            w.bandW = (UINT)(w.width * 0.40f) & ~1u;
            w.bandH = (UINT)(w.height * 0.16f) & ~1u;

            if (w.bandW < 32 || w.bandH < 32)
                return false;

            D3D11_TEXTURE2D_DESC staging{};
            staging.Width = w.bandW;
            staging.Height = w.bandH;
            staging.MipLevels = 1;
            staging.ArraySize = 1;
            staging.Format = desc.Format;
            staging.SampleDesc.Count = 1;
            staging.Usage = D3D11_USAGE_STAGING;
            staging.CPUAccessFlags = D3D11_CPU_ACCESS_READ;

            if (FAILED(w.device->CreateTexture2D(&staging, nullptr, &w.staging)) || !w.staging)
            {
                w.unavailable = true;
                Log("[accept-watch] staging texture unavailable; the button is not watched");
                return false;
            }
        }

        return true;
    }

    // Queue this frame's band into the staging texture. The GPU does the work;
    // nobody waits for it here.
    bool IssueCopy(Watcher& w, IDXGISwapChain* swap)
    {
        ID3D11Texture2D* buffer = nullptr;
        if (FAILED(swap->GetBuffer(0, __uuidof(ID3D11Texture2D),
            reinterpret_cast<void**>(&buffer))) || !buffer)
            return false;

        D3D11_BOX box{};
        box.left = w.bandX;
        box.top = w.bandY;
        box.front = 0;
        box.right = w.bandX + w.bandW;
        box.bottom = w.bandY + w.bandH;
        box.back = 1;

        w.context->CopySubresourceRegion(w.staging, 0, 0, 0, 0, buffer, 0, &box);
        buffer->Release();
        return true;
    }

    // Read the copy issued on the previous check. It has had a whole 450 ms
    // interval to complete, so this does not wait on the GPU.
    bool ReadGreen(Watcher& w)
    {
        D3D11_MAPPED_SUBRESOURCE mapped{};
        if (FAILED(w.context->Map(w.staging, 0, D3D11_MAP_READ, 0, &mapped)))
            return false;

        const uint8_t* bytes = static_cast<const uint8_t*>(mapped.pData);
        size_t green = 0;

        for (UINT y = 0; y < w.bandH; y += 2)
        {
            const uint8_t* row = bytes + (size_t)y * mapped.RowPitch;

            for (UINT x = 0; x < w.bandW; x += 2)
            {
                const uint8_t* px = row + (size_t)x * 4;
                const uint8_t b = w.bgra ? px[0] : px[2];
                const uint8_t g = px[1];
                const uint8_t r = w.bgra ? px[2] : px[0];

                // The accept bar is a saturated green: bright in green, clearly
                // above red and blue. Health bars, radar pings and the buy menu's
                // green accents are never this wide there.
                if (g >= 120 && g > r + 30 && g > b + 30)
                    ++green;
            }
        }

        w.context->Unmap(w.staging, 0);

        const size_t sampled = (size_t)(w.bandW / 2) * (size_t)(w.bandH / 2);
        return sampled > 0 && green >= (size_t)(sampled * GREEN_FRACTION);
    }
}

void AcceptWatch::Observe(IDXGISwapChain* swap)
{
    if (!swap)
        return;

    const ULONGLONG now = NowMs();
    Watcher& w = g_watcher;

    if (w.lastCheckMs != 0 && now - w.lastCheckMs < CHECK_INTERVAL_MS)
        return;

    w.lastCheckMs = now;

    if (!Prepare(w, swap))
        return;

    if (w.copyPending)
    {
        w.copyPending = false;

        if (ReadGreen(w))
        {
            ++w.greenHits;
            w.greenMisses = 0;

            if (w.greenHits >= GREEN_HITS_REQUIRED && w.armed)
            {
                w.armed = false;
                w.greenHits = 0;

                // Only a request: the accept itself is made on the game thread.
                Log("[accept-watch] accept button on screen");
                AutoAccept::RequestAccept();
            }
        }
        else
        {
            w.greenHits = 0;

            if (++w.greenMisses >= GREEN_MISSES_TO_REARM)
                w.armed = true;
        }
    }

    if (IssueCopy(w, swap))
        w.copyPending = true;
}
