#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Striker increases the power of kicking moves by 30%", s16 damage)
{
    enum Move move;
    enum Ability ability;
    PARAMETRIZE { move = MOVE_BLAZE_KICK; ability = ABILITY_STRIKER; }
    PARAMETRIZE { move = MOVE_BLAZE_KICK; ability = ABILITY_BLAZE; }
    PARAMETRIZE { move = MOVE_BODY_SLAM;      ability = ABILITY_STRIKER; }
    PARAMETRIZE { move = MOVE_BODY_SLAM;      ability = ABILITY_BLAZE; }

    GIVEN {
        ASSUME(IsKickingMove(MOVE_BLAZE_KICK));
        ASSUME(!IsKickingMove(MOVE_SCRATCH));
        ASSUME(GetMovePower(MOVE_BLAZE_KICK) == GetMovePower(MOVE_BODY_SLAM));
        PLAYER(SPECIES_HITMONLEE) { Ability(ability); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[1].damage, Q_4_12(CA_STRIKER_BOOST), results[0].damage); // Striker affects kicking moves
        EXPECT_EQ(results[2].damage, results[3].damage); // Striker does not affect non-kicking moves
    }
}
