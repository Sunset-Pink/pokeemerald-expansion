#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Haunt boosts Ghost-type moves in a pinch", s16 damage)
{
    u16 hp;
    PARAMETRIZE { hp = 99; }
    PARAMETRIZE { hp = 33; }
    GIVEN {
        ASSUME(GetMoveType(MOVE_SHADOW_SNEAK) == TYPE_GHOST);
        PLAYER(SPECIES_DUSKULL) { Ability(ABILITY_HAUNT); MaxHP(99); HP(hp); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SHADOW_SNEAK); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}
