PetalburgCity_Gym_MapScripts::
# 2 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
# 3 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
# 4 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 7 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 5 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
	.2byte 0

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
	.2byte 0


PetalburgCity_Gym_EventScript_NormanBattle::
# 13 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro
# 14 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_NORMAL, PetalburgCity_Gym_Text_NormanDefeat
# 15 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 16 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 17 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 18 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis
# 19 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 20 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 21 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 22 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 23 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 26 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 27 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 28 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 29 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 30 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 31 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 32 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 33 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 35 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 36 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 37 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 38 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_PETALBURG_GYM_WALLYS_DAD
# 39 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 40 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_NormanBattle_3
# 41 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_NormanBattle_4
# 42 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_NormanBattle_5
PetalburgCity_Gym_EventScript_NormanBattle_1:
	end

PetalburgCity_Gym_EventScript_NormanBattle_3:
# 40 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrivesNorth
	goto PetalburgCity_Gym_EventScript_NormanBattle_1

PetalburgCity_Gym_EventScript_NormanBattle_4:
# 41 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrivesWest
	goto PetalburgCity_Gym_EventScript_NormanBattle_1

PetalburgCity_Gym_EventScript_NormanBattle_5:
# 42 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrivesEast
	goto PetalburgCity_Gym_EventScript_NormanBattle_1


PetalburgCity_Gym_OnLoad:
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_eq PetalburgCity_Gym_OnLoad_2
PetalburgCity_Gym_OnLoad_1:
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 7
	goto_if_ge PetalburgCity_Gym_OnLoad_5
PetalburgCity_Gym_OnLoad_4:
	end

PetalburgCity_Gym_OnLoad_2:
# 49 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenUnlockedDoors
	goto PetalburgCity_Gym_OnLoad_1

PetalburgCity_Gym_OnLoad_5:
# 52 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
	goto PetalburgCity_Gym_OnLoad_4


PetalburgCity_Gym_EventScript_OpenUnlockedDoors::
# 58 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 59 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 60 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 61 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 62 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 63 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 64 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 65 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 66 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
	return


PetalburgCity_Gym_EventScript_UnlockAllDoors::
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 72 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 73 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 76 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 77 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 78 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
	return


PetalburgCity_Gym_OnTransition:
# 83 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 1
	goto_if_eq PetalburgCity_Gym_OnTransition_2
PetalburgCity_Gym_OnTransition_1:
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_CITY_STATE, 6
	goto_if_lt PetalburgCity_Gym_OnTransition_5
PetalburgCity_Gym_OnTransition_4:
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_OnTransition_8
PetalburgCity_Gym_OnTransition_7:
	end

PetalburgCity_Gym_OnTransition_2:
# 84 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_MoveWallyToEntrance
	goto PetalburgCity_Gym_OnTransition_1

PetalburgCity_Gym_OnTransition_5:
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_MoveNormanToEntrance
	goto PetalburgCity_Gym_OnTransition_4

PetalburgCity_Gym_OnTransition_8:
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_CheckNormanForRematch
	goto PetalburgCity_Gym_OnTransition_7


PetalburgCity_Gym_EventScript_MoveWallyToEntrance::
# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_WALLY, 5, 108
	return


PetalburgCity_Gym_EventScript_MoveNormanToEntrance::
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_NORMAN, 4, 107
	return


PetalburgCity_Gym_EventScript_CheckNormanForRematch::
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_NORMAL
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgCity_Gym_EventScript_CheckNormanForRematch_2
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 8
	goto_if_eq PetalburgCity_Gym_EventScript_CheckNormanForRematch_2
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_NORMAN, 4, 107
PetalburgCity_Gym_EventScript_CheckNormanForRematch_1:
	return

PetalburgCity_Gym_EventScript_CheckNormanForRematch_2:
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_DontMoveNormanToFront
	goto PetalburgCity_Gym_EventScript_CheckNormanForRematch_1


PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
	return


PetalburgCity_Gym_EventScript_TurnPlayerNorth::
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	return


PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouBye
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial_Movement_0
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_EXIT
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLY
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	return


PetalburgCity_Gym_EventScript_Norman::
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
	vsseeker_rematchid TRAINER_NORMAN_NORMAL
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_Norman_3
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_Norman_4
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_Norman_5
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_Norman_6
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_Norman_7
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_Norman_8
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger
PetalburgCity_Gym_EventScript_Norman_1:
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
	return

PetalburgCity_Gym_EventScript_Norman_3:
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormalWally
	goto PetalburgCity_Gym_EventScript_Norman_1

