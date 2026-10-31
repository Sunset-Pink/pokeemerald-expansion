# 1 "data/scripts/players_house.pory"

# 2 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomGoSeeRoom::
# 3 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_ArentYouInterestedInRoom, MSGBOX_DEFAULT
# 4 "data/scripts/players_house.pory"
	closemessage
# 5 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 6 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_MovePlayerAwayFromDoor
# 7 "data/scripts/players_house.pory"
	waitmovement 0
# 8 "data/scripts/players_house.pory"
	releaseall
# 9 "data/scripts/players_house.pory"
	end
# 10 "data/scripts/players_house.pory"

# 11 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachDadMale:
# 12 "data/scripts/players_house.pory"
	walk_up
# 13 "data/scripts/players_house.pory"
	walk_right
# 14 "data/scripts/players_house.pory"
	walk_right
# 15 "data/scripts/players_house.pory"
	walk_right
# 16 "data/scripts/players_house.pory"
	walk_right
# 17 "data/scripts/players_house.pory"
	walk_down
# 18 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 19 "data/scripts/players_house.pory"
	step_end
# 20 "data/scripts/players_house.pory"

# 21 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachDadFemale:
# 22 "data/scripts/players_house.pory"
	walk_up
# 23 "data/scripts/players_house.pory"
	walk_left
# 24 "data/scripts/players_house.pory"
	walk_left
# 25 "data/scripts/players_house.pory"
	walk_left
# 26 "data/scripts/players_house.pory"
	walk_left
# 27 "data/scripts/players_house.pory"
	walk_down
# 28 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 29 "data/scripts/players_house.pory"
	step_end
# 30 "data/scripts/players_house.pory"

# 31 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerMale:
# 32 "data/scripts/players_house.pory"
	walk_right
# 33 "data/scripts/players_house.pory"
	step_end
# 34 "data/scripts/players_house.pory"

# 35 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerFemale:
# 36 "data/scripts/players_house.pory"
	walk_left
# 37 "data/scripts/players_house.pory"
	step_end
# 38 "data/scripts/players_house.pory"

# 39 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale:
# 40 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 41 "data/scripts/players_house.pory"
	delay_16
# 42 "data/scripts/players_house.pory"
	delay_16
# 43 "data/scripts/players_house.pory"
	delay_16
# 44 "data/scripts/players_house.pory"
	delay_16
# 45 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 46 "data/scripts/players_house.pory"
	delay_16
# 47 "data/scripts/players_house.pory"
	delay_16
# 48 "data/scripts/players_house.pory"
	step_end
# 49 "data/scripts/players_house.pory"

# 50 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale:
# 51 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 52 "data/scripts/players_house.pory"
	delay_16
# 53 "data/scripts/players_house.pory"
	delay_16
# 54 "data/scripts/players_house.pory"
	delay_16
# 55 "data/scripts/players_house.pory"
	delay_16
# 56 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 57 "data/scripts/players_house.pory"
	delay_16
# 58 "data/scripts/players_house.pory"
	delay_16
# 59 "data/scripts/players_house.pory"
	step_end
# 60 "data/scripts/players_house.pory"

# 61 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale:
# 62 "data/scripts/players_house.pory"
	walk_up
# 63 "data/scripts/players_house.pory"
	walk_left
# 64 "data/scripts/players_house.pory"
	walk_left
# 65 "data/scripts/players_house.pory"
	step_end
# 66 "data/scripts/players_house.pory"

# 67 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale:
# 68 "data/scripts/players_house.pory"
	walk_up
# 69 "data/scripts/players_house.pory"
	walk_right
# 70 "data/scripts/players_house.pory"
	walk_right
# 71 "data/scripts/players_house.pory"
	step_end
# 72 "data/scripts/players_house.pory"

# 73 "data/scripts/players_house.pory"

# 74 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MovePlayerAwayFromDoor:
# 75 "data/scripts/players_house.pory"
	walk_up
# 76 "data/scripts/players_house.pory"
	step_end
# 77 "data/scripts/players_house.pory"

# 78 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV::
# 79 "data/scripts/players_house.pory"
	lockall
# 80 "data/scripts/players_house.pory"
	checkplayergender
# 81 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, MALE, PlayersHouse_1F_EventScript_SetUpObjectEventVarsMale
# 82 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, FEMALE, PlayersHouse_1F_EventScript_SetUpObjectEventVarsFemale
# 83 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_PlayerEnterRoomMale
# 84 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_PlayerEnterRoomFemale
# 85 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_FacePlayer
# 86 "data/scripts/players_house.pory"
	waitmovement 0
# 87 "data/scripts/players_house.pory"
	playse SE_PIN
# 88 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_ExclamationMark
# 89 "data/scripts/players_house.pory"
	waitmovement 0
# 90 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_Delay48
# 91 "data/scripts/players_house.pory"
	waitmovement 0
# 92 "data/scripts/players_house.pory"
	delay 20
# 93 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_DadApproachPlayerMale
# 94 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_DadApproachPlayerFemale
# 95 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Dad_TicketFromBriney, MSGBOX_DEFAULT
# 96 "data/scripts/players_house.pory"
	giveitem ITEM_SS_TICKET
# 97 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Dad_TicketsForFerry, MSGBOX_DEFAULT
# 98 "data/scripts/players_house.pory"
	closemessage
# 99 "data/scripts/players_house.pory"
	delay 20
# 100 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachDadMale
# 101 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachDadFemale
# 102 "data/scripts/players_house.pory"
	msgbox  Text_PlayersHouse_1F_Dad_BetterGetBackToGym, MSGBOX_DEFAULT
# 103 "data/scripts/players_house.pory"
	closemessage
# 104 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_DadExitsMale
# 105 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_DadExitsFemale
# 106 "data/scripts/players_house.pory"
	playse SE_DOOR
# 107 "data/scripts/players_house.pory"
	removeobject VAR_0x8009
# 108 "data/scripts/players_house.pory"
	setflag FLAG_RECEIVED_SS_TICKET
# 109 "data/scripts/players_house.pory"
	delay 30
# 110 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachPlayerMale
# 111 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachPlayerFemale
# 112 "data/scripts/players_house.pory"
	delay 20
# 113 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_DadShouldStayLonger, MSGBOX_DEFAULT
# 114 "data/scripts/players_house.pory"
	closemessage
# 115 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_LATIAS_LATIOS
# 116 "data/scripts/players_house.pory"
	special TurnOnTVScreen
# 117 "data/scripts/players_house.pory"
	delay 60
# 118 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastMale
# 119 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastFemale
# 120 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_BreakingNews, MSGBOX_DEFAULT
# 121 "data/scripts/players_house.pory"
	closemessage
# 122 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_PlayerApproachTVForLatiMale
# 123 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_PlayerApproachTVForLatiFemale
# 124 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_TV_LatiNews, MSGBOX_DEFAULT
# 125 "data/scripts/players_house.pory"
	closemessage
# 126 "data/scripts/players_house.pory"
	clearflag FLAG_SYS_TV_LATIAS_LATIOS
# 127 "data/scripts/players_house.pory"
	setflag FLAG_LATIOS_OR_LATIAS_ROAMING
# 128 "data/scripts/players_house.pory"
	special TurnOffTVScreen
# 129 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVMale
# 130 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVFemale
# 131 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_WhatColor, MSGBOX_DEFAULT
# 132 "data/scripts/players_house.pory"
	multichoice 22, 8, MULTI_TV_LATI, TRUE
# 133 "data/scripts/players_house.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 134 "data/scripts/players_house.pory"
	special InitRoamer
