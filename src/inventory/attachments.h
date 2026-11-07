#pragma once

#include <array>
#include <cstddef>
#include <cstdint>

// Sticker and charm attachments on an econ item.
//
// CS2's own inventory screen remains responsible for applying them: this module
// only reads the attributes the game wrote, writes the same attributes back
// when an Armory item is recreated, and reports changes so the Bridge can
// persist them per Armory instance. It never applies an attachment on its own.
namespace Attachments
{
    // A gun model has up to six sticker positions ("sticker slot 0-5").
    inline constexpr int STICKER_SLOTS = 6;

    struct StickerSlot
    {
        bool  present = false;
        int   kit = 0;           // "sticker slot N id"; 0 = empty slot
        float wear = 0.0f;       // 0 = new, 1 = scraped off
        float scale = 1.0f;      // CS2 keeps this at 1.0
        float rotation = 0.0f;
        float offsetX = 0.0f;    // free placement, relative to `schema`
        float offsetY = 0.0f;
        bool  hasSchema = false; // an absent schema attribute is not 0
        int   schema = 0;        // the position the offsets are relative to
    };

    struct Charm
    {
        bool  present = false;
        int   kit = 0;           // "keychain slot 0 id"
        int   seed = 0;
        float x = 0.0f;
        float y = 0.0f;
        float z = 0.0f;
        bool  hasSticker = false;
        int   sticker = 0;       // a Sticker Slab's sealed sticker
        bool  hasHighlight = false;
        int   highlight = 0;     // a Major highlight clip
    };

    struct Set
    {
        std::array<StickerSlot, STICKER_SLOTS> stickers{};
        Charm charm{};

        bool Empty() const;
        bool operator==(const Set& other) const;
        bool operator!=(const Set& other) const { return !(*this == other); }
    };

    // Resolves the schema attribute definitions used for writes. Safe to call
    // repeatedly; reports what is missing once per failure.
    bool Initialize();
    bool Ready();
    const char* LastError();

    // Number of attributes `set` occupies on an item, including optional ones.
    std::size_t AttributeCount(const Set& set);

    // Reads the sticker / charm attributes of an econ item. False when the
    // attribute list could not be read at all; `out` is then fully cleared and
    // the caller must treat the read as inconclusive.
    bool Read(void* econItem, Set& out);
    bool ReadStickerSlotsViaItemView(std::uint64_t itemId, Set& out);

    // Appends `set`'s attributes into a freshly allocated attribute array.
    // Used when a weapon view's attribute list is built from scratch.
    std::size_t Append(void* attributeArray, std::size_t index, const Set& set);

    // Writes `set` onto an item through the schema's attribute setters, which
    // append or update by definition. `previous`, when given, is the state the
    // item held before: slots it used and `set` no longer does are cleared with
    // id 0 so the game drops them.
    bool Write(void* econItem, const Set& set, const Set* previous);

    // One-line description for diagnostics.
    void Describe(const Set& set, char* out, std::size_t size);

    // Reads every managed Armory item, and when a sticker or charm the player
    // changed in game has settled, queues it for the Bridge to persist. Called
    // on the game thread while the inventory is open; Armory mode only.
    void ObserveAndPersist();
}
