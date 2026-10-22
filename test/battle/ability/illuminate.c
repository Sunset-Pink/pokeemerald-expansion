#include "global.h"
#include "test/battle.h"

#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Illuminate raises accuracy with configuration.")
{
    u32 config;
    PARAMETRIZE { config = TRUE; }
    PASSES_RANDOMLY(96, 100, RNG_ACCURACY);
    GIVEN {
        WITH_CONFIG(AB_ILLUMINATE_BUFFS_ACCURACY, config);
        ASSUME(GetMoveAccuracy(MOVE_HYDRO_PUMP) == 80);
        PLAYER(SPECIES_BUTTERFREE) { Ability(ABILITY_ILLUMINATE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_HYDRO_PUMP); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HYDRO_PUMP, player);
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Illuminate does not affect OHKO moves")
{
    PASSES_RANDOMLY(30, 100, RNG_ACCURACY);
    GIVEN {
        WITH_CONFIG(AB_ILLUMINATE_BUFFS_ACCURACY, TRUE);
        ASSUME(GetMoveAccuracy(MOVE_FISSURE) == 30);
        ASSUME(GetMoveEffect(MOVE_FISSURE) == EFFECT_OHKO);
        PLAYER(SPECIES_BUTTERFREE) { Ability(ABILITY_ILLUMINATE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_FISSURE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FISSURE, player);
        HP_BAR(opponent, hp: 0);
    }
}