PetalburgCity_Gym_EventScript_Norman_4:
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro
	goto PetalburgCity_Gym_EventScript_Norman_1

PetalburgCity_Gym_EventScript_Norman_5:
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford
	goto PetalburgCity_Gym_EventScript_Norman_1

PetalburgCity_Gym_EventScript_Norman_6:
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanBattle
	goto PetalburgCity_Gym_EventScript_Norman_1

PetalburgCity_Gym_EventScript_Norman_7:
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanPostBattle
	goto PetalburgCity_Gym_EventScript_Norman_1

PetalburgCity_Gym_EventScript_Norman_8:
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanRematch
	goto PetalburgCity_Gym_EventScript_Norman_1


PetalburgCity_Gym_EventScript_NormalWally::
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_NormalWally_3
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_NormalWally_4
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_NormalWally_5
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_NormalWally_6
PetalburgCity_Gym_EventScript_NormalWally_1:
	end

PetalburgCity_Gym_EventScript_NormalWally_3:
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
	goto PetalburgCity_Gym_EventScript_NormalWally_1

PetalburgCity_Gym_EventScript_NormalWally_4:
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
	goto PetalburgCity_Gym_EventScript_NormalWally_1

PetalburgCity_Gym_EventScript_NormalWally_5:
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
	goto PetalburgCity_Gym_EventScript_NormalWally_1

PetalburgCity_Gym_EventScript_NormalWally_6:
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
	goto PetalburgCity_Gym_EventScript_NormalWally_1


PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_BeginWallyTutorial
	return


PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_BeginWallyTutorial
	return


PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_BeginWallyTutorial
	return


PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_BeginWallyTutorial
	return


PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_PETALBURG_GYM_WALLY
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8008
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_BeginWallyTutorial_3
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_BeginWallyTutorial_4
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallyArriveWestEast
PetalburgCity_Gym_EventScript_BeginWallyTutorial_1:
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight
# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8008
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_BeginWallyTutorial_8
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_BeginWallyTutorial_9
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_BeginWallyTutorial_10
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_BeginWallyTutorial_11
PetalburgCity_Gym_EventScript_BeginWallyTutorial_6:
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_13
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanAddressWallyFacingDown
PetalburgCity_Gym_EventScript_BeginWallyTutorial_12:
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_17
PetalburgCity_Gym_EventScript_BeginWallyTutorial_16:
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_20
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallyFacePlayer
PetalburgCity_Gym_EventScript_BeginWallyTutorial_19:
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8008
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_BeginWallyTutorial_25
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_BeginWallyTutorial_26
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_BeginWallyTutorial_27
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_BeginWallyTutorial_28
PetalburgCity_Gym_EventScript_BeginWallyTutorial_23:
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLY
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
	end

PetalburgCity_Gym_EventScript_BeginWallyTutorial_3:
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallyArriveSouth
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_1

PetalburgCity_Gym_EventScript_BeginWallyTutorial_4:
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallyArriveNorth
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_1

PetalburgCity_Gym_EventScript_BeginWallyTutorial_8:
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_6

PetalburgCity_Gym_EventScript_BeginWallyTutorial_9:
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_6

PetalburgCity_Gym_EventScript_BeginWallyTutorial_10:
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_6

PetalburgCity_Gym_EventScript_BeginWallyTutorial_11:
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_6

PetalburgCity_Gym_EventScript_BeginWallyTutorial_13:
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanAddressFacingRight
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_12

PetalburgCity_Gym_EventScript_BeginWallyTutorial_17:
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_16

PetalburgCity_Gym_EventScript_BeginWallyTutorial_20:
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallyFaceDown
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_19

PetalburgCity_Gym_EventScript_BeginWallyTutorial_25:
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ExitGymWithWallySouth
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_23

PetalburgCity_Gym_EventScript_BeginWallyTutorial_26:
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_23

PetalburgCity_Gym_EventScript_BeginWallyTutorial_27:
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ExitGymWithWallyWest
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_23

PetalburgCity_Gym_EventScript_BeginWallyTutorial_28:
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ExitGymWithWallyEast
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_23


PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArrive
	return


PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 275 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 282 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_EventScript_ExitGymWithWallySouth_Movement_0
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth_Movement_0
# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth_Movement_1
# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_EventScript_ExitGymWithWallyWest_Movement_0
# 317 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_EventScript_ExitGymWithWallyEast_Movement_0
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_EventScript_ExitGymWithWallyEast_Movement_1
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 345 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 346 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 351 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_NormanAddressWallyFacingDown::
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_NormanAddressFacingRight::
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, Common_Movement_FacePlayer
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_WallyFaceDown::
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, Common_Movement_WalkInPlaceFasterDown
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_NormanPostBattle::
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PetalburgCity_Gym_EventScript_NormanPostBattle_2
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_NormanPostBattle_3
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NormanPostBattle_4
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining
PetalburgCity_Gym_EventScript_NormanPostBattle_1:
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
	return

PetalburgCity_Gym_EventScript_NormanPostBattle_2:
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveEnigmaBerry
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1

PetalburgCity_Gym_EventScript_NormanPostBattle_3:
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1

PetalburgCity_Gym_EventScript_NormanPostBattle_4:
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1


PetalburgCity_Gym_EventScript_NormanRematch::
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
	end


PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_2
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_5
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_8
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_ENIGMA_BERRY_AVAILABLE, 0
	goto_if_eq PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_8
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
	return

PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_2:
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
	return

PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_5:
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
	return

PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_8:
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
	return


PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgCity_Gym_EventScript_GiveEnigmaBerry_2
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
	return

PetalburgCity_Gym_EventScript_GiveEnigmaBerry_2:
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_ShowBagIsFull
	return


PetalburgCity_Gym_EventScript_GiveFacade::
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_FACADE
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgCity_Gym_EventScript_GiveFacade_2
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade
	return

PetalburgCity_Gym_EventScript_GiveFacade_2:
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_BagIsFull
	return


PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallysDadArrives
	return


PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallysDadArrives
	return


PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallysDadArrives
	return


PetalburgCity_Gym_EventScript_WallysDadArrives::
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_EventScript_WallysDadArrives_Movement_0
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_ExclamationMark
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_Delay48
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8008
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_WallysDadArrives_3
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_WallysDadArrives_4
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_WallysDadArrives_5
PetalburgCity_Gym_EventScript_WallysDadArrives_1:
# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8008
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_WallysDadArrives_8
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_WallysDadArrives_9
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_WallysDadArrives_10
PetalburgCity_Gym_EventScript_WallysDadArrives_6:
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer
# 513 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8008
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_WallysDadArrives_13
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_WallysDadArrives_14
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_WallysDadArrives_15
PetalburgCity_Gym_EventScript_WallysDadArrives_11:
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLYS_DAD
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 523 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
	end

PetalburgCity_Gym_EventScript_WallysDadArrives_3:
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_1

PetalburgCity_Gym_EventScript_WallysDadArrives_4:
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_1

PetalburgCity_Gym_EventScript_WallysDadArrives_5:
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_1

PetalburgCity_Gym_EventScript_WallysDadArrives_8:
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_6

PetalburgCity_Gym_EventScript_WallysDadArrives_9:
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_6

PetalburgCity_Gym_EventScript_WallysDadArrives_10:
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_6

PetalburgCity_Gym_EventScript_WallysDadArrives_13:
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_11

PetalburgCity_Gym_EventScript_WallysDadArrives_14:
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_11

PetalburgCity_Gym_EventScript_WallysDadArrives_15:
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_11


PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 537 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 543 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 544 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth_Movement_0
# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 556 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast_Movement_0
# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest_Movement_0
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth_Movement_0
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth_Movement_1
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth_Movement_0
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast_Movement_0
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest_Movement_0
# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest_Movement_1
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
	return


# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
	step_end

# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
	step_end

# 664 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_lt PetalburgCity_Gym_EventScript_SpeedRoomDoor_2
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
# 681 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_SpeedRoomDoor_5
PetalburgCity_Gym_EventScript_SpeedRoomDoor_1:
# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	return

PetalburgCity_Gym_EventScript_SpeedRoomDoor_2:
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked
	goto PetalburgCity_Gym_EventScript_SpeedRoomDoor_1

PetalburgCity_Gym_EventScript_SpeedRoomDoor_5:
# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_SpeedRoomDoor_1


PetalburgCity_Gym_EventScript_EnterRoom::
# 690 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	return


PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_lt PetalburgCity_Gym_EventScript_AccuracyRoomDoor_2
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_AccuracyRoomDoor_5
PetalburgCity_Gym_EventScript_AccuracyRoomDoor_1:
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	return

PetalburgCity_Gym_EventScript_AccuracyRoomDoor_2:
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked
	goto PetalburgCity_Gym_EventScript_AccuracyRoomDoor_1

