#include "discodottledata.hpp"

#include "string_conversions/string_conversions.hpp"
#include "tables.hpp"

#include <iostream>
#include <cmath>

int main()
{
    using namespace DD;
    mu_map<Species, Item>    spec_item    = init(species, item);
    mu_map<Species, Move>    spec_move    = init(species, move);
    mu_map<Move, Species>    move_spec    = init(move, species);
    mu_map<Species, Nature>  spec_nat     = init(species, nature);
    mu_map<Species, Species> spec_spec    = init(species, species);
    mu_map<Species, Species> spec_spec2   = init(species, species);
    mu_map<Species, Species> spec_spec3   = init(species, species);

    std::cout << "first:\t" << spec_spec[Species::Jolteon][Species::Jolteon].first << "\tsecond:\t" << spec_spec[Species::Jolteon][Species::Jolteon].second << "\n";
    update(spec_spec, spec_spec2);
    std::cout << "first:\t" << spec_spec[Species::Jolteon][Species::Jolteon].first << "\tsecond:\t" << spec_spec[Species::Jolteon][Species::Jolteon].second << "\n";
    scale_down(spec_spec);
    std::cout << "first:\t" << spec_spec[Species::Jolteon][Species::Jolteon].first << "\tsecond:\t" << spec_spec[Species::Jolteon][Species::Jolteon].second << "\n";

    // for(auto&& x : mu_array<Species>::arr)
    // {
    //     for(auto&& y : mu_array<Species>::arr)
    //     {
    //         std::cout << to_string(x) << " vs. " << to_string(y) << "\n";
    //         std::cout << "wins:\t"  << spec_spec[x][y].first  << "\n";
    //         std::cout << "losses:\t" << spec_spec[x][y].second << "\n";
    //         std::cout << "W/L:\t" << (float)spec_spec[x][y].first / (float)spec_spec[x][y].second << "\n";
    //         std::cout << "tanh:\t" << std::tanh((float)spec_spec[x][y].first / (float)spec_spec[x][y].second) << "\n\n";
    //     }
    // }
    return 0;
}