#pragma once

#include <array>
#include <cstdint>

namespace DD
{
    enum class Nature : uint8_t
    {
        Adamant,
        Bold,
        Brave,
        Calm,
        Careful,
        Gentle,
        Hasty,
        Impish,
        Jolly,
        Lax,
        Lonely,
        Mild,
        Modest,
        Naive,
        Naughty,
        Neutral,
        Quiet,
        Rash,
        Relaxed,
        Sassy,
        Timid
    };

    typedef Nature N;

    static constexpr std::array<Nature, 21> nature = {
                                                        N::Adamant,
                                                        N::Bold,
                                                        N::Brave,
                                                        N::Calm,
                                                        N::Careful,
                                                        N::Gentle,
                                                        N::Hasty,
                                                        N::Impish,
                                                        N::Jolly,
                                                        N::Lax,
                                                        N::Lonely,
                                                        N::Mild,
                                                        N::Mild,
                                                        N::Naive,
                                                        N::Naughty,
                                                        N::Neutral,
                                                        N::Quiet,
                                                        N::Rash,
                                                        N::Relaxed,
                                                        N::Sassy,
                                                        N::Timid    };
}