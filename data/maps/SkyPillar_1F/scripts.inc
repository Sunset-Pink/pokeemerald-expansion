SkyPillar_1F_MapScripts::
# 2 "data/maps/SkyPillar_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_1F_OnTransition
	.byte 0


SkyPillar_1F_OnTransition:
# 6 "data/maps/SkyPillar_1F/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 2, SkyPillar_1F_EventScript_CleanFloor
	end


SkyPillar_1F_EventScript_CleanFloor::
# 11 "data/maps/SkyPillar_1F/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_1F_CLEAN
	return

