#pragma once

#include "abilities.hpp"
#include "items.hpp"
#include "moves.hpp"
#include "nature.hpp"
#include "species.hpp"

#include <string>

namespace DD
{
    template<typename T>
    struct map_traits;
    template<>
    struct map_traits<Item>
    {
        inline static const auto arr = item;
        inline static const std::string name = "Item";
    };
    template<>
    struct map_traits<Move>
    {
        inline static const auto arr = move;
        inline static const std::string name = "Move";
    };
    template<>
    struct map_traits<Nature>
    {
        inline static const auto arr = nature;
        inline static const std::string name = "Nature";
    };
    template<>
    struct map_traits<Species>
    {
        inline static const auto arr = species;
        inline static const std::string name = "Species";
    };
}