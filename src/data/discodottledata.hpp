#pragma once

#include "abilities.hpp"
#include "items.hpp"
#include "moves.hpp"
#include "nature.hpp"
#include "species.hpp"

namespace DD
{
    template<typename T>
    struct mu_array;
    template<>
    struct mu_array<Item>
    {
        inline static const auto arr = item;
    };
    template<>
    struct mu_array<Move>
    {
        inline static const auto arr = move;
    };
    template<>
    struct mu_array<Nature>
    {
        inline static const auto arr = nature;
    };
    template<>
    struct mu_array<Species>
    {
        inline static const auto arr = species;
    };
}