PetalburgCity_Gym_EventScript_AccuracyRoomDoor_5:
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_AccuracyRoomDoor_1


PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_RANDALL
	goto_if 0, PetalburgCity_Gym_EventScript_ConfusionRoomDoor_2
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterConfusionRoom, MSGBOX_YESNO
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_ConfusionRoomDoor_5
PetalburgCity_Gym_EventScript_ConfusionRoomDoor_1:
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	return

PetalburgCity_Gym_EventScript_ConfusionRoomDoor_2:
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked
	goto PetalburgCity_Gym_EventScript_ConfusionRoomDoor_1

PetalburgCity_Gym_EventScript_ConfusionRoomDoor_5:
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_ConfusionRoomDoor_1


PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_MARY
	goto_if 0, PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_2
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_5
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_1:
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	return

PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_2:
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked
	goto PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_1

PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_5:
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_1


PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_MARY
	goto_if 0, PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_2
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 79
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_5
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_1:
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	return

PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_2:
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked
	goto PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_1

PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_5:
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_1


PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_MARY
	goto_if 0, PetalburgCity_Gym_EventScript_RecoveryRoomDoor_2
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_RecoveryRoomDoor_5
PetalburgCity_Gym_EventScript_RecoveryRoomDoor_1:
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	return

PetalburgCity_Gym_EventScript_RecoveryRoomDoor_2:
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked
	goto PetalburgCity_Gym_EventScript_RecoveryRoomDoor_1

PetalburgCity_Gym_EventScript_RecoveryRoomDoor_5:
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_RecoveryRoomDoor_1


PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_PARKER
	goto_if 0, PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_2
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_5
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_1:
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	return

PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_2:
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked
	goto PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_1

PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_5:
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_1


PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_PARKER
	goto_if 0, PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_2
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_5
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_1:
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	return

PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_2:
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked
	goto PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_1

PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_5:
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_1


PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_ALEXIA
	goto_if 0, PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_2
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 834 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_5
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_1:
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	return

PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_2:
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked
	goto PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_1

PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_5:
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_1


PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_GEORGE
	goto_if 0, PetalburgCity_Gym_EventScript_RightOHKORoomDoor_2
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_RightOHKORoomDoor_5
PetalburgCity_Gym_EventScript_RightOHKORoomDoor_1:
# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	return

PetalburgCity_Gym_EventScript_RightOHKORoomDoor_2:
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked
	goto PetalburgCity_Gym_EventScript_RightOHKORoomDoor_1

PetalburgCity_Gym_EventScript_RightOHKORoomDoor_5:
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_RightOHKORoomDoor_1


PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_JODY
	goto_if 0, PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_2
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_5
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_1:
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	return

PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_2:
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked
	goto PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_1

PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_5:
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_1


PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_BERKE
	goto_if 0, PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_2
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_5
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_1:
# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	return

PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_2:
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked
	goto PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_1

PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_5:
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_1


PetalburgCity_Gym_EventScript_Randall::
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_Randall_2
PetalburgCity_Gym_EventScript_Randall_1:
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_Randall_2:
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
	goto PetalburgCity_Gym_EventScript_Randall_1


PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 911 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
	end


PetalburgCity_Gym_EventScript_Parker::
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_Parker_2
# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
PetalburgCity_Gym_EventScript_Parker_1:
	end

PetalburgCity_Gym_EventScript_Parker_2:
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
	goto PetalburgCity_Gym_EventScript_Parker_1


PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
	end


PetalburgCity_Gym_EventScript_George::
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_George_2
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
PetalburgCity_Gym_EventScript_George_1:
	end

PetalburgCity_Gym_EventScript_George_2:
# 946 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
	goto PetalburgCity_Gym_EventScript_George_1


PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 957 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
	end


PetalburgCity_Gym_EventScript_Berke::
# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_Berke_2
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
PetalburgCity_Gym_EventScript_Berke_1:
	end

PetalburgCity_Gym_EventScript_Berke_2:
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
	goto PetalburgCity_Gym_EventScript_Berke_1


PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 979 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
	end


PetalburgCity_Gym_EventScript_Mary::
# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_Mary_2
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
PetalburgCity_Gym_EventScript_Mary_1:
	end

PetalburgCity_Gym_EventScript_Mary_2:
# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
	goto PetalburgCity_Gym_EventScript_Mary_1


PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
	end


PetalburgCity_Gym_EventScript_Alexia::
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_Alexia_2
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
PetalburgCity_Gym_EventScript_Alexia_1:
	return

