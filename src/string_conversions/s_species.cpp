#include "s_species.hpp"

std::string_view DD::to_string(Species const name)
{
    switch (name)
    {
        case Species::Aerodactyl:   return "Aerodactyl";
        case Species::Blissey:      return "Blissey";
        case Species::Breloom:      return "Breloom";
        case Species::Celebi:       return "Celebi";
		case Species::Charizard:    return "Charizard";
        case Species::Claydol:      return "Claydol";
        case Species::Cloyster:     return "Cloyster";
        case Species::Dugtrio:      return "Dugtrio";
        case Species::Flygon:       return "Flygon";
        case Species::Forretress:   return "Forretress";
        case Species::Gengar:       return "Gengar";
        case Species::Gyarados:     return "Gyarados";
        case Species::Heracross:    return "Heracross";
        case Species::Jirachi:      return "Jirachi";
        case Species::Jolteon:      return "Jolteon";
        case Species::Magneton:     return "Magneton";
        case Species::Metagross:    return "Metagross";
        case Species::Milotic:      return "Milotic";
        case Species::Moltres:      return "Moltres";
        case Species::Salamence:    return "Salamence";
        case Species::Skarmory:     return "Skarmory";
        case Species::Snorlax:      return "Snorlax";
        case Species::Starmie:      return "Starmie";
        case Species::Suicune:      return "Suicune";
        case Species::Swampert:     return "Swampert";
        case Species::Tyranitar:    return "Tyranitar";
        case Species::Zapdos:       return "Zapdos";
        case Species::Blaziken:     return "Blaziken";
        case Species::Donphan:      return "Donphan";
        case Species::Hariyama:     return "Hariyama";
        case Species::Houndoom:     return "Houndoom";
        case Species::Kingdra:      return "Kingdra";
        case Species::Ludicolo:     return "Ludicolo";
        case Species::Machamp:      return "Machamp";
        case Species::Marowak:      return "Marowak";
        case Species::Medicham:     return "Medicham";
        case Species::Porygon2:     return "Porygon2";
        case Species::Raikou:       return "Raikou";
        case Species::Regice:       return "Regice";
        case Species::Rhydon:       return "Rhydon";
        case Species::Smeargle:     return "Smeargle";
        case Species::Steelix:      return "Steelix";
        case Species::Umbreon:      return "Umbreon";
        case Species::Vaporeon:     return "Vaporeon";
        case Species::Venusaur:     return "Venusaur";
        case Species::Weezing:      return "Weezing";

        default: return "ERROR species";
    }
}

template<>
auto DD::from_string(std::string_view const str) -> Species
{
    static const std::unordered_map<std::string_view, Species> map
    {
        { "Aerodactyl",     Species::Aerodactyl },
        { "Blissey",        Species::Blissey },
        { "Breloom",        Species::Breloom },
        { "Celebi",         Species::Celebi },
		{ "Charizard",      Species::Charizard },
        { "Claydol",        Species::Claydol },
        { "Cloyster",       Species::Cloyster },
        { "Dugtrio",        Species::Dugtrio },
        { "Flygon",         Species::Flygon },
        { "Forretress",     Species::Forretress },
        { "Gengar",         Species::Gengar },
        { "Gyarados",       Species::Gyarados },
        { "Heracross",      Species::Heracross },
        { "Jirachi",        Species::Jirachi },
        { "Jolteon",        Species::Jolteon },
        { "Magneton",       Species::Magneton },
        { "Metagross",      Species::Metagross },
        { "Milotic",        Species::Milotic },
        { "Moltres",        Species::Moltres },
        { "Salamence",      Species::Salamence },
        { "Skarmory",       Species::Skarmory },
        { "Snorlax",        Species::Snorlax },
        { "Starmie",        Species::Starmie },
        { "Suicune",        Species::Suicune },
        { "Swampert",       Species::Swampert },
        { "Tyranitar",      Species::Tyranitar },
        { "Zapdos",         Species::Zapdos },
        { "Blaziken",       Species::Blaziken },
        { "Donphan",        Species::Donphan },
        { "Hariyama",       Species::Hariyama },
        { "Houndoom",       Species::Houndoom },
        { "Kingdra",        Species::Kingdra },
        { "Ludicolo",       Species::Ludicolo },
        { "Machamp",        Species::Machamp },
        { "Marowak",        Species::Marowak },
        { "Medicham",       Species::Medicham },
        { "Porygon2",       Species::Porygon2 },
        { "Raikou",         Species::Raikou },
        { "Regice",         Species::Regice },
        { "Rhydon",         Species::Rhydon },
        { "Smeargle",       Species::Smeargle },
        { "Steelix",        Species::Steelix },
        { "Umbreon",        Species::Umbreon },
        { "Vaporeon",       Species::Vaporeon },
        { "Venusaur",       Species::Venusaur },
        { "Weezing",        Species::Weezing },
	};

	return map.at(str);
}