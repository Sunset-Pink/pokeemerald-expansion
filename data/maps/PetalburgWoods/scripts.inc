PetalburgWoods_MapScripts::
	.byte 0


PetalburgWoods_EventScript_DevonResearcherLeft::
# 4 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 5 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_TEMP_1
# 6 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcher
# 7 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
	end


PetalburgWoods_EventScript_DevonResearcherRight::
# 12 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 13 "data/maps/PetalburgWoods/scripts.pory"
	clearflag FLAG_TEMP_1
# 14 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcher
# 15 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
	end


PetalburgWoods_EventScript_DevonResearcher::
# 21 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 22 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 23 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound
# 24 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 25 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_0x8009, 0
	goto_if_eq PetalburgWoods_EventScript_DevonResearcher_2
# 32 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcher_Movement_1
PetalburgWoods_EventScript_DevonResearcher_1:
# 39 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 40 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_TEMP_1, PetalburgWoods_EventScript_DevonResearcher_6
PetalburgWoods_EventScript_DevonResearcher_5:
# 45 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish
# 46 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 47 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 48 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_EventScript_DevonResearcher_Movement_2
# 52 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 53 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou
# 54 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 55 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_TEMP_1, PetalburgWoods_EventScript_DevonResearcher_9
# 58 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_EventScript_DevonResearcher_Movement_4
PetalburgWoods_EventScript_DevonResearcher_8:
# 60 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 61 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 62 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 63 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers
# 64 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 65 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_TEMP_1, PetalburgWoods_EventScript_DevonResearcher_13
# 73 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcher_Movement_6
PetalburgWoods_EventScript_DevonResearcher_12:
# 79 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 80 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe
# 81 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_TEMP_1, PetalburgWoods_EventScript_DevonResearcher_17
# 84 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
PetalburgWoods_EventScript_DevonResearcher_16:
# 86 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 87 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua
# 88 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 89 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_EventScript_DevonResearcher_Movement_8
# 94 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 95 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve
# 96 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 97 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_EventScript_DevonResearcher_Movement_9
# 101 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 102 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_GRUNT
# 103 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 104 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 105 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose
# 106 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 107 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgWoods_EventScript_DevonResearcher_21
PetalburgWoods_EventScript_DevonResearcher_20:
# 110 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro
# 111 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcher_Movement_10
# 116 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 117 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime
# 118 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 119 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_EventScript_DevonResearcher_Movement_11
# 123 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_TEMP_1, PetalburgWoods_EventScript_DevonResearcher_24
# 129 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcher_Movement_13
PetalburgWoods_EventScript_DevonResearcher_23:
# 134 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 135 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE
# 136 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
	return

PetalburgWoods_EventScript_DevonResearcher_2:
# 26 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcher_Movement_0
	goto PetalburgWoods_EventScript_DevonResearcher_1

PetalburgWoods_EventScript_DevonResearcher_6:
# 41 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 42 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
	goto PetalburgWoods_EventScript_DevonResearcher_5

PetalburgWoods_EventScript_DevonResearcher_9:
# 56 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_EventScript_DevonResearcher_Movement_3
	goto PetalburgWoods_EventScript_DevonResearcher_8

PetalburgWoods_EventScript_DevonResearcher_13:
# 66 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcher_Movement_5
	goto PetalburgWoods_EventScript_DevonResearcher_12

PetalburgWoods_EventScript_DevonResearcher_17:
# 82 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_EventScript_DevonResearcher_Movement_7
	goto PetalburgWoods_EventScript_DevonResearcher_16

PetalburgWoods_EventScript_DevonResearcher_21:
# 108 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems
	goto PetalburgWoods_EventScript_DevonResearcher_20

PetalburgWoods_EventScript_DevonResearcher_24:
# 124 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcher_Movement_12
	goto PetalburgWoods_EventScript_DevonResearcher_23


# 140 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 141 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 142 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 143 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 144 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 145 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 146 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 147 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 148 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 149 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 150 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 151 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 152 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 153 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 154 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 155 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 156 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
	step_end

PetalburgWoods_EventScript_Boy1::
# 160 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
	end


PetalburgWoods_EventScript_Boy2::
# 165 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
	end


PetalburgWoods_EventScript_Girl::
# 170 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 171 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 172 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_unset FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_Girl_2
PetalburgWoods_EventScript_Girl_1:
# 180 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation
# 181 "data/maps/PetalburgWoods/scripts.pory"
	release
	end