PetalburgCity_Gym_EventScript_Alexia_2:
# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
	goto PetalburgCity_Gym_EventScript_Alexia_1


PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
	end


PetalburgCity_Gym_EventScript_Jody::
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_Jody_2
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
PetalburgCity_Gym_EventScript_Jody_1:
	return

PetalburgCity_Gym_EventScript_Jody_2:
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
	goto PetalburgCity_Gym_EventScript_Jody_1


PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
	end


PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_2
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_1:
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_5
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_4:
# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_2:
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_1

PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_5:
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_4


PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_2
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_1:
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_5
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_4:
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_2:
# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_1

PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_5:
# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_4


PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_2
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_1:
# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_5
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_4:
# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_2:
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_1

PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_5:
# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_4


PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_2
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_1:
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_5
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_4:
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_2:
# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_1

PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_5:
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_4


PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_2
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_1:
# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_5
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_4:
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_2:
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_1

PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_5:
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_4


PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_2
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_1:
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_5
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_4:
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_2:
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_1

PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_5:
# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_4


PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_2
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_1:
# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_5
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_4:
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_2:
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_1

PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_5:
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_4


PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_2
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_1:
# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_5
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_4:
# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_2:
# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_1

PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_5:
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_4


PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return


PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return


PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return


PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return


PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return


PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return


PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return


PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return


PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
	return


PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
	return


PetalburgCity_Gym_EventScript_GymGuide::
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuide_2
# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice
PetalburgCity_Gym_EventScript_GymGuide_1:
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
	return

PetalburgCity_Gym_EventScript_GymGuide_2:
# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory
	goto PetalburgCity_Gym_EventScript_GymGuide_1


PetalburgCity_Gym_EventScript_GymStatue::
# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatue_2
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue
PetalburgCity_Gym_EventScript_GymStatue_1:
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	return

PetalburgCity_Gym_EventScript_GymStatue_2:
# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified
	goto PetalburgCity_Gym_EventScript_GymStatue_1


# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial_Movement_0:
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
	step_end

# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth_Movement_0:
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 286 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
	step_end

# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth_Movement_0:
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
	step_end

# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth_Movement_1:
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
	step_end

# 312 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest_Movement_0:
# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
	step_end

# 322 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast_Movement_0:
# 323 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end

# 332 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast_Movement_1:
# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
	step_end

# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_Movement_0:
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth_Movement_0:
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
	step_end

# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast_Movement_0:
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
	step_end

# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest_Movement_0:
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
	step_end

# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth_Movement_0:
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
	step_end

# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth_Movement_1:
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
	step_end

# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast_Movement_0:
# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
	step_end

# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest_Movement_0:
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 633 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
	step_end

# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest_Movement_1:
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
	step_end

PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm?\p"
	.string "Well, if it isn't {PLAYER}!\n"
	.string "So you're all finished moving in?\p"
	.string "I'm surprised that you managed to\n"
	.string "get here by yourself.\p"
	.string "Oh, I see.\n"
	.string "You're with your Pokémon.\p"
	.string "Hm… Then I guess you're going to\n"
	.string "become a Trainer like me, {PLAYER}.\p"
	.string "That's great news!\n"
	.string "I'll be looking forward to it!$"

PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
	.string "I'd like to get a Pokémon, please…$"

PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm? You're… Uh… Oh, right.\n"
	.string "You're Wally, right?$"

PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: I'm going to go stay with my\n"
	.string "relatives in Verdanturf Town.\p"
	.string "I thought I would be lonely by myself,\n"
	.string "so I wanted to take a Pokémon along.\p"
	.string "But I've never caught a Pokémon before.\n"
	.string "I don't know how…$"

PetalburgCity_Gym_Text_DadHmISee:
# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm. I see.$"

PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}, you heard that,\n"
	.string "right?\p"
	.string "Go with Wally and make sure that he\n"
	.string "safely catches a Pokémon.$"

PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally, here, I'll loan you my Pokémon.\p"
	.string "Wally received a Zigzagoon!$"

PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall:
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Oh, wow!\n"
	.string "A Pokémon!\p"
	.string "Dad: Hm. I'll give you a Poké Ball, too.\n"
	.string "Go for it!\p"
	.string "Wally received a Poké Ball!$"

PetalburgCity_Gym_Text_WallyOhWowThankYou:
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Oh, wow!\n"
	.string "Thank you!$"

PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… Would you really come\n"
	.string "with me?$"

PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: So, did it work out?$"