# 135 "data/scripts/players_house.pory"
	copyvar VAR_ROAMER_POKEMON, VAR_RESULT
# 136 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_StillUnknownPokemon, MSGBOX_DEFAULT
# 137 "data/scripts/players_house.pory"
	closemessage
# 138 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 4
# 139 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4
# 140 "data/scripts/players_house.pory"
	releaseall
# 141 "data/scripts/players_house.pory"
	end
# 142 "data/scripts/players_house.pory"

# 143 "data/scripts/players_house.pory"
@ Never called.
# 144 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_AirLatiBroadcast::
# 145 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_LATIAS_LATIOS
# 146 "data/scripts/players_house.pory"
	return
# 147 "data/scripts/players_house.pory"

# 148 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetUpObjectEventVarsMale::
# 149 "data/scripts/players_house.pory"
	setvar VAR_0x8008, MALE
# 150 "data/scripts/players_house.pory"
	setvar VAR_0x8009, LOCALID_PLAYERS_HOUSE_1F_DAD
# 151 "data/scripts/players_house.pory"
	setvar VAR_0x800A, LOCALID_PLAYERS_HOUSE_1F_MOM
# 152 "data/scripts/players_house.pory"
	return
# 153 "data/scripts/players_house.pory"

# 154 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetUpObjectEventVarsFemale::
# 155 "data/scripts/players_house.pory"
	setvar VAR_0x8008, FEMALE
# 156 "data/scripts/players_house.pory"
	setvar VAR_0x8009, LOCALID_PLAYERS_HOUSE_1F_DAD
# 157 "data/scripts/players_house.pory"
	setvar VAR_0x800A, LOCALID_PLAYERS_HOUSE_1F_MOM
# 158 "data/scripts/players_house.pory"
	return
# 159 "data/scripts/players_house.pory"

# 160 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadApproachPlayerMale::
# 161 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerMale
# 162 "data/scripts/players_house.pory"
	waitmovement 0
# 163 "data/scripts/players_house.pory"
	return
# 164 "data/scripts/players_house.pory"

# 165 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadApproachPlayerFemale::
# 166 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerFemale
# 167 "data/scripts/players_house.pory"
	waitmovement 0
# 168 "data/scripts/players_house.pory"
	return
# 169 "data/scripts/players_house.pory"

# 170 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachDadMale::
# 171 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadMale
# 172 "data/scripts/players_house.pory"
	waitmovement 0
# 173 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomMale
# 174 "data/scripts/players_house.pory"
	waitmovement 0
# 175 "data/scripts/players_house.pory"
	return
# 176 "data/scripts/players_house.pory"

# 177 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachDadFemale::
# 178 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadFemale
# 179 "data/scripts/players_house.pory"
	waitmovement 0
# 180 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomFemale
# 181 "data/scripts/players_house.pory"
	waitmovement 0
# 182 "data/scripts/players_house.pory"
	return
# 183 "data/scripts/players_house.pory"

# 184 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadExitsMale::
# 185 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 186 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 187 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsMale
# 188 "data/scripts/players_house.pory"
	waitmovement 0
# 189 "data/scripts/players_house.pory"
	return
# 190 "data/scripts/players_house.pory"

# 191 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadExitsFemale::
# 192 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 193 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 194 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsFemale
# 195 "data/scripts/players_house.pory"
	waitmovement 0
# 196 "data/scripts/players_house.pory"
	return
# 197 "data/scripts/players_house.pory"

# 198 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerEnterRoomMale::
# 199 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomMale
# 200 "data/scripts/players_house.pory"
	waitmovement 0
# 201 "data/scripts/players_house.pory"
	return
# 202 "data/scripts/players_house.pory"

# 203 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerEnterRoomFemale::
# 204 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomFemale
# 205 "data/scripts/players_house.pory"
	waitmovement 0
# 206 "data/scripts/players_house.pory"
	return
# 207 "data/scripts/players_house.pory"

# 208 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerApproachTVForLatiMale::
# 209 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale
# 210 "data/scripts/players_house.pory"
	waitmovement 0
# 211 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFasterLeft
# 212 "data/scripts/players_house.pory"
	waitmovement 0
# 213 "data/scripts/players_house.pory"
	return
# 214 "data/scripts/players_house.pory"

# 215 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerApproachTVForLatiFemale::
# 216 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale
# 217 "data/scripts/players_house.pory"
	waitmovement 0
# 218 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFasterRight
# 219 "data/scripts/players_house.pory"
	waitmovement 0
# 220 "data/scripts/players_house.pory"
	return
# 221 "data/scripts/players_house.pory"

# 222 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerMale::
# 223 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerMale
# 224 "data/scripts/players_house.pory"
	waitmovement 0
# 225 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 226 "data/scripts/players_house.pory"
	waitmovement 0
# 227 "data/scripts/players_house.pory"
	return
# 228 "data/scripts/players_house.pory"

# 229 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerFemale::
# 230 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerFemale
# 231 "data/scripts/players_house.pory"
	waitmovement 0
# 232 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 233 "data/scripts/players_house.pory"
	waitmovement 0
# 234 "data/scripts/players_house.pory"
	return
# 235 "data/scripts/players_house.pory"

# 236 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastMale::
# 237 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale
# 238 "data/scripts/players_house.pory"
	waitmovement 0
# 239 "data/scripts/players_house.pory"
	return
# 240 "data/scripts/players_house.pory"

# 241 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastFemale::
# 242 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale
# 243 "data/scripts/players_house.pory"
	waitmovement 0
# 244 "data/scripts/players_house.pory"
	return
# 245 "data/scripts/players_house.pory"

# 246 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVMale::
# 247 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale
# 248 "data/scripts/players_house.pory"
	waitmovement 0
# 249 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 250 "data/scripts/players_house.pory"
	waitmovement 0
# 251 "data/scripts/players_house.pory"
	return
# 252 "data/scripts/players_house.pory"

# 253 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVFemale::
# 254 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale
# 255 "data/scripts/players_house.pory"
	waitmovement 0
# 256 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 257 "data/scripts/players_house.pory"
	waitmovement 0
# 258 "data/scripts/players_house.pory"
	return
# 259 "data/scripts/players_house.pory"

# 260 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadApproachPlayerMale:
# 261 "data/scripts/players_house.pory"
	walk_right
# 262 "data/scripts/players_house.pory"
	walk_right
# 263 "data/scripts/players_house.pory"
	step_end
# 264 "data/scripts/players_house.pory"

# 265 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadApproachPlayerFemale:
# 266 "data/scripts/players_house.pory"
	walk_left
# 267 "data/scripts/players_house.pory"
	walk_left
# 268 "data/scripts/players_house.pory"
	step_end
# 269 "data/scripts/players_house.pory"

# 270 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadFaceMomMale:
# 271 "data/scripts/players_house.pory"
	face_left
# 272 "data/scripts/players_house.pory"
	step_end
# 273 "data/scripts/players_house.pory"

# 274 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadFaceMomFemale:
# 275 "data/scripts/players_house.pory"
	face_right
# 276 "data/scripts/players_house.pory"
	step_end
# 277 "data/scripts/players_house.pory"

# 278 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadExitsMale:
# 279 "data/scripts/players_house.pory"
	walk_down
# 280 "data/scripts/players_house.pory"
	walk_right
# 281 "data/scripts/players_house.pory"
	walk_down
# 282 "data/scripts/players_house.pory"
	delay_8
# 283 "data/scripts/players_house.pory"
	step_end