PetalburgWoods_EventScript_Girl_2:
# 173 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem
# 174 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 175 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgWoods_EventScript_Girl_5
PetalburgWoods_EventScript_Girl_4:
# 178 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
	goto PetalburgWoods_EventScript_Girl_1

PetalburgWoods_EventScript_Girl_5:
# 176 "data/maps/PetalburgWoods/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto PetalburgWoods_EventScript_Girl_4


PetalburgWoods_EventScript_Sign1::
# 186 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
	end


PetalburgWoods_EventScript_Sign2::
# 191 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
	end


PetalburgWoods_EventScript_Lyle::
# 196 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 201 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
	end


PetalburgWoods_EventScript_James::
# 206 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 212 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 213 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PetalburgWoods_EventScript_James_2
# 217 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 218 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 219 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgWoods_EventScript_James_7
PetalburgWoods_EventScript_James_6:
# 223 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
PetalburgWoods_EventScript_James_1:
# 226 "data/maps/PetalburgWoods/scripts.pory"
	release
	end

PetalburgWoods_EventScript_James_2:
# 214 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 215 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
	goto PetalburgWoods_EventScript_James_1

PetalburgWoods_EventScript_James_5:
# 220 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 221 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
	goto PetalburgWoods_EventScript_James_1

PetalburgWoods_EventScript_James_7:
# 219 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_James_5
	goto PetalburgWoods_EventScript_James_6


PetalburgWoods_EventScript_TryRegisterJames::
# 231 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 232 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 233 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_TryRegisterJames_2
PetalburgWoods_EventScript_TryRegisterJames_1:
	return

PetalburgWoods_EventScript_TryRegisterJames_2:
# 234 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1
# 235 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
	goto PetalburgWoods_EventScript_TryRegisterJames_1


# 26 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcher_Movement_0:
# 27 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 28 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 29 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 29 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
	step_end

# 32 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcher_Movement_1:
# 33 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 34 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 35 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 35 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 35 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 36 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
	step_end

# 48 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcher_Movement_2:
# 49 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 49 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 50 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 50 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
	step_end

# 56 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcher_Movement_3:
# 56 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 56 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
	step_end

# 58 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcher_Movement_4:
# 58 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 58 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 58 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
	step_end

# 66 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcher_Movement_5:
# 67 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 68 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 68 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 69 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 70 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
	step_end

# 73 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcher_Movement_6:
# 74 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 75 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 76 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
	step_end

# 82 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcher_Movement_7:
# 82 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
	step_end

# 89 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcher_Movement_8:
# 90 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 91 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 92 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
	step_end

# 97 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcher_Movement_9:
# 98 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 98 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 98 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 98 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 98 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 99 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
	step_end

# 111 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcher_Movement_10:
# 112 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 113 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 113 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 113 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 113 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 113 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 114 "data/maps/PetalburgWoods/scripts.pory"
	face_up
	step_end

# 119 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcher_Movement_11:
# 120 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 120 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 121 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
	step_end

# 124 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcher_Movement_12:
# 125 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 126 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 126 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 126 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 126 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 126 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 126 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 126 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
	step_end

# 129 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcher_Movement_13:
# 130 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 131 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 131 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 131 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 131 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 131 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 131 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 131 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
	step_end

PetalburgWoods_Text_NotAOneToBeFound:
# 240 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
	.string "Not a one to be found…$"

PetalburgWoods_Text_HaveYouSeenShroomish:
# 245 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any Pokémon\n"
	.string "called Shroomish around here?\p"
	.string "I really love that Pokémon.$"

PetalburgWoods_Text_IWasGoingToAmbushYou:
# 251 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
	.string "had to dawdle in Petalburg Woods\l"
	.string "forever, didn't you?\p"
	.string "I got sick of waiting, so here I am!$"

PetalburgWoods_Text_HandOverThosePapers:
# 258 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! Devon Researcher!\p"
	.string "Hand over those papers!$"

PetalburgWoods_Text_YouHaveToHelpMe:
# 263 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
	.string "You're a Pokémon Trainer, aren't you?\n"
	.string "You've got to help me, please!$"

PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 269 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
	.string "What, you're going to protect him?\p"
	.string "No one who crosses Team Aqua\n"
	.string "gets any mercy, not even a kid!\p"
	.string "Come on and battle me!$"

PetalburgWoods_Text_YoureKiddingMe:
# 277 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"