PetalburgCity_Gym_Text_WallyThankYouBye:
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Thank you, yes, it did.\n"
	.string "Here's your Pokémon back.\p"
	.string "{PLAYER}, thank you for coming along\n"
	.string "with me.\p"
	.string "You two are why I was able to catch\n"
	.string "my Pokémon.\p"
	.string "I promise I'll take really good\n"
	.string "care of it.\p"
	.string "Oh! My mom's waiting for me,\n"
	.string "so I have to go!\p"
	.string "Bye, {PLAYER}!$"

PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Now…\p"
	.string "{PLAYER}, if you want to become a\n"
	.string "strong Trainer, here's my advice.\p"
	.string "Head for Rustboro City beyond this\n"
	.string "town.\p"
	.string "There, you should challenge\n"
	.string "the Gym Leader, Roxanne.\p"
	.string "After her, go on to other Pokémon\n"
	.string "Gyms and defeat their Leaders.\p"
	.string "Collect Badges from them,\n"
	.string "understood?\p"
	.string "Of course, I'm a Gym Leader, too.\n"
	.string "We'll battle one day, {PLAYER}.\p"
	.string "But that's only after you become\n"
	.string "stronger.$"

PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm? Aren't you going to the\n"
	.string "Pokémon Gym in Rustboro City?\p"
	.string "There's no challenge for me to\n"
	.string "battle a greenhorn Trainer.\p"
	.string "{PLAYER}, I want you to challenge me\n"
	.string "when you become a lot stronger.\p"
	.string "I'll battle you, {PLAYER}, when you\n"
	.string "can show me four Gym Badges, okay?$"

PetalburgCity_Gym_Text_NormanGoToDewford:
# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: I see… So, you've beaten\n"
	.string "the Gym Leader in Rustboro City.\p"
	.string "But there are many more Trainers\n"
	.string "who are stronger than you, {PLAYER}.\p"
	.string "Across the sea in Dewford Town is a\n"
	.string "Gym Leader named Brawly.\p"
	.string "You should go challenge him.$"

PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm… {PLAYER}, you have gotten\n"
	.string "stronger.\p"
	.string "I can tell by the number of Badges\n"
	.string "that you've earned.$"

PetalburgCity_Gym_Text_NormanIntro:
# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm…\n"
	.string "So, you did get four Gym Badges.\p"
	.string "Fine, as I promised, we will have\n"
	.string "a Pokémon battle.\p"
	.string "{PLAYER}…\p"
	.string "I'm so happy that I can have\n"
	.string "a real battle with my own child.\p"
	.string "But, a battle is a battle!\p"
	.string "I will do everything in my power as\n"
	.string "a Gym Leader to win.\p"
	.string "{PLAYER}, you'd better give it your\n"
	.string "best shot, too!$"

PetalburgCity_Gym_Text_NormanDefeat:
# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
	.string "I… I can't…\p"
	.string "I can't believe it. {PLAYER}…\p"
	.string "I lost to {PLAYER}?\p"
	.string "But, rules are rules!\n"
	.string "Here, take this.$"

PetalburgCity_Gym_Text_ReceivedBalanceBadge:
# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the Balance Badge\n"
	.string "from Dad!$"

PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis:
# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: With that Badge, the Defense\n"
	.string "of all your Pokémon will increase.\p"
	.string "Pokémon that know the HM move Surf\n"
	.string "will be able to travel over water.\p"
	.string "This is my gift to you. {PLAYER}, I'm\n"
	.string "sure you can use it correctly.$"

PetalburgCity_Gym_Text_ExplainFacade:
# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: TM42 contains Facade.\p"
	.string "It doubles the power of moves if\n"
	.string "the Pokémon is poisoned, paralyzed,\l"
	.string "or burned.\p"
	.string "It might be able to turn a bad\n"
	.string "situation into an advantage.$"

PetalburgCity_Gym_Text_DadHappyAndSad:
# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: As the Gym Leader, I can't\n"
	.string "express how upset I am…\p"
	.string "But as a father, it makes me both\n"
	.string "happy and a little sad. It's odd…$"

PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
	.string "Please come with me.\n"
	.string "I have something I want you to have.$"

PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman, you don't mind, do you?\p"
	.string "Let me borrow your {PLAYER}{KUN} for\n"
	.string "a minute or two.$"

PetalburgCity_Gym_Text_DadGoingToKeepTraining:
# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}, you should go visit\n"
	.string "your mother every so often.\p"
	.string "I'm going to stay here and redouble\n"
	.string "my training.\p"
	.string "It would bother me as a Trainer to\n"
	.string "not avenge my loss to you, {PLAYER}!$"

PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}, how are things going?\p"
	.string "The world of Pokémon is deep.\p"
	.string "I honestly think that no amount of\n"
	.string "training would ever be enough.$"

PetalburgCity_Gym_Text_GymGuideAdvice:
# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, Champion-\n"
	.string "bound {PLAYER}?\p"
	.string "The doors in this GYM open when you\n"
	.string "beat the awaiting Trainers.\p"
	.string "Whoops! The doors in this room are\n"
	.string "already open, so don't attack me!\p"
	.string "The Trainers of Petalburg Gym\n"
	.string "use all kinds of items.\p"
	.string "The door at the left leads to\n"
	.string "the Speed Room.\p"
	.string "The door at the right leads to\n"
	.string "the Accuracy Room.\p"
	.string "The room's name will be on\n"
	.string "the door, so choose carefully.\p"
	.string "Once you've chosen the door…\n"
	.string "Well, hey, go for it!$"

PetalburgCity_Gym_Text_GymGuidePostVictory:
# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! You've overcome even\n"
	.string "your own father!\p"
	.string "Like, whoa!\n"
	.string "What a stunning turn of events!$"

PetalburgCity_Gym_Text_RandallIntro:
# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
	.string "opponent…\p"
	.string "Just that alone puts me at a great\n"
	.string "advantage, don't you agree?$"

PetalburgCity_Gym_Text_RandallDefeat:
# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"

PetalburgCity_Gym_Text_RandallPostBattle:
# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
	.string "challenge awaits you.\p"
	.string "At the left is the Confusion Room.\p"
	.string "The right door leads to the Defense\n"
	.string "Room.$"

PetalburgCity_Gym_Text_RandallPostBadge:
# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
	.string "may lose to, you never shirk from\l"
	.string "training yourself and your Pokémon.\p"
	.string "That's what I think being a\n"
	.string "Gym Leader is all about.$"

PetalburgCity_Gym_Text_ParkerIntro:
# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the Confusion Room.\p"
	.string "Let me see how well bonded you are\n"
	.string "with your Pokémon!$"

PetalburgCity_Gym_Text_ParkerDefeat:
# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
	.string "You share a strong bond together.$"

PetalburgCity_Gym_Text_ParkerPostBattle:
# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the Stregnth Room.\n"
	.string "Can you withstand brute force?$"

PetalburgCity_Gym_Text_ParkerPostBadge:
# 1531 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our Leader, the\n"
	.string "training has become a lot tougher.$"

PetalburgCity_Gym_Text_GeorgeIntro:
# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
	.string "win, your opponent restores HP…\p"
	.string "Can you just imagine how awful that\n"
	.string "must feel?\p"
	.string "I'll show you exactly how awful it\n"
	.string "feels!$"

PetalburgCity_Gym_Text_GeorgeDefeat:
# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
	.string "What Attack power…$"

PetalburgCity_Gym_Text_GeorgePostBattle:
# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
	.string "our Leader's kid.\p"
	.string "No, wait! A Trainer's abilities are\n"
	.string "earned only through effort.\p"
	.string "I lost because my own efforts\n"
	.string "weren't enough.\p"
	.string "Go on! The One-Hit KO Room is next.$"

PetalburgCity_Gym_Text_GeorgePostBadge:
# 1560 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at Gyms.\n"
	.string "One day, I'll become a Leader.$"

PetalburgCity_Gym_Text_BerkeIntro:
# 1565 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
	.string "because you're our Leader's kid.\p"
	.string "I'll show you how horrid it is for\n"
	.string "a Pokémon to take a critical hit!$"

PetalburgCity_Gym_Text_BerkeDefeat:
# 1572 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
	.string "You're the real deal.$"

PetalburgCity_Gym_Text_BerkePostBattle:
# 1577 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father really is strong.\n"
	.string "He's a Trainer worth my respect.\p"
	.string "And, I sense the same glow coming\n"
	.string "from you as your father.\p"
	.string "I hope that you'll stage a terrific\n"
	.string "battle with your father!$"

PetalburgCity_Gym_Text_BerkePostBadge:
# 1586 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad became the Leader,\n"
	.string "the Trainers of Petalburg City have\l"
	.string "become a lot tougher.$"

PetalburgCity_Gym_Text_MaryIntro:
# 1592 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
	.string "This is the Accuracy Room.\p"
	.string "It's pretty nasty when every attack\n"
	.string "lands without fail.$"