# 284 "data/scripts/players_house.pory"

# 285 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadExitsFemale:
# 286 "data/scripts/players_house.pory"
	walk_down
# 287 "data/scripts/players_house.pory"
	walk_left
# 288 "data/scripts/players_house.pory"
	walk_down
# 289 "data/scripts/players_house.pory"
	delay_8
# 290 "data/scripts/players_house.pory"
	step_end
# 291 "data/scripts/players_house.pory"

# 292 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerEnterRoomMale:
# 293 "data/scripts/players_house.pory"
	delay_16
# 294 "data/scripts/players_house.pory"
	walk_down
# 295 "data/scripts/players_house.pory"
	walk_down
# 296 "data/scripts/players_house.pory"
	walk_down
# 297 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 298 "data/scripts/players_house.pory"
	step_end
# 299 "data/scripts/players_house.pory"

# 300 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit:
# 301 "data/scripts/players_house.pory"
	delay_8
# 302 "data/scripts/players_house.pory"
	delay_16
# 303 "data/scripts/players_house.pory"
	delay_16
# 304 "data/scripts/players_house.pory"
	walk_in_place_faster_down
# 305 "data/scripts/players_house.pory"
	step_end
# 306 "data/scripts/players_house.pory"

# 307 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerEnterRoomFemale:
# 308 "data/scripts/players_house.pory"
	delay_16
# 309 "data/scripts/players_house.pory"
	walk_down
# 310 "data/scripts/players_house.pory"
	walk_down
# 311 "data/scripts/players_house.pory"
	walk_down
# 312 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 313 "data/scripts/players_house.pory"
	step_end
# 314 "data/scripts/players_house.pory"

# 315 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale:
# 316 "data/scripts/players_house.pory"
	walk_up
# 317 "data/scripts/players_house.pory"
	walk_left
# 318 "data/scripts/players_house.pory"
	walk_left
# 319 "data/scripts/players_house.pory"
	walk_left
# 320 "data/scripts/players_house.pory"
	walk_left
# 321 "data/scripts/players_house.pory"
	walk_in_place_faster_up
# 322 "data/scripts/players_house.pory"
	step_end
# 323 "data/scripts/players_house.pory"

# 324 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale:
# 325 "data/scripts/players_house.pory"
	walk_up
# 326 "data/scripts/players_house.pory"
	walk_right
# 327 "data/scripts/players_house.pory"
	walk_right
# 328 "data/scripts/players_house.pory"
	walk_right
# 329 "data/scripts/players_house.pory"
	walk_right
# 330 "data/scripts/players_house.pory"
	walk_in_place_faster_up
# 331 "data/scripts/players_house.pory"
	step_end

Script_PlayersHouse_1F_Interact_Mom::
# 335 "data/scripts/players_house.pory"
	lock
# 336 "data/scripts/players_house.pory"
	faceplayer
# 337 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_DontPushYourselfTooHard
# 338 "data/scripts/players_house.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Script_PlayersHouse_1F_Interact_Mom_2
# 350 "data/scripts/players_house.pory"
	goto_if_set FLAG_ENABLE_MOM_MATCH_CALL, Script_PlayersHouse_1F_Interact_Mom_8
Script_PlayersHouse_1F_Interact_Mom_7:
# 358 "data/scripts/players_house.pory"
	compare VAR_QUEST_INTRO_STATE, 4
	goto_if_eq Script_PlayersHouse_1F_Interact_Mom_4
# 361 "data/scripts/players_house.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, Script_PlayersHouse_1F_Interact_Mom_5
Script_PlayersHouse_1F_Interact_Mom_1:
# 368 "data/scripts/players_house.pory"
	call Script_PlayersHouse_1F_Interact_Mom_Farewell
# 369 "data/scripts/players_house.pory"
	release
	end

Script_PlayersHouse_1F_Interact_Mom_2:
# 339 "data/scripts/players_house.pory"
	goto_if_unset FLAG_ENABLE_MOM_MATCH_CALL, Script_PlayersHouse_1F_Interact_Mom_12
	goto Script_PlayersHouse_1F_Interact_Mom_1

Script_PlayersHouse_1F_Interact_Mom_3:
# 351 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_SomethingFromMom
# 352 "data/scripts/players_house.pory"
	giveitem ITEM_AMULET_COIN
# 353 "data/scripts/players_house.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_PlayersHouse_1F_Interact_Mom_14
# 356 "data/scripts/players_house.pory"
	setflag FLAG_RECEIVED_AMULET_COIN
	goto Script_PlayersHouse_1F_Interact_Mom_1

Script_PlayersHouse_1F_Interact_Mom_4:
# 359 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_DidYouMeetBirch
	goto Script_PlayersHouse_1F_Interact_Mom_1

Script_PlayersHouse_1F_Interact_Mom_5:
# 363 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_YouShouldRest
# 364 "data/scripts/players_house.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 365 "data/scripts/players_house.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
	goto Script_PlayersHouse_1F_Interact_Mom_1

Script_PlayersHouse_1F_Interact_Mom_8:
# 350 "data/scripts/players_house.pory"
	goto_if_set FLAG_BADGE05_GET, Script_PlayersHouse_1F_Interact_Mom_3
	goto Script_PlayersHouse_1F_Interact_Mom_7

Script_PlayersHouse_1F_Interact_Mom_12:
# 340 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_PokeNav
# 341 "data/scripts/players_house.pory"
	closemessage
# 342 "data/scripts/players_house.pory"
	delay 30
# 343 "data/scripts/players_house.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 344 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_PokeNav_Registered
# 345 "data/scripts/players_house.pory"
	waitfanfare
# 346 "data/scripts/players_house.pory"
	closemessage
# 347 "data/scripts/players_house.pory"
	delay 30
# 348 "data/scripts/players_house.pory"
	setflag FLAG_ENABLE_MOM_MATCH_CALL
	goto Script_PlayersHouse_1F_Interact_Mom_1

Script_PlayersHouse_1F_Interact_Mom_14:
# 354 "data/scripts/players_house.pory"
	call Common_EventScript_ShowBagIsFull
	goto Script_PlayersHouse_1F_Interact_Mom_1


Script_PlayersHouse_1F_Interact_Mom_Farewell:
# 403 "data/scripts/players_house.pory"
	random 3
# 404 "data/scripts/players_house.pory"
	switch VAR_RESULT
# 405 "data/scripts/players_house.pory"
	case 0, Script_PlayersHouse_1F_Interact_Mom_Farewell_2
# 408 "data/scripts/players_house.pory"
	case 1, Script_PlayersHouse_1F_Interact_Mom_Farewell_3
# 411 "data/scripts/players_house.pory"
	case 2, Script_PlayersHouse_1F_Interact_Mom_Farewell_4
	return

Script_PlayersHouse_1F_Interact_Mom_Farewell_2:
# 406 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_TakeCareHoney
	return

Script_PlayersHouse_1F_Interact_Mom_Farewell_3:
# 409 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_SeeYouHoney
	return

Script_PlayersHouse_1F_Interact_Mom_Farewell_4:
# 412 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_DontPushYourselfTooHard
	return


Script_PlayersHouse_1F_PetalburgGymReport::
# 432 "data/scripts/players_house.pory"
	compare VAR_0x8004, MALE
	goto_if_eq Script_PlayersHouse_1F_PetalburgGymReport_2
# 435 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterLeft
Script_PlayersHouse_1F_PetalburgGymReport_1:
# 437 "data/scripts/players_house.pory"
	waitmovement 0
