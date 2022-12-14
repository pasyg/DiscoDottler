#pragma once

#include <array>
#include <cstdint>

namespace DD
{
    enum class Move : std::uint16_t
    {
            Absorb, Acid, Acid_Armor, Aerial_Ace, Aeroblast, Agility, Air_Cutter, Amnesia, Ancient_Power, Arm_Thrust, 
            Aromatherapy, Assist, Astonish, Attract, Aurora_Beam, Barrage, Barrier, Baton_Pass, Beat_Up, Belly_Drum, 
            Bide, Bind, Bite, Blast_Burn, Blaze_Kick, Blizzard, Block, Body_Slam, Bone_Club, Bone_Rush, Bonemerang, 
            Bounce, Brick_Break, Bubble, Bubble_Beam, Bulk_Up, Bullet_Seed, Calm_Mind, Camouflage, Charge, Charm, Clamp, 
            Comet_Punch, Confuse_Ray, Confusion, Constrict, Conversion, Conversion_2, Cosmic_Power, Cotton_Spore, Counter, 
            Covet, Crabhammer, Cross_Chop, Crunch, Crush_Claw, Curse, Cut, Defense_Curl, Destiny_Bond, Detect, Dig, Disable, 
            Dive, Dizzy_Punch, Doom_Desire, Double_Edge, Double_Kick, Double_Slap, Double_Team, Dragon_Breath, Dragon_Claw, 
            Dragon_Dance, Dragon_Rage, Dream_Eater, Drill_Peck, Dynamic_Punch, Earthquake, Egg_Bomb, Ember, Encore, Endeavor, 
            Endure, Eruption, Explosion, Extrasensory, Extreme_Speed, Facade, Fake_Out, Fake_Tears, False_Swipe, Feather_Dance, 
            Feint_Attack, Fire_Blast, Fire_Punch, Fire_Spin, Fissure, Flail, Flame_Wheel, Flamethrower, Flash, Flatter, Fly, 
            Focus_Energy, Focus_Punch, Follow_Me, Foresight, Frenzy_Plant, Frustration, Fury_Attack, Fury_Cutter, Fury_Swipes, 
            Future_Sight, Giga_Drain, Glare, Grass_Whistle, Growl, Growth, Grudge, Guillotine, Gust, Hail, Harden, Haze, Headbutt, 
            Heal_Bell, Heat_Wave, Helping_Hand, Hidden_Power, High_Jump_Kick, Horn_Attack, Horn_Drill, Howl, Hydro_Cannon, 
            Hydro_Pump, Hyper_Beam, Hyper_Fang, Hyper_Voice, Hypnosis, Ice_Ball, Ice_Beam, Ice_Punch, Icicle_Spear, Icy_Wind, 
            Imprison, Ingrain, Iron_Defense, Iron_Tail, Jump_Kick, Karate_Chop, Kinesis, Knock_Off, Leaf_Blade, Leech_Life, 
            Leech_Seed, Leer, Lick, Light_Screen, Lock_On, Lovely_Kiss, Low_Kick, Luster_Purge, Mach_Punch, Magic_Coat, Magical_Leaf, 
            Magnitude, Mean_Look, Meditate, Mega_Drain, Mega_Kick, Mega_Punch, Megahorn, Memento, Metal_Claw, Metal_Sound, 
            Meteor_Mash, Metronome, Milk_Drink, Mimic, Mind_Reader, Minimize, Mirror_Coat, Mirror_Move, Mist, Mist_Ball, Moonlight, 
            Morning_Sun, Mud_Shot, Mud_Slap, Mud_Sport, Muddy_Water, Nature_Power, Needle_Arm, Night_Shade, Nightmare, Octazooka, 
            Odor_Sleuth, Outrage, Overheat, Pain_Split, Pay_Day, Peck, Perish_Song, Petal_Dance, Pin_Missile, Poison_Fang, Poison_Gas, 
            Poison_Powder, Poison_Sting, Poison_Tail, Pound, Powder_Snow, Present, Protect, Psybeam, Psych_Up, Psychic, Psycho_Boost, 
            Psywave, Pursuit, Quick_Attack, Rage, Rain_Dance, Rapid_Spin, Razor_Leaf, Razor_Wind, Recover, Recycle, Reflect, Refresh, 
            Rest, Return, Revenge, Reversal, Roar, Rock_Blast, Rock_Slide, Rock_Smash, Rock_Throw, Rock_Tomb, Role_Play, Rolling_Kick,
            Rollout, Sacred_Fire, Safeguard, Sand_Attack, Sand_Tomb, Sandstorm, Scary_Face, Scratch, Screech, Secret_Power, 
            Seismic_Toss, Self_Destruct, Shadow_Ball, Shadow_Punch, Sharpen, Sheer_Cold, Shock_Wave, Signal_Beam, Silver_Wind, Sing, 
            Sketch, Skill_Swap, Skull_Bash, Sky_Attack, Sky_Uppercut, Slack_Off, Slam, Slash, Sleep_Powder, Sleep_Talk, Sludge, 
            Sludge_Bomb, Smelling_Salts, Smog, Smokescreen, Snatch, Snore, Soft_Boiled, Solar_Beam, Sonic_Boom, Spark, Spider_Web, 
            Spike_Cannon, Spikes, Spit_Up, Spite, Splash, Spore, Steel_Wing, Stockpile, Stomp, Strength, String_Shot, Struggle, 
            Stun_Spore, Submission, Substitute, Sunny_Day, Super_Fang, Superpower, Supersonic, Surf, Swagger, Swallow, Sweet_Kiss, 
            Sweet_Scent, Swift, Swords_Dance, Synthesis, Tackle, Tail_Glow, Tail_Whip, Take_Down, Taunt, Teeter_Dance, Teleport, 
            Thief, Thrash, Thunder, Thunder_Punch, Thunder_Shock, Thunder_Wave, Thunderbolt, Tickle, Torment, Toxic, Transform, 
            Tri_Attack, Trick, Triple_Kick, Twineedle, Twister, Uproar, Vice_Grip, Vine_Whip, Vital_Throw, Volt_Tackle, Water_Gun, 
            Water_Pulse, Water_Sport, Water_Spout, Waterfall, Weather_Ball, Whirlpool, Whirlwind, Will_O_Wisp, Wing_Attack, Wish, 
            Withdraw, Wrap, Yawn, Zap_Cannon    };

