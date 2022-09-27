#pragma once

#include "nature.hpp"
#include "from_string.hpp"

namespace DD
{
    std::string_view to_string(Nature const name);

    template<>
    auto from_string<Nature>(std::string_view const str) -> Nature;
}