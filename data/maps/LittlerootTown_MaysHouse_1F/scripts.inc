# 1 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 3 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 4 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterRight
# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 10 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 12 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival0::
# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 16 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival1::
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 20 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 21 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival2::
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 27 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 28 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival::
# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 10
# 33 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 35 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 36 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 37 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 39 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 40 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay
# 41 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 42 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0
# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1
# 44 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2
# 45 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox Text_RivalsHouse_2F_May_WhoAreYou, MSGBOX_DEFAULT
# 46 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 47 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0
# 48 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1
# 49 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2
# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 51 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 52 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 53 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 54 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 55 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadedefaultbgm
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 60 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 61 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay::
# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 63 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 64 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 65 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 66 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0::
# 67 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0
# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1::
# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1
# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2::
# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2
# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0:
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 85 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 91 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1:
# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 95 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 96 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 97 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2:
# 98 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 105 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 106 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0::
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1::
# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1
# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2::
# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2
# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2
# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0:
# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1:
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2:
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0:
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 150 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 151 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 152 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1:
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 156 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2:
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end

LittlerootTown_MaysHouse_1F_MapScripts::
# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Script_LittlerootTown_MaysHouse_1F_OnLoad
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Script_LittlerootTown_MaysHouse_1F_OnTransition
# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 179 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_QUEST_INTRO_STATE, 1, Script_LittlerootTown_MaysHouse_1F_Intro_EnterHouse
# 180 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_QUEST_INTRO_STATE, 3, Script_LittlerootTown_MaysHouse_1F_Intro_GoUpstairsForGift
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_QUEST_INTRO_STATE, 4, Script_LittlerootTown_MaysHouse_1F_PetalburgGymReport
# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_RIVAL_MOM_STATE, 0, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
	.2byte 0


Script_LittlerootTown_MaysHouse_1F_OnLoad:
# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 4
	goto_if_lt Script_LittlerootTown_MaysHouse_1F_OnLoad_2
Script_LittlerootTown_MaysHouse_1F_OnLoad_1:
# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RUNNING_SHOES, Script_LittlerootTown_MaysHouse_1F_OnLoad_5
	return

Script_LittlerootTown_MaysHouse_1F_OnLoad_2:
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call Script_PlayersHouse_1F_SetMovingBoxes
	goto Script_LittlerootTown_MaysHouse_1F_OnLoad_1

Script_LittlerootTown_MaysHouse_1F_OnLoad_4:
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call Script_LittlerootTown_MaysHouse_1F_RunningShoesManual
	return

Script_LittlerootTown_MaysHouse_1F_OnLoad_5:
	checkplayergender
# 0 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Script_LittlerootTown_MaysHouse_1F_OnLoad_4
	return


Script_LittlerootTown_MaysHouse_1F_RunningShoesManual:
# 197 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
	return


Script_LittlerootTown_MaysHouse_1F_OnTransition:
# 202 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 1
	goto_if_eq Script_LittlerootTown_MaysHouse_1F_OnTransition_2
Script_LittlerootTown_MaysHouse_1F_OnTransition_1:
# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 3
	goto_if_eq Script_LittlerootTown_MaysHouse_1F_OnTransition_5
Script_LittlerootTown_MaysHouse_1F_OnTransition_4:
# 208 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 4
	goto_if_eq Script_LittlerootTown_MaysHouse_1F_OnTransition_7
	return

Script_LittlerootTown_MaysHouse_1F_OnTransition_2:
# 203 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto Script_LittlerootTown_MaysHouse_1F_MoveMom_ToDoor
	goto Script_LittlerootTown_MaysHouse_1F_OnTransition_1

Script_LittlerootTown_MaysHouse_1F_OnTransition_5:
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto Script_LittlerootTown_MaysHouse_1F_MoveMom_ToStairs
	goto Script_LittlerootTown_MaysHouse_1F_OnTransition_4

Script_LittlerootTown_MaysHouse_1F_OnTransition_7:
# 209 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto Script_LittlerootTown_MaysHouse_1F_MoveMom_ToTV
	return


Script_LittlerootTown_MaysHouse_1F_Intro_EnterHouse::
# 214 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 215 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 216 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto Script_PlayersHouse_1F_Intro_EnterHouse
	end


Script_LittlerootTown_MaysHouse_1F_MoveMom_ToDoor::
# 222 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 1, 8
# 223 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	return


Script_LittlerootTown_MaysHouse_1F_MoveMom_ToTV::
# 228 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 6, 5
# 229 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	return


Script_LittlerootTown_MaysHouse_1F_MoveMom_ToStairs::
# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 2, 4
# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	return


Script_LittlerootTown_MaysHouse_1F_Intro_GoUpstairsForGift::
# 240 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 241 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox Text_PlayersHouse_1F_GoOpenGift
# 242 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_MaysHouse_1F_Intro_GoUpstairsForGift_Movement_0
# 244 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Script_LittlerootTown_MaysHouse_1F_Intro_GoUpstairsForGift_Movement_0
# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 1, 1
# 247 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitstate
# 248 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	end


Script_LittlerootTown_MaysHouse_1F_PetalburgGymReport::
# 253 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 254 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 255 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 256 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto Script_PlayersHouse_1F_PetalburgGymReport
	end


LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
	checkplayergender
# 0 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor_2
# 264 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 265 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 266 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 267 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 268 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 269 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 270 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 271 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor_Movement_0
# 275 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 276 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 277 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox Text_RivalsHouse_1F_RivalsMom_OhYoureTheNewNeighbor
# 278 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 279 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_RIVAL_MOM_STATE, 1
# 280 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	end

LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor_2:
	return


# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
Script_LittlerootTown_MaysHouse_1F_Intro_GoUpstairsForGift_Movement_0:
# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
	step_end

# 271 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor_Movement_0:
# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
	step_end
