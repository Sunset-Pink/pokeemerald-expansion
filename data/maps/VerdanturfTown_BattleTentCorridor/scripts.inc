VerdanturfTown_BattleTentCorridor_MapScripts::
# 2 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VerdanturfTown_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

VerdanturfTown_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, VerdanturfTown_BattleTentCorridor_EventScript_EnterCorridor
	.2byte 0


# 7 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 8 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_BattleTentCorridor_EventScript_EnterCorridor::
# 9 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	lockall
# 10 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 11 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_CORRIDOR_ATTENDANT, VerdanturfTown_BattleTentCorridor_Movement_WalkToDoor
# 12 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, VerdanturfTown_BattleTentCorridor_Movement_WalkToDoor
# 13 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 14 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	opendoor 2, 1
# 15 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	waitdooranim
# 16 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_CORRIDOR_ATTENDANT, VerdanturfTown_BattleTentCorridor_Movement_AttendantEnterDoor
# 17 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, VerdanturfTown_BattleTentCorridor_Movement_PlayerEnterDoor
# 18 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 19 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	closedoor 2, 1
# 20 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	waitdooranim
# 21 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	setvar VAR_0x8006, 0
# 22 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	warp MAP_VERDANTURF_TOWN_BATTLE_TENT_BATTLE_ROOM, 6, 5
# 23 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	waitstate
# 24 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	releaseall
# 25 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	end
# 26 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 27 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_BattleTentCorridor_Movement_WalkToDoor:
# 28 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 29 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 30 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 31 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 32 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	step_end
# 33 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 34 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_BattleTentCorridor_Movement_PlayerEnterDoor:
# 35 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 36 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_BattleTentCorridor_Movement_AttendantEnterDoor:
# 37 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 38 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	set_invisible
# 39 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	step_end
