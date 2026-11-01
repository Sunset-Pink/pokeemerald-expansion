# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 3 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 4 "data/maps/LittlerootTown/scripts.pory"
	return
# 5 "data/maps/LittlerootTown/scripts.pory"

# 6 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 7 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 8 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 9 "data/maps/LittlerootTown/scripts.pory"
	return
# 10 "data/maps/LittlerootTown/scripts.pory"

# 11 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 12 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_RIVAL_HOUSE_STATE, 5
# 13 "data/maps/LittlerootTown/scripts.pory"
	return
# 14 "data/maps/LittlerootTown/scripts.pory"

# 15 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 16 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 17 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 10, 1
# 18 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_UP
# 19 "data/maps/LittlerootTown/scripts.pory"
	return
# 20 "data/maps/LittlerootTown/scripts.pory"

# 21 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 22 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 7, 2
# 23 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 24 "data/maps/LittlerootTown/scripts.pory"
	return
# 25 "data/maps/LittlerootTown/scripts.pory"

# 26 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 27 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 28 "data/maps/LittlerootTown/scripts.pory"
	release
# 29 "data/maps/LittlerootTown/scripts.pory"
	end
# 30 "data/maps/LittlerootTown/scripts.pory"

# 31 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 32 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 33 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 34 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 35 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 36 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 37 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 38 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 39 "data/maps/LittlerootTown/scripts.pory"
	end
# 40 "data/maps/LittlerootTown/scripts.pory"

# 41 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 42 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_Twin_PokemonWillJumpOut, MSGBOX_DEFAULT
# 43 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 44 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 45 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 46 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 47 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 48 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 49 "data/maps/LittlerootTown/scripts.pory"
	return
# 50 "data/maps/LittlerootTown/scripts.pory"

# 51 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 52 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 53 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 54 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 55 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 56 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 57 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 58 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 59 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 60 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 61 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 62 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 63 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 64 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 65 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 66 "data/maps/LittlerootTown/scripts.pory"

# 67 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 68 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 69 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 70 "data/maps/LittlerootTown/scripts.pory"

# 71 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 72 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 73 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 74 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 75 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 76 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 77 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 78 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 79 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 80 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 81 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 82 "data/maps/LittlerootTown/scripts.pory"

# 83 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 84 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 85 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 86 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 87 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 88 "data/maps/LittlerootTown/scripts.pory"

# 89 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 90 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 91 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 92 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 93 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 94 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnRight
# 95 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 96 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 97 "data/maps/LittlerootTown/scripts.pory"
	end
# 98 "data/maps/LittlerootTown/scripts.pory"

# 99 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 100 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 101 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 102 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 103 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 104 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 105 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 106 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 107 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 108 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 109 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 110 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 111 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 112 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 113 "data/maps/LittlerootTown/scripts.pory"

# 114 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 115 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 116 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 117 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 118 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 119 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 120 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 121 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 122 "data/maps/LittlerootTown/scripts.pory"

# 123 "data/maps/LittlerootTown/scripts.pory"
	
# 124 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 125 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 126 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 127 "data/maps/LittlerootTown/scripts.pory"

# 128 "data/maps/LittlerootTown/scripts.pory"

# 129 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 130 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 131 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"

LittlerootTown_MapScripts::
# 135 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Script_LittlerootTown_OnTransition
# 136 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 137 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_QUEST_INTRO_STATE, 1, Script_LittlerootTown_Intro_StepOffTruck
	.2byte 0


Script_LittlerootTown_OnTransition:
# 150 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 151 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Script_LittlerootTown_OnTransition_2
Script_LittlerootTown_OnTransition_1:
	end

Script_LittlerootTown_OnTransition_2:
# 153 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 8
	goto Script_LittlerootTown_OnTransition_1


Script_LittlerootTown_Intro_StepOffTruck::
# 159 "data/maps/LittlerootTown/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_Intro_StepOffTruck_2
# 164 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 165 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
Script_LittlerootTown_Intro_StepOffTruck_1:
# 167 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Intro_GoInsideWithMom
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_Intro_StepOffTruck_6
# 172 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 173 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
Script_LittlerootTown_Intro_StepOffTruck_5:
# 175 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 176 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

Script_LittlerootTown_Intro_StepOffTruck_2:
# 161 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 162 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
	goto Script_LittlerootTown_Intro_StepOffTruck_1

Script_LittlerootTown_Intro_StepOffTruck_6:
# 169 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 170 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
	goto Script_LittlerootTown_Intro_StepOffTruck_5


Script_LittlerootTown_Intro_OpenDoor::
# 181 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 182 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
	return


Script_LittlerootTown_Intro_CloseDoor::
# 187 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 188 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
	return


