SkyPillar_Top_MapScripts::
# 2 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SkyPillar_Top_OnResume
# 3 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Top_OnTransition
# 4 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 5 "data/maps/SkyPillar_Top/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 0, SkyPillar_Top_EventScript_RayquazaFaceDown
	.2byte 0


# 8 "data/maps/SkyPillar_Top/scripts.pory"

# 9 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnResume:
# 10 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SkyPillar_Top_EventScript_TryRemoveRayquaza
# 11 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 12 "data/maps/SkyPillar_Top/scripts.pory"

# 13 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryRemoveRayquaza::
# 14 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 16 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 17 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 18 "data/maps/SkyPillar_Top/scripts.pory"

# 19 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnTransition:
# 20 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 2, SkyPillar_Top_EventScript_SetCleanLayout
# 21 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 2, SkyPillar_Top_EventScript_TryShowRayquaza
# 22 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 23 "data/maps/SkyPillar_Top/scripts.pory"

# 24 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_SetCleanLayout::
# 25 "data/maps/SkyPillar_Top/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_TOP_CLEAN
# 26 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_RAYQUAZA_SLEEPING, MOVEMENT_TYPE_FACE_DOWN
# 27 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 28 "data/maps/SkyPillar_Top/scripts.pory"

# 29 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryShowRayquaza::
# 30 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_unset FLAG_DEFEATED_RAYQUAZA, SkyPillar_Top_EventScript_ShowRayquaza
# 31 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 32 "data/maps/SkyPillar_Top/scripts.pory"

# 33 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShowRayquaza::
# 34 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL
# 35 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 36 "data/maps/SkyPillar_Top/scripts.pory"

# 37 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RayquazaFaceDown::
# 38 "data/maps/SkyPillar_Top/scripts.pory"
	turnobject LOCALID_RAYQUAZA_SLEEPING, DIR_SOUTH
# 39 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 40 "data/maps/SkyPillar_Top/scripts.pory"

# 41 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza::
# 42 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 43 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 44 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 45 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 46 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 47 "data/maps/SkyPillar_Top/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 70
# 48 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 49 "data/maps/SkyPillar_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 50 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 51 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 52 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SkyPillar_Top_EventScript_DefeatedRayquaza
# 53 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SkyPillar_Top_EventScript_RanFromRayquaza
# 54 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SkyPillar_Top_EventScript_RanFromRayquaza
# 55 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 56 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 57 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 58 "data/maps/SkyPillar_Top/scripts.pory"

# 59 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza::
# 60 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 61 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_DefeatedRayquaza2
# 62 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 63 "data/maps/SkyPillar_Top/scripts.pory"

# 64 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza::
# 65 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 66 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_RanFromRayquaza2
# 67 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 68 "data/maps/SkyPillar_Top/scripts.pory"

# 69 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza2::
# 70 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 71 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 72 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 73 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 74 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 75 "data/maps/SkyPillar_Top/scripts.pory"

# 76 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza2::
# 77 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 78 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 79 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 80 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 81 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 82 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 83 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 84 "data/maps/SkyPillar_Top/scripts.pory"

# 85 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_AwakenRayquaza::
# 86 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 87 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 88 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 89 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 90 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 91 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_CAMERA, SkyPillar_Top_Movement_CameraPanUp
# 92 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 93 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 94 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 95 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 96 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 97 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 98 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 99 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 100 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 101 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 102 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 103 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 104 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 105 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 106 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 107 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 108 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 109 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 110 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 111 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 112 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 113 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 115 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 116 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
# 117 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 118 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 119 "data/maps/SkyPillar_Top/scripts.pory"
	fadeinbgm 1
# 120 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 121 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_CAMERA, SkyPillar_Top_Movement_CameraPanDown
# 122 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 123 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 124 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 125 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 1
# 126 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 1
# 127 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 128 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 129 "data/maps/SkyPillar_Top/scripts.pory"

# 130 "data/maps/SkyPillar_Top/scripts.pory"
@ Rayquaza has unusual movement frames
# 131 "data/maps/SkyPillar_Top/scripts.pory"
@ See comments, or sAnimTable_Rayquaza
# 132 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaStir:
# 133 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 134 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_left  @ Coiled, awake
# 135 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 136 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 137 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 138 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 139 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 140 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_left  @ Coiled, mouth open
# 141 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 142 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 143 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 144 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 145 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 146 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 147 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 148 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 149 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 150 "data/maps/SkyPillar_Top/scripts.pory"

# 151 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaFlyOff:
# 152 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 153 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_down  @ Coiled, asleep
# 154 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 155 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 156 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 157 "data/maps/SkyPillar_Top/scripts.pory"
	walk_faster_up  @ Fly up
# 158 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 159 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 160 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 161 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 165 "data/maps/SkyPillar_Top/scripts.pory"

# 166 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanUp:
# 167 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 168 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 169 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 170 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 171 "data/maps/SkyPillar_Top/scripts.pory"

# 172 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanDown:
# 173 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 174 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 175 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 176 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

SkyPillar_Top_Text_RayquazaFlewOff:
# 181 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The awakened Rayquaza flew off…$"
