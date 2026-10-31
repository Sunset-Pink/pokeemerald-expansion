# 1 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
# 3 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 4 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 5 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 6 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 7 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
# 8 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 9 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 10 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	@ Odd that the MaysHouse equivalent was used below instead
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVALS_HOUSE_2F_RIVAL, 0, 2
# 12 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVALS_HOUSE_2F_RIVAL, MOVEMENT_TYPE_FACE_UP
# 13 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 15 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Ret::
# 16 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 17 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 18 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
# 19 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 20 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
# 21 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 23 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
# 24 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 25 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 26 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SecretBase_EventScript_InitDecorations
# 30 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 31 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
# 35 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_2F_RIVAL
# 42 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters
# 43 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 44 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 45 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_ExclamationMark
# 46 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 47 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_Delay48
# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth
# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth
# 53 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest
# 54 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast
# 55 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 56 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadedefaultbgm
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth::
# 65 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth::
# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth
# 84 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth
# 85 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest::
# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest
# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 92 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest
# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 100 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast::
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast
# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 106 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast
# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters:
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 117 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth:
# 118 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 119 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 120 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth:
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 130 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 131 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 132 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 133 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 134 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth:
# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 139 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 140 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 141 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 143 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 144 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 145 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 146 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth:
# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 151 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 152 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth:
# 153 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 154 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 155 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 156 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 157 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 158 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 159 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 160 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 161 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth:
# 162 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 163 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 164 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 165 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 166 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 168 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 169 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest:
# 170 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 171 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 173 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 174 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 176 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest:
# 177 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 178 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 179 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 180 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 181 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 182 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 183 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 184 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 185 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 186 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 187 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest:
# 188 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_8
# 189 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 191 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 192 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 193 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 194 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 196 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast:
# 197 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 198 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 199 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 200 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 201 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 202 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 203 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 204 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 205 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast:
# 206 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 207 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 208 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 209 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 210 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 211 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 212 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
# 214 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 215 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 216 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 217 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 219 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 220 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 221 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 222 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 223 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC
# 224 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 225 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 226 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
# 227 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 228 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 229 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 230 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 231 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 232 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 233 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 234 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 235 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 237 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 238 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 239 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 240 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 242 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
# 243 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 244 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 245 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end

LittlerootTown_BrendansHouse_2F_MapScripts::
# 249 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Script_LittlerootTown_BrendansHouse_2F_OnTransition
# 250 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 251 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
	.2byte 0


Script_LittlerootTown_BrendansHouse_2F_OnTransition:
# 256 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 2
	goto_if_eq Script_LittlerootTown_BrendansHouse_2F_OnTransition_2
Script_LittlerootTown_BrendansHouse_2F_OnTransition_1:
# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE < 2, 0
	goto_if_ne Script_LittlerootTown_BrendansHouse_2F_OnTransition_5
Script_LittlerootTown_BrendansHouse_2F_OnTransition_4:
# 262 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
	goto_if_ge Script_LittlerootTown_BrendansHouse_2F_OnTransition_8
Script_LittlerootTown_BrendansHouse_2F_OnTransition_7:
# 265 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 4
	goto_if_eq Script_LittlerootTown_BrendansHouse_2F_OnTransition_11
Script_LittlerootTown_BrendansHouse_2F_OnTransition_10:
# 268 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 269 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
	end

Script_LittlerootTown_BrendansHouse_2F_OnTransition_2:
# 257 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_QUEST_INTRO_STATE, 3
	goto Script_LittlerootTown_BrendansHouse_2F_OnTransition_1

Script_LittlerootTown_BrendansHouse_2F_OnTransition_5:
# 260 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan
	goto Script_LittlerootTown_BrendansHouse_2F_OnTransition_4

Script_LittlerootTown_BrendansHouse_2F_OnTransition_8:
# 263 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos
	goto Script_LittlerootTown_BrendansHouse_2F_OnTransition_7

Script_LittlerootTown_BrendansHouse_2F_OnTransition_11:
# 266 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Script_PlayersHouse_2F_BlockStairsUntilGiftIsAccepted
	goto Script_LittlerootTown_BrendansHouse_2F_OnTransition_10


Script_LittlerootTown_BrendansHouse_2F_Interact_GameCube::
	checkplayergender
# 0 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_BrendansHouse_2F_Interact_GameCube_2
# 277 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Script_RivalsHouse_2F_Interact_GameCube
Script_LittlerootTown_BrendansHouse_2F_Interact_GameCube_1:
# 279 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	release
	end

Script_LittlerootTown_BrendansHouse_2F_Interact_GameCube_2:
# 275 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Script_PlayersHouse_2F_Interact_GameCube
	goto Script_LittlerootTown_BrendansHouse_2F_Interact_GameCube_1


Script_LittlerootTown_BrendansHouse_2F_Interact_Notebook::
	checkplayergender
# 0 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_BrendansHouse_2F_Interact_Notebook_2
# 287 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Script_RivalsHouse_2F_Interact_Notebook
Script_LittlerootTown_BrendansHouse_2F_Interact_Notebook_1:
# 289 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	release
	end

Script_LittlerootTown_BrendansHouse_2F_Interact_Notebook_2:
# 285 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Script_PlayersHouse_2F_Interact_Notebook
	goto Script_LittlerootTown_BrendansHouse_2F_Interact_Notebook_1

