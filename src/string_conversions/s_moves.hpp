#pragma once

#include "moves.hpp"
#include "from_string.hpp"

namespace DD
{
    std::string_view to_string(Move const move);

    template<>
    auto from_string<Move>(std::string_view const str) -> Move;
}