# 438 "data/scripts/players_house.pory"
	call Script_PlayersHouse_1F_Mom_NoticesGymBroadcast
# 439 "data/scripts/players_house.pory"
	compare VAR_0x8004, MALE
	goto_if_eq Script_PlayersHouse_1F_PetalburgGymReport_6
# 445 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Script_PlayersHouse_1F_PetalburgGymReport_Movement_1
Script_PlayersHouse_1F_PetalburgGymReport_5:
# 450 "data/scripts/players_house.pory"
	waitmovement 0
# 451 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 452 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_MaybeDadWillBeOn
# 453 "data/scripts/players_house.pory"
	closemessage
# 454 "data/scripts/players_house.pory"
	compare VAR_0x8004, MALE
	goto_if_eq Script_PlayersHouse_1F_PetalburgGymReport_10
# 460 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Script_PlayersHouse_1F_PetalburgGymReport_Movement_3
Script_PlayersHouse_1F_PetalburgGymReport_9:
# 465 "data/scripts/players_house.pory"
	waitmovement 0
# 466 "data/scripts/players_house.pory"
	compare VAR_0x8004, MALE
	goto_if_eq Script_PlayersHouse_1F_PetalburgGymReport_14
# 472 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Script_PlayersHouse_1F_PetalburgGymReport_Movement_5
Script_PlayersHouse_1F_PetalburgGymReport_13:
# 477 "data/scripts/players_house.pory"
	call Script_PlayersHouse_1F_TV_GymBroadcast
# 478 "data/scripts/players_house.pory"
	compare VAR_0x8004, MALE
	goto_if_eq Script_PlayersHouse_1F_PetalburgGymReport_18
# 481 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
Script_PlayersHouse_1F_PetalburgGymReport_17:
# 483 "data/scripts/players_house.pory"
	waitmovement 0
# 484 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_ItsOver
# 485 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_GoIntroduceProfBirch
# 486 "data/scripts/players_house.pory"
	closemessage
# 487 "data/scripts/players_house.pory"
	setvar VAR_TEMP_1, 1
# 488 "data/scripts/players_house.pory"
	compare VAR_0x8004, MALE
	goto_if_eq Script_PlayersHouse_1F_PetalburgGymReport_22
# 495 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Script_PlayersHouse_1F_PetalburgGymReport_Movement_7
Script_PlayersHouse_1F_PetalburgGymReport_21:
# 501 "data/scripts/players_house.pory"
	waitmovement 0
# 502 "data/scripts/players_house.pory"
	setvar VAR_QUEST_INTRO_STATE, 5
# 503 "data/scripts/players_house.pory"
	releaseall
	return

Script_PlayersHouse_1F_PetalburgGymReport_2:
# 433 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterRight
	goto Script_PlayersHouse_1F_PetalburgGymReport_1

Script_PlayersHouse_1F_PetalburgGymReport_6:
# 440 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Script_PlayersHouse_1F_PetalburgGymReport_Movement_0
	goto Script_PlayersHouse_1F_PetalburgGymReport_5

Script_PlayersHouse_1F_PetalburgGymReport_10:
# 455 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Script_PlayersHouse_1F_PetalburgGymReport_Movement_2
	goto Script_PlayersHouse_1F_PetalburgGymReport_9

Script_PlayersHouse_1F_PetalburgGymReport_14:
# 467 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Script_PlayersHouse_1F_PetalburgGymReport_Movement_4
	goto Script_PlayersHouse_1F_PetalburgGymReport_13

Script_PlayersHouse_1F_PetalburgGymReport_18:
# 479 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	goto Script_PlayersHouse_1F_PetalburgGymReport_17

Script_PlayersHouse_1F_PetalburgGymReport_22:
# 489 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Script_PlayersHouse_1F_PetalburgGymReport_Movement_6
	goto Script_PlayersHouse_1F_PetalburgGymReport_21


Script_PlayersHouse_1F_Mom_NoticesGymBroadcast::
# 507 "data/scripts/players_house.pory"
	playse SE_PIN
# 508 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_ExclamationMark
# 509 "data/scripts/players_house.pory"
	waitmovement 0
# 510 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_Delay48
# 511 "data/scripts/players_house.pory"
	waitmovement 0
# 512 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_OhComeQuickly
# 513 "data/scripts/players_house.pory"
	closemessage
	return


Script_PlayersHouse_1F_TV_GymBroadcast:
# 534 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 535 "data/scripts/players_house.pory"
	waitmovement 0
# 536 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Interviewer_PetalburgGym
# 537 "data/scripts/players_house.pory"
	fadedefaultbgm
# 538 "data/scripts/players_house.pory"
	special TurnOffTVScreen
# 539 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_HOME
# 540 "data/scripts/players_house.pory"
	delay 35
	return


Script_PlayersHouse_1F_Intro_EnterHouse::
# 560 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_ItsNiceInHere
# 561 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_FacePlayer
# 562 "data/scripts/players_house.pory"
	waitmovement
# 563 "data/scripts/players_house.pory"
	compare VAR_0x8005, MALE
	goto_if_eq Script_PlayersHouse_1F_Intro_EnterHouse_2
# 566 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
Script_PlayersHouse_1F_Intro_EnterHouse_1:
# 568 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_MoversAndGift
# 569 "data/scripts/players_house.pory"
	closemessage
# 570 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Script_PlayersHouse_1F_Intro_EnterHouse_Movement_0
# 571 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 572 "data/scripts/players_house.pory"
	waitmovement 0
# 573 "data/scripts/players_house.pory"
	setvar VAR_QUEST_INTRO_STATE, 2
# 574 "data/scripts/players_house.pory"
	releaseall
	end

Script_PlayersHouse_1F_Intro_EnterHouse_2:
# 564 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	goto Script_PlayersHouse_1F_Intro_EnterHouse_1


Script_PlayersHouse_1F_SetMovingBoxes:
# 597 "data/scripts/players_house.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 598 "data/scripts/players_house.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
	return


Script_PlayersHouse_1F_Interact_Vigoroth_1::
# 614 "data/scripts/players_house.pory"
	lock
# 615 "data/scripts/players_house.pory"
	faceplayer
# 616 "data/scripts/players_house.pory"
	waitse
# 617 "data/scripts/players_house.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 618 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Vigoroth_Fugi
# 619 "data/scripts/players_house.pory"
	waitmoncry
# 620 "data/scripts/players_house.pory"
	release
	end


Script_PlayersHouse_1F_Interact_Vigoroth_2::
# 629 "data/scripts/players_house.pory"
	lock
# 630 "data/scripts/players_house.pory"
	faceplayer
# 631 "data/scripts/players_house.pory"
	waitse
# 632 "data/scripts/players_house.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 633 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Vigoroth_Huggoh
# 634 "data/scripts/players_house.pory"
	waitmoncry
# 635 "data/scripts/players_house.pory"
	release
	end


Script_PlayersHouse_1F_Interact_RunningShoesManual::
# 645 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_RunningShoesManual
	return


Script_PlayersHouse_2F_BlockStairsUntilGiftIsAccepted::
# 703 "data/scripts/players_house.pory"
	setvar VAR_QUEST_INTRO_STATE, 3
	return


Script_PlayersHouse_2F_Interact_MomsGift::
# 709 "data/scripts/players_house.pory"
	lockall
# 710 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_MomsGift_Note
# 711 "data/scripts/players_house.pory"
	giveitem ITEM_OVAL_CHARM, 1
# 712 "data/scripts/players_house.pory"
	giveitem ITEM_CATCHING_CHARM, 1
