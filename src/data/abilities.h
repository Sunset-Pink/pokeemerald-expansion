const struct AbilityInfo gAbilitiesInfo[ABILITIES_COUNT] =
{
    [ABILITY_NONE] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("No Ability."),
        .aiRating = 0,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    // Weather Abilities
    // Varaints
    //  - Sand
    //      - Summon                => Sand Stream]
    //      - Summon (On Hit)       => Sand Spit
    //      - Summon (Plus)         => ???
    //      - Summon (Primal)       => ???
    //      - Evasion               => Sand Veil
    //      - Speed                 => Sand Rush
    //      - Associated Types      => Sand Force
    //      - Heal                  => ???
    //      - Cure Status           => Hydration
    //      - Sp Atk                => Solar Power
    //      - Sp Atk                => ???
    //      - Act Under             => ???
    //      - Boosts Highest Stat   => ???
    //      - Disguise              => ???
    //  - Sun
    //      - Summon                => Drought
    //      - Summon (On Hit)       => ???
    //      - Summon (Plus)         => Oricalcum Pulse
    //      - Summon (Primal)       => Desolate Land
    //      - Evasion               => ???
    //      - Speed                 => Chlorophyl
    //      - Associated Types      => ???
    //      - Heal                  => ???
    //      - Cure Status           => Leaf Guard
    //      - Sp Atk                => Solar Power
    //      - Act Under             => Mega Sol
    //      - Boosts Highest Stat   => Protosynthesis
    //      - Team Atk + Sp Def     => Flower Gift
    //      - Disguise              => ???
    //  - Rain
    //      - Summon            => Drizzle
    //      - Summon (On Hit)       => ???
    //      - Summon (Plus)     => ???
    //      - Summon (Primal)   => Primordial Sea
    //      - Evasion           => ???
    //      - Speed             => Swift Swim
    //      - Associated Types  => ???
    //      - Heal              => Rain Dish
    //      - Cure Status       => Hydration
    //      - Sp Atk            => ???
    //      - Act Under         => ???
    //      - Boosts Highest Stat   => ???
    //      - Disguise              => ???
    //  - Snow
    //      - Summon                => Snow Warning
    //      - Summon (On Hit)       => ???
    //      - Summon (Plus)         => ???
    //      - Summon (Primal)       => ???
    //      - Evasion               => Snow Cloak
    //      - Speed                 => Slush Rush
    //      - Associated Types      => ???
    //      - Heal                  => Ice Body
    //      - Cure Status           => ???
    //      - Sp Atk                => ???
    //      - Act Under             => ???
    //      - Boosts Highest Stat   => ???
    //      - Disguise              => Ice Face
    //  - Wind
    //      - Summon                => 
    //      - Summon (On Hit)       => ???
    //      - Summon (Plus)         => ???
    //      - Summon (Primal)       => Delta Stream
    //      - Evasion               => ???
    //      - Speed                 => ???
    //      - Associated Types      => ???
    //      - Heal                  => ???
    //      - Cure Status           => ???
    //      - Sp Atk                => ???
    //      - Act Under             => ???
    //      - Boosts Highest Stat   => ???
    //      - Disguise              => ???
    //  - Mic
    //      - Summon            => Forecast
    //      - Negates Weather   => Air Lock, Cloud Nine

    // Sand Abilities
    [ABILITY_SAND_STREAM] =
    {
        .name = _("Sand Stream"),
        .description = COMPOUND_STRING("Summons a sand for 5 turns."),
        .aiRating = 9,
    },

    [ABILITY_SAND_SPIT] =
    {
        .name = _("Sand Spit"),
        .description = COMPOUND_STRING("Summons sand for 5 turns if hit."),
        .aiRating = 5,
    },

    [ABILITY_SAND_VEIL] =
    {
        .name = _("Sand Veil"),
        .description = COMPOUND_STRING("Boosts evasion by 25% in a sand."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SAND_RUSH] =
    {
        .name = _("Sand Rush"),
        .description = COMPOUND_STRING("Doubles Speed in a sand."),
        .aiRating = 6,
    },

    [ABILITY_SAND_FORCE] =
    {
        .name = _("Sand Force"),
        .description = COMPOUND_STRING("Boosts Rock, Ground, and Steel type moves \nby 30% in a sand."),
        .aiRating = 4,
    },

    // Sun Abilities

    [ABILITY_DROUGHT] =
    {
        .name = _("Drought"),
        .description = COMPOUND_STRING("Summons sunlight for 5 turns."),
        .aiRating = 9,
    },

    [ABILITY_ORICHALCUM_PULSE] =
    {
        .name = _("Orichalcum Pulse"),
        .description = COMPOUND_STRING("Drought & boosts Atk by 33% in sun."),
        .aiRating = 8,
    },

    [ABILITY_DESOLATE_LAND] =
    {
        .name = _("Desolate Land"),
        .description = COMPOUND_STRING("Summons Harsh Sun that\nnullifies Water moves."),
        .aiRating = 10,
    },

    [ABILITY_CHLOROPHYLL] =
    {
        .name = _("Chlorophyll"),
        .description = COMPOUND_STRING("Doubles Speed in sunlight."),
        .aiRating = 6,
    },

    [ABILITY_SOLAR_POWER] =
    {
        .name = _("Solar Power"),
        .description = COMPOUND_STRING("Boosts Sp Atk by 50% in Sun."),
        .aiRating = 3,
    },

    [ABILITY_LEAF_GUARD] =
    {
        .name = _("Leaf Guard"),
        .description = COMPOUND_STRING("Blocks status in sunlight."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MEGA_SOL] =
    {
        .name = _("Mega Sol"),
        .description = COMPOUND_STRING("Acts like under sun."),
    },

    [ABILITY_PROTOSYNTHESIS] =
    {
        .name = _("Protosynthesis"),
        .description = COMPOUND_STRING("Sunlight boosts best stat."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_FLOWER_GIFT] =
    {
        .name = _("Flower Gift"),
        .description = COMPOUND_STRING("Boosts self and allies Atk. \nand Sp. Def by 50% in Sun."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeTraced = B_UPDATED_ABILITY_DATA >= GEN_5,
        .breakable = TRUE,
    },

    // Rain Abilties

    [ABILITY_DRIZZLE] =
    {
        .name = _("Drizzle"),
        .description = COMPOUND_STRING("Summons rain for 5 turns."),
        .aiRating = 9,
    },

    [ABILITY_PRIMORDIAL_SEA] =
    {
        .name = _("Primordial Sea"),
        .description = COMPOUND_STRING("Summons Heavy Rain that\nnullifies Fire moves."),
        .aiRating = 10,
    },

    [ABILITY_SWIFT_SWIM] =
    {
        .name = _("Swift Swim"),
        .description = COMPOUND_STRING("Doubles Speed in rain."),
        .aiRating = 6,
    },

    [ABILITY_RAIN_DISH] =
    {
        .name = _("Rain Dish"),
        .description = COMPOUND_STRING("Heals 1/8 Max HP in rain."),
        .aiRating = 3,
    },

    [ABILITY_HYDRATION] =
    {
        .name = _("Hydration"),
        .description = COMPOUND_STRING("Cures status in rain."),
        .aiRating = 4,
    },

    // Snow/Hail Abilities

    [ABILITY_SNOW_WARNING] =
    {
        .name = _("Snow Warning"),
    #if B_SNOW_WARNING >= GEN_9
        .description = COMPOUND_STRING("Summons snow for 5 turns."),
    #else
        .description = COMPOUND_STRING("Summons hail for 5 turns."),
    #endif
        .aiRating = 8,
    },

    [ABILITY_SNOW_CLOAK] =
    {
        .name = _("Snow Cloak"),
        .description = COMPOUND_STRING(
        #if B_PREFERRED_ICE_WEATHER == B_ICE_WEATHER_HAIL
            "Boosts evasion in hail."),
        #elif B_PREFERRED_ICE_WEATHER == B_ICE_WEATHER_SNOW
            "Boosts evasion by 25% in snow."),
        #else
            "Boosts evasion by 25% in hail or snow."),
        #endif
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SLUSH_RUSH] =
    {
        .name = _("Slush Rush"),
        .description = COMPOUND_STRING(
        #if B_PREFERRED_ICE_WEATHER == B_ICE_WEATHER_HAIL
            "Doubles Speed in hail."),
        #elif B_PREFERRED_ICE_WEATHER == B_ICE_WEATHER_SNOW
            "Doubles Speed in snow."),
        #else
            "Doubles Speed in hail or snow."),
        #endif
        .aiRating = 5,
    },

    [ABILITY_ICE_BODY] =
    {
        .name = _("Ice Body"),
        .description = COMPOUND_STRING(
        #if B_PREFERRED_ICE_WEATHER == B_ICE_WEATHER_HAIL
            "Heals 1/8 Max HP in hail."),
        #elif B_PREFERRED_ICE_WEATHER == B_ICE_WEATHER_SNOW
            "Heals 1/8 Max HP in snow."),
        #else
            "Heals 1/8 Max HP in hail or snow."),
        #endif
        .aiRating = 3,
    },

    [ABILITY_ICE_FACE] =
    {
        .name = _("Ice Face"),
        .description = COMPOUND_STRING(
        #if B_PREFERRED_ICE_WEATHER == B_ICE_WEATHER_HAIL
            "Hail renews one free hit."),
        #elif B_PREFERRED_ICE_WEATHER == B_ICE_WEATHER_SNOW
            "Snow renews one free hit."),
        #else
            "Hail & snow renew free hit."),
        #endif
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .breakable = TRUE,
        .failsOnImposter = TRUE,
    },

    // Wind Abilities
    [ABILITY_DELTA_STREAM] =
    {
        .name = _("Delta Stream"),
        .description = COMPOUND_STRING("Summons Strong Winds that\nremove Flying weaknesses."),
        .aiRating = 10,
    },

    // Misc Weather abilities
    [ABILITY_FORECAST] =
    {
        .name = _("Forecast"),
        .description = COMPOUND_STRING("Changes with the weather."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = B_UPDATED_ABILITY_DATA >= GEN_4,
        .failsOnImposter = B_UPDATED_ABILITY_DATA >= GEN_5,
    },

    [ABILITY_CLOUD_NINE] =
    {
        .name = _("Cloud Nine"),
        .description = COMPOUND_STRING("Negates weather effects."),
        .aiRating = 5,
    },

    [ABILITY_AIR_LOCK] =
    {
        .name = _("Air Lock"),
        .description = COMPOUND_STRING("Negates weather effects."),
        .aiRating = 5,
    },


    // Terrain Abilites
    // Variants
    //  - Electric Terrain
    //      - Summon (On Hit)       => Voltage Drop
    //      - Summon                => Electric Surge
    //      - Summon (Plus)         => Hadron Engine
    //      - Speed                 => Surge Surfer
    //      - Boosts Highest stat   => Quark Drive
    //      - Defense               => ???
    //  - Psychic Terrain
    //      - Summon (On Hit)       => Memory Lapse
    //      - Summon                => Psychic Surge
    //      - Summon (Plus)         => ???
    //      - Speed                 => Synpase Fire
    //      - Boosts Highest stat   => ???
    //      - Defense               => ???
    //  - Misty Terrain
    //      - Summon (On Hit)       => Sprinkled Dust
    //      - Summon                => Misty Surge
    //      - Summon (Plus)         => ???
    //      - Speed                 => Mist Walker
    //      - Boosts Highest stat   => ???
    //      - Defense               => ???
    //  - Grassy Terrain
    //      - Summon (On Hit)       => Seed Sower
    //      - Summon                => Grassy Surge
    //      - Summon (Plus)         => ???
    //      - Speed                 => Grassy Gallop
    //      - Boosts Highest stat   => ???
    //      - Defense               => Grass Pelt
    //  - Misc
    //      - Change Type           => Mimicry
    
    // Electric Terrain Abilites
    [ABILITY_VOLTAGE_DROP] =
    {
        .name = _("Voltage Drop"),
        .description = COMPOUND_STRING("Summons Electric Terrain for\n5 turns when hit."),
        .aiRating = 5,
    },

    [ABILITY_ELECTRIC_SURGE] =
    {
        .name = _("Electric Surge"),
        .description = COMPOUND_STRING("Sets Electric Terrain for\n5 turns."),
        .aiRating = 8,
    },
    
    [ABILITY_HADRON_ENGINE] =
    {
        .name = _("Hadron Engine"),
        .description = COMPOUND_STRING("Electric Surge & Boosts Sp. Atk \nby 33% in Electric Terrain."),
        .aiRating = 8,
    },

    [ABILITY_SURGE_SURFER] =
    {
        .name = _("Surge Surfer"),
        .description = COMPOUND_STRING("Doubles Speed in Electric Terrain."),
        .aiRating = 4,
    },

    [ABILITY_QUARK_DRIVE] =
    {
        .name = _("Quark Drive"),
        .description = COMPOUND_STRING("Boosts highest stat in\nElectric Terrain."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    // Psychic Terrain Abilities
    [ABILITY_MEMORY_LAPSE] =
    {
        .name = _("Memory Lapse"),
        .description = COMPOUND_STRING("Summons Psychic Terrain for\n5 turns when hit."),
        .aiRating = 5,
    },

    [ABILITY_PSYCHIC_SURGE] =
    {
        .name = _("Psychic Surge"),
        .description = COMPOUND_STRING("Sets Psychic Terrain for\n5 turns."),
        .aiRating = 8,
    },

    [ABILITY_SYNAPSE_FIRE] =
    {
        .name = _("Synapse Fire"),
        .description = COMPOUND_STRING("Doubles Speed in Psychic Terrain."),
        .aiRating = 4,
    },

    // Mist Terrain Abilities
    [ABILITY_SPRINKLED_DUST] =
    {
        .name = _("Sprinkled Dust"),
        .description = COMPOUND_STRING("Summons Misty Terrain for\n5 turns when hit."),
        .aiRating = 5,
    },

    [ABILITY_MISTY_SURGE] =
    {
        .name = _("Misty Surge"),
        .description = COMPOUND_STRING("Sets Misty Terrain for\n5 turns."),
        .aiRating = 8,
    },

    [ABILITY_MIST_WALKER] =
    {
        .name = _("Mist Walker"),
        .description = COMPOUND_STRING("Doubles Speed in Misty Terrain."),
        .aiRating = 4,
    },

    // Grassy Terain Abilities
    [ABILITY_SEED_SOWER] =
    {
        .name = _("Seed Sower"),
        .description = COMPOUND_STRING("Summons Grassy Terrain for\n5 turns when hit."),
        .aiRating = 5,
    },
    
    [ABILITY_GRASSY_SURGE] =
    {
        .name = _("Grassy Surge"),
        .description = COMPOUND_STRING("Sets Grassy Terrain for\n5 turns."),
        .aiRating = 8,
    },

    [ABILITY_GRASSY_GALLOP] =
    {
        .name = _("Grassy Gallop"),
        .description = COMPOUND_STRING("Doubles Speed in Grassy Terrain."),
        .aiRating = 4,
    },

    [ABILITY_GRASS_PELT] =
    {
        .name = _("Grass Pelt"),
        .description = COMPOUND_STRING("Boosts Def by 50% in Grassy Terrain."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MIMICRY] =
    {
        .name = _("Mimicry"),
        .description = COMPOUND_STRING("Changes type on terrain."),
        .aiRating = 2,
    },

    // Hit By X Type Abilities
    // Variants:
    //  - Grass
    //      - Atk+                  => Sap Sipper
    //      - Def+                  => ???
    //      - Def++                 => ???
    //      - Speed+                => ???
    //      - Speed++++++           => ???
    //      - Sp. Atk+              => ???
    //
    //      - Power Same Type       => ???
    //      - Draw                  => ???
    //      - Heal                  => ???
    // 
    //      - Resistance            => ???
    //      - Immunity              => Sap Sipper
    //  - Fire
    //      - Atk+                  => Thermal Exchange
    //      - Def+                  => ???
    //      - Def++                 => Water Compaction
    //      - Speed+                => ???
    //      - Speed++++++           => Steam Engine
    //      - Sp. Atk+              => ???
    //
    //      - Power Same Type       => Flash Fire
    //      - Draw                  => ???
    //      - Heal                  => ???
    // 
    //      - Resistance            => Heatproof, Thick Fat, Water Bubble,
    //      - Immunity              => Flash Fire
    //  - Water
    //      - Atk+                  => ???
    //      - Def+                  => Water Compaction
    //      - Def++                 => ???
    //      - Speed+                =>
    //      - Speed++++++           => Steam Engine
    //      - Sp. Atk+              => Storm Drain
    //
    //      - Power Same Type       => ???
    //      - Draw                  => Storm Drain
    //      - Heal                  => Water Absorb, Dry Skin
    // 
    //      - Resistance            => Water Compaction
    //      - Immunity              => Storm Drain, Water Absorb, Dry Skin
    //  - Bug
    //  - Normal
    //  - Electric
    //      - Atk+                  => ???
    //      - Def+                  => ???
    //      - Def++                 => ???
    //      - Speed+                => Motor Drive
    //      - Speed++++++           => ???
    //      - Sp. Atk+              => Lighting Rod
    //
    //      - Power Same Type       => ???
    //      - Draw                  => Lightning Rod
    //      - Heal                  => Volt Absorb
    // 
    //      - Resistance            => ???
    //      - Immunity              => Motor Drive, Volt Absorb, Lightning Rod
    //  - Ice
    //      - Atk+                  => ???
    //      - Def+                  => ???
    //      - Def++                 => ???
    //      - Speed+                => ???
    //      - Speed++++++           => ???
    //      - Sp. Atk+              => ???
    //
    //      - Power Same Type       => ???
    //      - Draw                  => ???
    //      - Heal                  => Ice Eater
    // 
    //      - Resistance            => Thick Fat
    //      - Immunity              => Ice Eater
    //  - Fighting
    //  - Poison
    //  - Ground
    //      - Atk+                  => ???
    //      - Def+                  => ???
    //      - Def++                 => ???
    //      - Speed+                => ???
    //      - Speed++++++           => ???
    //      - Sp. Atk+              => ???
    //
    //      - Power Same Type       => ???
    //      - Draw                  => ???
    //      - Heal                  => Eart Eater
    // 
    //      - Resistance            => ???
    //      - Immunity              => Levitate
    //  - Flying
    //  - Psychic
    //  - Rock
    //  - Ghost
    //  - Dragon
    //  - Dark
    //      - Atk+                  => Justified
    //      - Def+                  => ???
    //      - Def++                 => ???
    //      - Speed+                => ???
    //      - Speed++++++           => ???
    //      - Sp. Atk+              => ???
    //
    //      - Power Same Type       => ???
    //      - Draw                  => ???
    //      - Heal                  => ???
    // 
    //      - Resistance            => ???
    //      - Immunity              => ???
    //  - Steel
    //  - Fairy

    // Grass Type Abilties

    [ABILITY_SAP_SIPPER] =
    {
        .name = _("Sap Sipper"),
        .description = COMPOUND_STRING("Immune to Grass moves &\ngets +1 Atk instead."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    // Fire Type Abilities

    [ABILITY_THERMAL_EXCHANGE] =
    {
        .name = _("Thermal Exchange"),
        .description = COMPOUND_STRING("Fire-type hits raise Attack\nImmune to burn."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_WELL_BAKED_BODY] =
    {
        .name = _("Well-Baked Body"),
        .description = COMPOUND_STRING("Immune to Fire moves &\ngets +2 Def instead."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_FLASH_FIRE] =
    {
        .name = _("Flash Fire"),
        .description = COMPOUND_STRING("Immune to Fire moves &\nFire moves get stronger instead."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_HEATPROOF] =
    {
        .name = _("Heatproof"),
        .description = COMPOUND_STRING("Resistant to Fire moves."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    // Water Type Abilities

    [ABILITY_WATER_COMPACTION] =
    {
        .name = _("Water Compaction"),
        .description = COMPOUND_STRING("Halves Water damage and\nraises Defense."),
        .aiRating = 4,
    },

    [ABILITY_STORM_DRAIN] =
    {
        .name = _("Storm Drain"),
        .description = COMPOUND_STRING("Draws in and immune to Water moves.\nGets +1 Sp. Atk instead."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    // Additionally heals 1/16 hp at end of turn in rain.
    [ABILITY_WATER_ABSORB] =
    {
        .name = _("Water Absorb"),
        .description = COMPOUND_STRING("Immune to Water moves &\nHeals 1/4 max HP instead."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    // Additionally heals 1/16 hp at end of turn in rain.
    [ABILITY_DRY_SKIN] =
    {
        .name = _("Dry Skin"),
        .description = COMPOUND_STRING("Immune to Water moves &\nHeals 1/4 max HP instead."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    // Absorb Electric Type Abilities

    [ABILITY_MOTOR_DRIVE] =
    {
        .name = _("Motor Drive"),
        .description = COMPOUND_STRING("Immune to Electric moves &\ngets +1 Speed instead."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_LIGHTNING_ROD] =
    {
        .name = _("Lightning Rod"),
        .description = COMPOUND_STRING("Draws in and immune to Electric moves.\nGets +1 Sp. Atk instead."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    // Additionally heals 1/16 hp at end of turn in electric terrain.
    [ABILITY_VOLT_ABSORB] =
    {
        .name = _("Volt Absorb"),
        .description = COMPOUND_STRING("Immune to Electric moves &\nHeals 1/4 max HP instead."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    // Additionally heals 1/16 hp at end of turn in snow.
    [ABILITY_ICE_EATER] =
    {
        .name = _("Ice Eater"),
        .description = COMPOUND_STRING("Immune to Ice moves &\nHeals 1/4 max HP instead."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    // Additionally heals 1/16 hp at end of turn in sand.
    [ABILITY_EARTH_EATER] =
    {
        .name = _("Earth Eater"),
        .description = COMPOUND_STRING("Immune to Ground moves &\nHeals 1/4 max HP instead."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_LEVITATE] =
    {
        .name = _("Levitate"),
        .description = COMPOUND_STRING("Immune to Ground moves."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    // Hit By Dark Type Abilities
    [ABILITY_JUSTIFIED] =
    {
        .name = _("Justified"),
        .description = COMPOUND_STRING("Dark-type hits raise\nAttack."),
        .aiRating = 4,
    },

    // Misc Resististance/immunity

    [ABILITY_THICK_FAT] =
    {
        .name = _("Thick Fat"),
        .description = COMPOUND_STRING("Resistant to Fire and Ice damage."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_STEAM_ENGINE] =
    {
        .name = _("Steam Engine"),
        .description = COMPOUND_STRING("Fire & Water hits up Speed."),
        .aiRating = 3,
    },


    [ABILITY_WONDER_GUARD] =
    {
        .name = _("Wonder Guard"),
        .description = COMPOUND_STRING("Only “supereffective” hits."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .breakable = TRUE,
    },

    // Boost Theme Moves
    // Variants
    //  - Punching   => Iron Fist.
    //  - Slashing   => Sharpness
    //  - Biting     => Strong Jaw
    //  - Sound      => Liquid Voice, Punk Rock
    //  - Bone       => Bone Zone
    //  - Recoil     => Reckless
    [ABILITY_IRON_FIST] =
    {
        .name = _("Iron Fist"),
        .description = COMPOUND_STRING("Boosts punching moves by 30%."),
        .aiRating = 6,
    },

    [ABILITY_SHARPNESS] =
    {
        .name = _("Sharpness"),
        .description = COMPOUND_STRING("Boosts slashing moves by 50%."),
        .aiRating = 7,
    },

    [ABILITY_STRONG_JAW] =
    {
        .name = _("Strong Jaw"),
        .description = COMPOUND_STRING("Boosts biting moves by 50%."),
        .aiRating = 6,
    },

    [ABILITY_MEGA_LAUNCHER] =
    {
        .name = _("Mega Launcher"),
        .description = COMPOUND_STRING("Boosts aura and pulse moves\nby 50%."),
        .aiRating = 7,
    },

    [ABILITY_LIQUID_VOICE] =
    {
        .name = _("Liquid Voice"),
        .description = COMPOUND_STRING("Sound moves become Water-\ntype & boosted by 20%."),
        .aiRating = 5,
    },

    [ABILITY_BONE_ZONE] =
    {
        .name = _("Bone Zone"),
        .description = COMPOUND_STRING("Bone moves have Tinted Lens\nand ignore immunities."),
        .aiRating = 7,
    },

    [ABILITY_TOUGH_CLAWS] =
    {
        .name = _("Tough Claws"),
        .description = COMPOUND_STRING("Boosts contact moves\nby 30%."),
        .aiRating = 7,
    },

    [ABILITY_PUNK_ROCK] =
    {
        .name = _("Punk Rock"),
        .description = COMPOUND_STRING("Boosts sound moves by 30%\n& resists them by 50%."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_RECKLESS] =
    {
        .name = _("Reckless"),
        .description = COMPOUND_STRING("Boosts moves with recoil\nby 20%."),
        .aiRating = 6,
    },

    [ABILITY_YOKED] =
    {
        .name = _("Triage"),
        .description = COMPOUND_STRING("Gives +3 priority & \n30% boost to egg moves."),
        .aiRating = 7,
    },

    [ABILITY_LINGUIST] =
    {
        .name = _("Linguist"),
        .description = COMPOUND_STRING("Doubles damage of Tongue moves."),
        .aiRating = 6,
    },


    // Boost Stat when status.
    // Variant:
    //  - Poison
    //      - Atk       => Toxic Boost
    //  - Burn
    //      - Sp Atk    => Flare Boost
    //  - Any Status1
    //      - Atk       => Guts
    //      - Speed     => Quick Feet
    //      - Defense   => Marvel Scale
    [ABILITY_TOXIC_BOOST] =
    {
        .name = _("Toxic Boost"),
        .description = COMPOUND_STRING("Boosts Attack by 50%\nif poisoned."),
        .aiRating = 6,
    },
    
    [ABILITY_FLARE_BOOST] =
    {
        .name = _("Flare Boost"),
        .description = COMPOUND_STRING("Boosts Sp. Atk by 50%\nif burned."),
        .aiRating = 5,
    },

    [ABILITY_GUTS] =
    {
        .name = _("Guts"),
        .description = COMPOUND_STRING("Boosts Attack by 50%\nif statused."),
        .aiRating = 6,
    },

    [ABILITY_QUICK_FEET] =
    {
        .name = _("Quick Feet"),
        .description = COMPOUND_STRING("Doubles Speed if statused."),
        .aiRating = 5,
    },

    [ABILITY_MARVEL_SCALE] =
    {
        .name = _("Marvel Scale"),
        .description = COMPOUND_STRING("Boosts Defense by 50%\nif statused."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    // Unconditional Double Stat
    // Variants
    //  - Atk    => Huge Power, Pure Power
    //  - Sp Atk => Feline Prowess
    [ABILITY_HUGE_POWER] =
    {
        .name = _("Huge Power"),
        .description = COMPOUND_STRING("Doubles Attack."),
        .aiRating = 10,
    },

    [ABILITY_PURE_POWER] =
    {
        .name = _("Pure Power"),
        .description = COMPOUND_STRING("Doubles Attack."),
        .aiRating = 10,
    },

    [ABILITY_FELINE_PROWESS] =
    {
        .name = _("Feline Prowess"),
        .description = COMPOUND_STRING("Doubles Sp. Atk."),
        .aiRating = 10,
    },

    // Increase Priority to X Type Moves
    // Variants:
    //  - Grass    => 
    //  - Fire     => Blazing Soul
    //  - Water    => 
    //  - Bug      => 
    //  - Normal   => 
    //  - Electric => 
    //  - Ice      => 
    //  - Fighting => 
    //  - Poison   => 
    //  - Ground   => 
    //  - Flying   => Gale Wings
    //  - Psychic  => 
    //  - Rock     => 
    //  - Ghost    => 
    //  - Dragon   => Drake Momentum
    //  - Dark     => 
    //  - Steel    => 
    //  - Fairy    => 

    [ABILITY_BLAZING_SOUL] =
    {
        .name = _("Blazing Soul"),
        .description = COMPOUND_STRING("Gives +1 priority to\nFire moves at full HP."),
        .aiRating = 6,
    },

    [ABILITY_GALE_WINGS] =
    {
        .name = _("Gale Wings"),
        .description = COMPOUND_STRING("Gives +1 priority to\nFlying moves at full HP."),
        .aiRating = 6,
    },

    [ABILITY_DRAKE_MOMENTUM] =
    {
        .name = _("Drake Momentum"),
        .description = COMPOUND_STRING("Gives +1 priority to\nDragon moves at full HP."),
        .aiRating = 6,
    },

    // Echo Hit Abilities
    // Variants:
    // - General  => Parental Bond
    // - Punching => Raging Boxer
    // - Sound    => Wistful Echo
    [ABILITY_PARENTAL_BOND] =
    {
        .name = _("Parental Bond"),
        .description = COMPOUND_STRING("Moves hit a second time\nfor 25% damage."),
        .aiRating = 10,
    },

    [ABILITY_RAGING_BOXER] =
    {
        .name = _("Raging Boxer"),
        .description = COMPOUND_STRING("Punching Moves hit a second time\nfor 50% damage."),
        .aiRating = 10,
    },

    [ABILITY_WISTFUL_ECHO] =
    {
        .name = _("Wistful Echo"),
        .description = COMPOUND_STRING("Sound Moves hit a second time\nfor 50% damage."),
        .aiRating = 10,
    },

    // Type Immunity
    // Variants:
    //  - Grass    => ???
    //  - Fire     => ???
    //  - Water    => ???
    //  - Bug      => ???
    //  - Normal   => ???
    //  - Electric => ???
    //  - Ice      => ???
    //  - Fighting => ???
    //  - Poison   => ???
    //  - Ground   => ???
    //  - Flying   => ???
    //  - Psychic  => ???
    //  - Rock     => Mountaineer
    //  - Ghost    => ???
    //  - Dragon   => ???
    //  - Dark     => ???
    //  - Steel    => ???
    //  - Fairy    => ???
    [ABILITY_MOUNTAINEER] =
    {
        .name = _("Mountaineer"),
        .description = COMPOUND_STRING("Immune to Rock attacks and Stealth rocks.."),
        .aiRating = 1,
    },

    // Boost Own and Ally's X type attacks.
    // Variants
    //  - Water => Emperor's Presence (30%)
    //  - Steel => Steely Spirit (50%), Emperor's Presence (30%)
    [ABILITY_STEELY_SPIRIT] =
    {
        .name = _("Steely Spirit"),
        .description = COMPOUND_STRING("Boosts own and ally's\nSteel-type moves by 50%."),
        .aiRating = 2,
    },

    [ABILITY_EMPERORS_PRESENCE] =
    {
        .name = _("Emperor's Presence"),
        .description = COMPOUND_STRING("Boosts own and ally's\nWater & Steel-type moves by 30%."),
        .aiRating = 2,
    },

    // Boost Own X type Attacks
        //  - Grass    => ???
    //  - Fire     => Fire Mane
    //  - Water    => ???
    //  - Bug      => ???
    //  - Normal   => ???
    //  - Electric => Transistor
    //  - Ice      => Cold Snap
    //  - Fighting => ???
    //  - Poison   => ???
    //  - Ground   => ???
    //  - Flying   => ???
    //  - Psychic  => ???
    //  - Rock     => ???
    //  - Ghost    => ???
    //  - Dragon   => Dragon's Maw
    //  - Dark     => ???
    //  - Steel    => Steelworker
    //  - Fairy    => ???
    
    [ABILITY_FIRE_MANE] =
    {
        .name = _("Fire Mane"),
        .description = COMPOUND_STRING("Powers of Fire-type\nmoves by 50%."),
        .aiRating = 6,
    },

    [ABILITY_TRANSISTOR] =
    {
        .name = _("Transistor"),
        .description = COMPOUND_STRING("Powers up Electric-type\nmoves by 50%."),
        .aiRating = 6,
    },

    [ABILITY_DRAGONS_MAW] =
    {
        .name = _("Dragon's Maw"),
        .description = COMPOUND_STRING("Powers up Dragon-type\nmoves by 50%."),
        .aiRating = 6,
    },

    [ABILITY_ROCKY_PAYLOAD] =
    {
        .name = _("Rocky Payload"),
        .description = COMPOUND_STRING("Powers of Rock-type\nmoves by 50%."),
        .aiRating = 6,
    },

    [ABILITY_STEELWORKER] =
    {
        .name = _("Steelworker"),
        .description = COMPOUND_STRING("Powers of Steel-type\nmoves by 50%."),
        .aiRating = 6,
    },

    [ABILITY_COLD_SNAP] =
    {
        .name = _("Cold Snap"),
        .description = COMPOUND_STRING("Powers of Ice-type\nmoves by 50%."),
        .aiRating = 6,
    },


    // Ate/Ize Abilities
    // Variants:
    //  - Grass    => Pollinate
    //  - Fire     => Conflagrate
    //  - Water    => Moisturize
    //  - Bug      => Pupate
    //  - Normal   => Normalize
    //  - Electric => Galvanize
    //  - Ice      => Refrigerate
    //  - Fighting => Exercize
    //  - Poison   => Contaminate
    //  - Ground   => Escavate
    //  - Flying   => Aerilate
    //  - Psychic  => Prophesize
    //  - Rock     => Mineralize
    //  - Ghost    => Enervate
    //  - Dragon   => Dragonize
    //  - Dark     => Terrorize
    //  - Steel    => Metallicize
    //  - Fairy    => Pixilate

    [ABILITY_POLLINATE] =
    {
        .name = _("Pollinate"),
        .description = COMPOUND_STRING("Normal moves become Grass\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_CONFLAGRATE] =
    {
        .name = _("Conflagrate"),
        .description = COMPOUND_STRING("Normal moves become Fire\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_MOISTURIZE] =
    {
        .name = _("Moisturize"),
        .description = COMPOUND_STRING("Normal moves become Water\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_PUPATE] =
    {
        .name = _("Pupate"),
        .description = COMPOUND_STRING("Normal moves become Bug\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_NORMALIZE] =
    {
        .name = _("Normalize"),
        .description = COMPOUND_STRING("Moves become Normal\n& boosted by 20%."),
        .aiRating = -1,
    },

    [ABILITY_GALVANIZE] =
    {
        .name = _("Galvanize"),
        .description = COMPOUND_STRING("Normal moves become Electric\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_REFRIGERATE] =
    {
        .name = _("Refrigerate"),
        .description = COMPOUND_STRING("Normal moves become Ice\n& boosted by 20%."),
        .aiRating = 8,
    },
    
    [ABILITY_EXERCIZE] =
    {
        .name = _("Exercize"),
        .description = COMPOUND_STRING("Normal moves become Fighting\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_CONTAMINATE] =
    {
        .name = _("Contaminate"),
        .description = COMPOUND_STRING("Normal moves become Poison\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_ESCAVATE] =
    {
        .name = _("Escavate"),
        .description = COMPOUND_STRING("Normal moves become Ground\n& boosted by 20%."),
        .aiRating = 8,
    },
    
    [ABILITY_AERILATE] =
    {
        .name = _("Aerilate"),
        .description = COMPOUND_STRING("Normal moves become Flying\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_PROPHESIZE] =
    {
        .name = _("Prophasize"),
        .description = COMPOUND_STRING("Normal moves become Psychic\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_MINERALIZE] =
    {
        .name = _("Mineralize"),
        .description = COMPOUND_STRING("Normal moves become Rock\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_ENERVATE] =
    {
        .name = _("Enervate"),
        .description = COMPOUND_STRING("Normal moves become Ghost\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_DRAGONIZE] =
    {
        .name = _("Dragonize"),
        .description = COMPOUND_STRING("Normal moves become Dragon\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_TERRORIZE] =
    {
        .name = _("Terrorize"),
        .description = COMPOUND_STRING("Normal moves become Dark\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_METALLICIZE] =
    {
        .name = _("Metallicize"),
        .description = COMPOUND_STRING("Normal moves become Metal\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_PIXILATE] =
    {
        .name = _("Pixilate"),
        .description = COMPOUND_STRING("Normal moves become Fairy\n& boosted by 20%."),
        .aiRating = 8,
    },

    // In a Pinch/Boost type when HP Low Abilities
    // Variants:
    //  - Grass    => Overgrow
    //  - Fire     => Blaze
    //  - Water    => Torrent
    //  - Bug      => Swarm
    //  - Normal   => Adrenaline
    //  - Electric => Volt
    //  - Ice      => Subzero
    //  - Fighting => Underdog
    //  - Poison   => Infection
    //  - Ground   => Fault Line
    //  - Flying   => Flock
    //  - Psychic  => Revelation
    //  - Rock     => Sedimentary
    //  - Ghost    => Haunt
    //  - Dragon   => Mythological
    //  - Dark     => Eclipse
    //  - Steel    => Temper
    //  - Fairy    => Enchant
    [ABILITY_OVERGROW] =
    {
        .name = _("Overgrow"),
        .description = COMPOUND_STRING("Boosts Grass moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_BLAZE] =
    {
        .name = _("Blaze"),
        .description = COMPOUND_STRING("Boosts Fire moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_TORRENT] =
    {
        .name = _("Torrent"),
        .description = COMPOUND_STRING("Boosts Water moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_SWARM] =
    {
        .name = _("Swarm"),
        .description = COMPOUND_STRING("Boosts Bug moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_ADRENALINE] =
    {
        .name = _("Adrenaline"),
        .description = COMPOUND_STRING("Boosts Normal moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_VOLT] =
    {
        .name = _("Overgrow"),
        .description = COMPOUND_STRING("Boosts Electric moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_SUBZERO] =
    {
        .name = _("Subzero"),
        .description = COMPOUND_STRING("Boosts Ice moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_UNDERDOG] =
    {
        .name = _("Underdog"),
        .description = COMPOUND_STRING("Boosts Fighting moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_INFECTION] =
    {
        .name = _("Infection"),
        .description = COMPOUND_STRING("Boosts Poison moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_FAULT_LINE] =
    {
        .name = _("Fault Line"),
        .description = COMPOUND_STRING("Boosts Ground moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_FLOCK] =
    {
        .name = _("Flock"),
        .description = COMPOUND_STRING("Boosts Flying moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_REVELATION] =
    {
        .name = _("Revelation"),
        .description = COMPOUND_STRING("Boosts Psychic moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_SEDIMENTARY] =
    {
        .name = _("Sedimentary"),
        .description = COMPOUND_STRING("Boosts Rock moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_HAUNT] =
    {
        .name = _("Haunt"),
        .description = COMPOUND_STRING("Boosts Ghost moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_MYTHOLOGICAL] =
    {
        .name = _("Mythological"),
        .description = COMPOUND_STRING("Boosts Dragon moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_ECLIPSE] =
    {
        .name = _("Eclipse"),
        .description = COMPOUND_STRING("Boosts Dark moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_TEMPER] =
    {
        .name = _("Temper"),
        .description = COMPOUND_STRING("Boosts Steel moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_ENCHANT] =
    {
        .name = _("Enchant"),
        .description = COMPOUND_STRING("Boosts Fairy moves by 50%\nat 1/3 or less HP."),
        .aiRating = 5,
    },


    // Ogrepon Mask Abilities

    [ABILITY_EMBODY_ASPECT_TEAL_MASK] =
    {
        .name = _("Embody Aspect"),
        .description = COMPOUND_STRING("Raises Speed."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK] =
    {
        .name = _("Embody Aspect"),
        .description = COMPOUND_STRING("Raises Attack."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_WELLSPRING_MASK] =
    {
        .name = _("Embody Aspect"),
        .description = COMPOUND_STRING("Raises Sp. Def."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK] =
    {
        .name = _("Embody Aspect"),
        .description = COMPOUND_STRING("Raises Defense."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    // Trapping Abilities

    [ABILITY_MAGNET_PULL] =
    {
        .name = _("Magnet Pull"),
        .description = COMPOUND_STRING("Traps Steel-type foes."),
        .aiRating = 9,
    },

    [ABILITY_SHADOW_TAG] =
    {
        .name = _("Shadow Tag"),
        .description = COMPOUND_STRING("Prevents the foe's escape."),
        .aiRating = 10,
    },

    [ABILITY_ARENA_TRAP] =
    {
        .name = _("Arena Trap"),
        .description = COMPOUND_STRING("Prevents fleeing."),
        .aiRating = 9,
    },

    // Not Implemented: Allows escape from trapping
    [ABILITY_RUN_AWAY] =
    {
        .name = _("Run Away"),
        .description = COMPOUND_STRING("Enables a sure getaway."),
        .aiRating = 0,
    },

    // Weight Abilities
    [ABILITY_HEAVY_METAL] =
    {
        .name = _("Heavy Metal"),
        .description = COMPOUND_STRING("Doubles weight."),
        .aiRating = -1,
        .breakable = TRUE,
    },

    [ABILITY_LIGHT_METAL] =
    {
        .name = _("Light Metal"),
        .description = COMPOUND_STRING("Halves weight."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    // Form Change Abilities

    [ABILITY_IMPOSTER] =
    {
        .name = _("Imposter"),
        .description = COMPOUND_STRING("Transforms into the foe\nupon entering battle."),
        .aiRating = 9,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_ZERO_TO_HERO] =
    {
        .name = _("Zero to Hero"),
        .description = COMPOUND_STRING("Changes form on switch out."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_HUNGER_SWITCH] =
    {
        .name = _("Hunger Switch"),
        .description = COMPOUND_STRING("Changes form each turn."),
        .aiRating = 2,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_DISGUISE] =
    {
        .name = _("Disguise"),
        .description = COMPOUND_STRING("Takes one hit with no\ndamage."),
        .aiRating = 8,
        .breakable = TRUE,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_SHIELDS_DOWN] =
    {
        .name = _("Shields Down"),
        .description = COMPOUND_STRING("Shell breaks at half HP."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_STANCE_CHANGE] =
    {
        .name = _("Stance Change"),
        .description = COMPOUND_STRING("Switches form when\nattacking."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_GULP_MISSILE] =
    {
        .name = _("Gulp Missile"),
        .description = COMPOUND_STRING("If hit, spits prey from sea."),
        .aiRating = 3,
        .cantBeSwapped = FALSE,
        .cantBeCopied = FALSE,
        .cantBeTraced = FALSE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_ZEN_MODE] =
    {
        .name = _("Zen Mode"),
        .description = COMPOUND_STRING("Transforms into Zen Mode."),
        .aiRating = -1,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_BATTLE_BOND] =
    {
        .name = _("Battle Bond"),
        .description = COMPOUND_STRING("Changes form after a KO."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_SCHOOLING] =
    {
        .name = _("Schooling"),
        .description = COMPOUND_STRING("Forms a school when above\n25% HP."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_POWER_CONSTRUCT] =
    {
        .name = _("Power Construct"),
        .description = COMPOUND_STRING("Transforms to Complete form\nwhen below half HP."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_COMMANDER] =
    {
        .name = _("Commander"),
        .description = COMPOUND_STRING("Commands from ally Dondozo."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    // End Turn Abilities

    [ABILITY_SPEED_BOOST] =
    {
        .name = _("Speed Boost"),
        .description = COMPOUND_STRING("Speed raises every turn."),
        .aiRating = 9,
    },

    [ABILITY_SELF_SUFFICIENT] =
    {
        .name = _("Self Sufficient"),
        .description = COMPOUND_STRING("Recover 1/16 HP at\nend of turn."),
        .aiRating = 9,
    },


    // On Switch In Abilties

    [ABILITY_INTIMIDATE] =
    {
        .name = _("Intimidate"),
        .description = COMPOUND_STRING("Lowers foes' Atk on entry."),
        .aiRating = 7,
    },

    [ABILITY_SUPERSWEET_SYRUP] =
    {
        .name = _("Supersweet Syrup"),
        .description = COMPOUND_STRING("Lowers foes' evasion once."),
        .aiRating = 5,
    },

    // On KO Abilities

    [ABILITY_CHILLING_NEIGH] =
    {
        .name = _("Chilling Neigh"),
        .description = COMPOUND_STRING("Boosts Attack after knocking\nout a Pokémon."),
        .aiRating = 7,
    },

    [ABILITY_GRIM_NEIGH] =
    {
        .name = _("Grim Neigh"),
        .description = COMPOUND_STRING("Boosts SpAtk after knocking\nout a Pokémon."),
        .aiRating = 7,
    },

    [ABILITY_MOXIE] =
    {
        .name = _("Moxie"),
        .description = COMPOUND_STRING("Boosts Attack after knocking\nout a Pokémon."),
        .aiRating = 7,
    },

    [ABILITY_INNARDS_OUT] =
    {
        .name = _("Innards Out"),
        .description = COMPOUND_STRING("Fainting damages the foe\nequal to its last HP."),
        .aiRating = 5,
    },

    [ABILITY_BEAST_BOOST] =
    {
        .name = _("Beast Boost"),
        .description = COMPOUND_STRING("KOing a foe boosts\nits highest stat."),
        .aiRating = 7,
    },

    [ABILITY_AFTERMATH] =
    {
        .name = _("Aftermath"),
        .description = COMPOUND_STRING("Fainting damages the foe by\n1/4 its max HP."),
        .aiRating = 5,
    },

    [ABILITY_SOUL_HEART] =
    {
        .name = _("Soul-Heart"),
        .description = COMPOUND_STRING("Boosts Sp. Atk every time a\nPokémon faints."),
        .aiRating = 7,
    },

    // Block Priority Moves

    [ABILITY_QUEENLY_MAJESTY] =
    {
        .name = _("Queenly Majesty"),
        .description = COMPOUND_STRING("Allies block priority moves."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_ARMOR_TAIL] =
    {
        .name = _("Armor Tail"),
        .description = COMPOUND_STRING("Protects from priority moves."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_DAZZLING] =
    {
        .name = _("Dazzling"),
        .description = COMPOUND_STRING("Allies block priority moves."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_TIME_STOP] =
    {
        .name = _("Time Stop"),
        .description = COMPOUND_STRING("Protects from priority moves."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    // Increase Priority

    [ABILITY_TRIAGE] =
    {
        .name = _("Triage"),
        .description = COMPOUND_STRING("Gives +3 priority to \nhealing moves."),
        .aiRating = 7,
    },


    // Heal on Status
    [ABILITY_POISON_HEAL] =
    {
        .name = _("Poison Heal"),
        .description = COMPOUND_STRING("Restores 1/8 max HP\nif poisoned."),
        .aiRating = 8,
    },

    [ABILITY_CAT_NAP] =
    {
        .name = _("Cat Nap"),
        .description = COMPOUND_STRING("Restores 1/8 max HP\nif asleep."),
        .aiRating = 8,
    },

    // Misc

    [ABILITY_WATER_BUBBLE] =
    {
        .name = _("Water Bubble"),
        .description = COMPOUND_STRING("Doubles Water moves &\ntakes half from Fire moves."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_RAMPAGE] = 
    {
        .name = _("Rampage"),
        .description = COMPOUND_STRING("If the attack KOs, there is no recharge turn."),
    },


    // Combo Abilities

    [ABILITY_AS_ONE_ICE_RIDER] =
    {
        .name = _("As One"),
        .description = COMPOUND_STRING("Unnerve and Chilling Neigh."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_AS_ONE_SHADOW_RIDER] =
    {
        .name = _("As One"),
        .description = COMPOUND_STRING("Unnerve and Grim Neigh."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_EELEVATE] =
    {
        .name = _("Eelevate"),
        .description = COMPOUND_STRING("Levitate and Beast Boost."),
    },

    [ABILITY_MINDS_EYE] =
    {
        .name = _("Mind's Eye"),
        .description = COMPOUND_STRING("Keen Eye and Scrappy."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_PRIMAL_ARMOR] = 
    {
        .name = _("Primal Armor"),
        .description = COMPOUND_STRING("Weakens super effective moves\nby 50%."),
        .aiRating = 6,
    },

    [ABILITY_SPACE_TIME] = 
    {
        .name = _("Space-Time"),
        .description = COMPOUND_STRING("Pressure & Telepathy")
    },

    [ABILITY_LORD_OF_TIME] = 
    {
        .name = _("Lord of Time"),
        .description = COMPOUND_STRING("Time Stop & Primal Armor."),
    },

    [ABILITY_LORD_OF_SPACE] = 
    {
        .name = _("Lord of Space"),
        .description = COMPOUND_STRING("X and Primal Armor.")
    },

    [ABILITY_SWEET_DREAMS] = {
        .name = _("Sweet Dreams"),
        .description = COMPOUND_STRING("Comotose and Cat Nap.")
    },

    [ABILITY_TURBOBLAZE] =
    {
        .name = _("Turboblaze"),
        .description = COMPOUND_STRING("Mold Breaker + Fire Mane"),
        .aiRating = 7,
    },

    [ABILITY_TERAVOLT] =
    {
        .name = _("Teravolt"),
        .description = COMPOUND_STRING("Mold Breaker + Transistor"),
        .aiRating = 7,
    },

    // END SORTED

    [ABILITY_STENCH] =
    {
        .name = _("Stench"),
        .description = COMPOUND_STRING("Moves may cause flinching."),
        .aiRating = 1,
    },


    [ABILITY_BATTLE_ARMOR] =
    {
        .name = _("Battle Armor"),
        .description = COMPOUND_STRING("Blocks critical hits."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_STURDY] =
    {
        .name = _("Sturdy"),
        .description = COMPOUND_STRING("Negates 1-hit KO attacks."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DAMP] =
    {
        .name = _("Damp"),
        .description = COMPOUND_STRING("Prevents self-destruction."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_LIMBER] =
    {
        .name = _("Limber"),
        .description = COMPOUND_STRING("Prevents paralysis."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_STATIC] =
    {
        .name = _("Static"),
        .description = COMPOUND_STRING("May paralyze on contact."),
        .aiRating = 4,
    },

    [ABILITY_OBLIVIOUS] =
    {
        .name = _("Oblivious"),
        .description = COMPOUND_STRING(
        #if B_OBLIVIOUS_TAUNT >= GEN_6
            "Blocks Attract and Taunt."),
        #else
            "Prevents attraction."),
        #endif
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_COMPOUND_EYES] =
    {
        .name = _("Compound Eyes"),
        .description = COMPOUND_STRING("Boosts accuracy."),
        .aiRating = 7,
    },

    [ABILITY_INSOMNIA] =
    {
        .name = _("Insomnia"),
        .description = COMPOUND_STRING("Prevents sleep."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_COLOR_CHANGE] =
    {
        .name = _("Color Change"),
        .description = COMPOUND_STRING("Changes type to foe's move."),
        .aiRating = 2,
    },

    [ABILITY_IMMUNITY] =
    {
        .name = _("Immunity"),
        .description = COMPOUND_STRING("Prevents poisoning."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_SHIELD_DUST] =
    {
        .name = _("Shield Dust"),
        .description = COMPOUND_STRING("Prevents added effects and\nentry hazard damage."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_OWN_TEMPO] =
    {
        .name = _("Own Tempo"),
        .description = COMPOUND_STRING("Prevents confusion."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SUCTION_CUPS] =
    {
        .name = _("Suction Cups"),
        .description = COMPOUND_STRING("Can't be forced to switch."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_ROUGH_SKIN] =
    {
        .name = _("Rough Skin"),
        .description = COMPOUND_STRING("Damages foe on contact."),
        .aiRating = 6,
    },

    [ABILITY_EFFECT_SPORE] =
    {
        .name = _("Effect Spore"),
        .description = COMPOUND_STRING("Contact may psn/slp/par."),
        .aiRating = 4,
    },

    [ABILITY_SYNCHRONIZE] =
    {
        .name = _("Synchronize"),
        .description = COMPOUND_STRING("Passes on brn/par/psn."),
        .aiRating = 4,
    },

    [ABILITY_CLEAR_BODY] =
    {
        .name = _("Clear Body"),
        .description = COMPOUND_STRING("Stats can't be lowered."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_NATURAL_CURE] =
    {
        .name = _("Natural Cure"),
        .description = COMPOUND_STRING("Heals status upon switch."),
        .aiRating = 7,
    },

    [ABILITY_SERENE_GRACE] =
    {
        .name = _("Serene Grace"),
        .description = COMPOUND_STRING("Promotes added effects."),
        .aiRating = 8,
    },

    [ABILITY_ILLUMINATE] =
    {
        .name = _("Illuminate"),
        .description = COMPOUND_STRING("Accuracy can't be lowered and boosted by 20%."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_TRACE] =
    {
        .name = _("Trace"),
        .description = COMPOUND_STRING("Copies a foe's Ability."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POISON_POINT] =
    {
        .name = _("Poison Point"),
        .description = COMPOUND_STRING("May poison foe on contact."),
        .aiRating = 4,
    },

    [ABILITY_INNER_FOCUS] =
    {
        .name = _("Inner Focus"),
        .description = COMPOUND_STRING("Prevents flinching."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MAGMA_ARMOR] =
    {
        .name = _("Magma Armor"),
        .description = COMPOUND_STRING("Prevents frostbite."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_WATER_VEIL] =
    {
        .name = _("Water Veil"),
        .description = COMPOUND_STRING("Prevents burns."),
        .aiRating = 4,
        .breakable = TRUE,
    },



    [ABILITY_SOUNDPROOF] =
    {
        .name = _("Soundproof"),
        .description = COMPOUND_STRING("Avoids sound-based moves."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_PRESSURE] =
    {
        .name = _("Pressure"),
        .description = COMPOUND_STRING("Raises foe's PP usage."),
        .aiRating = 5,
    },

    [ABILITY_EARLY_BIRD] =
    {
        .name = _("Early Bird"),
        .description = COMPOUND_STRING("Awakens twice as fast."),
        .aiRating = 4,
    },

    [ABILITY_FLAME_BODY] =
    {
        .name = _("Flame Body"),
        .description = COMPOUND_STRING("May burn foe on contact."),
        .aiRating = 4,
    },

    

    [ABILITY_KEEN_EYE] =
    {
        .name = _("Keen Eye"),
        .description = COMPOUND_STRING("Accuracy can't be lowered."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_HYPER_CUTTER] =
    {
        .name = _("Hyper Cutter"),
        .description = COMPOUND_STRING("Attack can't be lowered."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PICKUP] =
    {
        .name = _("Pickup"),
        .description = COMPOUND_STRING("May pick up items."),
        .aiRating = 1,
    },

    [ABILITY_TRUANT] =
    {
        .name = _("Truant"),
        .description = COMPOUND_STRING("Moves only every two turns."),
        .aiRating = -2,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HUSTLE] =
    {
        .name = _("Hustle"),
        .description = COMPOUND_STRING("Trades accuracy for power."),
        .aiRating = 7,
    },

    [ABILITY_CUTE_CHARM] =
    {
        .name = _("Cute Charm"),
        .description = COMPOUND_STRING("May infatuate on contact."),
        .aiRating = 2,
    },

    [ABILITY_PLUS] =
    {
        .name = _("Plus"),
        .description =
        #if B_PLUS_MINUS_INTERACTION >= GEN_5
            COMPOUND_STRING("Ups Sp. Atk with Minus."),
        #else
            COMPOUND_STRING("Plus or Minus ups Sp. Atk."),
        #endif
        .aiRating = 0,
    },

    [ABILITY_MINUS] =
    {
        .name = _("Minus"),
        .description =
        #if B_PLUS_MINUS_INTERACTION >= GEN_5
            COMPOUND_STRING("Ups Sp. Atk with Plus."),
        #else
            COMPOUND_STRING("Plus or Minus ups Sp. Atk."),
        #endif
        .aiRating = 0,
    },

    [ABILITY_STICKY_HOLD] =
    {
        .name = _("Sticky Hold"),
        .description = COMPOUND_STRING("Held item can't be removed."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SHED_SKIN] =
    {
        .name = _("Shed Skin"),
        .description = COMPOUND_STRING("Has a 30% chance to heal\nits own status problem."),
        .aiRating = 7,
    },

    [ABILITY_LIQUID_OOZE] =
    {
        .name = _("Liquid Ooze"),
        .description = COMPOUND_STRING("Damages HP-draining foes."),
        .aiRating = 3,
    },

    [ABILITY_ROCK_HEAD] =
    {
        .name = _("Rock Head"),
        .description = COMPOUND_STRING("Prevents recoil damage."),
        .aiRating = 5,
    },

    [ABILITY_VITAL_SPIRIT] =
    {
        .name = _("Vital Spirit"),
        .description = COMPOUND_STRING("Prevents sleep."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_WHITE_SMOKE] =
    {
        .name = _("White Smoke"),
        .description = COMPOUND_STRING("Stats can't be lowered."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_SHELL_ARMOR] =
    {
        .name = _("Shell Armor"),
        .description = COMPOUND_STRING("Blocks critical hits."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_TANGLED_FEET] =
    {
        .name = _("Tangled Feet"),
        .description = COMPOUND_STRING("Boosts evasion if confused."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_RIVALRY] =
    {
        .name = _("Rivalry"),
        .description = COMPOUND_STRING("Boosts moves by 1.25x if\nfoe is of same gender."),
        .aiRating = 1,
    },

    [ABILITY_STEADFAST] =
    {
        .name = _("Steadfast"),
        .description = COMPOUND_STRING("Being flinched raises Speed."),
        .aiRating = 2,
    },

    [ABILITY_GLUTTONY] =
    {
        .name = _("Gluttony"),
        .description = COMPOUND_STRING("Eats Berries at half HP."),
        .aiRating = 3,
    },

    [ABILITY_ANGER_POINT] =
    {
        .name = _("Anger Point"),
        .description = COMPOUND_STRING("Maxes Attack after a\ncritical hit."),
        .aiRating = 4,
    },

    [ABILITY_UNBURDEN] =
    {
        .name = _("Unburden"),
        .description = COMPOUND_STRING("Doubles Speed if item\nis lost."),
        .aiRating = 7,
    },

    [ABILITY_SIMPLE] =
    {
        .name = _("Simple"),
        .description = COMPOUND_STRING("Doubles stat changes."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_DOWNLOAD] =
    {
        .name = _("Download"),
        .description = COMPOUND_STRING("Adjusts power based on\nthe foe's stats."),
        .aiRating = 7,
    },

    [ABILITY_ADAPTABILITY] =
    {
        .name = _("Adaptability"),
        .description = COMPOUND_STRING("Boosts same type attacks\nby 2x instead of 1.5x."),
        .aiRating = 8,
    },

    [ABILITY_SKILL_LINK] =
    {
        .name = _("Skill Link"),
        .description = COMPOUND_STRING("Multi-hit moves hit 5 times."),
        .aiRating = 7,
    },

    [ABILITY_SNIPER] =
    {
        .name = _("Sniper"),
        .description = COMPOUND_STRING("Critical hits deal 2.25x\ninstead of 1.5x."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_GUARD] =
    {
        .name = _("Magic Guard"),
        .description = COMPOUND_STRING("Only damaged by attacks."),
        .aiRating = 9,
    },

    [ABILITY_NO_GUARD] =
    {
        .name = _("No Guard"),
        .description = COMPOUND_STRING("Ensures that all moves hit."),
        .aiRating = 8,
    },

    [ABILITY_STALL] =
    {
        .name = _("Stall"),
        .description = COMPOUND_STRING("Always moves last."),
        .aiRating = -1,
    },

    [ABILITY_TECHNICIAN] =
    {
        .name = _("Technician"),
        .description = COMPOUND_STRING("Boosts moves with less\nthan 60 BP by 50%."),
        .aiRating = 8,
    },


    [ABILITY_KLUTZ] =
    {
        .name = _("Klutz"),
        .description = COMPOUND_STRING("Can't use held items."),
        .aiRating = -1,
    },

    [ABILITY_MOLD_BREAKER] =
    {
        .name = _("Mold Breaker"),
        .description = COMPOUND_STRING("Moves ignore most\nabilities."),
        .aiRating = 7,
    },

    [ABILITY_SUPER_LUCK] =
    {
        .name = _("Super Luck"),
        .description = COMPOUND_STRING("Increases critical-hit ratio by 1."),
        .aiRating = 3,
    },

    [ABILITY_ANTICIPATION] =
    {
        .name = _("Anticipation"),
        .description = COMPOUND_STRING("Senses dangerous moves."),
        .aiRating = 2,
    },

    [ABILITY_FOREWARN] =
    {
        .name = _("Forewarn"),
        .description = COMPOUND_STRING("Determines a foe's move."),
        .aiRating = 2,
    },

    [ABILITY_UNAWARE] =
    {
        .name = _("Unaware"),
        .description = COMPOUND_STRING("Ignores foes' stat changes."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_TINTED_LENS] =
    {
        .name = _("Tinted Lens"),
        .description = COMPOUND_STRING("Ups “not very effective”."),
        .aiRating = 7,
    },

    [ABILITY_FILTER] =
    {
        .name = _("Filter"),
        .description = COMPOUND_STRING("Weakens “supereffective”."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SLOW_START] =
    {
        .name = _("Slow Start"),
        .description = COMPOUND_STRING("Takes 5 turns to get going."),
        .aiRating = -2,
    },

    [ABILITY_SCRAPPY] =
    {
        .name = _("Scrappy"),
        .description = COMPOUND_STRING("Normal & Fight. hit Ghosts."),
        .aiRating = 6,
    },

    [ABILITY_SOLID_ROCK] =
    {
        .name = _("Solid Rock"),
        .description = COMPOUND_STRING("Weakens “supereffective”."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_HONEY_GATHER] =
    {
        .name = _("Honey Gather"),
        .description = COMPOUND_STRING("May gather Honey."),
        .aiRating = 0,
    },

    [ABILITY_FRISK] =
    {
        .name = _("Frisk"),
        .description = COMPOUND_STRING("Checks a foe's held item."),
        .aiRating = 3,
    },

    [ABILITY_MULTITYPE] =
    {
        .name = _("Multitype"),
        .description = COMPOUND_STRING("Matches Plate or Z-Crystal."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_BAD_DREAMS] =
    {
        .name = _("Bad Dreams"),
        .description = COMPOUND_STRING("Damages sleeping foes."),
        .aiRating = 4,
    },

    [ABILITY_PICKPOCKET] =
    {
        .name = _("Pickpocket"),
        .description = COMPOUND_STRING("Steals foe's item if hit."),
        .aiRating = 3,
    },

    [ABILITY_SHEER_FORCE] =
    {
        .name = _("Sheer Force"),
        .description = COMPOUND_STRING("Trades effects for power."),
        .aiRating = 8,
    },

    [ABILITY_CONTRARY] =
    {
        .name = _("Contrary"),
        .description = COMPOUND_STRING("Reverses stat changes."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_UNNERVE] =
    {
        .name = _("Unnerve"),
        .description = COMPOUND_STRING("Foes can't eat Berries."),
        .aiRating = 3,
    },

    [ABILITY_DEFIANT] =
    {
        .name = _("Defiant"),
        .description = COMPOUND_STRING("Stat-lowering ups Attack."),
        .aiRating = 5,
    },

    [ABILITY_DEFEATIST] =
    {
        .name = _("Defeatist"),
        .description = COMPOUND_STRING("Halves offenses at 1/3 HP."),
        .aiRating = -1,
    },

    [ABILITY_CURSED_BODY] =
    {
        .name = _("Cursed Body"),
        .description = COMPOUND_STRING("Contact may disable move."),
        .aiRating = 4,
    },

    [ABILITY_HEALER] =
    {
        .name = _("Healer"),
        .description = COMPOUND_STRING("May cure ally's status."),
        .aiRating = 0,
    },

    [ABILITY_FRIEND_GUARD] =
    {
        .name = _("Friend Guard"),
        .description = COMPOUND_STRING("Reduces damage to allies."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_WEAK_ARMOR] =
    {
        .name = _("Weak Armor"),
        .description = COMPOUND_STRING("Being hit by phyiscal moves\ndrops Def but Raises Speed."),
        .aiRating = 2,
    },

    [ABILITY_MULTISCALE] =
    {
        .name = _("Multiscale"),
        .description = COMPOUND_STRING("Halves damage at full HP."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_HARVEST] =
    {
        .name = _("Harvest"),
        .description = COMPOUND_STRING("50% chance to restore\na used Berry."),
        .aiRating = 5,
    },

    [ABILITY_TELEPATHY] =
    {
        .name = _("Telepathy"),
        .description = COMPOUND_STRING("Protects from allies' moves."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_MOODY] =
    {
        .name = _("Moody"),
        .description = COMPOUND_STRING("Stats change gradually."),
        .aiRating = 10,
    },

    [ABILITY_OVERCOAT] =
    {
        .name = _("Overcoat"),
        .description = COMPOUND_STRING("Immune to weather and powder."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_POISON_TOUCH] =
    {
        .name = _("Poison Touch"),
        .description = COMPOUND_STRING("30% chance to poison foe\non contact."),
        .aiRating = 4,
    },

    [ABILITY_REGENERATOR] =
    {
        .name = _("Regenerator"),
        .description = COMPOUND_STRING("Heals 1/3 HP when\nswitching out."),
        .aiRating = 8,
    },

    [ABILITY_BIG_PECKS] =
    {
        .name = _("Big Pecks"),
        .description = COMPOUND_STRING("Defense can't be lowered."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_WONDER_SKIN] =
    {
        .name = _("Wonder Skin"),
        .description = COMPOUND_STRING("May avoid status moves."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANALYTIC] =
    {
        .name = _("Analytic"),
        .description = COMPOUND_STRING("Moving last boosts power\nby 30%."),
        .aiRating = 5,
    },

    [ABILITY_ILLUSION] =
    {
        .name = _("Illusion"),
        .description = COMPOUND_STRING("Enters disguised and deals\n30% more damage."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_INFILTRATOR] =
    {
        .name = _("Infiltrator"),
        .description = COMPOUND_STRING("Passes through barriers."),
        .aiRating = 6,
    },

    [ABILITY_MUMMY] =
    {
        .name = _("Mummy"),
        .description = COMPOUND_STRING("Ability spreads on contact."),
        .aiRating = 5,
    },

    [ABILITY_RATTLED] =
    {
        .name = _("Rattled"),
        .description = COMPOUND_STRING("Raises Speed when scared."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_BOUNCE] =
    {
        .name = _("Magic Bounce"),
        .description = COMPOUND_STRING("Reflects status moves."),
        .aiRating = 9,
        .breakable = TRUE,
    },



    [ABILITY_PRANKSTER] =
    {
        .name = _("Prankster"),
        .description = COMPOUND_STRING("Status moves have priority."),
        .aiRating = 8,
    },

    [ABILITY_IRON_BARBS] =
    {
        .name = _("Iron Barbs"),
        .description = COMPOUND_STRING("Damages foe on contact."),
        .aiRating = 6,
    },

    

    [ABILITY_VICTORY_STAR] =
    {
        .name = _("Victory Star"),
        .description = COMPOUND_STRING("Boosts allies' accuracy."),
        .aiRating = 6,
    },

    [ABILITY_AROMA_VEIL] =
    {
        .name = _("Aroma Veil"),
        .description = COMPOUND_STRING("Allies can't be move-bound."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_FLOWER_VEIL] =
    {
        .name = _("Flower Veil"),
        .description = COMPOUND_STRING("Mist for Grass-type allies."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_CHEEK_POUCH] =
    {
        .name = _("Cheek Pouch"),
        .description = COMPOUND_STRING("Eating a Berry restores HP."),
        .aiRating = 4,
    },

    [ABILITY_PROTEAN] =
    {
        .name = _("Protean"),
        .description = COMPOUND_STRING("Changes type to used move."),
        .aiRating = 8,
    },

    [ABILITY_FUR_COAT] =
    {
        .name = _("Fur Coat"),
        .description = COMPOUND_STRING("Halves physical damage."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MAGICIAN] =
    {
        .name = _("Magician"),
        .description = COMPOUND_STRING("Steals the foe's held item."),
        .aiRating = 3,
    },

    [ABILITY_BULLETPROOF] =
    {
        .name = _("Bulletproof"),
        .description = COMPOUND_STRING("Blocks ball and bomb moves."),
        .breakable = TRUE,
        .aiRating = 7,
    },

    [ABILITY_COMPETITIVE] =
    {
        .name = _("Competitive"),
        .description = COMPOUND_STRING("Stat-lowering ups Sp. Atk."),
        .aiRating = 5,
    },

    

    [ABILITY_SWEET_VEIL] =
    {
        .name = _("Sweet Veil"),
        .description = COMPOUND_STRING("Protects allies from sleep."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    

    [ABILITY_SYMBIOSIS] =
    {
        .name = _("Symbiosis"),
        .description = COMPOUND_STRING("Passes held item to ally."),
        .aiRating = 0,
    },

    [ABILITY_GOOEY] =
    {
        .name = _("Gooey"),
        .description = COMPOUND_STRING("Contact lowers foe's Speed."),
        .aiRating = 5,
    },

    

    [ABILITY_DARK_AURA] =
    {
        .name = _("Dark Aura"),
        .description = COMPOUND_STRING("Ups all Dark-type moves."),
        .aiRating = 6,
        .breakable = B_UPDATED_ABILITY_DATA < GEN_8,
    },

    [ABILITY_FAIRY_AURA] =
    {
        .name = _("Fairy Aura"),
        .description = COMPOUND_STRING("Ups all Fairy-type moves."),
        .aiRating = 6,
        .breakable = B_UPDATED_ABILITY_DATA < GEN_8,
    },

    [ABILITY_AURA_BREAK] =
    {
        .name = _("Aura Break"),
        .description = COMPOUND_STRING("Reverses Aura Abilities."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_STAMINA] =
    {
        .name = _("Stamina"),
        .description = COMPOUND_STRING("Raises Defense when hit."),
        .aiRating = 6,
    },

    [ABILITY_WIMP_OUT] =
    {
        .name = _("Wimp Out"),
        .description = COMPOUND_STRING("Switches out at half HP."),
        .aiRating = 3,
    },

    [ABILITY_EMERGENCY_EXIT] =
    {
        .name = _("Emergency Exit"),
        .description = COMPOUND_STRING("Switches out at half HP."),
        .aiRating = 3,
    },

    [ABILITY_MERCILESS] =
    {
        .name = _("Merciless"),
        .description = COMPOUND_STRING("Critical hits poisoned foes."),
        .aiRating = 4,
    },


    [ABILITY_STAKEOUT] =
    {
        .name = _("Stakeout"),
        .description = COMPOUND_STRING("Stronger on foe's switch in."),
        .aiRating = 6,
    },

    [ABILITY_BERSERK] =
    {
        .name = _("Berserk"),
        .description = COMPOUND_STRING("Raises SpAtk if hit lowers\nit below half HP."),
        .aiRating = 5,
    },

    [ABILITY_LONG_REACH] =
    {
        .name = _("Long Reach"),
        .description = COMPOUND_STRING("Never makes contact."),
        .aiRating = 3,
    },

    [ABILITY_CORROSION] =
    {
        .name = _("Corrosion"),
        .description = COMPOUND_STRING("Poison can hit\nSteel types."),
        .aiRating = 5,
    },

    [ABILITY_COMATOSE] =
    {
        .name = _("Comatose"),
        .description = COMPOUND_STRING("Always drowsing."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_DANCER] =
    {
        .name = _("Dancer"),
        .description = COMPOUND_STRING("Dances along with others."),
        .aiRating = 5,
    },

    [ABILITY_BATTERY] =
    {
        .name = _("Battery"),
        .description = COMPOUND_STRING("Boosts ally's Sp. Atk."),
        .aiRating = 0,
    },

    [ABILITY_FLUFFY] =
    {
        .name = _("Fluffy"),
        .description = COMPOUND_STRING("Halves contact, heat hurts."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    

    [ABILITY_TANGLING_HAIR] =
    {
        .name = _("Tangling Hair"),
        .description = COMPOUND_STRING("Contact lowers foe's Speed."),
        .aiRating = 5,
    },

    [ABILITY_RECEIVER] =
    {
        .name = _("Receiver"),
        .description = COMPOUND_STRING("Copies fainted ally Ability."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POWER_OF_ALCHEMY] =
    {
        .name = _("Power Of Alchemy"),
        .description = COMPOUND_STRING("Copies fainted ally Ability."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_RKS_SYSTEM] =
    {
        .name = _("RKS System"),
        .description = COMPOUND_STRING("Matches held memory's type."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_FULL_METAL_BODY] =
    {
        .name = _("Full Metal Body"),
        .description = COMPOUND_STRING("Stats can't be lowered."),
        .aiRating = 4,
    },

    [ABILITY_SHADOW_SHIELD] =
    {
        .name = _("Shadow Shield"),
        .description = COMPOUND_STRING("Reduces damage at full HP."),
        .aiRating = 8,
    },

    [ABILITY_PRISM_ARMOR] =
    {
        .name = _("Prism Armor"),
        .description = COMPOUND_STRING("Weakens “supereffective”."),
        .aiRating = 6,
    },

    [ABILITY_NEUROFORCE] =
    {
        .name = _("Neuroforce"),
        .description = COMPOUND_STRING("Ups “supereffective” hits."),
        .aiRating = 6,
    },

    [ABILITY_INTREPID_SWORD] =
    {
        .name = _("Intrepid Sword"),
        .description = COMPOUND_STRING(
        #if B_INTREPID_SWORD >= GEN_9
            "Ups Attack on entry once."),
        #else
            "Raises Attack on entry."),
        #endif
        .aiRating = 3,
    },

    [ABILITY_DAUNTLESS_SHIELD] =
    {
        .name = _("Dauntless Shield"),
        .description = COMPOUND_STRING(
        #if B_DAUNTLESS_SHIELD >= GEN_9
            "Ups Defense on entry once."),
        #else
            "Raises Defense on entry."),
        #endif
        .aiRating = 3,
    },

    [ABILITY_LIBERO] =
    {
        .name = _("Libero"),
        .description = COMPOUND_STRING("Changes type to used move."),
    },

    [ABILITY_BALL_FETCH] =
    {
        .name = _("Ball Fetch"),
        .description = COMPOUND_STRING("Fetches first failed Ball."),
        .aiRating = 0,
    },

    [ABILITY_COTTON_DOWN] =
    {
        .name = _("Cotton Down"),
        .description = COMPOUND_STRING("Lowers others' Speed if hit."),
        .aiRating = 3,
    },

    [ABILITY_PROPELLER_TAIL] =
    {
        .name = _("Propeller Tail"),
        .description = COMPOUND_STRING("Ignores foes' move-drawing."),
        .aiRating = 2,
    },

    [ABILITY_MIRROR_ARMOR] =
    {
        .name = _("Mirror Armor"),
        .description = COMPOUND_STRING("Bounces stat-lowering."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    

    [ABILITY_STALWART] =
    {
        .name = _("Stalwart"),
        .description = COMPOUND_STRING("Ignores foes' move-drawing."),
        .aiRating = 2,
    },

    [ABILITY_ICE_SCALES] =
    {
        .name = _("Ice Scales"),
        .description = COMPOUND_STRING("Halves special damage."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_RIPEN] =
    {
        .name = _("Ripen"),
        .description = COMPOUND_STRING("Doubles Berry effects."),
        .aiRating = 4,
    },

    [ABILITY_POWER_SPOT] =
    {
        .name = _("Power Spot"),
        .description = COMPOUND_STRING("Powers up ally's moves."),
        .aiRating = 2,
    },

    [ABILITY_SCREEN_CLEANER] =
    {
        .name = _("Screen Cleaner"),
        .description = COMPOUND_STRING("Nullifies barriers on entry."),
        .aiRating = 3,
    },

    [ABILITY_PERISH_BODY] =
    {
        .name = _("Perish Body"),
        .description = COMPOUND_STRING("Foe faints in 3 turns if hit."),
        .aiRating = -1,
    },

    [ABILITY_WANDERING_SPIRIT] =
    {
        .name = _("Wandering Spirit"),
        .description = COMPOUND_STRING("Swaps Abilities on contact."),
        .aiRating = 2,
    },

    [ABILITY_GORILLA_TACTICS] =
    {
        .name = _("Gorilla Tactics"),
        .description = COMPOUND_STRING("Ups Attack and locks move."),
        .aiRating = 4,
    },

    [ABILITY_NEUTRALIZING_GAS] =
    {
        .name = _("Neutralizing Gas"),
        .description = COMPOUND_STRING("Nullifies others' Abilities."),
        .aiRating = 5,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_PASTEL_VEIL] =
    {
        .name = _("Pastel Veil"),
        .description = COMPOUND_STRING("Allies can't be poisoned."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    

    [ABILITY_QUICK_DRAW] =
    {
        .name = _("Quick Draw"),
        .description = COMPOUND_STRING("Occasionally moves first."),
        .aiRating = 4,
    },

    [ABILITY_UNSEEN_FIST] =
    {
        .name = _("Unseen Fist"),
        .description = COMPOUND_STRING("Contact evades protection."),
        .aiRating = 6,
    },

    [ABILITY_CURIOUS_MEDICINE] =
    {
        .name = _("Curious Medicine"),
        .description = COMPOUND_STRING("Removes ally stat changes."),
        .aiRating = 3,
    },

    [ABILITY_LINGERING_AROMA] =
    {
        .name = _("Lingering Aroma"),
        .description = COMPOUND_STRING("Ability spreads on contact."),
        .aiRating = 5,
    },

    [ABILITY_ANGER_SHELL] =
    {
        .name = _("Anger Shell"),
        .description = COMPOUND_STRING("Changes stats at half HP."),
        .aiRating = 3,
    },

    [ABILITY_PURIFYING_SALT] =
    {
        .name = _("Purifying Salt"),
        .description = COMPOUND_STRING("Guards from status & Ghost."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_WIND_RIDER] =
    {
        .name = _("Wind Rider"),
        .description = COMPOUND_STRING("Wind moves raise Attack."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_GUARD_DOG] =
    {
        .name = _("Guard Dog"),
        .description = COMPOUND_STRING("Raises Atk if intimidated."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_WIND_POWER] =
    {
        .name = _("Wind Power"),
        .description = COMPOUND_STRING("Gets charged if hit by wind."),
        .aiRating = 4,
    },

    [ABILITY_ELECTROMORPHOSIS] =
    {
        .name = _("Electromorphosis"),
        .description = COMPOUND_STRING("Becomes charged when hit."),
        .aiRating = 5,
    },

    [ABILITY_GOOD_AS_GOLD] =
    {
        .name = _("Good as Gold"),
        .description = COMPOUND_STRING("Immunity to status moves."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_VESSEL_OF_RUIN] =
    {
        .name = _("Vessel of Ruin"),
        .description = COMPOUND_STRING("Reduces others' Sp. Atk."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SWORD_OF_RUIN] =
    {
        .name = _("Sword of Ruin"),
        .description = COMPOUND_STRING("Reduces others' Defense."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_TABLETS_OF_RUIN] =
    {
        .name = _("Tablets of Ruin"),
        .description = COMPOUND_STRING("Reduces others' Attack."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_BEADS_OF_RUIN] =
    {
        .name = _("Beads of Ruin"),
        .description = COMPOUND_STRING("Reduces others' Sp. Def."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_OPPORTUNIST] =
    {
        .name = _("Opportunist"),
        .description = COMPOUND_STRING("Copies a foe's stat boost."),
        .aiRating = 5,
    },

    [ABILITY_CUD_CHEW] =
    {
        .name = _("Cud Chew"),
        .description = COMPOUND_STRING("Eats Berry again next turn."),
        .aiRating = 4,
    },

    [ABILITY_SUPREME_OVERLORD] =
    {
        .name = _("Supreme Overlord"),
        .description = COMPOUND_STRING("Fainted partners up power."),
        .aiRating = 6,
    },

    [ABILITY_COSTAR] =
    {
        .name = _("Costar"),
        .description = COMPOUND_STRING("Copies ally's stat changes."),
        .aiRating = 5,
    },

    [ABILITY_TOXIC_DEBRIS] =
    {
        .name = _("Toxic Debris"),
        .description = COMPOUND_STRING("Sets Toxic Spikes when\nhit by a physical move"),
        .aiRating = 4,
    },

    

    [ABILITY_MYCELIUM_MIGHT] =
    {
        .name = _("Mycelium Might"),
        .description = COMPOUND_STRING("Status moves never fail."),
        .aiRating = 2,
    },

    [ABILITY_HOSPITALITY] =
    {
        .name = _("Hospitality"),
        .description = COMPOUND_STRING("Restores ally's HP on entry."),
        .aiRating = 5,
    },

    [ABILITY_TOXIC_CHAIN] =
    {
        .name = _("Toxic Chain"),
        .description = COMPOUND_STRING("Attacks may badly poison."),
        .aiRating = 8,
    },

    [ABILITY_TERA_SHIFT] =
    {
        .name = _("Tera Shift"),
        .description = COMPOUND_STRING("Changes form on entry."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TERA_SHELL] =
    {
        .name = _("Tera Shell"),
        .description = COMPOUND_STRING("Resists all types at full HP."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_TERAFORM_ZERO] =
    {
        .name = _("Teraform Zero"),
        .description = COMPOUND_STRING("Zeroes weather and terrain."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POISON_PUPPETEER] =
    {
        .name = _("Poison Puppeteer"),
        .description = COMPOUND_STRING("Poisoning also confuses."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_PIERCING_DRILL] =
    {
        .name = _("Piercing Drill"),
        .description = COMPOUND_STRING("Contact evades protection."),
    },

    [ABILITY_SPICY_SPRAY] =
    {
        .name = _("Spicy Spray"),
        .description = COMPOUND_STRING("Burns the foe when damaged."),
    },

    [ABILITY_AURA_GUARD] =
    {
        .name = _("Aura Guard"),
        .description = COMPOUND_STRING("Unimplemented."),
    },

    [ABILITY_BAD_COMPANY] =
    {
        .name = _("Bad Company"),
        .description = COMPOUND_STRING("Stops self-lowering stats\nand prevents recoil."),
        .aiRating = 8,
    },

    [ABILITY_BULL_RUSH] =
    {
        .name = _("Bull Rush"),
        .description = COMPOUND_STRING("Boosts power by 20% &\nSpeed by 50% on first turn."),
        .aiRating = 8,
    },

    [ABILITY_QUILL_RUSH] =
    {
        .name = _("Quill Rush"),
        .description = COMPOUND_STRING("Boosts power by 20% &\nSpeed by 50% on first turn."),
        .aiRating = 8,
    },

    [ABILITY_THE_GRIPPER] =
    {
        .name = _("THE GRIPPER"),
        .description = COMPOUND_STRING("Contact moves prevent the\nfoe from escaping."),
        .aiRating = 7,
    },

    [ABILITY_PARASITIC_WASTE] =
    {
        .name = _("Parasitic Waste"),
        .description = COMPOUND_STRING("Attacks that poison drain instead."),
        .aiRating = 6,
    },   
};
