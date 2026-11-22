// n1ssan-dll / src/overlay/fps_counter.cpp
//
// Draws the Armory's FPS pill over the game's finished frame.
//
// The pill itself is composed once per displayed value with GDI+ (rounded
// capsule, purple gradient, soft top gloss, hairline border, white n1ssan mark,
// white frame rate) and uploaded to a small texture. The swap chain's Present is
// hooked so that texture can be drawn as one alpha-blended quad in the top-right
// corner, the place CS2's own `cl_showfps` counter uses. Compositing on the CPU
// keeps the GPU side down to a single textured draw, and the texture is only
// rebuilt when the number of frames changes (once a second).

#include "overlay/fps_counter.h"

#include "diagnostics/log.h"
#include "hooks/minhook_dynamic.h"
#include "inventory/armory_inventory.h"
#include "inventory/auto_accept.h"
#include "overlay/accept_watch.h"
#include "overlay/overlay_version.h"
#include "overlay/pill_art.h"

#include <windows.h>
#include <d3d11.h>
#include <dxgi.h>
#include <d3dcompiler.h>

#include <atomic>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <cwchar>
#include <fstream>
#include <memory>
#include <sstream>
#include <string>
#include <vector>

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "ole32.lib")

namespace
{
    constexpr const char* FEATURES_FILE = "n1ssan-features.json";
    constexpr ULONGLONG TOGGLE_POLL_MS = 1000;

    constexpr UINT SWAPCHAIN_PRESENT_INDEX = 8;

    // ---- switch -----------------------------------------------------------

    // Same file, same shape as the auto-accept switch: only `"fpsCounter": true`
    // counts, and a missing or broken file means off.
    bool ReadToggleFromBridge(const char* key)
    {
        std::string path = ArmoryInventory::BridgeDirectory();
        if (path.empty())
            return false;

        if (path.back() != '\\' && path.back() != '/')
            path += '\\';

        path += FEATURES_FILE;

        std::ifstream file(path, std::ios::binary);
        if (!file)
            return false;

        std::stringstream buffer;
        buffer << file.rdbuf();
        const std::string text = buffer.str();

        const std::string needle = std::string("\"") + key + "\"";
        const size_t keyAt = text.find(needle);
        if (keyAt == std::string::npos)
            return false;

        const size_t colon = text.find(':', keyAt);
        if (colon == std::string::npos)
            return false;

        const size_t value = text.find_first_not_of(" \t\r\n", colon + 1);
        if (value == std::string::npos)
            return false;

        return text.compare(value, 4, "true") == 0;
    }

    std::atomic<bool> g_toggleOn{ false };
    ULONGLONG g_lastTogglePollMs = 0;

    // ---- frame rate -------------------------------------------------------

    std::atomic<uint32_t> g_framesThisWindow{ 0 };
    int g_fps = 0;

    // ---- frame-spike state ----
    // Set by the Present detour when a frame runs far longer than the recent
    // average; read by DrawPill, which tints the number and logs the activity the
    // runtime was busy with at that moment.
    ULONGLONG g_spikeUntilMs = 0;
    double    g_frameAvgMs = 16.7;
    ULONGLONG g_lastFrameMs = 0;
    ULONGLONG g_windowStartMs = 0;

    bool OverlayEnabled()
    {
        const ULONGLONG now = NowMs();
        if (g_lastTogglePollMs == 0 || now - g_lastTogglePollMs >= TOGGLE_POLL_MS)
        {
            g_lastTogglePollMs = now;

            const bool on = ReadToggleFromBridge("fpsCounter");
            if (on != g_toggleOn.load())
            {
                g_toggleOn.store(on);
                Log("[fps-overlay] %s", on ? "enabled" : "disabled");
            }
        }

        return g_toggleOn.load();
    }

    // ---- Direct3D ---------------------------------------------------------

    const char* kPillShader =
        "struct VSIn { float2 pos : POSITION; float2 uv : TEXCOORD0; };\n"
        "struct VSOut { float4 pos : SV_POSITION; float2 uv : TEXCOORD0; };\n"
        "VSOut VSMain(VSIn input) { VSOut o; o.pos = float4(input.pos, 0.0f, 1.0f);"
        " o.uv = input.uv; return o; }\n"
        "Texture2D pillTexture : register(t0);\n"
        "SamplerState pillSampler : register(s0);\n"
        "float4 PSMain(VSOut input) : SV_TARGET"
        " { return pillTexture.Sample(pillSampler, input.uv); }\n";

