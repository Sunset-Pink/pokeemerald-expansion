#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Sage Power boosts special damage by 50%", s16 damage)
{
    enum Ability ability;
    PARAMETRIZE { ability = ABILITY_ZEN_MODE; }
    PARAMETRIZE { ability = ABILITY_SAGE_POWER; }

    GIVEN {
        PLAYER(SPECIES_DARMANITAN_GALAR) { Ability(ability); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SWIFT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SWIFT, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Sage Power stacks with Choice Specs to reach 2.25x Sp Attack", s16 damage)
{
    enum Ability ability;
    enum Item item;
    PARAMETRIZE { ability = ABILITY_ZEN_MODE;    item = ITEM_NONE; }
    PARAMETRIZE { ability = ABILITY_SAGE_POWER;  item = ITEM_NONE; }
    PARAMETRIZE { ability = ABILITY_SAGE_POWER;  item = ITEM_CHOICE_SPECS; }

    GIVEN {
        ASSUME(GetItemHoldEffect(ITEM_CHOICE_SPECS) == HOLD_EFFECT_CHOICE_SPECS);
        PLAYER(SPECIES_DARMANITAN_GALAR) { Ability(ability); Item(item); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SWIFT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SWIFT, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5),  results[1].damage);
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.25), results[2].damage);
    }
}

SINGLE_BATTLE_TEST("Sage Power does not boost damage while Dynamaxed", s16 damage)
{
    enum Ability ability;
    PARAMETRIZE { ability = ABILITY_ZEN_MODE; }
    PARAMETRIZE { ability = ABILITY_SAGE_POWER; }

    GIVEN {
        PLAYER(SPECIES_DARMANITAN_GALAR) { Ability(ability); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SWIFT, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MAX_STRIKE, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_EQ(results[0].damage, results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Sage Power does not lock moves while Dynamaxed")
{
    GIVEN {
        PLAYER(SPECIES_DARMANITAN_GALAR) { Ability(ABILITY_SAGE_POWER); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SWIFT, gimmick: GIMMICK_DYNAMAX); }
        TURN { MOVE(player, MOVE_FLAME_CHARGE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MAX_STRIKE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MAX_FLARE, player);
    }
}
