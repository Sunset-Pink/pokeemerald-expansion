#ifndef GUARD_CUSTOM_ABILITIES_H
#define GUARD_CUSTOM_ABILITIES_H

// Abilities Prefix: AB_

#define AB_ENABLE_OVERRIDES         FALSE // If FALSE, no custom abilities will be enabled.


// Illuminate Configuration
#define AB_ILLUMINATE_BUFFS_ACCURACY       FALSE // If True, will make Illuminate buff accuracy by the boosted amount. Similiar to Radical Red.
#define AB_ILLUMINATE_ACCURACY_BOOST         120

// Incubator Configuration
#define AB_INCUBATOR_ABILITY_BUFF           FALSE // If True, will make incubator abilities more effect.
#define AB_INCUBATOR_ABILITY_BOOST              3 // This number gets 1 added to it, so it is (X+1)x effective.

// Trauant Configuration
#define AB_TRUANT_ALLOWS_HEALING_MOVES      FALSE // If true, healing moves can be used on truant turns.

// Defeatest Configuration
#define AB_DEFEATIST_OVERRIDE               FALSE // If true, defatest will activate when bellow over percentage
#define AB_DEFEATIST_OVERRIDE_PERCENTAGE      33 // X/100, Default to 33% like Radical Red.
#define AB_DEFEATIST_DESCRIPTION_OVERRIDE   COMPOUND_STRING("Halves offenses at 1/3 HP.")

// Corrosion Configuration
#define AB_CORROSION_CAN_HIT_STEEL_TYPES    FALSE // If true, Pokemon with corrosion can hit steel types with poison type moves. Not just poison status.

// Toxic Boost Configuration
#define AB_TOXIC_BOOST_PREVENT_DAMAGE       FALSE // If true, Pokemon with Toxic Boost do not take poison damage.

// Flare Boost Configuration
#define AB_FLARE_BOOST_PREVENT_DAMAGE       FALSE // If true, Pokemon with Flare Boost do not take burn damage.

// Illusion Configuration
#define AB_ILLUSION_BUFFS_ATTACKS           FALSE // If true, attacks deal more damage while under the effects of illusion.
#define AB_ILLUSION_POWER_BOOST             1.3

// Iron Fist Configuration
#define AB_IRON_FIST_OVERRIDE               FALSE // If True, will make Striker use the override bonus instead of default (1.2x)
#define AB_IRON_FIST_OVERRIDE_BONUS          1.2  // The damage boost to overide with.
// If True the move is boosted by Iron Fist.
#define AB_IRON_FIST_BULLET_PUNCH           TRUE
#define AB_IRON_FIST_COMET_PUNCH            TRUE
#define AB_IRON_FIST_DIZZY_PUNCH            TRUE
#define AB_IRON_FIST_DOUBLE_IRON_BASH       TRUE
#define AB_IRON_FIST_DOUBLE_SHOCK           TRUE
#define AB_IRON_FIST_DRAIN_PUNCH            TRUE
#define AB_IRON_FIST_DYNAMIC_PUNCH          TRUE
#define AB_IRON_FIST_FIRE_PUNCH             TRUE
#define AB_IRON_FIST_FOCUS_PUNCH            TRUE
#define AB_IRON_FIST_HAMMER_ARM             TRUE
#define AB_IRON_FIST_HEADLONG_RUSH          TRUE
#define AB_IRON_FIST_ICE_HAMMER             TRUE
#define AB_IRON_FIST_ICE_PUNCH              TRUE
#define AB_IRON_FIST_MACH_PUNCH             TRUE
#define AB_IRON_FIST_MEGA_PUNCH             TRUE
#define AB_IRON_FIST_POWER_UP_PUNCH         TRUE
#define AB_IRON_FIST_SHADOW_PUNCH           TRUE
#define AB_IRON_FIST_SKY_UPPERCUT           TRUE
#define AB_IRON_FIST_THUNDER_PUNCH          TRUE
#define AB_IRON_FIST_JET_PUNCH              TRUE
#define AB_IRON_FIST_METEOR_MASH            TRUE
#define AB_IRON_FIST_PLASMA_FIST            TRUE
#define AB_IRON_FIST_RAGE_FIST              TRUE
#define AB_IRON_FIST_SURGING_STRIKES        TRUE
#define AB_IRON_FIST_WICKED_BLOW            TRUE
#define AB_IRON_FIST_SUCKER_PUNCH           FALSE 

// Striker Configuration
#define AB_STRIKER_OVERRIDE         FALSE // If True, will make Striker use the override bonus instead of default (1.3x)
#define AB_STRIKER_OVERRIDE_BONUS     1.3 // Defaults to 1.3 base off Radical Red
#define AB_STRIKER_BLAZE_KICK       TRUE //If True, Blaze Kick is boosted by Striker.
#define AB_STRIKER_JUMP_KICK        TRUE //If True, Jump Kick is boosted by Striker.
#define AB_STRIKER_HIGH_JUMP_KICK   TRUE //If True, High Jump Kick is boosted by Striker.
#define AB_STRIKER_TRIPLE_AXEL      TRUE //If True, Triple Axel is boosted by Striker.
#define AB_STRIKER_TRIPLE_KICK      TRUE //If True, Triple Kick is boosted by Striker.
#define AB_STRIKER_STOMP            TRUE //If True, Stomp is boosted by Striker.
#define AB_STRIKER_MEGA_KICK        TRUE //If True, Mega Kick is boosted by Striker.
#define AB_STRIKER_LOW_KICK         TRUE //If True, Low Kick is boosted by Striker.
#define AB_STRIKER_ROLLING_KICK     TRUE //If True, Rolling Kick is boosted by Striker.
#define AB_STRIKER_TROP_KICK        TRUE //If True, Trop Kick is boosted by Striker.
#define AB_STRIKER_PYRO_BALL        TRUE //If True, Pyro Ball is boosted by Striker.
#define AB_STRIKER_HIGH_HORSEPOWER  TRUE //If True, High Horsepower is boosted by Striker.
#define AB_STRIKER_DOUBLE_KICK      TRUE //If True, Double Kick is boosted by Striker.



#endif // GUARD_CUSTOM_ABILITIES_H