    struct QuadVertex
    {
        float x, y, u, v;
    };

    // One uploaded overlay image: the composited BGRA pixels, the texture they
    // live in, and a key naming what the pixels were built from.
    struct Art
    {
        ID3D11Texture2D* texture = nullptr;
        ID3D11ShaderResourceView* view = nullptr;
        UINT width = 0;
        UINT height = 0;
        PillArt::Pill pixels;
        int key = -1;
    };

    struct Renderer
    {
        ID3D11Device* device = nullptr;
        ID3D11DeviceContext* context = nullptr;
        IDXGISwapChain* swap = nullptr;

        ID3D11Texture2D* backbuffer = nullptr;
        ID3D11RenderTargetView* target = nullptr;
        UINT targetWidth = 0;
        UINT targetHeight = 0;

        ID3D11VertexShader* vertexShader = nullptr;
        ID3D11PixelShader* pixelShader = nullptr;
        ID3D11InputLayout* layout = nullptr;
        ID3D11Buffer* vertexBuffer = nullptr;
        ID3D11SamplerState* sampler = nullptr;
        ID3D11BlendState* blend = nullptr;

        // The pill and the build stamp are both a composited image on one quad,
        // so each keeps its own pixels, texture and rebuild key.
        Art pill;
        Art version;

        bool pipelineFailed = false;
    };

    Renderer g_renderer;

    void ReleasePipeline(Renderer& r)
    {
        if (r.vertexShader) { r.vertexShader->Release(); r.vertexShader = nullptr; }
        if (r.pixelShader) { r.pixelShader->Release(); r.pixelShader = nullptr; }
        if (r.layout) { r.layout->Release(); r.layout = nullptr; }
        if (r.vertexBuffer) { r.vertexBuffer->Release(); r.vertexBuffer = nullptr; }
        if (r.sampler) { r.sampler->Release(); r.sampler = nullptr; }
        if (r.blend) { r.blend->Release(); r.blend = nullptr; }
    }

    void ReleaseArt(Art& art)
    {
        if (art.view) { art.view->Release(); art.view = nullptr; }
        if (art.texture) { art.texture->Release(); art.texture = nullptr; }
        art.width = 0;
        art.height = 0;
        art.key = -1;
    }

    void ReleaseArtwork(Renderer& r)
    {
        ReleaseArt(r.pill);
        ReleaseArt(r.version);
    }

    void ReleaseTarget(Renderer& r)
    {
        if (r.target) { r.target->Release(); r.target = nullptr; }
        if (r.backbuffer) { r.backbuffer->Release(); r.backbuffer = nullptr; }
        r.targetWidth = 0;
        r.targetHeight = 0;
    }

    void ReleaseDevice(Renderer& r)
    {
        ReleaseTarget(r);
        ReleaseArtwork(r);
        ReleasePipeline(r);
        if (r.context) { r.context->Release(); r.context = nullptr; }
        if (r.device) { r.device->Release(); r.device = nullptr; }
        r.swap = nullptr;
    }

    // d3dcompiler_47.dll is resolved at runtime rather than imported: it is part
    // of every supported Windows build, but a missing one must leave the skin
    // runtime untouched instead of stopping this DLL from loading at all.
    typedef HRESULT(WINAPI* D3DCompileFn)(LPCVOID, SIZE_T, LPCSTR,
        const D3D_SHADER_MACRO*, ID3DInclude*, LPCSTR, LPCSTR, UINT, UINT,
        ID3DBlob**, ID3DBlob**);

    D3DCompileFn ResolveD3DCompile()
    {
        static D3DCompileFn compile = nullptr;
        static bool tried = false;

        if (!tried)
        {
            tried = true;

            HMODULE compiler = LoadLibraryA("d3dcompiler_47.dll");
            if (compiler)
                compile = reinterpret_cast<D3DCompileFn>(
                    GetProcAddress(compiler, "D3DCompile"));

            if (!compile)
                Log("[fps-overlay] d3dcompiler_47.dll unavailable; counter stays off");
        }

        return compile;
    }

