#include <array>
#include <unordered_map>

namespace DD{
    template<typename T>
    using map1 = std::unordered_map<T, std::pair<int, int>>;
    template<typename T, typename U>
    using map2 = std::unordered_map<T, map1<U>>;

    template<typename T, typename U, size_t N_T, size_t N_U>
    constexpr map2<T, U> init(const std::array<T, N_T>& arrT, const std::array<U, N_U>& arrU)
    {
        map2<T, U> map_;

        for(T t : arrT)
        {
            for(U u : arrU)
            {
                map_[t][u].first  = 0;
                map_[t][u].second = 0;
            }
        }
        return map_;
    }
}