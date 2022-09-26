#include "discodottledata.hpp"

#include "tables.hpp"
#include <iostream>

int main()
{
    using namespace DD;
    mu_map<Species, Item>    spec_item    = random_init(species, item);
    mu_map<Species, Move>    spec_move    = random_init(species, move);
    mu_map<Move, Species>    move_spec    = random_init(move, species);
    mu_map<Species, Nature>  spec_nat     = random_init(species, nature);
    mu_map<Species, Species> spec_spec    = random_init(species, species);
    mu_map<Species, Species> spec_spec2   = random_init(species, species);
    mu_map<Species, Species> spec_spec3   = random_init(species, species);

    spec_spec2[Species::Aerodactyl][Species::Aerodactyl].first  = 2;
    spec_spec2[Species::Aerodactyl][Species::Aerodactyl].second = 3;

    spec_spec3[Species::Aerodactyl][Species::Aerodactyl].first  = 20;
    spec_spec3[Species::Aerodactyl][Species::Aerodactyl].second = 32;

    update(spec_spec, spec_spec2);
    
    std::cout << spec_spec[Species::Aerodactyl][Species::Aerodactyl].first  << std::endl;
    std::cout << spec_spec[Species::Aerodactyl][Species::Aerodactyl].second << std::endl;

    update(spec_spec, spec_spec3);
    
    std::cout << spec_spec[Species::Aerodactyl][Species::Aerodactyl].first  << std::endl;
    std::cout << spec_spec[Species::Aerodactyl][Species::Aerodactyl].second << std::endl;

    for(auto&& x : mu_array<Species>::arr)
    {
        for(auto&& y : mu_array<Move>::arr)
        {
            std::cout << "first:\t"  << spec_move[x][y].first  << "\n";
            std::cout << "second:\t" << spec_move[x][y].second << "\n\n";
        }
    }
    return 0;
}