# 713 "data/scripts/players_house.pory"
	giveitem ITEM_SHINY_CHARM, 1
# 714 "data/scripts/players_house.pory"
	waitmessage
# 715 "data/scripts/players_house.pory"
	setvar VAR_QUEST_INTRO_STATE, 4
# 716 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_MOMS_GIFT_BRENDANS_HOUSE
# 717 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_MOMS_GIFT_MAYS_HOUSE
# 718 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTHS
# 719 "data/scripts/players_house.pory"
	removeobject VAR_LAST_TALKED
# 720 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer
# 721 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_Mom_HowDoYouLikeYourRoom
# 722 "data/scripts/players_house.pory"
	waitmessage
# 723 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_Leaves
# 724 "data/scripts/players_house.pory"
	releaseall
	end


Script_PlayersHouse_2F_Mom_ApproachPlayer:
# 736 "data/scripts/players_house.pory"
	addobject LOCALID_PLAYERS_HOUSE_2F_MOM
	checkplayergender
# 0 "data/scripts/players_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_PlayersHouse_2F_Mom_ApproachPlayer_2
# 740 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer_Female
Script_PlayersHouse_2F_Mom_ApproachPlayer_1:
	return

Script_PlayersHouse_2F_Mom_ApproachPlayer_2:
# 738 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer_Male
	goto Script_PlayersHouse_2F_Mom_ApproachPlayer_1


Script_PlayersHouse_2F_Mom_ApproachPlayer_North:
	checkplayergender
# 0 "data/scripts/players_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_PlayersHouse_2F_Mom_ApproachPlayer_North_1
# 753 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_ApproachPlayer_North_Movement_1
# 757 "data/scripts/players_house.pory"
	waitmovement 0
	return

Script_PlayersHouse_2F_Mom_ApproachPlayer_North_1:
# 747 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_ApproachPlayer_North_Movement_0
# 751 "data/scripts/players_house.pory"
	waitmovement 0
	return


Script_PlayersHouse_2F_Mom_ApproachPlayer_West:
	checkplayergender
# 0 "data/scripts/players_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_PlayersHouse_2F_Mom_ApproachPlayer_West_1
	return

Script_PlayersHouse_2F_Mom_ApproachPlayer_West_1:
# 763 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_ApproachPlayer_West_Movement_0
# 767 "data/scripts/players_house.pory"
	waitmovement 0
	return


Script_PlayersHouse_2F_Mom_ApproachPlayer_South:
# 773 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_ApproachPlayer_South_Movement_0
# 777 "data/scripts/players_house.pory"
	waitmovement 0
	return


Script_PlayersHouse_2F_Mom_ApproachPlayer_Male:
# 781 "data/scripts/players_house.pory"
	switch VAR_FACING
# 782 "data/scripts/players_house.pory"
	case DIR_NORTH, Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_3
# 784 "data/scripts/players_house.pory"
	case DIR_SOUTH, Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_4
# 786 "data/scripts/players_house.pory"
	case DIR_EAST, Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_5
# 788 "data/scripts/players_house.pory"
	case DIR_WEST, Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_6
Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_1:
	return

Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_3:
# 783 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer_South
	goto Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_1

Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_4:
# 785 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer_North
	goto Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_1

Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_5:
# 787 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_East
	goto Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_1

Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_6:
# 789 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer_West
	goto Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_1


Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_East:
# 795 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_East_Movement_0
# 800 "data/scripts/players_house.pory"
	waitmovement 0
	return


Script_PlayersHouse_2F_Mom_ApproachPlayer_Female:
# 804 "data/scripts/players_house.pory"
	switch VAR_FACING
# 805 "data/scripts/players_house.pory"
	case DIR_NORTH, Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_3
# 808 "data/scripts/players_house.pory"
	case DIR_SOUTH, Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_4
# 811 "data/scripts/players_house.pory"
	case DIR_EAST, Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_5
# 814 "data/scripts/players_house.pory"
	case DIR_WEST, Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_6
Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_1:
	return

Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_3:
# 806 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer_South
	goto Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_1

Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_4:
# 809 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer_North
	goto Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_1

Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_5:
# 812 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer_West
	goto Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_1

Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_6:
# 815 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_East
	goto Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_1


Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_East:
# 822 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_East_Movement_0
# 827 "data/scripts/players_house.pory"
	waitmovement 0
	return


Script_PlayersHouse_2F_Mom_Leaves:
# 833 "data/scripts/players_house.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq Script_PlayersHouse_2F_Mom_Leaves_2
# 839 "data/scripts/players_house.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq Script_PlayersHouse_2F_Mom_Leaves_3
# 845 "data/scripts/players_house.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq Script_PlayersHouse_2F_Mom_Leaves_4
# 860 "data/scripts/players_house.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq Script_PlayersHouse_2F_Mom_Leaves_5
Script_PlayersHouse_2F_Mom_Leaves_1:
# 876 "data/scripts/players_house.pory"
	removeobject LOCALID_PLAYERS_HOUSE_2F_MOM
	return

Script_PlayersHouse_2F_Mom_Leaves_2:
# 834 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_Leaves_Movement_0
# 838 "data/scripts/players_house.pory"
	waitmovement 0
	goto Script_PlayersHouse_2F_Mom_Leaves_1

Script_PlayersHouse_2F_Mom_Leaves_3:
# 840 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_Leaves_Movement_1
# 844 "data/scripts/players_house.pory"
	waitmovement 0
	goto Script_PlayersHouse_2F_Mom_Leaves_1

Script_PlayersHouse_2F_Mom_Leaves_4:
	checkplayergender
# 0 "data/scripts/players_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_PlayersHouse_2F_Mom_Leaves_10
# 853 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_Leaves_Movement_2
# 858 "data/scripts/players_house.pory"
	waitmovement 0
	goto Script_PlayersHouse_2F_Mom_Leaves_1

Script_PlayersHouse_2F_Mom_Leaves_5:
	checkplayergender
# 0 "data/scripts/players_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_PlayersHouse_2F_Mom_Leaves_13
# 869 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_Leaves_Movement_0
# 873 "data/scripts/players_house.pory"
	waitmovement 0
	goto Script_PlayersHouse_2F_Mom_Leaves_1

Script_PlayersHouse_2F_Mom_Leaves_10:
# 847 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_Leaves_Movement_0
# 851 "data/scripts/players_house.pory"
	waitmovement 0
	goto Script_PlayersHouse_2F_Mom_Leaves_1

Script_PlayersHouse_2F_Mom_Leaves_13:
# 862 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_Leaves_Movement_3
# 867 "data/scripts/players_house.pory"
	waitmovement 0
	goto Script_PlayersHouse_2F_Mom_Leaves_1


Script_PlayersHouse_2F_Interact_Notebook::
# 894 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_Notebook, MSGBOX_SIGN
	end


Script_PlayersHouse_2F_Interact_GameCube::
# 914 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_EnterCode, MSGBOX_YESNO
# 915 "data/scripts/players_house.pory"
	compare VAR_RESULT, NO
	goto_if_eq Script_PlayersHouse_2F_Interact_GameCube_2
# 919 "data/scripts/players_house.pory"
	special EnterCode
# 920 "data/scripts/players_house.pory"
	waitstate
# 921 "data/scripts/players_house.pory"
	special GetCodeFeedback
# 922 "data/scripts/players_house.pory"
	compare VAR_RESULT, 0
	goto_if_le Script_PlayersHouse_2F_Interact_GameCube_5
# 922 "data/scripts/players_house.pory"
	compare VAR_RESULT, 7
	goto_if_gt Script_PlayersHouse_2F_Interact_GameCube_5
