#include "s_moves.hpp"

std::string_view DD::to_string(Move const move)
{
    switch (move)
    {
		case Move::Pound: return "Pound";
		case Move::Karate_Chop: return  "Karate Chop";
		case Move::Double_Slap: return  "Double Slap";
		case Move::Comet_Punch: return  "Comet Punch";
		case Move::Mega_Punch: return "Mega Punch";
		case Move::Pay_Day: return "Pay Day";
		case Move::Fire_Punch: return  "Fire Punch";
		case Move::Ice_Punch: return  "Ice Punch";
		case Move::Thunder_Punch: return "Thunder Punch";
		case Move::Scratch: return "Scratch";
		case Move::Vice_Grip: return "Vice Grip";
		case Move::Guillotine: return  "Guillotine";
		case Move::Razor_Wind: return "Razor Wind";
		case Move::Swords_Dance: return "Swords Dance";
		case Move::Cut: return  "Cut";
		case Move::Gust: return  "Gust";
		case Move::Wing_Attack: return "Wing Attack";
		case Move::Whirlwind: return "Whirlwind";
		case Move::Fly: return  "Fly";
		case Move::Bind: return  "Bind";
		case Move::Slam: return "Slam";
		case Move::Vine_Whip: return "Vine Whip";
		case Move::Stomp: return "Stomp";
		case Move::Double_Kick: return  "Double Kick";
		case Move::Mega_Kick: return "Mega Kick";
		case Move::Jump_Kick: return  "Jump Kick";
		case Move::Rolling_Kick: return "Rolling Kick";
		case Move::Sand_Attack: return "Sand Attack";
		case Move::Headbutt: return  "Headbutt";
		case Move::Horn_Attack: return  "Horn Attack";
		case Move::Fury_Attack: return  "Fury Attack";
		case Move::Horn_Drill: return  "Horn Drill";
		case Move::Tackle: return "Tackle";
		case Move::Body_Slam: return  "Body Slam";
		case Move::Wrap: return "Wrap";
		case Move::Take_Down: return "Take Down";
		case Move::Thrash: return "Thrash";
		case Move::Double_Edge: return  "Double-Edge";
		case Move::Tail_Whip: return "Tail Whip";
		case Move::Poison_Sting: return "Poison Sting";
		case Move::Twineedle: return "Twineedle";
		case Move::Pin_Missile: return "Pin Missile";
		case Move::Leer: return "Leer";
		case Move::Bite: return  "Bite";
		case Move::Growl: return  "Growl";
		case Move::Roar: return "Roar";
		case Move::Sing: return "Sing";
		case Move::Supersonic: return "Supersonic";
		case Move::Sonic_Boom: return "Sonic Boom";
		case Move::Disable: return  "Disable";
		case Move::Acid: return  "Acid";
		case Move::Ember: return  "Ember";
		case Move::Flamethrower: return  "Flamethrower";
		case Move::Mist: return "Mist";
		case Move::Water_Gun: return "Water Gun";
		case Move::Hydro_Pump: return  "Hydro Pump";
		case Move::Surf: return "Surf";
		case Move::Ice_Beam: return  "Ice Beam";
		case Move::Blizzard: return  "Blizzard";
		case Move::Psybeam: return "Psybeam";
		case Move::Bubble_Beam: return  "Bubble Beam";
		case Move::Aurora_Beam: return  "Aurora Beam";
		case Move::Hyper_Beam: return  "Hyper Beam";
		case Move::Peck: return "Peck";
		case Move::Drill_Peck: return  "Drill Peck";
		case Move::Submission: return "Submission";
		case Move::Low_Kick: return "Low Kick";
		case Move::Counter: return  "Counter";
		case Move::Seismic_Toss: return "Seismic Toss";
		case Move::Strength: return "Strength";
		case Move::Absorb: return  "Absorb";
		case Move::Mega_Drain: return "Mega Drain";
		case Move::Leech_Seed: return "Leech Seed";
		case Move::Growth: return  "Growth";
		case Move::Razor_Leaf: return "Razor Leaf";
		case Move::Solar_Beam: return "Solar Beam";
		case Move::Poison_Powder: return "Poison Powder";
		case Move::Stun_Spore: return "Stun Spore";
		case Move::Sleep_Powder: return "Sleep Powder";
		case Move::Petal_Dance: return "Petal Dance";
		case Move::String_Shot: return "String Shot";
		case Move::Dragon_Rage: return  "Dragon Rage";
		case Move::Fire_Spin: return  "Fire Spin";
		case Move::Thunder_Shock: return "Thunder Shock";
		case Move::Thunderbolt: return "Thunderbolt";
		case Move::Thunder_Wave: return "Thunder Wave";
		case Move::Thunder: return "Thunder";
		case Move::Rock_Throw: return "Rock Throw";
		case Move::Earthquake: return  "Earthquake";
		case Move::Fissure: return  "Fissure";
		case Move::Dig: return  "Dig";
		case Move::Toxic: return "Toxic";
		case Move::Confusion: return  "Confusion";
		case Move::Psychic: return "Psychic";
		case Move::Hypnosis: return  "Hypnosis";
		case Move::Meditate: return "Meditate";
		case Move::Agility: return  "Agility";
		case Move::Quick_Attack: return "Quick Attack";
		case Move::Rage: return "Rage";
		case Move::Teleport: return "Teleport";
		case Move::Night_Shade: return "Night Shade";
		case Move::Mimic: return "Mimic";
		case Move::Screech: return "Screech";
		case Move::Double_Team: return  "Double Team";
		case Move::Recover: return "Recover";
		case Move::Harden: return  "Harden";
		case Move::Minimize: return "Minimize";
		case Move::Smokescreen: return "Smokescreen";
		case Move::Confuse_Ray: return  "Confuse Ray";
		case Move::Withdraw: return "Withdraw";
		case Move::Defense_Curl: return  "Defense Curl";
		case Move::Barrier: return  "Barrier";
		case Move::Light_Screen: return "Light Screen";
		case Move::Haze: return  "Haze";
		case Move::Reflect: return "Reflect";
		case Move::Focus_Energy: return  "Focus Energy";
		case Move::Bide: return  "Bide";
		case Move::Metronome: return "Metronome";
		case Move::Mirror_Move: return "Mirror Move";
		case Move::Self_Destruct: return "Self-Destruct";
		case Move::Egg_Bomb: return  "Egg Bomb";
		case Move::Lick: return "Lick";
		case Move::Smog: return "Smog";
		case Move::Sludge: return "Sludge";
		case Move::Bone_Club: return  "Bone Club";
		case Move::Fire_Blast: return  "Fire Blast";
		case Move::Waterfall: return "Waterfall";
		case Move::Clamp: return  "Clamp";
		case Move::Swift: return "Swift";
		case Move::Skull_Bash: return "Skull Bash";
		case Move::Spike_Cannon: return "Spike Cannon";
		case Move::Constrict: return  "Constrict";
		case Move::Amnesia: return  "Amnesia";
		case Move::Kinesis: return  "Kinesis";
		case Move::Soft_Boiled: return "Soft-Boiled";
		case Move::High_Jump_Kick: return  "High Jump Kick";
		case Move::Glare: return  "Glare";
		case Move::Dream_Eater: return  "Dream Eater";
		case Move::Poison_Gas: return "Poison Gas";
		case Move::Barrage: return  "Barrage";
		case Move::Leech_Life: return "Leech Life";
		case Move::Lovely_Kiss: return "Lovely Kiss";
		case Move::Sky_Attack: return "Sky Attack";
		case Move::Transform: return "Transform";
		case Move::Bubble: return  "Bubble";
		case Move::Dizzy_Punch: return  "Dizzy Punch";
		case Move::Spore: return "Spore";
		case Move::Flash: return  "Flash";
		case Move::Psywave: return "Psywave";
		case Move::Splash: return "Splash";
		case Move::Acid_Armor: return  "Acid Armor";
		case Move::Crabhammer: return  "Crabhammer";
		case Move::Explosion: return  "Explosion";
		case Move::Fury_Swipes: return  "Fury Swipes";
		case Move::Bonemerang: return  "Bonemerang";
		case Move::Rest: return "Rest";
		case Move::Rock_Slide: return "Rock Slide";
		case Move::Hyper_Fang: return  "Hyper Fang";
		case Move::Sharpen: return "Sharpen";
		case Move::Conversion: return  "Conversion";
		case Move::Tri_Attack: return "Tri Attack";
		case Move::Super_Fang: return "Super Fang";
		case Move::Slash: return "Slash";
		case Move::Substitute: return "Substitute";
		case Move::Struggle: return "Struggle";
		case Move::Sketch: return "Sketch";
		case Move::Triple_Kick: return "Triple Kick";
		case Move::Thief: return "Thief";
		case Move::Spider_Web: return "Spider Web";
		case Move::Mind_Reader: return "Mind Reader";
		case Move::Nightmare: return "Nightmare";
		case Move::Flame_Wheel: return  "Flame Wheel";
		case Move::Snore: return "Snore";
		case Move::Curse: return  "Curse";
		case Move::Flail: return  "Flail";
		case Move::Conversion_2: return  "Conversion 2";
		case Move::Aeroblast: return  "Aeroblast";
		case Move::Cotton_Spore: return  "Cotton Spore";
		case Move::Reversal: return "Reversal";
		case Move::Spite: return "Spite";
		case Move::Powder_Snow: return "Powder Snow";
		case Move::Protect: return "Protect";
		case Move::Mach_Punch: return "Mach Punch";
		case Move::Scary_Face: return "Scary Face";
		case Move::Feint_Attack: return  "Feint Attack";
		case Move::Sweet_Kiss: return "Sweet Kiss";
		case Move::Belly_Drum: return  "Belly Drum";
		case Move::Sludge_Bomb: return "Sludge Bomb";
		case Move::Mud_Slap: return "Mud-Slap";
		case Move::Octazooka: return "Octazooka";
		case Move::Spikes: return "Spikes";
		case Move::Zap_Cannon: return "Zap Cannon";
		case Move::Foresight: return  "Foresight";
		case Move::Destiny_Bond: return  "Destiny Bond";
		case Move::Perish_Song: return "Perish Song";
		case Move::Icy_Wind: return  "Icy Wind";
		case Move::Detect: return  "Detect";
		case Move::Bone_Rush: return  "Bone Rush";
		case Move::Lock_On: return "Lock-On";
		case Move::Outrage: return "Outrage";
		case Move::Sandstorm: return "Sandstorm";
		case Move::Giga_Drain: return  "Giga Drain";
		case Move::Endure: return  "Endure";
		case Move::Charm: return  "Charm";
		case Move::Rollout: return "Rollout";
		case Move::False_Swipe: return  "False Swipe";
		case Move::Swagger: return "Swagger";
		case Move::Milk_Drink: return "Milk Drink";
		case Move::Spark: return "Spark";
		case Move::Fury_Cutter: return  "Fury Cutter";
		case Move::Steel_Wing: return "Steel Wing";
		case Move::Mean_Look: return "Mean Look";
		case Move::Attract: return  "Attract";
		case Move::Sleep_Talk: return "Sleep Talk";
		case Move::Heal_Bell: return  "Heal Bell";
		case Move::Return: return "Return";
		case Move::Present: return "Present";
		case Move::Frustration: return  "Frustration";
		case Move::Safeguard: return "Safeguard";
		case Move::Pain_Split: return "Pain Split";
		case Move::Sacred_Fire: return "Sacred Fire";
		case Move::Magnitude: return "Magnitude";
		case Move::Dynamic_Punch: return  "Dynamic Punch";
		case Move::Megahorn: return "Megahorn";
		case Move::Dragon_Breath: return  "Dragon Breath";
		case Move::Baton_Pass: return  "Baton Pass";
		case Move::Encore: return  "Encore";
		case Move::Pursuit: return "Pursuit";
		case Move::Rapid_Spin: return "Rapid Spin";
		case Move::Sweet_Scent: return "Sweet Scent";
		case Move::Iron_Tail: return  "Iron Tail";
		case Move::Metal_Claw: return "Metal Claw";
		case Move::Vital_Throw: return "Vital Throw";
		case Move::Morning_Sun: return "Morning Sun";
		case Move::Synthesis: return "Synthesis";
		case Move::Moonlight: return "Moonlight";
		case Move::Hidden_Power: return  "Hidden Power";
		case Move::Cross_Chop: return  "Cross Chop";
		case Move::Twister: return "Twister";
		case Move::Rain_Dance: return "Rain Dance";
		case Move::Sunny_Day: return "Sunny Day";
		case Move::Crunch: return  "Crunch";
		case Move::Mirror_Coat: return "Mirror Coat";
		case Move::Psych_Up: return "Psych Up";
		case Move::Extreme_Speed: return  "Extreme Speed";
		case Move::Ancient_Power: return  "Ancient Power";
		case Move::Shadow_Ball: return "Shadow Ball";
		case Move::Future_Sight: return  "Future Sight";
		case Move::Rock_Smash: return "Rock Smash";
		case Move::Whirlpool: return "Whirlpool";
		case Move::Beat_Up: return  "Beat Up";
		case Move::Fake_Out: return  "Fake Out";
		case Move::Uproar: return "Uproar";
		case Move::Stockpile: return "Stockpile";
		case Move::Spit_Up: return "Spit Up";
		case Move::Swallow: return "Swallow";
		case Move::Heat_Wave: return  "Heat Wave";
		case Move::Hail: return  "Hail";
		case Move::Torment: return "Torment";
		case Move::Flatter: return  "Flatter";
		case Move::Will_O_Wisp: return "Will-O-Wisp";
		case Move::Memento: return "Memento";
		case Move::Facade: return  "Facade";
		case Move::Focus_Punch: return  "Focus Punch";
		case Move::Smelling_Salts: return "Smelling Salts";
		case Move::Follow_Me: return  "Follow Me";
		case Move::Nature_Power: return "Nature Power";
		case Move::Charge: return  "Charge";
		case Move::Taunt: return "Taunt";
		case Move::Helping_Hand: return  "Helping Hand";
		case Move::Trick: return "Trick";
		case Move::Role_Play: return "Role Play";
		case Move::Wish: return "Wish";
		case Move::Assist: return  "Assist";
		case Move::Ingrain: return  "Ingrain";
		case Move::Superpower: return "Superpower";
		case Move::Magic_Coat: return "Magic Coat";
		case Move::Recycle: return "Recycle";
		case Move::Revenge: return "Revenge";
		case Move::Brick_Break: return  "Brick Break";
		case Move::Yawn: return "Yawn";
		case Move::Knock_Off: return  "Knock Off";
		case Move::Endeavor: return  "Endeavor";
		case Move::Eruption: return  "Eruption";
		case Move::Skill_Swap: return "Skill Swap";
		case Move::Imprison: return  "Imprison";
		case Move::Refresh: return "Refresh";
		case Move::Grudge: return  "Grudge";
		case Move::Snatch: return "Snatch";
		case Move::Secret_Power: return "Secret Power";
		case Move::Dive: return  "Dive";
		case Move::Arm_Thrust: return  "Arm Thrust";
		case Move::Camouflage: return  "Camouflage";
		case Move::Tail_Glow: return "Tail Glow";
		case Move::Luster_Purge: return "Luster Purge";
		case Move::Mist_Ball: return "Mist Ball";
		case Move::Feather_Dance: return  "Feather Dance";
		case Move::Teeter_Dance: return "Teeter Dance";
		case Move::Blaze_Kick: return  "Blaze Kick";
		case Move::Mud_Sport: return "Mud Sport";
		case Move::Ice_Ball: return  "Ice Ball";
		case Move::Needle_Arm: return "Needle Arm";
		case Move::Slack_Off: return "Slack Off";
		case Move::Hyper_Voice: return  "Hyper Voice";
		case Move::Poison_Fang: return "Poison Fang";
		case Move::Crush_Claw: return  "Crush Claw";
		case Move::Blast_Burn: return  "Blast Burn";
		case Move::Hydro_Cannon: return  "Hydro Cannon";
		case Move::Meteor_Mash: return "Meteor Mash";
		case Move::Astonish: return  "Astonish";
		case Move::Weather_Ball: return "Weather Ball";
		case Move::Aromatherapy: return  "Aromatherapy";
		case Move::Fake_Tears: return  "Fake Tears";
		case Move::Air_Cutter: return  "Air Cutter";
		case Move::Overheat: return "Overheat";
		case Move::Odor_Sleuth: return "Odor Sleuth";
		case Move::Rock_Tomb: return "Rock Tomb";
		case Move::Silver_Wind: return "Silver Wind";
		case Move::Metal_Sound: return "Metal Sound";
		case Move::Grass_Whistle: return  "Grass Whistle";
		case Move::Tickle: return "Tickle";
		case Move::Cosmic_Power: return  "Cosmic Power";
		case Move::Water_Spout: return "Water Spout";
		case Move::Signal_Beam: return "Signal Beam";
		case Move::Shadow_Punch: return "Shadow Punch";
		case Move::Extrasensory: return  "Extrasensory";
		case Move::Sky_Uppercut: return "Sky Uppercut";
		case Move::Sand_Tomb: return "Sand Tomb";
		case Move::Sheer_Cold: return "Sheer Cold";
		case Move::Muddy_Water: return "Muddy Water";
		case Move::Bullet_Seed: return  "Bullet Seed";
		case Move::Aerial_Ace: return  "Aerial Ace";
		case Move::Icicle_Spear: return  "Icicle Spear";
		case Move::Iron_Defense: return  "Iron Defense";
		case Move::Block: return  "Block";
		case Move::Howl: return  "Howl";
		case Move::Dragon_Claw: return  "Dragon Claw";
		case Move::Frenzy_Plant: return  "Frenzy Plant";
		case Move::Bulk_Up: return  "Bulk Up";
		case Move::Bounce: return  "Bounce";
		case Move::Mud_Shot: return "Mud Shot";
		case Move::Poison_Tail: return "Poison Tail";
		case Move::Covet: return  "Covet";
		case Move::Volt_Tackle: return "Volt Tackle";
		case Move::Magical_Leaf: return "Magical Leaf";
		case Move::Water_Sport: return "Water Sport";
		case Move::Calm_Mind: return  "Calm Mind";
		case Move::Leaf_Blade: return "Leaf Blade";
		case Move::Dragon_Dance: return  "Dragon Dance";
		case Move::Rock_Blast: return "Rock Blast";
		case Move::Shock_Wave: return "Shock Wave";
		case Move::Water_Pulse: return "Water Pulse";
		case Move::Doom_Desire: return  "Doom Desire";
		case Move::Psycho_Boost: return "Psycho Boost";
        default: return  "ERROR  Move";
    }
}

