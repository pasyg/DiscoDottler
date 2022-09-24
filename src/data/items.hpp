#pragma once

#include <array>
#include <cstdint>

namespace DD
{
    enum class Item : uint8_t
    {
        Leftovers,
        Choiceband,
        Lumberry,
        Salacberry,
        Apicotberry,
        Blackbelt,
        Blackglasses,
        Charcoal,
        Chestoberry,
        Dragonfang,
        Ganlonberry,
        Hardstone,
        Kingsrock,
        Lansaterry,
        Leppaberry,
        Liechiberry,
        Magnet,
        Mail,
        Metalcoat,
        Miracleseed,
        Mysticwater,
        Nevermeltice,
        Petayaberry,
        Poisonbarb,
        Quickclaw,
        Scopelens,
        Seaincense,
        Sharpbeak,
        Shellbell,
        Silkscarf,
        Silverpowder,
        Softsand,
        Spelltag,
        Starfberry,
        Twistedspoon,
        Whiteherb,
        Thickclub
    };

    typedef Item I;

    std::array<Item, 37> item {
                                I::Apicotberry,
                                I::Blackbelt,
                                I::Blackglasses,
                                I::Charcoal,
                                I::Chestoberry,
                                I::Choiceband,
                                I::Dragonfang,
                                I::Ganlonberry,
                                I::Hardstone,
                                I::Kingsrock,
                                I::Lansaterry,
                                I::Leftovers,
                                I::Leppaberry,
                                I::Liechiberry,
                                I::Lumberry,
                                I::Magnet,
                                I::Mail,
                                I::Metalcoat,
                                I::Miracleseed,
                                I::Mysticwater,
                                I::Nevermeltice,
                                I::Petayaberry,
                                I::Poisonbarb,
                                I::Quickclaw,
                                I::Salacberry,
                                I::Scopelens,
                                I::Seaincense,
                                I::Sharpbeak,
                                I::Shellbell,
                                I::Silkscarf,
                                I::Silverpowder,
                                I::Softsand,
                                I::Spelltag,
                                I::Starfberry,
                                I::Thickclub,
                                I::Twistedspoon,
                                I::Whiteherb    };
}