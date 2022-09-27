#pragma once

#include "abilities.hpp"
#include "from_string.hpp"

namespace DD
{
    std::string_view to_string(Ability const name);

    template<>
    auto from_string<Ability>(std::string_view const str) -> Ability;
}