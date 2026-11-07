LittlerootTown_BrendansHouse_2F_MapScripts::
# 3 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Script_LittlerootTown_BrendansHouse_2F_OnTransition
# 4 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
	.2byte 0


Script_LittlerootTown_BrendansHouse_2F_OnTransition:
# 10 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 2
	goto_if_eq Script_LittlerootTown_BrendansHouse_2F_OnTransition_3
Script_LittlerootTown_BrendansHouse_2F_OnTransition_1:
# 15 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RIVAL_STATE, 1
	goto_if_eq Script_LittlerootTown_BrendansHouse_2F_OnTransition_8
Script_LittlerootTown_BrendansHouse_2F_OnTransition_6:
# 20 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 21 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
	end

Script_LittlerootTown_BrendansHouse_2F_OnTransition_2:
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_QUEST_INTRO_STATE, 3
	goto Script_LittlerootTown_BrendansHouse_2F_OnTransition_1

Script_LittlerootTown_BrendansHouse_2F_OnTransition_3:
	checkplayergender
# 0 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_BrendansHouse_2F_OnTransition_2
	goto Script_LittlerootTown_BrendansHouse_2F_OnTransition_1

Script_LittlerootTown_BrendansHouse_2F_OnTransition_7:
# 16 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVALS_HOUSE_2F_RIVAL, 0, 2
# 17 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVALS_HOUSE_2F_RIVAL, MOVEMENT_TYPE_FACE_UP
	goto Script_LittlerootTown_BrendansHouse_2F_OnTransition_6

Script_LittlerootTown_BrendansHouse_2F_OnTransition_8:
	checkplayergender
# 0 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Script_LittlerootTown_BrendansHouse_2F_OnTransition_7
	goto Script_LittlerootTown_BrendansHouse_2F_OnTransition_6


LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
	checkplayergender
# 0 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor_2
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor_1:
	end

LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor_2:
# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto SecretBase_EventScript_InitDecorations
	goto LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor_1


LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_PC_2
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail
LittlerootTown_BrendansHouse_2F_EventScript_PC_1:
# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_PC_2:
# 35 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_PlayersHouse_2F_EventScript_CheckPlayersPC
	goto LittlerootTown_BrendansHouse_2F_EventScript_PC_1


Script_LittlerootTown_BrendansHouse_2F_Interact_GameCube::
	checkplayergender
# 0 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_BrendansHouse_2F_Interact_GameCube_2
# 47 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Script_RivalsHouse_2F_Interact_GameCube
Script_LittlerootTown_BrendansHouse_2F_Interact_GameCube_1:
# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	release
	end

Script_LittlerootTown_BrendansHouse_2F_Interact_GameCube_2:
# 45 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Script_PlayersHouse_2F_Interact_GameCube
	goto Script_LittlerootTown_BrendansHouse_2F_Interact_GameCube_1


Script_LittlerootTown_BrendansHouse_2F_Interact_Notebook::
	checkplayergender
# 0 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_BrendansHouse_2F_Interact_Notebook_2
# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Script_RivalsHouse_2F_Interact_Notebook
Script_LittlerootTown_BrendansHouse_2F_Interact_Notebook_1:
# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	release
	end

Script_LittlerootTown_BrendansHouse_2F_Interact_Notebook_2:
# 55 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Script_PlayersHouse_2F_Interact_Notebook
	goto Script_LittlerootTown_BrendansHouse_2F_Interact_Notebook_1

