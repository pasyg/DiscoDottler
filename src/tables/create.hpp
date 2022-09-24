#include <array>
#include <unordered_map>


namespace DD{
    template<typename T>
    using map1 = std::unordered_map<T, std::pair<int, int>>;
    template<typename T, typename U>
    using map2 = std::unordered_map<map1<T>, U>;

    template<typename T, typename U, size_t N_T, size_t N_U>
    map2<T, U> init(std::array<T, N_T> arrT, std::array<U, N_U> arrU)
    {
        std::unordered_map<std::unordered_map<T, std::pair<int, int>>, U> map_;

        for(auto&& t : arrT)
        {
            for(auto&& u : arrU)
            {
                map_[t][u] = 5.0;
            }
        }
    }
}