# 928 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_Success
# 929 "data/scripts/players_house.pory"
	compare VAR_RESULT, 1
	goto_if_eq Script_PlayersHouse_2F_Interact_GameCube_10
# 935 "data/scripts/players_house.pory"
	compare VAR_RESULT, 2
	goto_if_eq Script_PlayersHouse_2F_Interact_GameCube_11
# 937 "data/scripts/players_house.pory"
	compare VAR_RESULT, 3
	goto_if_eq Script_PlayersHouse_2F_Interact_GameCube_12
# 943 "data/scripts/players_house.pory"
	compare VAR_RESULT, 4
	goto_if_eq Script_PlayersHouse_2F_Interact_GameCube_13
# 949 "data/scripts/players_house.pory"
	compare VAR_RESULT, 5
	goto_if_eq Script_PlayersHouse_2F_Interact_GameCube_14
# 951 "data/scripts/players_house.pory"
	compare VAR_RESULT, 6
	goto_if_eq Script_PlayersHouse_2F_Interact_GameCube_15
# 957 "data/scripts/players_house.pory"
	compare VAR_RESULT, 7
	goto_if_eq Script_PlayersHouse_2F_Interact_GameCube_16
Script_PlayersHouse_2F_Interact_GameCube_9:
# 964 "data/scripts/players_house.pory"
	waitmessage
# 965 "data/scripts/players_house.pory"
	releaseall
	end

Script_PlayersHouse_2F_Interact_GameCube_2:
# 916 "data/scripts/players_house.pory"
	releaseall
	end

Script_PlayersHouse_2F_Interact_GameCube_5:
# 923 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_Fail
# 924 "data/scripts/players_house.pory"
	waitmessage
# 925 "data/scripts/players_house.pory"
	releaseall
	end

Script_PlayersHouse_2F_Interact_GameCube_10:
# 930 "data/scripts/players_house.pory"
	goto_if_set FLAG_DEXALL, Script_PlayersHouse_2F_Interact_GameCube_24
# 933 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_DexAll_Off
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_11:
# 936 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_CaughtAll_On
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_12:
# 938 "data/scripts/players_house.pory"
	goto_if_set FLAG_EZCATCH, Script_PlayersHouse_2F_Interact_GameCube_27
# 941 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_EzCatch_Off
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_13:
# 944 "data/scripts/players_house.pory"
	goto_if_set FLAG_SHINY_STARTERS, Script_PlayersHouse_2F_Interact_GameCube_30
# 947 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_ShinyStarter_Off
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_14:
# 950 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_MaxMoney
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_15:
# 952 "data/scripts/players_house.pory"
	goto_if_set FLAG_SHINY_LEGENDS, Script_PlayersHouse_2F_Interact_GameCube_33
# 955 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_ShinyLegends_Off
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_16:
# 958 "data/scripts/players_house.pory"
	goto_if_set FLAG_MONOTYPE_STARTERS, Script_PlayersHouse_2F_Interact_GameCube_36
# 961 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_MonoStarter_Off
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_24:
# 931 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_DexAll_On
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_27:
# 939 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_EzCatch_On
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_30:
# 945 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_ShinyStarter_On
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_33:
# 953 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_ShinyLegends_On
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_36:
# 959 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_MonoStarter_On
	goto Script_PlayersHouse_2F_Interact_GameCube_9


# 440 "data/scripts/players_house.pory"
Script_PlayersHouse_1F_PetalburgGymReport_Movement_0:
# 441 "data/scripts/players_house.pory"
	walk_down
# 441 "data/scripts/players_house.pory"
	walk_down
# 442 "data/scripts/players_house.pory"
	walk_left
# 442 "data/scripts/players_house.pory"
	walk_left
# 442 "data/scripts/players_house.pory"
	walk_left
	step_end

# 445 "data/scripts/players_house.pory"
Script_PlayersHouse_1F_PetalburgGymReport_Movement_1:
# 446 "data/scripts/players_house.pory"
	walk_down
# 446 "data/scripts/players_house.pory"
	walk_down
# 447 "data/scripts/players_house.pory"
	walk_right
# 447 "data/scripts/players_house.pory"
	walk_right
# 447 "data/scripts/players_house.pory"
	walk_right
	step_end

# 455 "data/scripts/players_house.pory"
Script_PlayersHouse_1F_PetalburgGymReport_Movement_2:
# 456 "data/scripts/players_house.pory"
	walk_left
# 457 "data/scripts/players_house.pory"
	walk_in_place_faster_right
	step_end

# 460 "data/scripts/players_house.pory"
Script_PlayersHouse_1F_PetalburgGymReport_Movement_3:
# 461 "data/scripts/players_house.pory"
	walk_right
# 462 "data/scripts/players_house.pory"
	walk_in_place_faster_left
	step_end

# 467 "data/scripts/players_house.pory"
Script_PlayersHouse_1F_PetalburgGymReport_Movement_4:
# 468 "data/scripts/players_house.pory"
	walk_left
# 469 "data/scripts/players_house.pory"
	face_up
	step_end

# 472 "data/scripts/players_house.pory"
Script_PlayersHouse_1F_PetalburgGymReport_Movement_5:
# 473 "data/scripts/players_house.pory"
	walk_right
# 474 "data/scripts/players_house.pory"
	face_up
	step_end

# 489 "data/scripts/players_house.pory"
Script_PlayersHouse_1F_PetalburgGymReport_Movement_6:
# 490 "data/scripts/players_house.pory"
	walk_left
# 491 "data/scripts/players_house.pory"
	walk_down
# 492 "data/scripts/players_house.pory"
	walk_in_place_faster_right
	step_end

# 495 "data/scripts/players_house.pory"
Script_PlayersHouse_1F_PetalburgGymReport_Movement_7:
# 496 "data/scripts/players_house.pory"
	walk_right
# 497 "data/scripts/players_house.pory"
	walk_down
# 498 "data/scripts/players_house.pory"
	walk_in_place_faster_left
	step_end

# 570 "data/scripts/players_house.pory"
Script_PlayersHouse_1F_Intro_EnterHouse_Movement_0:
# 570 "data/scripts/players_house.pory"
	walk_up
	step_end

# 747 "data/scripts/players_house.pory"
Script_PlayersHouse_2F_Mom_ApproachPlayer_North_Movement_0:
# 748 "data/scripts/players_house.pory"
	walk_down
# 748 "data/scripts/players_house.pory"
	walk_down
# 748 "data/scripts/players_house.pory"
	walk_down
# 749 "data/scripts/players_house.pory"
	face_left
	step_end

# 753 "data/scripts/players_house.pory"
Script_PlayersHouse_2F_Mom_ApproachPlayer_North_Movement_1:
# 754 "data/scripts/players_house.pory"
	walk_down
# 754 "data/scripts/players_house.pory"
	walk_down
# 754 "data/scripts/players_house.pory"
	walk_down
# 755 "data/scripts/players_house.pory"
	face_right
	step_end

# 763 "data/scripts/players_house.pory"
Script_PlayersHouse_2F_Mom_ApproachPlayer_West_Movement_0:
# 764 "data/scripts/players_house.pory"
	walk_down
# 764 "data/scripts/players_house.pory"
	walk_down
# 764 "data/scripts/players_house.pory"
	walk_down
# 765 "data/scripts/players_house.pory"
	face_down
	step_end

# 773 "data/scripts/players_house.pory"
Script_PlayersHouse_2F_Mom_ApproachPlayer_South_Movement_0:
# 774 "data/scripts/players_house.pory"
	walk_down
