#pragma once

#include "items.hpp"
#include "from_string.hpp"

namespace DD
{
    std::string_view to_string(Item const name);

    template<>
    auto from_string<Item>(std::string_view const str) -> Item;
}