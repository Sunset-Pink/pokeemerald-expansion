SlateportCity_BattleTentBattleRoom_MapScripts::
# 7 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_BattleTentBattleRoom_OnTransition
# 8 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SlateportCity_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 11 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SlateportCity_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 9 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, SlateportCity_BattleTentBattleRoom_EventScript_SetUpObjects
	.2byte 0

SlateportCity_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, SlateportCity_BattleTentBattleRoom_EventScript_EnterRoom
	.2byte 0


# 16 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 17 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_OnTransition:
# 18 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	call SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfx
# 19 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	end
# 20 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 21 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfx::
# 22 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	checkplayergender
# 23 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfxMale
# 24 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfxFemale
# 25 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	return
# 26 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 27 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfxMale::
# 28 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 29 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	return
# 30 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 31 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfxFemale::
# 32 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 33 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	return
# 34 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 35 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_SetUpObjects::
# 36 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 37 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
# 38 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_SLATEPORT_TENT_BATTLE_OPPONENT, MAP_SLATEPORT_CITY_BATTLE_TENT_BATTLE_ROOM
# 39 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	end
# 40 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 41 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_EnterRoom::
# 42 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_SLATEPORT_TENT_BATTLE_PLAYER, SlateportCity_BattleTentBattleRoom_Movement_PlayerEnter
# 43 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 44 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	factory_setopponentgfx
# 45 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_TENT_BATTLE_OPPONENT, 5, 1
# 46 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	removeobject LOCALID_SLATEPORT_TENT_BATTLE_OPPONENT
# 47 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	delay 1
# 48 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	addobject LOCALID_SLATEPORT_TENT_BATTLE_OPPONENT
# 49 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_SLATEPORT_TENT_BATTLE_OPPONENT, SlateportCity_BattleTentBattleRoom_Movement_OpponentEnter
# 50 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 51 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	battletent_getopponentintro
# 52 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	lockall
# 53 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 54 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 55 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	closemessage
# 56 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	special HealPlayerParty
# 57 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_FACTORY
# 58 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	waitstate
# 59 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 60 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	case 1, SlateportCity_BattleTentBattleRoom_EventScript_DefeatedOpponent
# 61 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTent_EventScript_WarpToLobbyLost::
# 62 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 63 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 64 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	warp MAP_SLATEPORT_CITY_BATTLE_TENT_LOBBY, 6, 6
# 65 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	waitstate
# 66 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
@ forced stop
# 67 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 68 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_DefeatedOpponent::
# 69 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 70 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 71 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 72 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 73 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	case 3, SlateportCity_BattleTentBattleRoom_EventScript_WarpToLobbyWon
# 74 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	setvar VAR_0x8006, 1
# 75 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	warp MAP_SLATEPORT_CITY_BATTLE_TENT_CORRIDOR, 2, 3
# 76 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	waitstate
# 77 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
@ forced stop
# 78 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 79 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_WarpToLobbyWon::
# 80 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 81 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 82 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	warp MAP_SLATEPORT_CITY_BATTLE_TENT_LOBBY, 6, 6
# 83 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	waitstate
# 84 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
@ forced stop
# 85 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 86 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_Movement_PlayerEnter:
# 87 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_up
# 88 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_up
# 89 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_up
# 90 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 91 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	step_end
# 92 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 93 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_Movement_OpponentEnter:
# 94 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_down
# 95 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_down
# 96 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_down
# 97 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_down
# 98 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 99 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	step_end