# 774 "data/scripts/players_house.pory"
	walk_down
# 774 "data/scripts/players_house.pory"
	walk_down
# 774 "data/scripts/players_house.pory"
	walk_down
# 774 "data/scripts/players_house.pory"
	walk_down
# 775 "data/scripts/players_house.pory"
	face_player
	step_end

# 795 "data/scripts/players_house.pory"
Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_East_Movement_0:
# 796 "data/scripts/players_house.pory"
	walk_down
# 796 "data/scripts/players_house.pory"
	walk_down
# 796 "data/scripts/players_house.pory"
	walk_down
# 797 "data/scripts/players_house.pory"
	walk_left
# 797 "data/scripts/players_house.pory"
	walk_left
# 798 "data/scripts/players_house.pory"
	face_player
	step_end

# 822 "data/scripts/players_house.pory"
Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_East_Movement_0:
# 823 "data/scripts/players_house.pory"
	walk_down
# 823 "data/scripts/players_house.pory"
	walk_down
# 823 "data/scripts/players_house.pory"
	walk_down
# 824 "data/scripts/players_house.pory"
	walk_right
# 824 "data/scripts/players_house.pory"
	walk_right
# 825 "data/scripts/players_house.pory"
	face_player
	step_end

# 834 "data/scripts/players_house.pory"
Script_PlayersHouse_2F_Mom_Leaves_Movement_0:
# 835 "data/scripts/players_house.pory"
	walk_up
# 835 "data/scripts/players_house.pory"
	walk_up
# 835 "data/scripts/players_house.pory"
	walk_up
# 836 "data/scripts/players_house.pory"
	set_invisible
	step_end

# 840 "data/scripts/players_house.pory"
Script_PlayersHouse_2F_Mom_Leaves_Movement_1:
# 841 "data/scripts/players_house.pory"
	walk_up
# 841 "data/scripts/players_house.pory"
	walk_up
# 841 "data/scripts/players_house.pory"
	walk_up
# 841 "data/scripts/players_house.pory"
	walk_up
# 841 "data/scripts/players_house.pory"
	walk_up
# 842 "data/scripts/players_house.pory"
	set_invisible
	step_end

# 853 "data/scripts/players_house.pory"
Script_PlayersHouse_2F_Mom_Leaves_Movement_2:
# 854 "data/scripts/players_house.pory"
	walk_left
# 854 "data/scripts/players_house.pory"
	walk_left
# 855 "data/scripts/players_house.pory"
	walk_up
# 855 "data/scripts/players_house.pory"
	walk_up
# 855 "data/scripts/players_house.pory"
	walk_up
# 856 "data/scripts/players_house.pory"
	set_invisible
	step_end

# 862 "data/scripts/players_house.pory"
Script_PlayersHouse_2F_Mom_Leaves_Movement_3:
# 863 "data/scripts/players_house.pory"
	walk_right
# 863 "data/scripts/players_house.pory"
	walk_right
# 864 "data/scripts/players_house.pory"
	walk_up
# 864 "data/scripts/players_house.pory"
	walk_up
# 864 "data/scripts/players_house.pory"
	walk_up
# 865 "data/scripts/players_house.pory"
	set_invisible
	step_end

Text_PlayersHouse_1F_Mom_DidYouMeetBirch:
# 373 "data/scripts/players_house.pory"
	.string "Mom: Did you introduce yourself to\n"
	.string "Prof. Birch?$"

Text_PlayersHouse_1F_Mom_YouShouldRest:
# 378 "data/scripts/players_house.pory"
	.string "Mom: How are you doing, {PLAYER}?\n"
	.string "You look a little tired.\p"
	.string "I thin you should rest a bit.$"

Text_PlayersHouse_1F_Mom_SomethingFromMom:
# 384 "data/scripts/players_house.pory"
	.string "Mom: Oh? Did Dad give you that Badge?\p"
	.string "Then here's something from your Mom!$"

Text_PlayersHouse_1F_Mom_PokeNav:
# 389 "data/scripts/players_house.pory"
	.string "Mom: What is that, honey? A PokéNav?\n"
	.string "Someone from Devon gave it to you?\p"
	.string "Well, honey, how about registering\n"
	.string "your mom?\p"
	.string "… … …$"

Text_PlayersHouse_1F_Mom_PokeNav_Registered:
# 397 "data/scripts/players_house.pory"
	.string "Registered Mom\n"
	.string "in the PokéNav.$"

Text_PlayersHouse_1F_Mom_TakeCareHoney:
# 417 "data/scripts/players_house.pory"
	.string "Mom: Take care, honey!$"

Text_PlayersHouse_1F_Mom_SeeYouHoney:
# 421 "data/scripts/players_house.pory"
	.string "Mom: See you, honey!$"

Text_PlayersHouse_1F_Mom_DontPushYourselfTooHard::
# 425 "data/scripts/players_house.pory"
	.string "Don't push yourself too hard, dear.\n"
	.string "You can always come home.\p"
	.string "Go for it, honey!$"

Text_PlayersHouse_1F_Mom_OhComeQuickly:
# 517 "data/scripts/players_house.pory"
	.string "Mom: Oh! {PLAYER}, {PLAYER}!\n"
	.string "Quick! Come quickly!$"

Text_PlayersHouse_1F_Mom_MaybeDadWillBeOn:
# 522 "data/scripts/players_house.pory"
	.string "Mom: Look! It's Petalburg Gym!\n"
	.string "Maybe Dad will be on!$"

Text_PlayersHouse_1F_Mom_ItsOver:
# 527 "data/scripts/players_house.pory"
	.string "Mom: Oh… It's over.\p"
	.string "I think Dad was on, but we missed him.\n"
	.string "Too bad.$"

Text_PlayersHouse_1F_Interviewer_PetalburgGym:
# 544 "data/scripts/players_house.pory"
	.string "Interviewer: …We brought you this\n"
	.string "report from in front of Petalburg Gym.$"

Text_PlayersHouse_1F_Mom_GoIntroduceProfBirch:
# 549 "data/scripts/players_house.pory"
	.string "Oh, yes.\n"
	.string "One of your Dad's and I's friends\l"
	.string "lives and works in Littleroot Town.\p"
	.string "Prof. Birch is his name.\n"
	.string "He and his family lives next door.\p"
	.string "You should vist him in his lab\n"
	.string "for the next part of your gift!$"

Text_PlayersHouse_1F_Mom_ItsNiceInHere:
# 578 "data/scripts/players_house.pory"
	.string "Mom: See, {PLAYER}?\n"
	.string "Isn't it nice in here, too?$"

Text_PlayersHouse_1F_Mom_MoversAndGift:
# 583 "data/scripts/players_house.pory"
	.string "The mover's Pokémon do all the work\n"
	.string "of moving us in and cleaning up after.\l"
	.string "This is so convenient!\p"
	.string "{PLAYER}, your room is upstairs.\n"
	.string "Go check it out, dear!\p"
	.string "Your Dad bought you a new clock\n"
	.string "to mark our move here, just like\l"
	.string "every young trainer wants…\l"
	.string "Don't worry, I got a gift you will\l"
	.string "actually like!$"

Text_PlayersHouse_1F_GoOpenGift::
# 602 "data/scripts/players_house.pory"
	.string "Mom: {PLAYER}.\p"
	.string "Go open my gift up in your room, honey.$"

Text_PlayersHouse_1F_Mom_ArentYouInterestedInRoom::
# 607 "data/scripts/players_house.pory"
	.string "Mom: Well, {PLAYER}?\p"
	.string "Aren't you interested in seeing your\n"
	.string "very own room?$"