PetalburgCity_Gym_Text_MaryDefeat:
# 1599 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"

PetalburgCity_Gym_Text_MaryPostBattle:
# 1603 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
	.string "Trainers waiting for you.\p"
	.string "The left is the Defense Room, and\n"
	.string "the right is the Recovery Room.\p"
	.string "Your Pokémon's Attack power will be\n"
	.string "on trial either way.$"

PetalburgCity_Gym_Text_MaryPostBadge:
# 1612 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
	.string "achieve as Trainers?\p"
	.string "We're striving to become soul mates\n"
	.string "with our Pokémon.$"

PetalburgCity_Gym_Text_AlexiaIntro:
# 1619 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the Defense, the more\n"
	.string "reckless I can be in attack.$"

PetalburgCity_Gym_Text_AlexiaDefeat:
# 1624 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"

PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1628 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
	.string "lesson here.\p"
	.string "Now, go on! The left door goes to\n"
	.string "the Strength Room.\p"
	.string "The right door opens to\n"
	.string "the One-Hit KO Room.\p"
	.string "Both of them have Trainers who are\n"
	.string "skilled at offense.$"

PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1639 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using Surf?$"

PetalburgCity_Gym_Text_JodyIntro:
# 1643 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our GYM LEADER told us to go all out\n"
	.string "and beat you.\p"
	.string "Even if you happen to be the\n"
	.string "Leader's kid!$"

PetalburgCity_Gym_Text_JodyDefeat:
# 1650 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"

PetalburgCity_Gym_Text_JodyPostBattle:
# 1654 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your Pokémon…\n"
	.string "It's like your father's style.\p"
	.string "Go on through! The Gym Leader, your\n"
	.string "father, is waiting!$"

PetalburgCity_Gym_Text_JodyPostBadge:
# 1661 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your Pokémon\n"
	.string "stronger.\p"
	.string "But what decides the winner?\p"
	.string "Why, it's the feelings Trainers have\n"
	.string "for their Pokémon.$"

PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1669 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
	.string "right now…$"

PetalburgCity_Gym_Text_EnterSpeedRoom:
# 1674 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Speed Room”, the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterAccuracyRoom:
# 1679 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Accuracy Room”, the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterConfusionRoom:
# 1684 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Confusion Room”, the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterDefenseRoom:
# 1689 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Defense Room”, the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterRecoveryRoom:
# 1694 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Recovery Room,”, the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterStrengthRoom:
# 1699 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Strength Room”, the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterOHKORoom:
# 1704 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“One-Hit KO Room”, the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterGymLeadersRoom:
# 1709 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Gym Leader's Room\p"
	.string "“See for yourself what Pokémon await\n"
	.string "you!” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_GymStatue:
# 1716 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Petalburg City Pokémon Gym$"

PetalburgCity_Gym_Text_GymStatueCertified:
# 1720 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Petalburg City Pokémon Gym\p"
	.string "Norman's Certified Trainers:\n"
	.string "{PLAYER}$"

PetalburgCity_Gym_Text_NormanPreRematch:
# 1726 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}…\n"
	.string "I had a feeling that you would come.\p"
	.string "I would never refuse to accept\n"
	.string "a challenge from you.\p"
	.string "You do understand, don't you?\p"
	.string "Inside a Gym, it doesn't matter that\n"
	.string "we are a parent and child.\p"
	.string "…No, because we are parent and child,\n"
	.string "we owe it to each other to do the best\l"
	.string "we can. Isn't that right, {PLAYER}?$"

PetalburgCity_Gym_Text_NormanRematchDefeat:
# 1739 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Uh… Haha…\n"
	.string "Maybe that was going too hard…$"

PetalburgCity_Gym_Text_NormanPostRematch:
# 1744 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}…\n"
	.string "What is your dream?\p"
	.string "My dream…\n"
	.string "Hahaha…\l"
	.string "It has already come true, actually.$"

PetalburgCity_Gym_Text_NormanRematchNeedTwoMons:
# 1752 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}…\n"
	.string "I had a feeling that you would come.\p"
	.string "I would never refuse to accept\n"
	.string "a challenge from you.\p"
	.string "You do understand, don't you?\p"
	.string "Inside a Gym, it doesn't matter that\n"
	.string "we are a parent and child.\p"
	.string "Hm? Wait a second, {PLAYER}.\p"
	.string "Do you only have one Pokémon that is\n"
	.string "capable of battle?\p"
	.string "Sorry, but you'll have to come back\n"
	.string "with at least two Pokémon.$"
