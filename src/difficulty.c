#include "global.h"
#include "data.h"
#include "event_data.h"
#include "script.h"
#include "constants/battle.h"

enum DifficultyLevel GetCurrentDifficultyLevel(void)
{
    if (!B_VAR_DIFFICULTY)
        return DIFFICULTY_VANILLA;

    return VarGet(B_VAR_DIFFICULTY);
}

void SetCurrentDifficultyLevel(enum DifficultyLevel desiredDifficulty)
{
    if (!B_VAR_DIFFICULTY)
        return;

    if (desiredDifficulty > DIFFICULTY_MAX)
        desiredDifficulty = DIFFICULTY_MAX;

    VarSet(B_VAR_DIFFICULTY, desiredDifficulty);
}

enum DifficultyLevel GetBattlePartnerDifficultyLevel(u16 partnerId)
{
    enum DifficultyLevel difficulty = GetCurrentDifficultyLevel();

    if (partnerId > TRAINER_PARTNER(PARTNER_NONE))
        partnerId -= TRAINER_PARTNER(PARTNER_NONE);

    if(difficulty == DIFFICULTY_VANILLA) {
        return DIFFICULTY_VANILLA;
    }

    bool8 hasHardTeam = gTrainers[DIFFICULTY_HARD][partnerId].party != NULL;
    bool8 hasNormalTeam = gTrainers[DIFFICULTY_NORMAL][partnerId].party != NULL;
    bool8 hasEasyTeam = gTrainers[DIFFICULTY_EASY][partnerId].party != NULL;

    switch(difficulty) {
        case DIFFICULTY_HARD: {
            if(hasHardTeam) {
                return DIFFICULTY_HARD;
            } else if (hasNormalTeam) {
                return DIFFICULTY_NORMAL;
            } else {
                return DIFFICULTY_VANILLA;
            }
        }
        case DIFFICULTY_NORMAL: {
            if(hasNormalTeam) {
                return DIFFICULTY_NORMAL;
            } else {
                return DIFFICULTY_VANILLA;
            }
        }
        case DIFFICULTY_EASY: {
            if(hasEasyTeam) {
                return DIFFICULTY_EASY;
            } else if (hasNormalTeam) {
                return DIFFICULTY_NORMAL;
            } else {
                return DIFFICULTY_VANILLA;
            }
        }
        default: return DIFFICULTY_VANILLA;  
    }

    return difficulty;
}

enum DifficultyLevel GetTrainerDifficultyLevel(u16 trainerId)
{
    enum DifficultyLevel difficulty = GetCurrentDifficultyLevel();

    if(difficulty == DIFFICULTY_VANILLA) {
        return DIFFICULTY_VANILLA;
    }

    bool8 hasHardTeam = gTrainers[DIFFICULTY_HARD][trainerId].party != NULL;
    bool8 hasNormalTeam = gTrainers[DIFFICULTY_NORMAL][trainerId].party != NULL;
    bool8 hasEasyTeam = gTrainers[DIFFICULTY_EASY][trainerId].party != NULL;

    switch(difficulty) {
        case DIFFICULTY_HARD: {
            if(hasHardTeam) {
                return DIFFICULTY_HARD;
            } else if (hasNormalTeam) {
                return DIFFICULTY_NORMAL;
            } else {
                return DIFFICULTY_VANILLA;
            }
        }
        case DIFFICULTY_NORMAL: {
            if(hasNormalTeam) {
                return DIFFICULTY_NORMAL;
            } else {
                return DIFFICULTY_VANILLA;
            }
        }
        case DIFFICULTY_EASY: {
            if(hasEasyTeam) {
                return DIFFICULTY_EASY;
            } else if (hasNormalTeam) {
                return DIFFICULTY_NORMAL;
            } else {
                return DIFFICULTY_VANILLA;
            }
        }
        default: return DIFFICULTY_VANILLA;  
    }
    
    return difficulty;
}

void Script_IncreaseDifficulty(void)
{
    enum DifficultyLevel currentDifficulty;

    if (!B_VAR_DIFFICULTY)
        return;

    currentDifficulty = GetCurrentDifficultyLevel();

    if (currentDifficulty++ > DIFFICULTY_MAX)
        return;

    Script_RequestEffects(SCREFF_V1);
    Script_RequestWriteVar(B_VAR_DIFFICULTY);

    SetCurrentDifficultyLevel(currentDifficulty);
}

void Script_DecreaseDifficulty(void)
{
    enum DifficultyLevel currentDifficulty;

    if (!B_VAR_DIFFICULTY)
        return;

    currentDifficulty = GetCurrentDifficultyLevel();

    if (!currentDifficulty)
        return;

    Script_RequestEffects(SCREFF_V1);
    Script_RequestWriteVar(B_VAR_DIFFICULTY);

    SetCurrentDifficultyLevel(--currentDifficulty);
}

void Script_GetDifficulty(void)
{
    Script_RequestEffects(SCREFF_V1);
    gSpecialVar_Result = GetCurrentDifficultyLevel();
}

void Script_SetDifficulty(struct ScriptContext *ctx)
{
    enum DifficultyLevel desiredDifficulty = ScriptReadByte(ctx);

    Script_RequestEffects(SCREFF_V1);
    Script_RequestWriteVar(B_VAR_DIFFICULTY);

    SetCurrentDifficultyLevel(desiredDifficulty);
}
