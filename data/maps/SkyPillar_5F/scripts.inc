SkyPillar_5F_MapScripts::
# 2 "data/maps/SkyPillar_5F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_5F_OnTransition
	.byte 0


SkyPillar_5F_OnTransition:
# 6 "data/maps/SkyPillar_5F/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 2, SkyPillar_5F_EventScript_CleanFloor
	return


SkyPillar_5F_EventScript_CleanFloor::
# 11 "data/maps/SkyPillar_5F/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_5F_CLEAN
	return

