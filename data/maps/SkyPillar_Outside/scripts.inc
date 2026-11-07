SkyPillar_Outside_MapScripts::
# 2 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Outside_OnTransition
# 3 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SkyPillar_Outside_OnLoad
# 4 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 3, SkyPillar_Outside_EventScript_WallaceScene
	.2byte 0


# 8 "data/maps/SkyPillar_Outside/scripts.pory"

# 9 "data/maps/SkyPillar_Outside/scripts.pory"

# 10 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnTransition:
# 11 "data/maps/SkyPillar_Outside/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SkyPillar_Outside_EventScript_HideMapNamePopup
# 12 "data/maps/SkyPillar_Outside/scripts.pory"
	call_if_ge VAR_SOOTOPOLIS_CITY_STATE, 4, SkyPillar_Outside_EventScript_CheckSetAbnormalWeather
# 13 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 14 "data/maps/SkyPillar_Outside/scripts.pory"

# 15 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_HideMapNamePopup::
# 16 "data/maps/SkyPillar_Outside/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 17 "data/maps/SkyPillar_Outside/scripts.pory"
	return
# 18 "data/maps/SkyPillar_Outside/scripts.pory"

# 19 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_CheckSetAbnormalWeather::
# 20 "data/maps/SkyPillar_Outside/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 21 "data/maps/SkyPillar_Outside/scripts.pory"
	return
# 22 "data/maps/SkyPillar_Outside/scripts.pory"

# 23 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_OnLoad:
# 24 "data/maps/SkyPillar_Outside/scripts.pory"
	call_if_set FLAG_WALLACE_GOES_TO_SKY_PILLAR, SkyPillar_Outside_EventScript_OpenDoor
# 25 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 26 "data/maps/SkyPillar_Outside/scripts.pory"

# 27 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_OpenDoor::
# 28 "data/maps/SkyPillar_Outside/scripts.pory"
	setmetatile 14, 4, METATILE_Pacifidlog_SkyPillar_DoorOpen_Top, FALSE
# 29 "data/maps/SkyPillar_Outside/scripts.pory"
	setmetatile 14, 5, METATILE_Pacifidlog_SkyPillar_DoorOpen_Bottom, FALSE
# 30 "data/maps/SkyPillar_Outside/scripts.pory"
	return
# 31 "data/maps/SkyPillar_Outside/scripts.pory"

# 32 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_WallaceScene::
# 33 "data/maps/SkyPillar_Outside/scripts.pory"
	lockall
# 34 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, SkyPillar_Outside_Movement_WallaceApproachPlayer
# 35 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 36 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 37 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 38 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_OpenedDoorToSkyPillar, MSGBOX_DEFAULT
# 39 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 40 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 41 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 42 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 43 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 44 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 45 "data/maps/SkyPillar_Outside/scripts.pory"
	special ShakeCamera
# 46 "data/maps/SkyPillar_Outside/scripts.pory"
	waitstate
# 47 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 40
# 48 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_EarthquakeNotMomentToWaste, MSGBOX_DEFAULT
# 49 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 50 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_PLAYER, SkyPillar_Outside_Movement_PlayerClimbSkyPillar
# 51 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, SkyPillar_Outside_Movement_WallaceClimbSkyPillar
# 52 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 53 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 54 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8005, 3   @ horizontal pan
# 55 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8006, 20  @ num shakes
# 56 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8007, 5   @ shake delay
# 57 "data/maps/SkyPillar_Outside/scripts.pory"
	special ShakeCamera
# 58 "data/maps/SkyPillar_Outside/scripts.pory"
	waitstate
# 59 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 20
# 60 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, Common_Movement_WalkInPlaceFasterLeft
# 61 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 62 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 10
# 63 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, Common_Movement_WalkInPlaceFasterRight
# 64 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 65 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 20
# 66 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, Common_Movement_WalkInPlaceFasterDown
# 67 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 68 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 69 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_SituationGettingWorse, MSGBOX_DEFAULT
# 70 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 71 "data/maps/SkyPillar_Outside/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 72 "data/maps/SkyPillar_Outside/scripts.pory"
	setweather WEATHER_ABNORMAL
