#include "discodottledata.hpp"

#include "string_conversions/string_conversions.hpp"
#include "tables.hpp"

#include <iostream>
#include <cmath>

int main()
{
    using namespace DD;
    ///* First init
    mu_map<Species, Item>    spec_item    = random_init(species, item);
    mu_map<Species, Move>    spec_move    = random_init(species, move);
    mu_map<Move, Species>    move_spec    = random_init(move, species);
    mu_map<Species, Nature>  spec_nat     = random_init(species, nature);
    mu_map<Species, Species> spec_spec    = random_init(species, species);
    mu_map<Species, Species> spec_spec2   = random_init(species, species);
    mu_map<Species, Species> spec_spec3   = random_init(species, species);
    //*/

    map_to_csv(spec_item);

    std::cout << "first:\t" << spec_spec[Species::Jolteon][Species::Jolteon].first << "\tsecond:\t" << spec_spec[Species::Jolteon][Species::Jolteon].second << "\n";
    update(spec_spec, spec_spec2);
    std::cout << "first:\t" << spec_spec[Species::Jolteon][Species::Jolteon].first << "\tsecond:\t" << spec_spec[Species::Jolteon][Species::Jolteon].second << "\n";
    scale_down(spec_spec);
    std::cout << "first:\t" << spec_spec[Species::Jolteon][Species::Jolteon].first << "\tsecond:\t" << spec_spec[Species::Jolteon][Species::Jolteon].second << "\n";

    map_to_csv(spec_spec);

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