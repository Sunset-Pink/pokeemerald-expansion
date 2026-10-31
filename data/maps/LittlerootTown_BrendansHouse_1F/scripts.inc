# 1 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 3 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 4 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 5 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 6 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 9 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 10 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox Text_RivalsHouse_1F_RivalsMom_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox Text_RivalsHouse_2F_Brendan_WhoAreYou, MSGBOX_DEFAULT
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end

LittlerootTown_BrendansHouse_1F_MapScripts::
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Script_LittlerootTown_BrendansHouse_1F_OnLoad
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Script_LittlerootTown_BrendansHouse_1F_OnTransition
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_QUEST_INTRO_STATE, 1, Script_LittlerootTown_BrendansHouse_1F_Intro_EnterHouse
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_QUEST_INTRO_STATE, 3, Script_LittlerootTown_BrendansHouse_1F_Intro_GoUpstairsForGift
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_QUEST_INTRO_STATE, 4, Script_LittlerootTown_BrendansHouse_1F_PetalburgGymReport
	.2byte 0


Script_LittlerootTown_BrendansHouse_1F_OnLoad:
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 4
	goto_if_lt Script_LittlerootTown_BrendansHouse_1F_OnLoad_2
Script_LittlerootTown_BrendansHouse_1F_OnLoad_1:
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RUNNING_SHOES, Script_LittlerootTown_BrendansHouse_1F_OnLoad_4
	return

Script_LittlerootTown_BrendansHouse_1F_OnLoad_2:
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call Script_PlayersHouse_1F_SetMovingBoxes
	goto Script_LittlerootTown_BrendansHouse_1F_OnLoad_1

Script_LittlerootTown_BrendansHouse_1F_OnLoad_4:
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call Script_LittlerootTown_BrendansHouse_1F_RunningShoesManual
	return


Script_LittlerootTown_BrendansHouse_1F_OnTransition:
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 1
	goto_if_eq Script_LittlerootTown_BrendansHouse_1F_OnTransition_2
Script_LittlerootTown_BrendansHouse_1F_OnTransition_1:
# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 3
	goto_if_eq Script_LittlerootTown_BrendansHouse_1F_OnTransition_5
Script_LittlerootTown_BrendansHouse_1F_OnTransition_4:
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 4
	goto_if_eq Script_LittlerootTown_BrendansHouse_1F_OnTransition_7
	return

Script_LittlerootTown_BrendansHouse_1F_OnTransition_2:
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto Script_LittlerootTown_BrendansHouse_1F_MoveMom_ToDoor
	goto Script_LittlerootTown_BrendansHouse_1F_OnTransition_1

Script_LittlerootTown_BrendansHouse_1F_OnTransition_5:
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto Script_LittlerootTown_BrendansHouse_1F_MoveMom_ToStairs
	goto Script_LittlerootTown_BrendansHouse_1F_OnTransition_4

Script_LittlerootTown_BrendansHouse_1F_OnTransition_7:
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto Script_LittlerootTown_BrendansHouse_1F_MoveMom_ToTV
	return


Script_LittlerootTown_BrendansHouse_1F_MoveMom_ToDoor::
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 9, 8
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	return


Script_LittlerootTown_BrendansHouse_1F_MoveMom_ToTV::
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 4, 5
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	return


Script_LittlerootTown_BrendansHouse_1F_MoveMom_ToStairs::
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 8, 4
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	return


Script_LittlerootTown_BrendansHouse_1F_RunningShoesManual::
	checkplayergender
# 0 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_BrendansHouse_1F_RunningShoesManual_2
Script_LittlerootTown_BrendansHouse_1F_RunningShoesManual_1:
	return

Script_LittlerootTown_BrendansHouse_1F_RunningShoesManual_2:
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
	goto Script_LittlerootTown_BrendansHouse_1F_RunningShoesManual_1


Script_LittlerootTown_BrendansHouse_1F_Intro_EnterHouse::
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto Script_PlayersHouse_1F_Intro_EnterHouse
	end


Script_LittlerootTown_BrendansHouse_1F_Intro_GoUpstairsForGift::
# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox Text_PlayersHouse_1F_GoOpenGift
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_BrendansHouse_1F_Intro_GoUpstairsForGift_Movement_0
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Script_LittlerootTown_BrendansHouse_1F_Intro_GoUpstairsForGift_Movement_0
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end


Script_LittlerootTown_BrendansHouse_1F_PetalburgGymReport::
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto Script_PlayersHouse_1F_PetalburgGymReport
	end


# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
Script_LittlerootTown_BrendansHouse_1F_Intro_GoUpstairsForGift_Movement_0:
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
	step_end
