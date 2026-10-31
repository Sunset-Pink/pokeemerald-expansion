# 1 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos::
# 3 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 4 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 5 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 6 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 7 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos::
# 8 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 9 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 10 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVALS_HOUSE_2F_RIVAL, 8, 2
# 11 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVALS_HOUSE_2F_RIVAL, MOVEMENT_TYPE_FACE_UP
# 12 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 13 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 14 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_Ret::
# 15 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 16 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 17 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay::
# 18 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 19 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay
# 20 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 21 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 22 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay::
# 23 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 24 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 25 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 26 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor::
# 27 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 28 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, SecretBase_EventScript_InitDecorations
# 29 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 30 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 31 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall::
# 32 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 33 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_MeetMay
# 34 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 35 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 36 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 37 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 38 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay::
# 39 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 40 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_2F_RIVAL
# 41 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayEnters
# 42 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 43 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PIN
# 44 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_ExclamationMark
# 45 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 46 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_Delay48
# 47 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 48 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 49 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 50 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_MaysHouse_2F_EventScript_MeetMayNorth
# 51 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_MaysHouse_2F_EventScript_MeetMaySouth
# 52 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_MaysHouse_2F_EventScript_MeetMayWest
# 53 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_MaysHouse_2F_EventScript_MeetMayEast
# 54 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 55 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 56 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 57 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 58 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 59 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	fadedefaultbgm
# 60 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 63 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayNorth::
# 64 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth
# 65 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 66 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 68 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox Text_RivalsHouse_2F_May_WhoAreYou, MSGBOX_DEFAULT
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 70 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth
# 71 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth
# 72 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 73 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 74 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 75 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMaySouth::
# 76 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth
# 77 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 78 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 79 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox Text_RivalsHouse_2F_May_WhoAreYou, MSGBOX_DEFAULT
# 81 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 82 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth
# 83 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth
# 84 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 85 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 86 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 87 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayWest::
# 88 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest
# 89 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 90 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 91 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 92 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox Text_RivalsHouse_2F_May_WhoAreYou, MSGBOX_DEFAULT
# 93 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 94 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest
# 95 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 96 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 97 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 98 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayEast::
# 99 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast
# 100 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 101 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 102 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 103 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox Text_RivalsHouse_2F_May_WhoAreYou, MSGBOX_DEFAULT
# 104 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 105 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast
# 106 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast
# 107 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 108 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 109 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 110 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayEnters:
# 111 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 112 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 113 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 114 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 115 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 116 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth:
# 117 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 118 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 119 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 120 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 121 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 122 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 123 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 124 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth:
# 125 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 126 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 127 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 128 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 129 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 130 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 131 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 132 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 133 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 134 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 135 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 136 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth:
# 137 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 138 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 139 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 140 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 141 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 142 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 143 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 144 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 145 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 146 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth:
# 147 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 148 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 149 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 150 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 151 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 152 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth:
# 153 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 154 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 155 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 156 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 157 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 158 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 159 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 160 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 161 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 162 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth:
# 163 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 164 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 165 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 166 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 167 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 168 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 169 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 170 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest:
# 171 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 172 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 173 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 174 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 175 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 176 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 177 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 178 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 179 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest:
# 180 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 181 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 182 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 183 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 184 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 185 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 186 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 187 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayWest:
# 188 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 189 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 190 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 191 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 192 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 193 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast:
# 194 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 195 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 196 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 197 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 198 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 199 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 200 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast:
# 201 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 202 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 203 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 204 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 205 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 206 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 207 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 208 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 209 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 210 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 211 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast:
# 212 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 213 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 214 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 215 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 216 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 217 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 218 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 219 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Rival::
# 220 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 221 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, RivalsHouse_2F_EventScript_RivalPostLilycove
# 222 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 223 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_May
# 224 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_Brendan
# 225 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 226 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 227 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_May::
# 228 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayGettingReady, MSGBOX_DEFAULT
# 229 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 230 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 231 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 232 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Brendan::
# 233 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanGettingReady, MSGBOX_DEFAULT
# 234 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 235 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 236 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 237 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_RivalPostLilycove::
# 238 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 239 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 240 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 241 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_MayPostLilycove
# 242 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_BrendanPostLilycove
# 243 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE
# 244 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 245 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 246 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 247 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayPostLilycove::
# 248 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_MayWhereShouldIGoNext
# 249 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayJustCheckingMyPokedex, MSGBOX_DEFAULT
# 250 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 251 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 252 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanPostLilycove::
# 253 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext
# 254 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex, MSGBOX_DEFAULT
# 255 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 256 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 257 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayWhereShouldIGoNext::
# 258 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 259 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 260 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 261 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext::
# 262 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 263 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 264 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 265 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_PC::
# 266 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 267 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 268 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC
# 269 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC
# 270 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 271 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 272 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC::
# 273 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 274 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 275 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 276 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 277 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC::
# 278 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 279 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 280 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_ON
# 281 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 282 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special BedroomPC
# 283 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 284 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 285 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 286 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TurnOffPlayerPC::
# 287 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 288 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 289 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 290 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 291 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 292 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 293 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayGettingReady:
# 294 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "POKéMON fully restored!\n"
# 295 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Items ready, and…$"
# 296 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 297 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhoAreYou:
# 298 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Hey!\n"
# 299 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "You…\p"
# 300 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Who are you?\p"
# 301 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, you're {PLAYER}, aren't you?\n"
# 302 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Moved in next door, right?\p"
# 303 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I didn't know that you're a girl.\p"
# 304 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Dad, PROF. BIRCH, said that our new\n"
# 305 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "next-door neighbor is a GYM LEADER's\l"
# 306 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "kid, so I assumed you'd be a guy.\p"
# 307 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "My name's BRENDAN.\n"
# 308 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "So, hi, neighbor!\p"
# 309 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
# 310 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "a POKéMON?\p"
# 311 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Do you want me to go catch you one?\p"
# 312 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Aw, darn, I forgot…\p"
# 313 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I'm supposed to go help my dad catch\n"
# 314 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some wild POKéMON.\p"
# 315 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Some other time, okay?$"
# 316 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 317 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanGettingReady:
# 318 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "POKéMON fully restored…\n"
# 319 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Items all packed, and…$"
# 320 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 321 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_ItsRivalsPokeBall:
# 322 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "It's {RIVAL}'s POKé BALL!\p"
# 323 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Better leave it right where it is.$"
# 324 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 325 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayJustCheckingMyPokedex:
# 326 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\p"
# 327 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was just checking my POKéDEX.\p"
# 328 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "There's still a lot of POKéMON that\n"
# 329 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I've seen but haven't caught.\p"
# 330 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "And there are many others that\n"
# 331 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I think will evolve.\p"
# 332 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I wonder where I should go catch\n"
# 333 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some POKéMON next?$"
# 334 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 335 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhereShouldIGoNext:
# 336 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "MAY: I wonder where I should go catch\n"
# 337 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some POKéMON next?\p"
# 338 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Wouldn't it be funny if we ran into each\n"
# 339 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "other, {PLAYER}{KUN}?$"
# 340 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 341 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex:
# 342 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "BRENDAN: Hey, it's {PLAYER}.\p"
# 343 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was just checking out my POKéDEX.\p"
# 344 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "There are still many POKéMON that\n"
# 345 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I need to catch, I know, but this\l"
# 346 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "is looking pretty good.\p"
# 347 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Checking this POKéDEX out gives me\n"
# 348 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "the urge to hit the road again.$"
# 349 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 350 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhereShouldIGoNext:
# 351 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "BRENDAN: I'm having a hard time deciding\n"
# 352 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "where I should catch POKéMON next.\p"
# 353 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Hey, {PLAYER}, if I see you while I'm out\n"
# 354 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "catching POKéMON, I can pitch you a\l"
# 355 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "battle if you'd like.$"