    typedef Move M;

    static constexpr std::array<Move, 354> move = {     M::Absorb,
                                                        M::Acid,
                                                        M::Acid_Armor,
                                                        M::Agility,
                                                        M::Amnesia,
                                                        M::Aurora_Beam,
                                                        M::Barrage,
                                                        M::Barrier,
                                                        M::Bide,
                                                        M::Bind,
                                                        M::Bite,
                                                        M::Blizzard,
                                                        M::Body_Slam,
                                                        M::Bone_Club,
                                                        M::Bonemerang,
                                                        M::Bubble,
                                                        M::Bubble_Beam,
                                                        M::Clamp,
                                                        M::Comet_Punch,
                                                        M::Confuse_Ray,
                                                        M::Confusion,
                                                        M::Constrict,
                                                        M::Conversion,
                                                        M::Counter,
                                                        M::Crabhammer,
                                                        M::Cut,
                                                        M::Defense_Curl,
                                                        M::Dig,
                                                        M::Disable,
                                                        M::Dizzy_Punch,
                                                        M::Double_Edge,
                                                        M::Double_Kick,
                                                        M::Double_Slap,
                                                        M::Double_Team,
                                                        M::Dragon_Rage,
                                                        M::Dream_Eater,
                                                        M::Drill_Peck,
                                                        M::Earthquake,
                                                        M::Egg_Bomb,
                                                        M::Ember,
                                                        M::Explosion,
                                                        M::Fire_Blast,
                                                        M::Fire_Punch,
                                                        M::Fire_Spin,
                                                        M::Fissure,
                                                        M::Flamethrower,
                                                        M::Flash,
                                                        M::Fly,
                                                        M::Focus_Energy,
                                                        M::Fury_Attack,
                                                        M::Fury_Swipes,
                                                        M::Glare,
                                                        M::Growl,
                                                        M::Growth,
                                                        M::Guillotine,
                                                        M::Gust,
                                                        M::Harden,
                                                        M::Haze,
                                                        M::Headbutt,
                                                        M::High_Jump_Kick,
                                                        M::Horn_Attack,
                                                        M::Horn_Drill,
                                                        M::Hydro_Pump,
                                                        M::Hyper_Beam,
                                                        M::Hyper_Fang,
                                                        M::Hypnosis,
                                                        M::Ice_Beam,
                                                        M::Ice_Punch,
                                                        M::Jump_Kick,
                                                        M::Karate_Chop,
                                                        M::Kinesis,
                                                        M::Leech_Life,
                                                        M::Leech_Seed,
                                                        M::Leer,
                                                        M::Lick,
                                                        M::Light_Screen,
                                                        M::Lovely_Kiss,
                                                        M::Low_Kick,
                                                        M::Meditate,
                                                        M::Mega_Drain,
                                                        M::Mega_Kick,
                                                        M::Mega_Punch,
                                                        M::Metronome,
                                                        M::Mimic,
                                                        M::Minimize,
                                                        M::Mirror_Move,
                                                        M::Mist,
                                                        M::Night_Shade,
                                                        M::Pay_Day,
                                                        M::Peck,
                                                        M::Petal_Dance,
                                                        M::Pin_Missile,
                                                        M::Poison_Gas,
                                                        M::Poison_Powder,
                                                        M::Poison_Sting,
                                                        M::Pound,
                                                        M::Psybeam,
                                                        M::Psychic,
                                                        M::Psywave,
                                                        M::Quick_Attack,
                                                        M::Rage,
                                                        M::Razor_Leaf,
                                                        M::Razor_Wind,
                                                        M::Recover,
                                                        M::Reflect,
                                                        M::Rest,
                                                        M::Roar,
                                                        M::Rock_Slide,
                                                        M::Rock_Throw,
                                                        M::Rolling_Kick,
                                                        M::Sand_Attack,
                                                        M::Scratch,
                                                        M::Screech,
                                                        M::Seismic_Toss,
                                                        M::Self_Destruct,
                                                        M::Sharpen,
                                                        M::Sing,
                                                        M::Skull_Bash,
                                                        M::Sky_Attack,
                                                        M::Slam,
                                                        M::Slash,
                                                        M::Sleep_Powder,
                                                        M::Sludge,
                                                        M::Smog,
                                                        M::Smokescreen,
                                                        M::Soft_Boiled,
                                                        M::Solar_Beam,
                                                        M::Sonic_Boom,
                                                        M::Spike_Cannon,
                                                        M::Splash,
                                                        M::Spore,
                                                        M::Stomp,
                                                        M::Strength,
                                                        M::String_Shot,
                                                        M::Struggle,
                                                        M::Stun_Spore,
                                                        M::Submission,
                                                        M::Substitute,
                                                        M::Super_Fang,
                                                        M::Supersonic,
                                                        M::Surf,
                                                        M::Swift,
                                                        M::Swords_Dance,
                                                        M::Tackle,
                                                        M::Tail_Whip,
                                                        M::Take_Down,
                                                        M::Teleport,
                                                        M::Thrash,
                                                        M::Thunder,
                                                        M::Thunder_Punch,
                                                        M::Thunder_Shock,
                                                        M::Thunder_Wave,
                                                        M::Thunderbolt,
                                                        M::Toxic,
                                                        M::Transform,
                                                        M::Tri_Attack,
                                                        M::Twineedle,
                                                        M::Vice_Grip,
                                                        M::Vine_Whip,
                                                        M::Water_Gun,
                                                        M::Waterfall,
                                                        M::Whirlwind,
                                                        M::Wing_Attack,
                                                        M::Withdraw,
                                                        M::Wrap,
                                                        M::Aeroblast,
                                                        M::Ancient_Power,
                                                        M::Attract,
                                                        M::Baton_Pass,
                                                        M::Beat_Up,
                                                        M::Belly_Drum,
                                                        M::Bone_Rush,
                                                        M::Charm,
                                                        M::Conversion_2,
                                                        M::Cotton_Spore,
                                                        M::Cross_Chop,
                                                        M::Crunch,
                                                        M::Curse,
                                                        M::Destiny_Bond,
                                                        M::Detect,
                                                        M::Dragon_Breath,
                                                        M::Dynamic_Punch,
                                                        M::Encore,
                                                        M::Endure,
                                                        M::Extreme_Speed,
                                                        M::False_Swipe,
                                                        M::Feint_Attack,
                                                        M::Flail,
                                                        M::Flame_Wheel,
                                                        M::Foresight,
                                                        M::Frustration,
                                                        M::Fury_Cutter,
                                                        M::Future_Sight,
                                                        M::Giga_Drain,
                                                        M::Heal_Bell,
                                                        M::Hidden_Power,
                                                        M::Icy_Wind,
                                                        M::Iron_Tail,
                                                        M::Lock_On,
                                                        M::Mach_Punch,
                                                        M::Magnitude,
                                                        M::Mean_Look,
                                                        M::Megahorn,
                                                        M::Metal_Claw,
                                                        M::Milk_Drink,
                                                        M::Mind_Reader,
                                                        M::Mirror_Coat,
                                                        M::Moonlight,
                                                        M::Morning_Sun,
                                                        M::Mud_Slap,
                                                        M::Nightmare,
                                                        M::Octazooka,
                                                        M::Outrage,
                                                        M::Pain_Split,
                                                        M::Perish_Song,
                                                        M::Powder_Snow,
                                                        M::Present,
                                                        M::Protect,
                                                        M::Psych_Up,
                                                        M::Pursuit,
                                                        M::Rain_Dance,
                                                        M::Rapid_Spin,
                                                        M::Return,
                                                        M::Reversal,
                                                        M::Rock_Smash,
                                                        M::Rollout,
                                                        M::Sacred_Fire,
                                                        M::Safeguard,
                                                        M::Sandstorm,
                                                        M::Scary_Face,
                                                        M::Shadow_Ball,
                                                        M::Sketch,
                                                        M::Sleep_Talk,
                                                        M::Sludge_Bomb,
                                                        M::Snore,
                                                        M::Spark,
                                                        M::Spider_Web,
                                                        M::Spikes,
                                                        M::Spite,
                                                        M::Steel_Wing,
                                                        M::Sunny_Day,
                                                        M::Swagger,
                                                        M::Sweet_Kiss,
                                                        M::Sweet_Scent,
                                                        M::Synthesis,
                                                        M::Thief,
                                                        M::Triple_Kick,
                                                        M::Twister,
                                                        M::Vital_Throw,
                                                        M::Whirlpool,
                                                        M::Zap_Cannon,
                                                        M::Aerial_Ace,
                                                        M::Air_Cutter,
                                                        M::Arm_Thrust,
                                                        M::Aromatherapy,
                                                        M::Assist,
                                                        M::Astonish,
                                                        M::Blast_Burn,
                                                        M::Blaze_Kick,
                                                        M::Block,
                                                        M::Bounce,
                                                        M::Brick_Break,
                                                        M::Bulk_Up,
                                                        M::Bullet_Seed,
                                                        M::Calm_Mind,
                                                        M::Camouflage,
                                                        M::Charge,
                                                        M::Cosmic_Power,
                                                        M::Covet,
                                                        M::Crush_Claw,
                                                        M::Dive,
                                                        M::Doom_Desire,
                                                        M::Dragon_Claw,
                                                        M::Dragon_Dance,
                                                        M::Endeavor,
                                                        M::Eruption,
                                                        M::Extrasensory,
                                                        M::Facade,
                                                        M::Fake_Out,
                                                        M::Fake_Tears,
                                                        M::Feather_Dance,
                                                        M::Flatter,
                                                        M::Focus_Punch,
                                                        M::Follow_Me,
                                                        M::Frenzy_Plant,
                                                        M::Grass_Whistle,
                                                        M::Grudge,
                                                        M::Hail,
                                                        M::Heat_Wave,
                                                        M::Helping_Hand,
                                                        M::Howl,
                                                        M::Hydro_Cannon,
                                                        M::Hyper_Voice,
                                                        M::Ice_Ball,
                                                        M::Icicle_Spear,
                                                        M::Imprison,
                                                        M::Ingrain,
                                                        M::Iron_Defense,
                                                        M::Knock_Off,
                                                        M::Leaf_Blade,
                                                        M::Luster_Purge,
                                                        M::Magic_Coat,
                                                        M::Magical_Leaf,
                                                        M::Memento,
                                                        M::Metal_Sound,
                                                        M::Meteor_Mash,
                                                        M::Mist_Ball,
                                                        M::Mud_Shot,
                                                        M::Mud_Sport,
                                                        M::Muddy_Water,
                                                        M::Nature_Power,
                                                        M::Needle_Arm,
                                                        M::Odor_Sleuth,
                                                        M::Overheat,
                                                        M::Poison_Fang,
                                                        M::Poison_Tail,
                                                        M::Psycho_Boost,
                                                        M::Recycle,
                                                        M::Refresh,
                                                        M::Revenge,
                                                        M::Rock_Blast,
                                                        M::Rock_Tomb,
                                                        M::Role_Play,
                                                        M::Sand_Tomb,
                                                        M::Secret_Power,
                                                        M::Shadow_Punch,
                                                        M::Sheer_Cold,
                                                        M::Shock_Wave,
                                                        M::Signal_Beam,
                                                        M::Silver_Wind,
                                                        M::Skill_Swap,
                                                        M::Sky_Uppercut,
                                                        M::Slack_Off,
                                                        M::Smelling_Salts,
                                                        M::Snatch,
                                                        M::Spit_Up,
                                                        M::Stockpile,
                                                        M::Superpower,
                                                        M::Swallow,
                                                        M::Tail_Glow,
                                                        M::Taunt,
                                                        M::Teeter_Dance,
                                                        M::Tickle,
                                                        M::Torment,
                                                        M::Trick,
                                                        M::Uproar,
                                                        M::Volt_Tackle,
                                                        M::Water_Pulse,
                                                        M::Water_Sport,
                                                        M::Water_Spout,
                                                        M::Weather_Ball,
                                                        M::Will_O_Wisp,
                                                        M::Wish,
                                                        M::Yawn         };
}