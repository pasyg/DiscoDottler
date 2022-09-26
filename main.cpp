#include "discodottledata.hpp"

#include "tables.hpp"
#include <iostream>

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

    return 0;
}