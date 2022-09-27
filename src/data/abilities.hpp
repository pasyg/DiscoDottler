#pragma once

#include "species.hpp"

#include <cstdint>

namespace DD
{
    enum class Ability : uint8_t 
    {
        // Generation 3
        Stench,
        Drizzle,
        Speed_Boost,
        Battle_Armor,
        Sturdy,
        Damp,
        Limber,
        Sand_Veil,
        Static,
        Volt_Absorb,
        Water_Absorb,
        Oblivious,
        Cloud_Nine,
        Compound_Eyes,
        Insomnia,
        Color_Change,
        Immunity,
        Flash_Fire,
        Shield_Dust,
        Own_Tempo,
        Suction_Cups,
        Intimidate,
        Shadow_Tag,
        Rough_Skin,
        Wonder_Guard,
        Levitate,
        Effect_Spore,
        Synchronize,
        Clear_Body,
        Natural_Cure,
        Lightning_Rod,
        Serene_Grace,
        Swift_Swim,
        Chlorophyll,
        Illuminate,
        Trace,
        Huge_Power,
        Poison_Point,
        Inner_Focus,
        Magma_Armor,
        Water_Veil,
        Magnet_Pull,
        Soundproof,
        Rain_Dish,
        Sand_Stream,
        Pressure,
        Thick_Fat,
        Early_Bird,
        Flame_Body,
        Run_Away,
        Keen_Eye,
        Hyper_Cutter,
        Pickup,
        Truant,
        Hustle,
        Cute_Charm,
        Plus,
        Minus,
        Forecast,
        Sticky_Hold,
        Shed_Skin,
        Guts,
        Marvel_Scale,
        Liquid_Ooze,
        Overgrow,
        Blaze,
        Torrent,
        Swarm,
        Rock_Head,
        Drought,
        Arena_Trap,
        Vital_Spirit,
        White_Smoke,
        Pure_Power,
        Shell_Armor,
        Air_Lock
    };

    template<Ability>
    const Ability get(Species const species)
    {
        switch (species)
        {        
            case Species::Aerodactyl:   return Ability::Rock_Head;
            case Species::Blissey:      return Ability::Natural_Cure;
            case Species::Breloom:      return Ability::Effect_Spore;
            case Species::Celebi:       return Ability::Natural_Cure;
            case Species::Charizard:    return Ability::Blaze;
            case Species::Claydol:      return Ability::Levitate;
            case Species::Cloyster:     return Ability::Shell_Armor;
            case Species::Dugtrio:      return Ability::Arena_Trap;
            case Species::Flygon:       return Ability::Levitate;
            case Species::Forretress:   return Ability::Sturdy;
            case Species::Gengar:       return Ability::Levitate;
            case Species::Gyarados:     return Ability::Intimidate;
            case Species::Heracross:    return Ability::Guts;
            case Species::Jirachi:      return Ability::Serene_Grace;
            case Species::Jolteon:      return Ability::Volt_Absorb;
            case Species::Magneton:     return Ability::Magnet_Pull;
            case Species::Metagross:    return Ability::Clear_Body;
            case Species::Milotic:      return Ability::Marvel_Scale;
            case Species::Moltres:      return Ability::Pressure;
            case Species::Salamence:    return Ability::Intimidate;
            case Species::Skarmory:     return Ability::Keen_Eye;
            case Species::Snorlax:      return Ability::Immunity;
            case Species::Starmie:      return Ability::Natural_Cure;
            case Species::Suicune:      return Ability::Pressure;
            case Species::Swampert:     return Ability::Torrent;
            case Species::Tyranitar:    return Ability::Sand_Stream;
            case Species::Zapdos:       return Ability::Pressure;
            case Species::Blaziken:     return Ability::Blaze;
            case Species::Donphan:      return Ability::Sturdy;
            case Species::Hariyama:     return Ability::Thick_Fat;
            case Species::Houndoom:     return Ability::Flash_Fire;
            case Species::Kingdra:      return Ability::Swift_Swim;
            case Species::Ludicolo:     return Ability::Swift_Swim;
            case Species::Machamp:      return Ability::Guts;
            case Species::Marowak:      return Ability::Rock_Head;
            case Species::Medicham:     return Ability::Pure_Power;
            case Species::Porygon2:     return Ability::Trace;
            case Species::Raikou:       return Ability::Pressure;
            case Species::Regice:       return Ability::Clear_Body;
            case Species::Rhydon:       return Ability::Rock_Head;
            case Species::Smeargle:     return Ability::Own_Tempo;
            case Species::Steelix:      return Ability::Rock_Head;
            case Species::Umbreon:      return Ability::Synchronize;
            case Species::Vaporeon:     return Ability::Water_Absorb;
            case Species::Venusaur:     return Ability::Overgrow;
            case Species::Weezing:      return Ability::Levitate;
        }
    }
}