Script_LittlerootTown_Intro_GoInsideWithMom::
# 193 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 194 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 195 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_0
# 199 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 200 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Intro_OpenDoor
# 201 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_MOM
# 202 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_1
# 205 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 206 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Intro_CloseDoor
# 207 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 208 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_2
# 212 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 213 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_Mom_OurNewHome
# 214 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 215 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_3
# 220 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_4
# 226 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 227 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Intro_OpenDoor
# 228 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_5
# 232 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_6
# 235 "data/maps/LittlerootTown/scripts.pory"
	waitmovement
# 236 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 237 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_QUEST_INTRO_STATE, 1
# 238 "data/maps/LittlerootTown/scripts.pory"
	hideplayer
# 239 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Intro_CloseDoor
# 240 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 241 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	return


Script_LittlerootTown_Interact_FatMan::
# 246 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_FatMan_UsePCToStoreItems, MSGBOX_NPC
	end


Script_LittlerootTown_Interact_Boy::
# 257 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_Boy_ProfBitch, MSGBOX_NPC
	end


Script_LittlerootTown_Interact_TownSign::
# 283 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_TownSign, MSGBOX_SIGN
	end


Script_LittlerootTown_Interact_LabSign::
# 293 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_LabSign, MSGBOX_SIGN
	end


Script_LittlerootTown_Interact_BrendansHouseSign::
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_Interact_BrendansHouseSign_1
# 305 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_BirchsSign, MSGBOX_SIGN
	return

Script_LittlerootTown_Interact_BrendansHouseSign_1:
# 303 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_PlayersSign, MSGBOX_SIGN
	return


Script_LittlerootTown_Interact_MaysHouseSign::
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Script_LittlerootTown_Interact_MaysHouseSign_1
# 313 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_BirchsSign, MSGBOX_SIGN
	return

Script_LittlerootTown_Interact_MaysHouseSign_1:
# 311 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_PlayersSign, MSGBOX_SIGN
	return


Script_LittlerootTown_Interact_Twin::
# 326 "data/maps/LittlerootTown/scripts.pory"
	lock
# 327 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 328 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, Script_LittlerootTown_Interact_Twin_2
# 331 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_Twin_PokemonWillJumpOut
Script_LittlerootTown_Interact_Twin_1:
# 333 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

Script_LittlerootTown_Interact_Twin_2:
# 329 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GoodLuck
	goto Script_LittlerootTown_Interact_Twin_1


# 195 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_0:
# 196 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 197 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 197 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 197 "data/maps/LittlerootTown/scripts.pory"
	delay_16
	step_end

# 202 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_1:
# 203 "data/maps/LittlerootTown/scripts.pory"
	walk_down
	step_end

# 208 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_2:
# 209 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 210 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
	step_end

# 215 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_3:
# 216 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 217 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 218 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

# 220 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_4:
# 221 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 222 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 223 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 224 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 228 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_5:
# 229 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 230 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
	step_end

# 232 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_6:
# 233 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 233 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

Text_LittlerootTown_FatMan_UsePCToStoreItems:
# 250 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
	.string "and Pokemon.\p"
	.string "The power of science is staggering!$"

Text_LittlerootTown_Boy_ProfBitch:
# 261 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch tries to spend time\n"
	.string "in the wild. But he is absolutely\l"
	.string "useless in the field.\p"
	.string "One time he got absolutely swarmed\n"
	.string "by some Zigzagoons. Talk about useless,\l"
	.string "might as well call him, Prof. Bitch.$"

Text_LittlerootTown_Mom_OurNewHome:
# 269 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: {PLAYER}, we're here, honey!\p"
	.string "It must be tiring riding with our things\n"
	.string "in the moving truck.\p"
	.string "Well, this is Littleroot Town.\p"
	.string "How do you like it?\n"
	.string "This is our new home!\p"
	.string "It has a quaint feel, but it seems to be\n"
	.string "an easy place to live, don't you think?\p"
	.string "And, you get your own room, {PLAYER}!\n"
	.string "Let's go inside.$"

Text_LittlerootTown_TownSign::
# 287 "data/maps/LittlerootTown/scripts.pory"
	.string "Littleroot Town\n"
	.string "“A town that can't be shaded any hue.”$"

Text_LittlerootTown_LabSign::
# 297 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's Pokémon Lab.$"

Text_LittlerootTown_PlayersSign::
# 317 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s House.$"

Text_LittlerootTown_BirchsSign::
# 321 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's House.$"

Text_LittlerootTown_Twin_PokemonWillJumpOut:
# 336 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
	.string "If you go outside and go in the grass,\n"
	.string "wild Pokémon will jump out!$"