LittlerootTown_MaysHouse_2F_MapScripts::
# 358 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Script_LittlerootTown_MaysHouse_2F_OnTransition
# 359 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 360 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor
	.2byte 0


Script_LittlerootTown_MaysHouse_2F_OnTransition:
# 365 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 2
	goto_if_eq Script_LittlerootTown_MaysHouse_2F_OnTransition_2
Script_LittlerootTown_MaysHouse_2F_OnTransition_1:
# 368 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE < 2, 0
	goto_if_ne Script_LittlerootTown_MaysHouse_2F_OnTransition_5
Script_LittlerootTown_MaysHouse_2F_OnTransition_4:
# 371 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
	goto_if_ge Script_LittlerootTown_MaysHouse_2F_OnTransition_8
Script_LittlerootTown_MaysHouse_2F_OnTransition_7:
# 374 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 4
	goto_if_eq Script_LittlerootTown_MaysHouse_2F_OnTransition_11
Script_LittlerootTown_MaysHouse_2F_OnTransition_10:
# 377 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 378 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
	end

Script_LittlerootTown_MaysHouse_2F_OnTransition_2:
# 366 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_QUEST_INTRO_STATE, 3
	goto Script_LittlerootTown_MaysHouse_2F_OnTransition_1

Script_LittlerootTown_MaysHouse_2F_OnTransition_5:
# 369 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay
	goto Script_LittlerootTown_MaysHouse_2F_OnTransition_4

Script_LittlerootTown_MaysHouse_2F_OnTransition_8:
# 372 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos
	goto Script_LittlerootTown_MaysHouse_2F_OnTransition_7

Script_LittlerootTown_MaysHouse_2F_OnTransition_11:
# 375 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call Script_PlayersHouse_2F_BlockStairsUntilGiftIsAccepted
	goto Script_LittlerootTown_MaysHouse_2F_OnTransition_10


Script_LittlerootTown_MaysHouse_2F_Interact_GameCube::
	checkplayergender
# 0 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Script_LittlerootTown_MaysHouse_2F_Interact_GameCube_2
# 386 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call Script_RivalsHouse_2F_Interact_GameCube
Script_LittlerootTown_MaysHouse_2F_Interact_GameCube_1:
# 388 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	release
	end

Script_LittlerootTown_MaysHouse_2F_Interact_GameCube_2:
# 384 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call Script_PlayersHouse_2F_Interact_GameCube
	goto Script_LittlerootTown_MaysHouse_2F_Interact_GameCube_1


Script_LittlerootTown_MaysHouse_2F_Interact_Notebook::
	checkplayergender
# 0 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Script_LittlerootTown_MaysHouse_2F_Interact_Notebook_2
# 396 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call Script_RivalsHouse_2F_Interact_Notebook
Script_LittlerootTown_MaysHouse_2F_Interact_Notebook_1:
# 398 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	release
	end

Script_LittlerootTown_MaysHouse_2F_Interact_Notebook_2:
# 394 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call Script_PlayersHouse_2F_Interact_Notebook
	goto Script_LittlerootTown_MaysHouse_2F_Interact_Notebook_1

