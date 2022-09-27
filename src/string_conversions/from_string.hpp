#pragma once

#include <string_view>
#include <unordered_map>

namespace DD
{
    template<typename T>
    auto from_string(std::string_view string) -> T;
}