# 1 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 3 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 4 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 5 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 6 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 9 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 10 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox Text_RivalsHouse_2F_Brendan_WhoAreYou, MSGBOX_DEFAULT
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end

LittlerootTown_BrendansHouse_1F_MapScripts::
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Script_LittlerootTown_BrendansHouse_1F_OnLoad
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Script_LittlerootTown_BrendansHouse_1F_OnTransition
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_QUEST_INTRO_STATE, 1, Script_LittlerootTown_BrendansHouse_1F_Intro_EnterHouse
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_QUEST_INTRO_STATE, 3, Script_LittlerootTown_BrendansHouse_1F_Intro_GoUpstairsForGift
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_QUEST_INTRO_STATE, 4, Script_LittlerootTown_BrendansHouse_1F_PetalburgGymReport
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_RIVAL_MOM_STATE, 0, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
	.2byte 0


Script_LittlerootTown_BrendansHouse_1F_OnLoad:
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 4
	goto_if_lt Script_LittlerootTown_BrendansHouse_1F_OnLoad_2
Script_LittlerootTown_BrendansHouse_1F_OnLoad_1:
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RUNNING_SHOES, Script_LittlerootTown_BrendansHouse_1F_OnLoad_5
	return

Script_LittlerootTown_BrendansHouse_1F_OnLoad_2:
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call Script_PlayersHouse_1F_SetMovingBoxes
	goto Script_LittlerootTown_BrendansHouse_1F_OnLoad_1

Script_LittlerootTown_BrendansHouse_1F_OnLoad_4:
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call Script_LittlerootTown_BrendansHouse_1F_RunningShoesManual
	return

Script_LittlerootTown_BrendansHouse_1F_OnLoad_5:
	checkplayergender
# 0 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_BrendansHouse_1F_OnLoad_4
	return


Script_LittlerootTown_BrendansHouse_1F_OnTransition:
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 1
	goto_if_eq Script_LittlerootTown_BrendansHouse_1F_OnTransition_2
Script_LittlerootTown_BrendansHouse_1F_OnTransition_1:
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 3
	goto_if_eq Script_LittlerootTown_BrendansHouse_1F_OnTransition_5
Script_LittlerootTown_BrendansHouse_1F_OnTransition_4:
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 4
	goto_if_eq Script_LittlerootTown_BrendansHouse_1F_OnTransition_7
	return

Script_LittlerootTown_BrendansHouse_1F_OnTransition_2:
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto Script_LittlerootTown_BrendansHouse_1F_MoveMom_ToDoor
	goto Script_LittlerootTown_BrendansHouse_1F_OnTransition_1

Script_LittlerootTown_BrendansHouse_1F_OnTransition_5:
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto Script_LittlerootTown_BrendansHouse_1F_MoveMom_ToStairs
	goto Script_LittlerootTown_BrendansHouse_1F_OnTransition_4

Script_LittlerootTown_BrendansHouse_1F_OnTransition_7:
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto Script_LittlerootTown_BrendansHouse_1F_MoveMom_ToTV
	return


Script_LittlerootTown_BrendansHouse_1F_MoveMom_ToDoor::
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 9, 8
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	return


Script_LittlerootTown_BrendansHouse_1F_MoveMom_ToTV::
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 4, 5
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	return


Script_LittlerootTown_BrendansHouse_1F_MoveMom_ToStairs::
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 8, 4
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	return


Script_LittlerootTown_BrendansHouse_1F_RunningShoesManual::
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
	return


Script_LittlerootTown_BrendansHouse_1F_Intro_EnterHouse::
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto Script_PlayersHouse_1F_Intro_EnterHouse
	end


Script_LittlerootTown_BrendansHouse_1F_Intro_GoUpstairsForGift::
# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox Text_PlayersHouse_1F_GoOpenGift
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_BrendansHouse_1F_Intro_GoUpstairsForGift_Movement_0
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Script_LittlerootTown_BrendansHouse_1F_Intro_GoUpstairsForGift_Movement_0
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end


Script_LittlerootTown_BrendansHouse_1F_PetalburgGymReport::
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto Script_PlayersHouse_1F_PetalburgGymReport
	end


LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
	checkplayergender
# 0 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor_2
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor_Movement_0
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox Text_RivalsHouse_1F_RivalsMom_OhYoureTheNewNeighbor
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_RIVAL_MOM_STATE, 1
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end

LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor_2:
	return


# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
Script_LittlerootTown_BrendansHouse_1F_Intro_GoUpstairsForGift_Movement_0:
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
	step_end

# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor_Movement_0:
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
	step_end
