# 1 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 3 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 4 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 10 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 12 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox Text_RivalsHouse_1F_RivalsMom_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 16 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_RIVAL_HOUSE_STATE, 2
# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 20 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach:
# 21 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 27 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 28 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 33 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterRight
# 35 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 36 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 37 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 39 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival0::
# 40 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 41 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 42 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 44 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 45 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival1::
# 46 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 47 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 48 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 49 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 51 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival2::
# 52 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 53 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 54 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 55 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival::
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 10
# 60 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 61 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 63 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 64 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 65 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 66 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 67 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay
# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2
# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox Text_RivalsHouse_2F_May_WhoAreYou, MSGBOX_DEFAULT
# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1
# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2
# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 85 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadedefaultbgm
# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay::
# 91 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 95 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0::
# 96 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0
# 97 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 98 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1::
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 105 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2::
# 106 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2
# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0:
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1:
# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2:
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0::
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0
# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0
# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1::
# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2::
# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2
# 150 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2
# 151 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 152 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0:
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 156 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1:
# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2:
# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0:
# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 179 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 180 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 183 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1:
# 184 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 185 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 195 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2:
# 196 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 197 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 198 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 201 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end

LittlerootTown_MaysHouse_1F_MapScripts::
# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Script_LittlerootTown_MaysHouse_1F_OnLoad
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Script_LittlerootTown_MaysHouse_1F_OnTransition
# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 208 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_QUEST_INTRO_STATE, 1, Script_LittlerootTown_MaysHouse_1F_Intro_EnterHouse
# 209 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_QUEST_INTRO_STATE, 3, Script_LittlerootTown_MaysHouse_1F_Intro_GoUpstairsForGift
# 210 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_QUEST_INTRO_STATE, 4, Script_LittlerootTown_MaysHouse_1F_PetalburgGymReport
	.2byte 0


Script_LittlerootTown_MaysHouse_1F_OnLoad:
# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 4
	goto_if_lt Script_LittlerootTown_MaysHouse_1F_OnLoad_2
Script_LittlerootTown_MaysHouse_1F_OnLoad_1:
# 220 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RUNNING_SHOES, Script_LittlerootTown_MaysHouse_1F_OnLoad_4
	return

Script_LittlerootTown_MaysHouse_1F_OnLoad_2:
# 218 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call Script_PlayersHouse_1F_SetMovingBoxes
	goto Script_LittlerootTown_MaysHouse_1F_OnLoad_1

Script_LittlerootTown_MaysHouse_1F_OnLoad_4:
# 221 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call Script_LittlerootTown_MaysHouse_1F_RunningShoesManual
	return


Script_LittlerootTown_MaysHouse_1F_RunningShoesManual:
# 226 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
	return


Script_LittlerootTown_MaysHouse_1F_OnTransition:
# 231 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 1
	goto_if_eq Script_LittlerootTown_MaysHouse_1F_OnTransition_2
Script_LittlerootTown_MaysHouse_1F_OnTransition_1:
# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 3
	goto_if_eq Script_LittlerootTown_MaysHouse_1F_OnTransition_5
Script_LittlerootTown_MaysHouse_1F_OnTransition_4:
# 237 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 4
	goto_if_eq Script_LittlerootTown_MaysHouse_1F_OnTransition_7
	return

Script_LittlerootTown_MaysHouse_1F_OnTransition_2:
# 232 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto Script_LittlerootTown_MaysHouse_1F_MoveMom_ToDoor
	goto Script_LittlerootTown_MaysHouse_1F_OnTransition_1

Script_LittlerootTown_MaysHouse_1F_OnTransition_5:
# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto Script_LittlerootTown_MaysHouse_1F_MoveMom_ToStairs
	goto Script_LittlerootTown_MaysHouse_1F_OnTransition_4

Script_LittlerootTown_MaysHouse_1F_OnTransition_7:
# 238 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto Script_LittlerootTown_MaysHouse_1F_MoveMom_ToTV
	return


Script_LittlerootTown_MaysHouse_1F_Intro_EnterHouse::
# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 244 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto Script_PlayersHouse_1F_Intro_EnterHouse
	end


Script_LittlerootTown_MaysHouse_1F_MoveMom_ToDoor::
# 251 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 1, 8
# 252 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	return


Script_LittlerootTown_MaysHouse_1F_MoveMom_ToTV::
# 257 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 6, 5
# 258 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	return


Script_LittlerootTown_MaysHouse_1F_MoveMom_ToStairs::
# 263 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 2, 4
# 264 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	return


Script_LittlerootTown_MaysHouse_1F_Intro_GoUpstairsForGift::
# 269 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 270 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox Text_PlayersHouse_1F_GoOpenGift
# 271 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_MaysHouse_1F_Intro_GoUpstairsForGift_Movement_0
# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Script_LittlerootTown_MaysHouse_1F_Intro_GoUpstairsForGift_Movement_0
# 274 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 275 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 1, 1
# 276 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitstate
# 277 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	end


Script_LittlerootTown_MaysHouse_1F_PetalburgGymReport::
# 282 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 283 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 284 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 285 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto Script_PlayersHouse_1F_PetalburgGymReport
	end


# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
Script_LittlerootTown_MaysHouse_1F_Intro_GoUpstairsForGift_Movement_0:
# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
	step_end