Text_PlayersHouse_1F_Vigoroth_Fugi::
# 624 "data/scripts/players_house.pory"
	.string "Fugiiiih!$"

Text_PlayersHouse_1F_Vigoroth_Huggoh::
# 639 "data/scripts/players_house.pory"
	.string "Huggoh, uggo uggo…$"

Text_PlayersHouse_1F_RunningShoesManual::
# 648 "data/scripts/players_house.pory"
	.string "It's the instruction booklet for the\n"
	.string "Running Shoes.\p"
	.string "Press the B Button to run while\n"
	.string "wearing your Running Shoes.\p"
	.string "“Lace up your Running Shoes and hit\n"
	.string "the road running!”$"

Text_PlayersHouse_1F_Dad_TicketFromBriney::
# 657 "data/scripts/players_house.pory"
	.string "Dad: Hm?\p"
	.string "Hey, it's {PLAYER}!\p"
	.string "It's been a while since I saw you,\n"
	.string "but you look…stronger, somehow.\p"
	.string "That's the impression I get.\n"
	.string "But your old man hasn't given up yet!\p"
	.string "Oh, yes, I have something for you.\n"
	.string "This came to you from someone named\l"
	.string "Mr. Briney.$"

Text_PlayersHouse_1F_Dad_TicketsForFerry::
# 668 "data/scripts/players_house.pory"
	.string "Dad: Hm, a Ticket for a ferry?"
	.string "If I recall, there are ferry ports in\n"
	.string "Slateport and Lilycove.$"

Text_PlayersHouse_1F_Dad_BetterGetBackToGym::
# 674 "data/scripts/players_house.pory"
	.string "I'd better get back to Petalburg Gym.\p"
	.string "Mom, thanks for looking after the house\n"
	.string "while I'm away.$"

Text_PlayersHouse_1F_Mom_DadShouldStayLonger::
# 680 "data/scripts/players_house.pory"
	.string "Mom: That Dad of yours…\p"
	.string "He comes home for the first time in a\n"
	.string "while, but all he talks about is Pokémon.\p"
	.string "He should relax and stay a little longer.$"

Text_PlayersHouse_1F_Mom_BreakingNews::
# 687 "data/scripts/players_house.pory"
	.string "Mom: Is that a breaking news story?$"

Text_PlayersHouse_1F_Mom_WhatColor::
# 691 "data/scripts/players_house.pory"
	.string "Mom: {PLAYER}, did you catch that?\p"
	.string "What color did the announcer say\n"
	.string "that Pokémon was?$"

Text_PlayersHouse_1F_Mom_StillUnknownPokemon::
# 697 "data/scripts/players_house.pory"
	.string "Mom: Well, isn't that something!\n"
	.string "There are still unknown Pokémon.$"

Text_PlayersHouse_2F_MomsGift_Note::
# 728 "data/scripts/players_house.pory"
	.string "“I know moving to Hoenn wasn't\n"
	.string "really what you wanted. But hopefully\l"
	.string "these will make your time in Hoenn,\l"
	.string "that much more exciting!” - Mom$"

Text_PlayersHouse_2F_Mom_HowDoYouLikeYourRoom:
# 879 "data/scripts/players_house.pory"
	.string "Mom: {PLAYER}, how do you like your\n"
	.string "new room?\p"
	.string "Good! Everything's put away neatly!\p"
	.string "They finished moving everything in\n"
	.string "downstairs, too.\p"
	.string "Pokémon movers are so convenient!\p"
	.string "The movers found a notebook that look\n"
	.string "important, they put it on your desk.\p"
	.string "Otherwise, I hope you liked your gift!\n"
	.string "you will need to go visit Prof. Birch\l"
	.string "in his lab for the second part of it.$"

Text_PlayersHouse_2F_Notebook:
# 898 "data/scripts/players_house.pory"
	.string "{PLAYER} flipped open the notebook.\n"
	.string "{UP_ARROW}{UP_ARROW}{DOWN_ARROW}{DOWN_ARROW}{LEFT_ARROW}{RIGHT_ARROW}{LEFT_ARROW}{RIGHT_ARROW}{B_BUTTON}{A_BUTTON}\l"
	.string "The book is filled with cheat codes.\p"
	.string "Effect - Code1/Code2\n"
	.string "DexNav All - DexAll/Dxa\l"
	.string "▶Caught All - CaughtAll/Cal\l"
	.string "Eazy Catch - EZCatch/Ezc\l"
	.string "Shiny Starter - ShinyS/Shs\l"
	.string "▶Max Money - MaxMoney/Mmy\l"
	.string "Shiny Legends - ShinyL/Shl\l"
	.string "Mono Starter - Mono\l"
	.string "▶Codes cannot be reverted.\p$"

Text_PlayersHouse_2F_GameCube_EnterCode:
# 969 "data/scripts/players_house.pory"
	.string "It's a Nintendo GameCube.\p"
	.string "Enter a cheat code?$"

Text_PlayersHouse_2F_GameCube_Code_Fail:
# 974 "data/scripts/players_house.pory"
	.string "Cheat code failed.$"

Text_PlayersHouse_2F_GameCube_Code_Success:
# 978 "data/scripts/players_house.pory"
	.string "Cheat code succeeded.$"

Text_PlayersHouse_2F_GameCube_Code_DexAll_On:
# 982 "data/scripts/players_house.pory"
	.string "DexAll cheat enabled.$"

Text_PlayersHouse_2F_GameCube_Code_DexAll_Off:
# 986 "data/scripts/players_house.pory"
	.string "DexAll cheat disabled.$"

Text_PlayersHouse_2F_GameCube_Code_CaughtAll_On:
# 990 "data/scripts/players_house.pory"
	.string "CaughtAll cheat enabled.$"

Text_PlayersHouse_2F_GameCube_Code_MaxMoney:
# 994 "data/scripts/players_house.pory"
	.string "Money set to max amount.$"

Text_PlayersHouse_2F_GameCube_Code_EzCatch_On:
# 998 "data/scripts/players_house.pory"
	.string "EZCatch cheat enabled.$"

Text_PlayersHouse_2F_GameCube_Code_EzCatch_Off:
# 1002 "data/scripts/players_house.pory"
	.string "EZCatch cheat disabled.$"

Text_PlayersHouse_2F_GameCube_Code_ShinyStarter_On:
# 1006 "data/scripts/players_house.pory"
	.string "ShinyStarters cheat enabled.$"

Text_PlayersHouse_2F_GameCube_Code_ShinyStarter_Off:
# 1010 "data/scripts/players_house.pory"
	.string "ShinyStarters cheat disabled.$"

Text_PlayersHouse_2F_GameCube_Code_ShinyLegends_On:
# 1014 "data/scripts/players_house.pory"
	.string "ShinyLegends cheat enabled.$"

Text_PlayersHouse_2F_GameCube_Code_ShinyLegends_Off:
# 1018 "data/scripts/players_house.pory"
	.string "ShinyLegends cheat disabled.$"

Text_PlayersHouse_2F_GameCube_Code_MonoStarter_On:
# 1022 "data/scripts/players_house.pory"
	.string "Monotype Starters cheat enabled.$"

Text_PlayersHouse_2F_GameCube_Code_MonoStarter_Off:
# 1026 "data/scripts/players_house.pory"
	.string "Monotype Starters cheat disabled.$"

Text_Common_LookCloserAtMap:
# 1030 "data/scripts/players_house.pory"
	.string "{PLAYER} took a closer look at the\n"
	.string "{REGION} region map.$"
