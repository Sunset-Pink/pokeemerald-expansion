SkyPillar_4F_MapScripts::
# 2 "data/maps/SkyPillar_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 3 "data/maps/SkyPillar_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_4F_OnTransition
# 4 "data/maps/SkyPillar_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SkyPillar_4F_SetHoleWarp
	.byte 0


SkyPillar_4F_OnTransition:
# 8 "data/maps/SkyPillar_4F/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 2, SkyPillar_4F_EventScript_CleanFloor
# 9 "data/maps/SkyPillar_4F/scripts.pory"
	setvar VAR_ICE_STEP_COUNT, 1
	end


SkyPillar_4F_EventScript_CleanFloor::
# 14 "data/maps/SkyPillar_4F/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_4F_CLEAN
	return


SkyPillar_4F_SetHoleWarp:
# 19 "data/maps/SkyPillar_4F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 20 "data/maps/SkyPillar_4F/scripts.pory"
	setholewarp MAP_SKY_PILLAR_3F
	end