template<>
auto DD::from_string(std::string_view const str) -> Move
{
	static const std::unordered_map<std::string_view, Move> map
    {
			{  "Absorb",  Move::Absorb },
			{  "Acid",  Move::Acid },
			{  "Acidarmor",  Move::Acid_Armor },
			{  "AerialAce",  Move::Aerial_Ace },
			{  "AeroBlast",  Move::Aeroblast },
			{  "Agility",  Move::Agility },
			{  "Aircutter",  Move::Air_Cutter },
			{  "Amnesia",  Move::Amnesia },
			{  "AncientPower",  Move::Ancient_Power },
			{  "Armthrust",  Move::Arm_Thrust },
			{  "AromaTherapy",  Move::Aromatherapy },
			{  "Assist",  Move::Assist },
			{  "Astonish",  Move::Astonish },
			{  "Attract",  Move::Attract },
			{  "AuroraBeam",  Move::Aurora_Beam },
			{  "Barrage",  Move::Barrage },
			{  "Barrier",  Move::Barrier },
			{  "BatonPass",  Move::Baton_Pass },
			{  "Beatup",  Move::Beat_Up },
			{  "BellyDrum",  Move::Belly_Drum },
			{  "Bide",  Move::Bide },
			{  "Bind",  Move::Bind },
			{  "Bite",  Move::Bite },
			{  "BlastBurn",  Move::Blast_Burn },
			{  "BlazeKick",  Move::Blaze_Kick },
			{  "Blizzard",  Move::Blizzard },
			{  "Block",  Move::Block },
			{  "BodySlam",  Move::Body_Slam },
			{  "BoneClub",  Move::Bone_Club },
			{  "BoneMerang",  Move::Bonemerang },
			{  "BoneRush",  Move::Bone_Rush },
			{  "Bounce",  Move::Bounce },
			{  "BrickBreak",  Move::Brick_Break },
			{  "Bubble",  Move::Bubble },
			{  "BubbleBeam",  Move::Bubble_Beam },
			{  "BulkUp",  Move::Bulk_Up },
			{  "BulletSeed",  Move::Bullet_Seed },
			{  "CalmMind",  Move::Calm_Mind },
			{  "Camouflage",  Move::Camouflage },
			{  "Charge",  Move::Charge },
			{  "Charm",  Move::Charm },
			{  "Clamp",  Move::Clamp },
			{  "CometPunch",  Move::Comet_Punch },
			{  "ConfuseRay",  Move::Confuse_Ray },
			{  "Confusion",  Move::Confusion },
			{  "Constrict",  Move::Constrict },
			{  "Conversion",  Move::Conversion },
			{  "Conversion2",  Move::Conversion_2 },
			{  "CosmicPower",  Move::Cosmic_Power },
			{  "CottonSpore",  Move::Cotton_Spore },
			{  "Counter",  Move::Counter },
			{  "Covet",  Move::Covet },
			{  "CrabHammer",  Move::Crabhammer },
			{  "CrossChop",  Move::Cross_Chop },
			{  "Crunch",  Move::Crunch },
			{  "CrushClaw",  Move::Crush_Claw },
			{  "Curse",  Move::Curse },
			{  "Cut",  Move::Cut },
			{  "DefenseCurl",  Move::Defense_Curl },
			{  "DestinyBond",  Move::Destiny_Bond },
			{  "Detect",  Move::Detect },
			{  "Dig",  Move::Dig },
			{  "Disable",  Move::Disable },
			{  "Dive",  Move::Dive },
			{  "DizzyPunch",  Move::Dizzy_Punch },
			{  "DoomDesire",  Move::Doom_Desire },
			{  "DoubleEdge",  Move::Double_Edge },
			{  "DoubleKick",  Move::Double_Kick },
			{  "DoubleSlap",  Move::Double_Slap },
			{  "DoublTteam",  Move::Double_Team },
			{  "DragonBreath",  Move::Dragon_Breath },
			{  "DragonClaw",  Move::Dragon_Claw },
			{  "DragonDance",  Move::Dragon_Dance },
			{  "DragonRage",  Move::Dragon_Rage },
			{  "DreamEater",  Move::Dream_Eater },
			{  "DrillPeck",  Move::Drill_Peck },
			{  "DynamicPunch",  Move::Dynamic_Punch },
			{  "Earthquake",  Move::Earthquake },
			{  "EggBomb",  Move::Egg_Bomb },
			{  "Ember",  Move::Ember },
			{  "Encore",  Move::Encore },
			{  "Endeavor",  Move::Endeavor },
			{  "Endure",  Move::Endure },
			{  "Eruption",  Move::Eruption },
			{  "Explosion",  Move::Explosion },
			{  "Extrasensory",  Move::Extrasensory },
			{  "ExtremeSpeed",  Move::Extreme_Speed },
			{  "Facade",  Move::Facade },
			{  "FaintAttack",  Move::Feint_Attack },
			{  "FakeOut",  Move::Fake_Out },
			{  "FakeTears",  Move::Fake_Tears },
			{  "FalseSwipe",  Move::False_Swipe },
			{  "FeatherDance",  Move::Feather_Dance },
			{  "FeintAttack",  Move::Feint_Attack },
			{  "FireBlast",  Move::Fire_Blast },
			{  "FirePunch",  Move::Fire_Punch },
			{  "FireSpin",  Move::Fire_Spin },
			{  "Fissure",  Move::Fissure },
			{  "Flail",  Move::Flail },
			{  "Flamethrower",  Move::Flamethrower },
			{  "FlameWheel",  Move::Flame_Wheel },
			{  "Flash",  Move::Flash },
			{  "Flatter",  Move::Flatter },
			{  "Fly",  Move::Fly },
			{  "FocusEnergy",  Move::Focus_Energy },
			{  "FocusPunch",  Move::Focus_Punch },
			{  "FollowMe",  Move::Follow_Me },
			{  "ForeSight",  Move::Foresight },
			{  "FrenzyPlant",  Move::Frenzy_Plant },
			{  "Frustration",  Move::Frustration },
			{  "FuryAttack",  Move::Fury_Attack },
			{  "FuryCutter",  Move::Fury_Cutter },
			{  "FurySwipes",  Move::Fury_Swipes },
			{  "FutureSight",  Move::Future_Sight },
			{  "GigaDrain",  Move::Giga_Drain },
			{  "Glare",  Move::Glare },
			{  "GrassWhistle",  Move::Grass_Whistle },
			{  "Growl",  Move::Growl },
			{  "Growth",  Move::Growth },
			{  "Grudge",  Move::Grudge },
			{  "Guillotine",  Move::Guillotine },
			{  "Gust",  Move::Gust },
			{  "Hail",  Move::Hail },
			{  "Harden",  Move::Harden },
			{  "Haze",  Move::Haze },
			{  "Headbutt",  Move::Headbutt },
			{  "HealBell",  Move::Heal_Bell },
			{  "HeatWave",  Move::Heat_Wave },
			{  "HelpingHand",  Move::Helping_Hand },
			{  "HiddenPower",  Move::Hidden_Power },
			{  "HiddenPowerBug",  Move::Hidden_Power },
			{  "HiddenPowerDark",  Move::Hidden_Power },
			{  "HiddenPowerDragon",  Move::Hidden_Power },
			{  "HiddenPowerElectric",  Move::Hidden_Power },
			{  "HiddenPowerFighting",  Move::Hidden_Power },
			{  "HiddenPowerFire",  Move::Hidden_Power },
			{  "HiddenPowerFlying",  Move::Hidden_Power },
			{  "HiddenPowerGhost",  Move::Hidden_Power },
			{  "HiddenPowerGrass",  Move::Hidden_Power },
			{  "HiddenPowerGround",  Move::Hidden_Power },
			{  "HiddenPowerIce",  Move::Hidden_Power },
			{  "HiddenPowerPoison",  Move::Hidden_Power },
			{  "HiddenPowerPsychic",  Move::Hidden_Power },
			{  "HiddenPowerRock",  Move::Hidden_Power },
			{  "HiddenPowerSteel",  Move::Hidden_Power },
			{  "HiddenPowerWater",  Move::Hidden_Power },
			{  "HighJumpkick",  Move::High_Jump_Kick },
			{  "HiJumpKick",  Move::High_Jump_Kick },
			{  "HornAttack",  Move::Horn_Attack },
			{  "HornDrill",  Move::Horn_Drill },
			{  "Howl",  Move::Howl },
			{  "HydroCannon",  Move::Hydro_Cannon },
			{  "HydroPump",  Move::Hydro_Pump },
			{  "HyperBeam",  Move::Hyper_Beam },
			{  "HyperFang",  Move::Hyper_Fang },
			{  "HyperVoice",  Move::Hyper_Voice },
			{  "Hypnosis",  Move::Hypnosis },
			{  "IceBall",  Move::Ice_Ball },
			{  "IceBeam",  Move::Ice_Beam },
			{  "IcePunch",  Move::Ice_Punch },
			{  "IcicleSpear",  Move::Icicle_Spear },
			{  "IcyWind",  Move::Icy_Wind },
			{  "Imprison",  Move::Imprison },
			{  "Ingrain",  Move::Ingrain },
			{  "IronDefense",  Move::Iron_Defense },
			{  "IronTail",  Move::Iron_Tail },
			{  "JumpKick",  Move::Jump_Kick },
			{  "KarateChop",  Move::Karate_Chop },
			{  "Kinesis",  Move::Kinesis },
			{  "KnockOff",  Move::Knock_Off },
			{ "LeafBlade",  Move::Leaf_Blade },
			{ "LeechLife",  Move::Leech_Life },
			{ "LeechSeed",  Move::Leech_Seed },
			{ "Leer",  Move::Leer },
			{ "Lick",  Move::Lick },
			{ "LightScreen",  Move::Light_Screen },
			{ "LockOn",  Move::Lock_On },
			{ "LovelyKiss",  Move::Lovely_Kiss },
			{ "LowKick",  Move::Low_Kick },
			{ "LusterPurge",  Move::Luster_Purge },
			{ "MachPunch",  Move::Mach_Punch },
			{ "MagicalLeaf",  Move::Magical_Leaf },
			{ "MagicCoat",  Move::Magic_Coat },
			{ "Magnitude",  Move::Magnitude },
			{ "MeanLook",  Move::Mean_Look },
			{ "Meditate",  Move::Meditate },
			{ "MegaDrain",  Move::Mega_Drain },
			{ "Megahorn",  Move::Megahorn },
			{ "MegaKick",  Move::Mega_Kick },
			{ "MegaPunch",  Move::Mega_Punch },
			{ "Memento",  Move::Memento },
			{ "MetalClaw",  Move::Metal_Claw },
			{ "MetalSound",  Move::Metal_Sound },
			{ "MeteorMash",  Move::Meteor_Mash },
			{ "Metronome",  Move::Metronome },
			{ "MilkDrink",  Move::Milk_Drink },
			{ "Mimic",  Move::Mimic },
			{ "MindReader",  Move::Mind_Reader },
			{ "Minimize",  Move::Minimize },
			{ "MirrorCoat",  Move::Mirror_Coat },
			{ "MirrorMove",  Move::Mirror_Move },
			{ "Mist",  Move::Mist },
			{ "MistBall",  Move::Mist_Ball },
			{ "Moonlight",  Move::Moonlight },
			{ "MorningSun",  Move::Morning_Sun },
			{ "MuddyWater",  Move::Muddy_Water },
			{ "MudShot",  Move::Mud_Shot },
			{ "MudSlap",  Move::Mud_Slap },
			{ "MudSport",  Move::Mud_Sport },
			{ "NaturePower",  Move::Nature_Power },
			{ "NeedleArm",  Move::Needle_Arm },
			{ "NightMare",  Move::Nightmare },
			{ "NightShade",  Move::Night_Shade },
			{ "Octazooka",  Move::Octazooka },
			{ "OdorSleuth",  Move::Odor_Sleuth },
			{ "Outrage",  Move::Outrage },
			{ "Overheat",  Move::Overheat },
			{ "PainSplit",  Move::Pain_Split },
			{ "PayDay",  Move::Pay_Day },
			{ "Peck",  Move::Peck },
			{ "PerishSong",  Move::Perish_Song },
			{ "PetalDance",  Move::Petal_Dance },
			{ "PinMissile",  Move::Pin_Missile },
			{ "PoisonFang",  Move::Poison_Fang },
			{ "PoisonGas",  Move::Poison_Gas },
			{ "PoisonPowder",  Move::Poison_Powder },
			{ "PoisonSting",  Move::Poison_Sting },
			{ "PoisonTail",  Move::Poison_Tail },
			{ "Pound",  Move::Pound },
			{ "PowderSnow",  Move::Powder_Snow },
			{ "Present",  Move::Present },
			{ "Protect",  Move::Protect },
			{ "Psybeam",  Move::Psybeam },
			{ "Psychic",  Move::Psychic },
			{ "PsychoBoost",  Move::Psycho_Boost },
			{ "PsychUp",  Move::Psych_Up },
			{ "Psywave",  Move::Psywave },
			{ "Pursuit",  Move::Pursuit },
			{ "QuickAttack",  Move::Quick_Attack },
			{ "Rage",  Move::Rage },
			{ "RainDance",  Move::Rain_Dance },
			{ "RapidSpin",  Move::Rapid_Spin },
			{ "RazorLeaf",  Move::Razor_Leaf },
			{ "RazorWind",  Move::Razor_Wind },
			{ "Recover",  Move::Recover },
			{ "Recycle",  Move::Recycle },
			{ "Reflect",  Move::Reflect },
			{ "Refresh",  Move::Refresh },
			{ "Rest",  Move::Rest },
			{ "Return",  Move::Return },
			{ "Return102",  Move::Return },
			{ "Revenge",  Move::Revenge },
			{ "Reversal",  Move::Reversal },
			{ "Roar",  Move::Roar },
			{ "RockBlast",  Move::Rock_Blast },
			{ "RockSlide",  Move::Rock_Slide },
			{ "RockSmash",  Move::Rock_Smash },
			{ "RockThrow",  Move::Rock_Throw },
			{ "RockTomb",  Move::Rock_Tomb },
			{ "RolePlay",  Move::Role_Play },
			{ "RollingKick",  Move::Rolling_Kick },
			{ "Rollout",  Move::Rollout },
			{ "SacredFire",  Move::Sacred_Fire },
			{ "Safeguard",  Move::Safeguard },
			{ "SandAttack",  Move::Sand_Attack },
			{ "Sandstorm",  Move::Sandstorm },
			{ "SandTomb",  Move::Sand_Tomb },
			{ "ScaryFace",  Move::Scary_Face },
			{ "Scratch",  Move::Scratch },
			{ "Screech",  Move::Screech },
			{ "SecretPower",  Move::Secret_Power },
			{ "SeismicToss",  Move::Seismic_Toss },
			{ "SelfDestruct",  Move::Self_Destruct },
			{ "ShadowBall",  Move::Shadow_Ball },
			{ "ShadowPunch",  Move::Shadow_Punch },
			{ "Sharpen",  Move::Sharpen },
			{ "SheerCold",  Move::Sheer_Cold },
			{ "ShockWave",  Move::Shock_Wave },
			{ "SignalBeam",  Move::Signal_Beam },
			{ "SilverWind",  Move::Silver_Wind },
			{ "Sing",  Move::Sing },
			{ "Sketch",  Move::Sketch },
			{ "SkillSwap",  Move::Skill_Swap },
			{ "SkullBash",  Move::Skull_Bash },
			{ "SkyAttack",  Move::Sky_Attack },
			{ "SkyUppercut",  Move::Sky_Uppercut },
			{ "SlackOff",  Move::Slack_Off },
			{ "Slam",  Move::Slam },
			{ "Slash",  Move::Slash },
			{ "SleepPowder",  Move::Sleep_Powder },
			{ "SleepTalk",  Move::Sleep_Talk },
			{ "Sludge",  Move::Sludge },
			{ "SludgeBomb",  Move::Sludge_Bomb },
			{ "SmellingSalt",  Move::Smelling_Salts },
			{ "SmellingSalts",  Move::Smelling_Salts },
			{ "Smog",  Move::Smog },
			{ "Smokescreen",  Move::Smokescreen },
			{ "Snatch",  Move::Snatch },
			{ "Snore",  Move::Snore },
			{ "SoftBoiled",  Move::Soft_Boiled },
			{ "SolarBeam",  Move::Solar_Beam },
			{ "SonicBoom",  Move::Sonic_Boom },
			{ "Spark",  Move::Spark },
			{ "SpiderWeb",  Move::Spider_Web },
			{ "SpikeCannon",  Move::Spike_Cannon },
			{ "Spikes",  Move::Spikes },
			{ "Spite",  Move::Spite },
			{ "SpitUp",  Move::Spit_Up },
			{ "Splash",  Move::Splash },
			{ "Spore",  Move::Spore },
			{ "SteelWing",  Move::Steel_Wing },
			{ "Stockpile",  Move::Stockpile },
			{ "Stomp",  Move::Stomp },
			{ "Strength",  Move::Strength },
			{ "StringShot",  Move::String_Shot },
			{ "Struggle",  Move::Struggle },
			{ "StunSpore",  Move::Stun_Spore },
			{ "Submission",  Move::Submission },
			{ "Substitute",  Move::Substitute },
			{ "SunnyDay",  Move::Sunny_Day },
			{ "SuperFang",  Move::Super_Fang },
			{ "Superpower",  Move::Superpower },
			{ "Supersonic",  Move::Supersonic },
			{ "Surf",  Move::Surf },
			{ "Swagger",  Move::Swagger },
			{ "Swallow",  Move::Swallow },
			{ "SweetKiss",  Move::Sweet_Kiss },
			{ "SweetScent",  Move::Sweet_Scent },
			{ "Swift",  Move::Swift },
			{ "SwordsDance",  Move::Swords_Dance },
			{ "Synthesis",  Move::Synthesis },
			{ "Tackle",  Move::Tackle },
			{ "TailGlow",  Move::Tail_Glow },
			{ "TailWhip",  Move::Tail_Whip },
			{ "TakeDown",  Move::Take_Down },
			{ "Taunt",  Move::Taunt },
			{ "TeeterDance",  Move::Teeter_Dance },
			{ "Teleport",  Move::Teleport },
			{ "Thief",  Move::Thief },
			{ "Thrash",  Move::Thrash },
			{ "Thunder",  Move::Thunder },
			{ "Thunderbolt",  Move::Thunderbolt },
			{ "ThunderPunch",  Move::Thunder_Punch },
			{ "ThunderShock",  Move::Thunder_Shock },
			{ "ThunderWave",  Move::Thunder_Wave },
			{ "Tickle",  Move::Tickle },
			{ "Torment",  Move::Torment },
			{ "Toxic",  Move::Toxic },
			{ "Transform",  Move::Transform },
			{ "TriAttack",  Move::Tri_Attack },
			{ "Trick",  Move::Trick },
			{ "TripleKick",  Move::Triple_Kick },
			{ "Twineedle",  Move::Twineedle },
			{ "Twister",  Move::Twister },
			{ "Uproar",  Move::Uproar },
			{ "ViceGrip",  Move::Vice_Grip },
			{ "VineWhip",  Move::Vine_Whip },
			{ "VitalThrow",  Move::Vital_Throw },
			{ "VoltTackle",  Move::Volt_Tackle },
			{ "Waterfall",  Move::Waterfall },
			{ "WaterGun",  Move::Water_Gun },
			{ "WaterPulse",  Move::Water_Pulse },
			{ "WaterSport",  Move::Water_Sport },
			{ "WaterSpout",  Move::Water_Spout },
			{ "WeatherBall",  Move::Weather_Ball },
			{ "Whirlpool",  Move::Whirlpool },
			{ "Whirlwind",  Move::Whirlwind },
			{ "WillOWisp",  Move::Will_O_Wisp },
			{ "WingAttack",  Move::Wing_Attack },
			{ "Wish",  Move::Wish },
			{ "Withdraw",  Move::Withdraw },
			{ "Wrap",  Move::Wrap },
			{ "Yawn",  Move::Yawn },
			{ "ZapCannon",  Move::Zap_Cannon },
	};

	return map.at(str);
}