    bool CreatePipeline(Renderer& r)
    {
        const D3DCompileFn compile = ResolveD3DCompile();
        if (!compile)
            return false;

        ID3DBlob* vertexBlob = nullptr;
        ID3DBlob* pixelBlob = nullptr;
        ID3DBlob* error = nullptr;

        HRESULT hr = compile(kPillShader, std::strlen(kPillShader),
            "n1ssan-pill.hlsl", nullptr, nullptr, "VSMain", "vs_4_0",
            D3DCOMPILE_OPTIMIZATION_LEVEL3, 0, &vertexBlob, &error);
        if (FAILED(hr))
        {
            Log("[fps-overlay] vertex shader failed: %s", error
                ? static_cast<const char*>(error->GetBufferPointer()) : "unknown");
            if (error) error->Release();
            return false;
        }
        if (error) { error->Release(); error = nullptr; }

        hr = compile(kPillShader, std::strlen(kPillShader),
            "n1ssan-pill.hlsl", nullptr, nullptr, "PSMain", "ps_4_0",
            D3DCOMPILE_OPTIMIZATION_LEVEL3, 0, &pixelBlob, &error);
        if (FAILED(hr))
        {
            Log("[fps-overlay] pixel shader failed: %s", error
                ? static_cast<const char*>(error->GetBufferPointer()) : "unknown");
            vertexBlob->Release();
            if (error) error->Release();
            return false;
        }
        if (error) { error->Release(); error = nullptr; }

        bool ok = true;

        if (FAILED(r.device->CreateVertexShader(vertexBlob->GetBufferPointer(),
            vertexBlob->GetBufferSize(), nullptr, &r.vertexShader)))
            ok = false;

        if (ok && FAILED(r.device->CreatePixelShader(pixelBlob->GetBufferPointer(),
            pixelBlob->GetBufferSize(), nullptr, &r.pixelShader)))
            ok = false;

        if (ok)
        {
            const D3D11_INPUT_ELEMENT_DESC elements[] = {
                { "POSITION", 0, DXGI_FORMAT_R32G32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
                { "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT, 0, 8, D3D11_INPUT_PER_VERTEX_DATA, 0 },
            };

            if (FAILED(r.device->CreateInputLayout(elements, 2,
                vertexBlob->GetBufferPointer(), vertexBlob->GetBufferSize(), &r.layout)))
                ok = false;
        }

        vertexBlob->Release();
        pixelBlob->Release();

        if (ok)
        {
            D3D11_BUFFER_DESC buffer{};
            buffer.ByteWidth = sizeof(QuadVertex) * 4;
            buffer.Usage = D3D11_USAGE_DYNAMIC;
            buffer.BindFlags = D3D11_BIND_VERTEX_BUFFER;
            buffer.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;

            if (FAILED(r.device->CreateBuffer(&buffer, nullptr, &r.vertexBuffer)))
                ok = false;
        }

        if (ok)
        {
            D3D11_SAMPLER_DESC sampler{};
            sampler.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;
            sampler.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;
            sampler.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;
            sampler.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;
            sampler.ComparisonFunc = D3D11_COMPARISON_NEVER;
            sampler.MaxLOD = D3D11_FLOAT32_MAX;

            if (FAILED(r.device->CreateSamplerState(&sampler, &r.sampler)))
                ok = false;
        }

        if (ok)
        {
            // The pill pixmap is premultiplied (GDI+ PArgb), so the blend is
            // ONE / INV_SRC_ALPHA rather than SRC_ALPHA / INV_SRC_ALPHA.
            D3D11_BLEND_DESC blend{};
            blend.RenderTarget[0].BlendEnable = TRUE;
            blend.RenderTarget[0].SrcBlend = D3D11_BLEND_ONE;
            blend.RenderTarget[0].DestBlend = D3D11_BLEND_INV_SRC_ALPHA;
            blend.RenderTarget[0].BlendOp = D3D11_BLEND_OP_ADD;
            blend.RenderTarget[0].SrcBlendAlpha = D3D11_BLEND_ONE;
            blend.RenderTarget[0].DestBlendAlpha = D3D11_BLEND_INV_SRC_ALPHA;
            blend.RenderTarget[0].BlendOpAlpha = D3D11_BLEND_OP_ADD;
            blend.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;

            if (FAILED(r.device->CreateBlendState(&blend, &r.blend)))
                ok = false;
        }

        if (!ok)
            ReleasePipeline(r);

        return ok;
    }

    bool PrepareRenderer(Renderer& r, IDXGISwapChain* swap)
    {
        if (r.pipelineFailed)
            return false;

        if (r.swap != swap)
        {
            ReleaseDevice(r);
            r.pipelineFailed = false;

            ID3D11Device* device = nullptr;
            if (FAILED(swap->GetDevice(__uuidof(ID3D11Device),
                reinterpret_cast<void**>(&device))) || !device)
            {
                Log("[fps-overlay] swap chain has no D3D11 device; counter unavailable");
                r.pipelineFailed = true;
                return false;
            }

            ID3D11DeviceContext* context = nullptr;
            device->GetImmediateContext(&context);
            if (!context)
            {
                device->Release();
                r.pipelineFailed = true;
                return false;
            }

            r.device = device;
            r.context = context;
            r.swap = swap;
            r.pill.key = -1;
            r.version.key = -1;
        }

        if (!r.vertexShader)
        {
            if (!CreatePipeline(r))
            {
                Log("[fps-overlay] renderer pipeline unavailable; counter stays off");
                r.pipelineFailed = true;
                return false;
            }
        }

        ID3D11Texture2D* buffer = nullptr;
        if (FAILED(swap->GetBuffer(0, __uuidof(ID3D11Texture2D),
            reinterpret_cast<void**>(&buffer))) || !buffer)
            return false;

        D3D11_TEXTURE2D_DESC desc{};
        buffer->GetDesc(&desc);

        if (!r.target || desc.Width != r.targetWidth || desc.Height != r.targetHeight)
        {
            if (r.target) { r.target->Release(); r.target = nullptr; }
            if (r.backbuffer) { r.backbuffer->Release(); r.backbuffer = nullptr; }

            if (FAILED(r.device->CreateRenderTargetView(buffer, nullptr, &r.target)))
            {
                buffer->Release();
                r.pipelineFailed = true;
                Log("[fps-overlay] render target view unavailable; counter stays off");
                return false;
            }

            r.targetWidth = desc.Width;
            r.targetHeight = desc.Height;
        }

        if (r.backbuffer)
            r.backbuffer->Release();
        r.backbuffer = buffer;

        return true;
    }

    bool UploadArt(Renderer& r, Art& art, int key, bool force = false)
    {
        if (!force && art.view && art.key == key)
            return true;

        const PillArt::Pill& composed = art.pixels;

        if (art.width != (UINT)composed.width || art.height != (UINT)composed.height)
        {
            ReleaseArt(art);

            D3D11_TEXTURE2D_DESC desc{};
            desc.Width = (UINT)composed.width;
            desc.Height = (UINT)composed.height;
            desc.MipLevels = 1;
            desc.ArraySize = 1;
            desc.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
            desc.SampleDesc.Count = 1;
            desc.Usage = D3D11_USAGE_DYNAMIC;
            desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
            desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;

            if (FAILED(r.device->CreateTexture2D(&desc, nullptr, &art.texture)))
                return false;

            D3D11_SHADER_RESOURCE_VIEW_DESC view{};
            view.Format = desc.Format;
            view.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
            view.Texture2D.MipLevels = 1;

            if (FAILED(r.device->CreateShaderResourceView(art.texture, &view, &art.view)))
            {
                ReleaseArt(art);
                return false;
            }

            art.width = desc.Width;
            art.height = desc.Height;
        }

        D3D11_MAPPED_SUBRESOURCE mapped{};
        if (FAILED(r.context->Map(art.texture, 0, D3D11_MAP_WRITE_DISCARD, 0, &mapped)))
            return false;

        const size_t rowBytes = (size_t)composed.width * 4;
        for (int y = 0; y < composed.height; ++y)
        {
            std::memcpy(static_cast<uint8_t*>(mapped.pData) + (size_t)y * mapped.RowPitch,
                composed.pixels.data() + (size_t)y * rowBytes, rowBytes);
        }

        r.context->Unmap(art.texture, 0);

        art.key = key;
        return true;
    }

    // One alpha-blended textured quad, with the game's pipeline state put back
    // afterwards: Present runs between frames, but the client still holds the
    // state it set.
    void DrawOverlayQuad(Renderer& r, ID3D11ShaderResourceView* texture,
        float left, float top, float quadWidth, float quadHeight)
    {
        if (!texture)
            return;

        const float width = (float)r.targetWidth;
        const float height = (float)r.targetHeight;
        const float right = left + quadWidth;
        const float bottom = top + quadHeight;

        const QuadVertex quad[4] = {
            { 2.0f * left / width - 1.0f, 1.0f - 2.0f * bottom / height, 0.0f, 1.0f },
            { 2.0f * right / width - 1.0f, 1.0f - 2.0f * bottom / height, 1.0f, 1.0f },
            { 2.0f * left / width - 1.0f, 1.0f - 2.0f * top / height, 0.0f, 0.0f },
            { 2.0f * right / width - 1.0f, 1.0f - 2.0f * top / height, 1.0f, 0.0f },
        };

        D3D11_MAPPED_SUBRESOURCE mapped{};
        if (FAILED(r.context->Map(r.vertexBuffer, 0, D3D11_MAP_WRITE_DISCARD, 0, &mapped)))
            return;
        std::memcpy(mapped.pData, quad, sizeof(quad));
        r.context->Unmap(r.vertexBuffer, 0);

        ID3D11RenderTargetView* previousTarget = nullptr;
        ID3D11DepthStencilView* previousDepth = nullptr;
        r.context->OMGetRenderTargets(1, &previousTarget, &previousDepth);

        D3D11_VIEWPORT previousViewport{};
        UINT viewportCount = 1;
        r.context->RSGetViewports(&viewportCount, &previousViewport);

        ID3D11BlendState* previousBlend = nullptr;
        FLOAT previousBlendFactor[4]{};
        UINT previousSampleMask = 0;
        r.context->OMGetBlendState(&previousBlend, previousBlendFactor, &previousSampleMask);

        ID3D11RenderTargetView* target = r.target;
        r.context->OMSetRenderTargets(1, &target, nullptr);

        const D3D11_VIEWPORT viewport{ 0.0f, 0.0f, width, height, 0.0f, 1.0f };
        r.context->RSSetViewports(1, &viewport);

        r.context->IASetInputLayout(r.layout);
        r.context->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP);

        UINT stride = sizeof(QuadVertex);
        UINT offset = 0;
        ID3D11Buffer* vertexBuffer = r.vertexBuffer;
        r.context->IASetVertexBuffers(0, 1, &vertexBuffer, &stride, &offset);

        r.context->VSSetShader(r.vertexShader, nullptr, 0);
        r.context->PSSetShader(r.pixelShader, nullptr, 0);

        r.context->PSSetShaderResources(0, 1, &texture);

        ID3D11SamplerState* sampler = r.sampler;
        r.context->PSSetSamplers(0, 1, &sampler);

        r.context->OMSetBlendState(r.blend, nullptr, 0xFFFFFFFF);
        r.context->Draw(4, 0);

        ID3D11ShaderResourceView* nothing = nullptr;
        r.context->PSSetShaderResources(0, 1, &nothing);

        r.context->OMSetRenderTargets(1, &previousTarget, previousDepth);
        r.context->RSSetViewports(1, &previousViewport);
        r.context->OMSetBlendState(previousBlend, previousBlendFactor, previousSampleMask);

        if (previousTarget) previousTarget->Release();
        if (previousDepth) previousDepth->Release();
        if (previousBlend) previousBlend->Release();
    }

    // The pill's light travels one full turn in this long, and the bitmap behind
    // it is redrawn at PILL_ANIM_INTERVAL_MS while the counter is on screen.
    //
    // The recompose is CPU work on a ~200x41 pixmap, so it is deliberately slow
    // (about twelve a second, not one a frame): the light reads as moving at
    // that rate, and a percentage of one core is all it may cost a game that is
    // already using the frame.
    constexpr ULONGLONG PILL_ANIM_PERIOD_MS = 3400;
    constexpr ULONGLONG PILL_ANIM_INTERVAL_MS = 80;

    ULONGLONG g_pillComposedMs = 0;

    void DrawPill(Renderer& r, float scale)
    {
        const ULONGLONG now = NowMs();
        const bool spike = now < g_spikeUntilMs;

        // fps*1000 tops out below 1e6, so the spike flag gets its own range and
        // a tinted pill never collides with a plain one in the cache key.
        const int key = g_fps * 1000 + (int)(scale * 100.0f) + (spike ? 1000000 : 0);

        const bool stale =
            !r.pill.view || r.pill.key != key ||
            now - g_pillComposedMs >= PILL_ANIM_INTERVAL_MS;

        if (stale)
        {
            const float phase = (float)((double)(now % PILL_ANIM_PERIOD_MS) /
                (double)PILL_ANIM_PERIOD_MS);

            const ULONGLONG composeStartMs = NowMs();

            if (!PillArt::Compose(g_fps, (float)g_frameAvgMs, scale, r.pill.pixels,
                    spike, phase))
                return;

            const ULONGLONG composeMs = NowMs() - composeStartMs;

            // The cost of the animation, once, so "does it hurt the frame rate"
            // is a number in the log rather than a guess.
            if (composeMs >= 4)
            {
                static ULONGLONG lastComposeLogMs = 0;

                if (now - lastComposeLogMs >= 5000)
                {
                    lastComposeLogMs = now;
                    Log("[fps-overlay] pill compose took %llu ms",
                        static_cast<unsigned long long>(composeMs));
                }
            }

            if (!UploadArt(r, r.pill, key, true))
                return;

            g_pillComposedMs = now;
        }

        const float pillWidth = (float)r.pill.pixels.width;
        const float pillHeight = (float)r.pill.pixels.height;

        // Top-right, the same corner CS2's own counter uses.
        const float right = (float)r.targetWidth - 10.0f * scale;
        DrawOverlayQuad(r, r.pill.view, right - pillWidth, 8.0f * scale,
            pillWidth, pillHeight);
    }

    // The Beta build stamp: smaller than the pill, white, bottom-right. It is
    // drawn whether or not the FPS switch is on, because its whole point is to
    // name the build in a screenshot.
    void DrawVersionTag(Renderer& r, float scale)
    {
        const int key = (int)(scale * 100.0f);

        if (!r.version.view || r.version.key != key)
        {
            if (!PillArt::ComposeVersion(kOverlayVersion, scale, r.version.pixels))
                return;
            if (!UploadArt(r, r.version, key))
                return;
        }

        const float tagWidth = (float)r.version.pixels.width;
        const float tagHeight = (float)r.version.pixels.height;

        const float right = (float)r.targetWidth - 10.0f * scale;
        const float bottom = (float)r.targetHeight - 10.0f * scale;
        DrawOverlayQuad(r, r.version.view, right - tagWidth, bottom - tagHeight,
            tagWidth, tagHeight);
    }

    void CountFrame()
    {
        g_framesThisWindow.fetch_add(1);

        const ULONGLONG now = NowMs();
        if (g_windowStartMs == 0)
        {
            g_windowStartMs = now;
            return;
        }

        if (now - g_windowStartMs < 1000)
            return;

        const uint32_t frames = g_framesThisWindow.exchange(0);
        g_fps = (int)((uint64_t)frames * 1000 / (now - g_windowStartMs));
        g_windowStartMs = now;
    }

    void RenderFrame(IDXGISwapChain* swap)
    {
        CountFrame();
        // Auto accept's button watch rides on the same hook: it needs a
        // finished frame, and this is the only place one is guaranteed. It does
        // nothing while the switch is off.
        if (AutoAccept::IsEnabled())
            AcceptWatch::Observe(swap);

        if (!PrepareRenderer(g_renderer, swap))
            return;

        const float scale = g_renderer.targetHeight > 0
            ? (float)g_renderer.targetHeight / 1080.0f : 1.0f;
        const float clampedScale = scale < 0.75f ? 0.75f : (scale > 2.0f ? 2.0f : scale);

        if (OverlayEnabled())
            DrawPill(g_renderer, clampedScale);

        DrawVersionTag(g_renderer, clampedScale);
    }

    // ---- hook -------------------------------------------------------------

    typedef HRESULT(WINAPI* PresentFn)(IDXGISwapChain*, UINT, UINT);
    PresentFn g_originalPresent = nullptr;

    // ---- frame-spike attribution -------------------------------------------
    // The pill reports the frame rate and, when one frame runs far longer than
    // the recent average, names what the runtime was doing when it did. A hitch
    // report then comes with its cause instead of only its length.
    void NoteFrameTime()
    {
        const ULONGLONG now = NowMs();
        const ULONGLONG previous = g_lastFrameMs;
        g_lastFrameMs = now;

        if (previous == 0)
            return;

        const double delta = (double)(now - previous);
        const double average = g_frameAvgMs;

        // The average follows slowly on purpose: one hitch must not raise the bar
        // so far that the next one no longer counts.
        g_frameAvgMs = average * 0.95 + delta * 0.05;

        if (delta < 33.0 || delta < average * 2.0)
            return;

        g_spikeUntilMs = now + 1000;

        static ULONGLONG lastSpikeLogMs = 0;

        if (now - lastSpikeLogMs >= 1000)
        {
            lastSpikeLogMs = now;

            Log("[perf-spike] %.0f ms frame (avg %.1f) during %s",
                delta, average, CurrentActivity());
        }
    }

    HRESULT WINAPI PresentDetour(IDXGISwapChain* swap, UINT syncInterval, UINT flags)
    {
        __try
        {
            NoteFrameTime();
            RenderFrame(swap);
        }
        __except (1)
        {
        }

        return g_originalPresent(swap, syncInterval, flags);
    }
}

namespace FpsCounter
{
    bool Initialize()
    {
        if (!PillArt::Startup())
        {
            Log("[fps-overlay] GDI+ startup failed; counter unavailable");
            return false;
        }

        WNDCLASSEXA windowClass{};
        windowClass.cbSize = sizeof(windowClass);
        windowClass.lpfnWndProc = DefWindowProcA;
        windowClass.hInstance = GetModuleHandleA(nullptr);
        windowClass.lpszClassName = "n1ssan_fps_probe";

        if (!RegisterClassExA(&windowClass))
        {
            Log("[fps-overlay] probe window class registration failed");
            return false;
        }

        HWND window = CreateWindowExA(0, windowClass.lpszClassName, "", WS_POPUP,
            0, 0, 4, 4, nullptr, nullptr, windowClass.hInstance, nullptr);

        if (!window)
        {
            UnregisterClassA(windowClass.lpszClassName, windowClass.hInstance);
            Log("[fps-overlay] probe window creation failed");
            return false;
        }

        DXGI_SWAP_CHAIN_DESC description{};
        description.BufferCount = 1;
        description.BufferDesc.Width = 4;
        description.BufferDesc.Height = 4;
        description.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        description.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        description.OutputWindow = window;
        description.SampleDesc.Count = 1;
        description.Windowed = TRUE;

        IDXGISwapChain* swap = nullptr;
        ID3D11Device* device = nullptr;
        ID3D11DeviceContext* context = nullptr;
        D3D_FEATURE_LEVEL level = D3D_FEATURE_LEVEL_11_0;

        HRESULT hr = D3D11CreateDeviceAndSwapChain(nullptr, D3D_DRIVER_TYPE_HARDWARE,
            nullptr, 0, nullptr, 0, D3D11_SDK_VERSION, &description,
            &swap, &device, &level, &context);

        // WARP creates the same dxgi swap chain when no hardware device can be
        // probed, so Present is still found on machines without a usable GPU
        // during injection.
        if (FAILED(hr) || !swap)
        {
            if (context) { context->Release(); context = nullptr; }
            if (device) { device->Release(); device = nullptr; }
            if (swap) { swap->Release(); swap = nullptr; }

            hr = D3D11CreateDeviceAndSwapChain(nullptr, D3D_DRIVER_TYPE_WARP,
                nullptr, 0, nullptr, 0, D3D11_SDK_VERSION, &description,
                &swap, &device, &level, &context);
        }

        if (context) context->Release();
        if (device) device->Release();

        DestroyWindow(window);
        UnregisterClassA(windowClass.lpszClassName, windowClass.hInstance);

        if (FAILED(hr) || !swap)
        {
            Log("[fps-overlay] probe swap chain creation failed (0x%08X)", (unsigned)hr);
            return false;
        }

        void** vtable = *reinterpret_cast<void***>(swap);
        void* present = vtable ? vtable[SWAPCHAIN_PRESENT_INDEX] : nullptr;
        swap->Release();

        if (!present)
        {
            Log("[fps-overlay] Present not found in the swap chain vtable");
            return false;
        }

        if (!MH_CreateHook_p || !MH_EnableHook_p)
        {
            Log("[fps-overlay] MinHook unavailable; counter disabled");
            return false;
        }

        if (MH_CreateHook_p(present, reinterpret_cast<LPVOID>(&PresentDetour),
            reinterpret_cast<LPVOID*>(&g_originalPresent)) != 0)
        {
            Log("[fps-overlay] Present hook creation failed");
            return false;
        }

        if (MH_EnableHook_p(present) != 0)
        {
            Log("[fps-overlay] Present hook enable failed");
            return false;
        }

        Log("[fps-overlay] FPS pill ready (Present @ %p); follows the Armory's FPS Counter switch",
            present);

        Log("[fps-overlay] build stamp %s", kOverlayVersion);
        return true;
    }
}
