#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Temper boosts Steel-type moves in a pinch", s16 damage)
{
    u16 hp;
    PARAMETRIZE { hp = 99; }
    PARAMETRIZE { hp = 33; }
    GIVEN {
        ASSUME(GetMoveType(MOVE_IRON_HEAD) == TYPE_STEEL);
        PLAYER(SPECIES_KLANG) { Ability(ABILITY_TEMPER); MaxHP(99); HP(hp); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_IRON_HEAD); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}
