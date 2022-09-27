#pragma once

#include "species.hpp"
#include "from_string.hpp"

namespace DD
{
    std::string_view to_string(Species const name);

    template<>
    auto from_string<Species>(std::string_view const str) -> Species;
}