PetalburgWoods_Text_YouveGotSomeNerve:
# 281 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
	.string "meddling with Team Aqua!\l"
	.string "Come on and battle me again!\p"
	.string "I wish I could say that, but I'm out of\n"
	.string "Pokémon…\p"
	.string "And, hey, we of Team Aqua are also\n"
	.string "after something in Rustboro.\p"
	.string "I'll let you go today!$"

PetalburgWoods_Text_ThatWasAwfullyClose:
# 292 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
	.string "That was awfully close!\p"
	.string "Thanks to you, he didn't rob me of\n"
	.string "these important papers.\p"
	.string "I know, I'll give you a Great Ball as\n"
	.string "my thanks!$"

PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 301 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that Team Aqua thug say\n"
	.string "they were after something in\l"
	.string "Rustboro, too?$"

PetalburgWoods_Text_ICantBeWastingTime:
# 307 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
	.string "I can't be wasting time!$"

PetalburgWoods_Text_YoureLoadedWithItems:
# 312 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
	.string "I can't give you this Great Ball.$"

PetalburgWoods_Text_GoBugPokemonTeam:
# 317 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of Pokémon!\p"
	.string "Go, go, go!\n"
	.string "My Bug Pokémon team!$"

PetalburgWoods_Text_ICouldntWin:
# 323 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these Pokémon,\n"
	.string "but I couldn't win…$"

PetalburgWoods_Text_ImOutOfPokeBalls:
# 328 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of Pokémon.\n"
	.string "Now I'm out of Poké Balls.$"

PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 333 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take Bug Pokémon to school,\n"
	.string "you get to be instantly popular!$"

PetalburgWoods_Text_CantBePopularIfILose:
# 338 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"

PetalburgWoods_Text_PeopleRespectYou:
# 342 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big Bug Pokémon,\n"
	.string "people respect you for it.$"

PetalburgWoods_Text_IWantRematch1:
# 347 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my Bug\n"
	.string "Pokémon grow up!\p"
	.string "I'm registering you in my PokéNav!$"

PetalburgWoods_Text_IWantRematch2:
# 353 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my Bug \n"
	.string "Pokémon grow up!\p"
	.string "I'm registering you in my PokéNav!$"

PetalburgWoods_Text_MyPokemonHaveGrown:
# 359 "data/maps/PetalburgWoods/scripts.pory"
	.string "My Bug Pokémon have grown.\n"
	.string "I'll be popular again.$"

PetalburgWoods_Text_CantBePopularIfLose:
# 364 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"

PetalburgWoods_Text_IveBeenTrainingHard:
# 368 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
	.string "strong Pokémon, right?\l"
	.string "So, I've been training hard.$"

PetalburgWoods_Text_StayOutOfTallGrass:
# 374 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
	.string "Your Pokémon doing okay?\p"
	.string "If your Pokémon are weak and you want\n"
	.string "to avoid battles, you should stay out\l"
	.string "of tall grass.$"

PetalburgWoods_Text_HiddenItemsExplanation:
# 382 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
	.string "ground even if you can't see them.\p"
	.string "That's why I always check where I'm\n"
	.string "walking.$"

PetalburgWoods_Text_TryUsingThisItem:
# 389 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
	.string "That's the Badge from Rustboro Gym!\p"
	.string "You must be a Trainer.\n"
	.string "You should try using this item.$"

PetalburgWoods_Text_MiracleSeedExplanation:
# 396 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a Miracle Seed.\n"
	.string "If a Pokémon holds that item, its\l"
	.string "Grass-type moves become stronger.\p"
	.string "Besides Miracle Seed, I think there are\n"
	.string "other convenient items for Pokémon\l"
	.string "to hold.$"

PetalburgWoods_Text_TrainerTipsExperience:
# 405 "data/maps/PetalburgWoods/scripts.pory"
	.string "Trainer Tips\p"
	.string "Any Pokémon that appears even once\n"
	.string "in a battle is awarded Exp Points.\p"
	.string "To raise a weak Pokémon, put it at the\n"
	.string "left of the team list.\p"
	.string "As soon as a battle starts, switch it\n"
	.string "out. It will earn Exp Points without\l"
	.string "being exposed to any harm.$"

PetalburgWoods_Text_TrainerTipsPP:
# 416 "data/maps/PetalburgWoods/scripts.pory"
	.string "Trainer Tips\p"
	.string "In addition to Hit Points (HP), Pokémon\n"
	.string "have Power Points (PP) that are used to\l"
	.string "make moves during battle.\p"
	.string "If a Pokémon runs out of PP, it must be\n"
	.string "taken to a Pokémon Center.$"