# 73 "data/maps/SkyPillar_Outside/scripts.pory"
	doweather
# 74 "data/maps/SkyPillar_Outside/scripts.pory"
	special WaitWeather
# 75 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 76 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_GotToGoBackForSootopolis, MSGBOX_DEFAULT
# 77 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 78 "data/maps/SkyPillar_Outside/scripts.pory"
	playse SE_EXIT
# 79 "data/maps/SkyPillar_Outside/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 80 "data/maps/SkyPillar_Outside/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 81 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 4
# 82 "data/maps/SkyPillar_Outside/scripts.pory"
	removeobject LOCALID_SKY_PILLAR_WALLACE
# 83 "data/maps/SkyPillar_Outside/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 84 "data/maps/SkyPillar_Outside/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 85 "data/maps/SkyPillar_Outside/scripts.pory"
	releaseall
# 86 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 87 "data/maps/SkyPillar_Outside/scripts.pory"

# 88 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Movement_WallaceApproachPlayer:
# 89 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 90 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 91 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 92 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 93 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 94 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 95 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 96 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 97 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 98 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 99 "data/maps/SkyPillar_Outside/scripts.pory"
	step_end
# 100 "data/maps/SkyPillar_Outside/scripts.pory"

# 101 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Movement_WallaceClimbSkyPillar:
# 102 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 103 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 104 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 105 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 106 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 107 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 108 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 109 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 110 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 111 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 112 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 113 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 114 "data/maps/SkyPillar_Outside/scripts.pory"
	step_end
# 115 "data/maps/SkyPillar_Outside/scripts.pory"

# 116 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_Movement_PlayerClimbSkyPillar:
# 117 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 118 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 119 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 120 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 121 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 122 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 123 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 124 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 125 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 126 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 127 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 128 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 129 "data/maps/SkyPillar_Outside/scripts.pory"
	step_end
# 130 "data/maps/SkyPillar_Outside/scripts.pory"

# 131 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_Wallace::
# 132 "data/maps/SkyPillar_Outside/scripts.pory"
	end
# 133 "data/maps/SkyPillar_Outside/scripts.pory"

# 134 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_ClosedDoor::
# 135 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_DoorIsClosed, MSGBOX_SIGN
# 136 "data/maps/SkyPillar_Outside/scripts.pory"
	end

SkyPillar_Outside_Text_DoorIsClosed:
# 139 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "The door is closed.$"

SkyPillar_Outside_Text_OpenedDoorToSkyPillar:
# 143 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "Wallace: Oh, my, I'm terribly sorry!\p"
	.string "In my haste, I didn't notice that\n"
	.string "I'd left you behind!\p"
	.string "I've opened the locked door of\n"
	.string "the Sky Pillar.\p"
	.string "{PLAYER}{KUN}, let's be on our way!$"

SkyPillar_Outside_Text_EarthquakeNotMomentToWaste:
# 152 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "Wallace: It's an earthquake!\p"
	.string "There's not a moment to waste!\n"
	.string "We've got to hurry!$"

SkyPillar_Outside_Text_SituationGettingWorse:
# 158 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "Wallace: Hmm…\n"
	.string "The situation is getting worse…$"

SkyPillar_Outside_Text_GotToGoBackForSootopolis:
# 163 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "Wallace: This isn't good…\p"
	.string "The weather distortion is spreading\n"
	.string "even here…\p"
	.string "{PLAYER}{KUN}.\p"
	.string "Rayquaza should be farther up\n"
	.string "from here.\p"
	.string "I'm worried about Sootopolis.\n"
	.string "I've got to go back.\p"
	.string "Everything is in your hands now.\n"
	.string "Don't fail us!$"
