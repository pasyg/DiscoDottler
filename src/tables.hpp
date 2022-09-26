#include <array>
#include <unordered_map>

namespace DD
{
    template<typename T>
    using map1 = std::unordered_map<T, std::pair<int, int>>;
    template<typename T, typename U>
    using mu_map = std::unordered_map<T, map1<U>>;

    template<typename T, typename U, size_t N_T, size_t N_U>
    constexpr mu_map<T, U> init(const std::array<T, N_T>& arrT, const std::array<U, N_U>& arrU)
    {
        mu_map<T, U> tbl;

        for(T t : arrT)
        {
            for(U u : arrU)
            {
                // init to 1 so you can't divide by 0
                tbl[t][u].first  = 1;
                tbl[t][u].second = 1;
            }
        }
        return tbl;
    }
    template<typename T, typename U>
    constexpr void update(mu_map<T, U>& tbl, T lftbr, U rigbr, int wins, int losses)
    {
        tbl[lftbr][rigbr].first  += wins;
        tbl[lftbr][rigbr].second += losses;
    }
    template<typename T, typename U>
    constexpr void update(mu_map<T, U>& tbl, mu_map<T, U>& update)
    {
        for(auto&& t : mu_array<T>::arr)
        {
            for(auto&& u : mu_array<U>::arr)
            {
                tbl[t][u].first  += update[t][u].first;
                tbl[t][u].second += update[t][u].second;
            }
        }
    }
}