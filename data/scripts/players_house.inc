# 1 "data/scripts/players_house.pory"

# 2 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachDadMale:
# 3 "data/scripts/players_house.pory"
	walk_up
# 4 "data/scripts/players_house.pory"
	walk_right
# 5 "data/scripts/players_house.pory"
	walk_right
# 6 "data/scripts/players_house.pory"
	walk_right
# 7 "data/scripts/players_house.pory"
	walk_right
# 8 "data/scripts/players_house.pory"
	walk_down
# 9 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 10 "data/scripts/players_house.pory"
	step_end
# 11 "data/scripts/players_house.pory"

# 12 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachDadFemale:
# 13 "data/scripts/players_house.pory"
	walk_up
# 14 "data/scripts/players_house.pory"
	walk_left
# 15 "data/scripts/players_house.pory"
	walk_left
# 16 "data/scripts/players_house.pory"
	walk_left
# 17 "data/scripts/players_house.pory"
	walk_left
# 18 "data/scripts/players_house.pory"
	walk_down
# 19 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 20 "data/scripts/players_house.pory"
	step_end
# 21 "data/scripts/players_house.pory"

# 22 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerMale:
# 23 "data/scripts/players_house.pory"
	walk_right
# 24 "data/scripts/players_house.pory"
	step_end
# 25 "data/scripts/players_house.pory"

# 26 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerFemale:
# 27 "data/scripts/players_house.pory"
	walk_left
# 28 "data/scripts/players_house.pory"
	step_end
# 29 "data/scripts/players_house.pory"

# 30 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale:
# 31 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 32 "data/scripts/players_house.pory"
	delay_16
# 33 "data/scripts/players_house.pory"
	delay_16
# 34 "data/scripts/players_house.pory"
	delay_16
# 35 "data/scripts/players_house.pory"
	delay_16
# 36 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 37 "data/scripts/players_house.pory"
	delay_16
# 38 "data/scripts/players_house.pory"
	delay_16
# 39 "data/scripts/players_house.pory"
	step_end
# 40 "data/scripts/players_house.pory"

# 41 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale:
# 42 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 43 "data/scripts/players_house.pory"
	delay_16
# 44 "data/scripts/players_house.pory"
	delay_16
# 45 "data/scripts/players_house.pory"
	delay_16
# 46 "data/scripts/players_house.pory"
	delay_16
# 47 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 48 "data/scripts/players_house.pory"
	delay_16
# 49 "data/scripts/players_house.pory"
	delay_16
# 50 "data/scripts/players_house.pory"
	step_end
# 51 "data/scripts/players_house.pory"

# 52 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale:
# 53 "data/scripts/players_house.pory"
	walk_up
# 54 "data/scripts/players_house.pory"
	walk_left
# 55 "data/scripts/players_house.pory"
	walk_left
# 56 "data/scripts/players_house.pory"
	step_end
# 57 "data/scripts/players_house.pory"

# 58 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale:
# 59 "data/scripts/players_house.pory"
	walk_up
# 60 "data/scripts/players_house.pory"
	walk_right
# 61 "data/scripts/players_house.pory"
	walk_right
# 62 "data/scripts/players_house.pory"
	step_end
# 63 "data/scripts/players_house.pory"

# 64 "data/scripts/players_house.pory"

# 65 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV::
# 66 "data/scripts/players_house.pory"
	lockall
# 67 "data/scripts/players_house.pory"
	checkplayergender
# 68 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, MALE, PlayersHouse_1F_EventScript_SetUpObjectEventVarsMale
# 69 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, FEMALE, PlayersHouse_1F_EventScript_SetUpObjectEventVarsFemale
# 70 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_PlayerEnterRoomMale
# 71 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_PlayerEnterRoomFemale
# 72 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_FacePlayer
# 73 "data/scripts/players_house.pory"
	waitmovement 0
# 74 "data/scripts/players_house.pory"
	playse SE_PIN
# 75 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_ExclamationMark
# 76 "data/scripts/players_house.pory"
	waitmovement 0
# 77 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_Delay48
# 78 "data/scripts/players_house.pory"
	waitmovement 0
# 79 "data/scripts/players_house.pory"
	delay 20
# 80 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_DadApproachPlayerMale
# 81 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_DadApproachPlayerFemale
# 82 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Dad_TicketFromBriney, MSGBOX_DEFAULT
# 83 "data/scripts/players_house.pory"
	giveitem ITEM_SS_TICKET
# 84 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Dad_TicketsForFerry, MSGBOX_DEFAULT
# 85 "data/scripts/players_house.pory"
	closemessage
# 86 "data/scripts/players_house.pory"
	delay 20
# 87 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachDadMale
# 88 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachDadFemale
# 89 "data/scripts/players_house.pory"
	msgbox  Text_PlayersHouse_1F_Dad_BetterGetBackToGym, MSGBOX_DEFAULT
# 90 "data/scripts/players_house.pory"
	closemessage
# 91 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_DadExitsMale
# 92 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_DadExitsFemale
# 93 "data/scripts/players_house.pory"
	playse SE_DOOR
# 94 "data/scripts/players_house.pory"
	removeobject VAR_0x8009
# 95 "data/scripts/players_house.pory"
	setflag FLAG_RECEIVED_SS_TICKET
# 96 "data/scripts/players_house.pory"
	delay 30
# 97 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachPlayerMale
# 98 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachPlayerFemale
# 99 "data/scripts/players_house.pory"
	delay 20
# 100 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_DadShouldStayLonger, MSGBOX_DEFAULT
# 101 "data/scripts/players_house.pory"
	closemessage
# 102 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_LATIAS_LATIOS
# 103 "data/scripts/players_house.pory"
	special TurnOnTVScreen
# 104 "data/scripts/players_house.pory"
	delay 60
# 105 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastMale
# 106 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastFemale
# 107 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_BreakingNews, MSGBOX_DEFAULT
# 108 "data/scripts/players_house.pory"
	closemessage
# 109 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_PlayerApproachTVForLatiMale
# 110 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_PlayerApproachTVForLatiFemale
# 111 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_TV_LatiNews, MSGBOX_DEFAULT
# 112 "data/scripts/players_house.pory"
	closemessage
# 113 "data/scripts/players_house.pory"
	clearflag FLAG_SYS_TV_LATIAS_LATIOS
# 114 "data/scripts/players_house.pory"
	setflag FLAG_LATIOS_OR_LATIAS_ROAMING
# 115 "data/scripts/players_house.pory"
	special TurnOffTVScreen
# 116 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVMale
# 117 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVFemale
# 118 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_WhatColor, MSGBOX_DEFAULT
# 119 "data/scripts/players_house.pory"
	multichoice 22, 8, MULTI_TV_LATI, TRUE
# 120 "data/scripts/players_house.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 121 "data/scripts/players_house.pory"
	special InitRoamer
# 122 "data/scripts/players_house.pory"
	copyvar VAR_ROAMER_POKEMON, VAR_RESULT
# 123 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_StillUnknownPokemon, MSGBOX_DEFAULT
# 124 "data/scripts/players_house.pory"
	closemessage
# 125 "data/scripts/players_house.pory"
	setvar VAR_RIVAL_HOUSE_STATE, 4
# 126 "data/scripts/players_house.pory"
	releaseall
# 127 "data/scripts/players_house.pory"
	end
# 128 "data/scripts/players_house.pory"

# 129 "data/scripts/players_house.pory"
@ Never called.
# 130 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_AirLatiBroadcast::
# 131 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_LATIAS_LATIOS
# 132 "data/scripts/players_house.pory"
	return
# 133 "data/scripts/players_house.pory"

# 134 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetUpObjectEventVarsMale::
# 135 "data/scripts/players_house.pory"
	setvar VAR_0x8008, MALE
# 136 "data/scripts/players_house.pory"
	setvar VAR_0x8009, LOCALID_PLAYERS_HOUSE_1F_DAD
# 137 "data/scripts/players_house.pory"
	setvar VAR_0x800A, LOCALID_PLAYERS_HOUSE_1F_MOM
# 138 "data/scripts/players_house.pory"
	return
# 139 "data/scripts/players_house.pory"

# 140 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetUpObjectEventVarsFemale::
# 141 "data/scripts/players_house.pory"
	setvar VAR_0x8008, FEMALE
# 142 "data/scripts/players_house.pory"
	setvar VAR_0x8009, LOCALID_PLAYERS_HOUSE_1F_DAD
# 143 "data/scripts/players_house.pory"
	setvar VAR_0x800A, LOCALID_PLAYERS_HOUSE_1F_MOM
# 144 "data/scripts/players_house.pory"
	return
# 145 "data/scripts/players_house.pory"

# 146 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadApproachPlayerMale::
# 147 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerMale
# 148 "data/scripts/players_house.pory"
	waitmovement 0
# 149 "data/scripts/players_house.pory"
	return
# 150 "data/scripts/players_house.pory"

# 151 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadApproachPlayerFemale::
# 152 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerFemale
# 153 "data/scripts/players_house.pory"
	waitmovement 0
# 154 "data/scripts/players_house.pory"
	return
# 155 "data/scripts/players_house.pory"

# 156 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachDadMale::
# 157 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadMale
# 158 "data/scripts/players_house.pory"
	waitmovement 0
# 159 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomMale
# 160 "data/scripts/players_house.pory"
	waitmovement 0
# 161 "data/scripts/players_house.pory"
	return
# 162 "data/scripts/players_house.pory"

# 163 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachDadFemale::
# 164 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadFemale
# 165 "data/scripts/players_house.pory"
	waitmovement 0
# 166 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomFemale
# 167 "data/scripts/players_house.pory"
	waitmovement 0
# 168 "data/scripts/players_house.pory"
	return
# 169 "data/scripts/players_house.pory"

# 170 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadExitsMale::
# 171 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 172 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 173 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsMale
# 174 "data/scripts/players_house.pory"
	waitmovement 0
# 175 "data/scripts/players_house.pory"
	return
# 176 "data/scripts/players_house.pory"

# 177 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadExitsFemale::
# 178 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 179 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 180 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsFemale
# 181 "data/scripts/players_house.pory"
	waitmovement 0
# 182 "data/scripts/players_house.pory"
	return
# 183 "data/scripts/players_house.pory"

# 184 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerEnterRoomMale::
# 185 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomMale
# 186 "data/scripts/players_house.pory"
	waitmovement 0
# 187 "data/scripts/players_house.pory"
	return
# 188 "data/scripts/players_house.pory"

# 189 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerEnterRoomFemale::
# 190 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomFemale
# 191 "data/scripts/players_house.pory"
	waitmovement 0
# 192 "data/scripts/players_house.pory"
	return
# 193 "data/scripts/players_house.pory"

# 194 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerApproachTVForLatiMale::
# 195 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale
# 196 "data/scripts/players_house.pory"
	waitmovement 0
# 197 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFasterLeft
# 198 "data/scripts/players_house.pory"
	waitmovement 0
# 199 "data/scripts/players_house.pory"
	return
# 200 "data/scripts/players_house.pory"

# 201 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerApproachTVForLatiFemale::
# 202 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale
# 203 "data/scripts/players_house.pory"
	waitmovement 0
# 204 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFasterRight
# 205 "data/scripts/players_house.pory"
	waitmovement 0
# 206 "data/scripts/players_house.pory"
	return
# 207 "data/scripts/players_house.pory"

# 208 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerMale::
# 209 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerMale
# 210 "data/scripts/players_house.pory"
	waitmovement 0
# 211 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 212 "data/scripts/players_house.pory"
	waitmovement 0
# 213 "data/scripts/players_house.pory"
	return
# 214 "data/scripts/players_house.pory"

# 215 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerFemale::
# 216 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerFemale
# 217 "data/scripts/players_house.pory"
	waitmovement 0
# 218 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 219 "data/scripts/players_house.pory"
	waitmovement 0
# 220 "data/scripts/players_house.pory"
	return
# 221 "data/scripts/players_house.pory"

# 222 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastMale::
# 223 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale
# 224 "data/scripts/players_house.pory"
	waitmovement 0
# 225 "data/scripts/players_house.pory"
	return
# 226 "data/scripts/players_house.pory"

# 227 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastFemale::
# 228 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale
# 229 "data/scripts/players_house.pory"
	waitmovement 0
# 230 "data/scripts/players_house.pory"
	return
# 231 "data/scripts/players_house.pory"

# 232 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVMale::
# 233 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale
# 234 "data/scripts/players_house.pory"
	waitmovement 0
# 235 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 236 "data/scripts/players_house.pory"
	waitmovement 0
# 237 "data/scripts/players_house.pory"
	return
# 238 "data/scripts/players_house.pory"

# 239 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVFemale::
# 240 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale
# 241 "data/scripts/players_house.pory"
	waitmovement 0
# 242 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 243 "data/scripts/players_house.pory"
	waitmovement 0
# 244 "data/scripts/players_house.pory"
	return
# 245 "data/scripts/players_house.pory"

# 246 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadApproachPlayerMale:
# 247 "data/scripts/players_house.pory"
	walk_right
# 248 "data/scripts/players_house.pory"
	walk_right
# 249 "data/scripts/players_house.pory"
	step_end
# 250 "data/scripts/players_house.pory"

# 251 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadApproachPlayerFemale:
# 252 "data/scripts/players_house.pory"
	walk_left
# 253 "data/scripts/players_house.pory"
	walk_left
# 254 "data/scripts/players_house.pory"
	step_end
# 255 "data/scripts/players_house.pory"

# 256 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadFaceMomMale:
# 257 "data/scripts/players_house.pory"
	face_left
# 258 "data/scripts/players_house.pory"
	step_end
# 259 "data/scripts/players_house.pory"

# 260 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadFaceMomFemale:
# 261 "data/scripts/players_house.pory"
	face_right
# 262 "data/scripts/players_house.pory"
	step_end
# 263 "data/scripts/players_house.pory"

# 264 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadExitsMale:
# 265 "data/scripts/players_house.pory"
	walk_down
# 266 "data/scripts/players_house.pory"
	walk_right
# 267 "data/scripts/players_house.pory"
	walk_down
# 268 "data/scripts/players_house.pory"
	delay_8
# 269 "data/scripts/players_house.pory"
	step_end
# 270 "data/scripts/players_house.pory"

# 271 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadExitsFemale:
# 272 "data/scripts/players_house.pory"
	walk_down
# 273 "data/scripts/players_house.pory"
	walk_left
# 274 "data/scripts/players_house.pory"
	walk_down
# 275 "data/scripts/players_house.pory"
	delay_8
# 276 "data/scripts/players_house.pory"
	step_end
# 277 "data/scripts/players_house.pory"

# 278 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerEnterRoomMale:
# 279 "data/scripts/players_house.pory"
	delay_16
# 280 "data/scripts/players_house.pory"
	walk_down
# 281 "data/scripts/players_house.pory"
	walk_down
# 282 "data/scripts/players_house.pory"
	walk_down
# 283 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 284 "data/scripts/players_house.pory"
	step_end
# 285 "data/scripts/players_house.pory"

# 286 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit:
# 287 "data/scripts/players_house.pory"
	delay_8
# 288 "data/scripts/players_house.pory"
	delay_16
# 289 "data/scripts/players_house.pory"
	delay_16
# 290 "data/scripts/players_house.pory"
	walk_in_place_faster_down
# 291 "data/scripts/players_house.pory"
	step_end
# 292 "data/scripts/players_house.pory"

# 293 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerEnterRoomFemale:
# 294 "data/scripts/players_house.pory"
	delay_16
# 295 "data/scripts/players_house.pory"
	walk_down
# 296 "data/scripts/players_house.pory"
	walk_down
# 297 "data/scripts/players_house.pory"
	walk_down
# 298 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 299 "data/scripts/players_house.pory"
	step_end
# 300 "data/scripts/players_house.pory"

# 301 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale:
# 302 "data/scripts/players_house.pory"
	walk_up
# 303 "data/scripts/players_house.pory"
	walk_left
# 304 "data/scripts/players_house.pory"
	walk_left
# 305 "data/scripts/players_house.pory"
	walk_left
# 306 "data/scripts/players_house.pory"
	walk_left
# 307 "data/scripts/players_house.pory"
	walk_in_place_faster_up
# 308 "data/scripts/players_house.pory"
	step_end
# 309 "data/scripts/players_house.pory"

# 310 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale:
# 311 "data/scripts/players_house.pory"
	walk_up
# 312 "data/scripts/players_house.pory"
	walk_right
# 313 "data/scripts/players_house.pory"
	walk_right
# 314 "data/scripts/players_house.pory"
	walk_right
# 315 "data/scripts/players_house.pory"
	walk_right
# 316 "data/scripts/players_house.pory"
	walk_in_place_faster_up
# 317 "data/scripts/players_house.pory"
	step_end

Script_PlayersHouse_1F_Interact_Mom::
# 321 "data/scripts/players_house.pory"
	lock
# 322 "data/scripts/players_house.pory"
	faceplayer
# 323 "data/scripts/players_house.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Script_PlayersHouse_1F_Interact_Mom_2
# 335 "data/scripts/players_house.pory"
	goto_if_set FLAG_ENABLE_MOM_MATCH_CALL, Script_PlayersHouse_1F_Interact_Mom_12
Script_PlayersHouse_1F_Interact_Mom_10:
# 343 "data/scripts/players_house.pory"
	compare VAR_QUEST_INTRO_STATE, 4
	goto_if_gt Script_PlayersHouse_1F_Interact_Mom_9
Script_PlayersHouse_1F_Interact_Mom_8:
# 347 "data/scripts/players_house.pory"
	compare VAR_QUEST_INTRO_STATE, 4
	goto_if_le Script_PlayersHouse_1F_Interact_Mom_5
# 352 "data/scripts/players_house.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, Script_PlayersHouse_1F_Interact_Mom_6
Script_PlayersHouse_1F_Interact_Mom_1:
# 358 "data/scripts/players_house.pory"
	call Script_PlayersHouse_1F_Interact_Mom_Farewell
# 359 "data/scripts/players_house.pory"
	release
	end

Script_PlayersHouse_1F_Interact_Mom_2:
# 324 "data/scripts/players_house.pory"
	goto_if_unset FLAG_ENABLE_MOM_MATCH_CALL, Script_PlayersHouse_1F_Interact_Mom_16
	goto Script_PlayersHouse_1F_Interact_Mom_1

Script_PlayersHouse_1F_Interact_Mom_3:
# 336 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_SomethingFromMom, MSGBOX_NPC
# 337 "data/scripts/players_house.pory"
	giveitem ITEM_AMULET_COIN
# 338 "data/scripts/players_house.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_PlayersHouse_1F_Interact_Mom_18
# 341 "data/scripts/players_house.pory"
	setflag FLAG_RECEIVED_AMULET_COIN
	goto Script_PlayersHouse_1F_Interact_Mom_1

Script_PlayersHouse_1F_Interact_Mom_4:
# 344 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_DidYouMeetBirch, MSGBOX_NPC
# 345 "data/scripts/players_house.pory"
	release
	end

Script_PlayersHouse_1F_Interact_Mom_5:
# 348 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_GoOpenGift, MSGBOX_NPC
# 349 "data/scripts/players_house.pory"
	release
	end

Script_PlayersHouse_1F_Interact_Mom_6:
# 354 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_YouShouldRest, MSGBOX_NPC
# 355 "data/scripts/players_house.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 356 "data/scripts/players_house.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
	goto Script_PlayersHouse_1F_Interact_Mom_1

Script_PlayersHouse_1F_Interact_Mom_9:
# 343 "data/scripts/players_house.pory"
	compare VAR_QUEST_INTRO_STATE, 7
	goto_if_le Script_PlayersHouse_1F_Interact_Mom_4
	goto Script_PlayersHouse_1F_Interact_Mom_8

Script_PlayersHouse_1F_Interact_Mom_12:
# 335 "data/scripts/players_house.pory"
	goto_if_set FLAG_BADGE05_GET, Script_PlayersHouse_1F_Interact_Mom_3
	goto Script_PlayersHouse_1F_Interact_Mom_10

Script_PlayersHouse_1F_Interact_Mom_16:
# 325 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_PokeNav, MSGBOX_NPC
# 326 "data/scripts/players_house.pory"
	closemessage
# 327 "data/scripts/players_house.pory"
	delay 30
# 328 "data/scripts/players_house.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 329 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_PokeNav_Registered
# 330 "data/scripts/players_house.pory"
	waitfanfare
# 331 "data/scripts/players_house.pory"
	closemessage
# 332 "data/scripts/players_house.pory"
	delay 30
# 333 "data/scripts/players_house.pory"
	setflag FLAG_ENABLE_MOM_MATCH_CALL
	goto Script_PlayersHouse_1F_Interact_Mom_1

Script_PlayersHouse_1F_Interact_Mom_18:
# 339 "data/scripts/players_house.pory"
	call Common_EventScript_ShowBagIsFull
	goto Script_PlayersHouse_1F_Interact_Mom_1


Script_PlayersHouse_1F_Interact_Mom_Farewell:
# 393 "data/scripts/players_house.pory"
	random 3
# 394 "data/scripts/players_house.pory"
	switch VAR_RESULT
# 395 "data/scripts/players_house.pory"
	case 0, Script_PlayersHouse_1F_Interact_Mom_Farewell_2
# 398 "data/scripts/players_house.pory"
	case 1, Script_PlayersHouse_1F_Interact_Mom_Farewell_3
# 401 "data/scripts/players_house.pory"
	case 2, Script_PlayersHouse_1F_Interact_Mom_Farewell_4
	return

Script_PlayersHouse_1F_Interact_Mom_Farewell_2:
# 396 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_TakeCareHoney, MSGBOX_NPC
	return

Script_PlayersHouse_1F_Interact_Mom_Farewell_3:
# 399 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_SeeYouHoney, MSGBOX_NPC
	return

Script_PlayersHouse_1F_Interact_Mom_Farewell_4:
# 402 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_DontPushYourselfTooHard, MSGBOX_NPC
	return


Script_PlayersHouse_1F_PetalburgGymReport::
# 422 "data/scripts/players_house.pory"
	compare VAR_0x8004, MALE
	goto_if_eq Script_PlayersHouse_1F_PetalburgGymReport_2
# 425 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterLeft
Script_PlayersHouse_1F_PetalburgGymReport_1:
# 427 "data/scripts/players_house.pory"
	waitmovement 0
# 428 "data/scripts/players_house.pory"
	call Script_PlayersHouse_1F_Mom_NoticesGymBroadcast
# 429 "data/scripts/players_house.pory"
	compare VAR_0x8004, MALE
	goto_if_eq Script_PlayersHouse_1F_PetalburgGymReport_6
# 435 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Script_PlayersHouse_1F_PetalburgGymReport_Movement_1
Script_PlayersHouse_1F_PetalburgGymReport_5:
# 440 "data/scripts/players_house.pory"
	waitmovement 0
# 441 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 442 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_MaybeDadWillBeOn
# 443 "data/scripts/players_house.pory"
	closemessage
# 444 "data/scripts/players_house.pory"
	compare VAR_0x8004, MALE
	goto_if_eq Script_PlayersHouse_1F_PetalburgGymReport_10
# 450 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Script_PlayersHouse_1F_PetalburgGymReport_Movement_3
Script_PlayersHouse_1F_PetalburgGymReport_9:
# 455 "data/scripts/players_house.pory"
	waitmovement 0
# 456 "data/scripts/players_house.pory"
	compare VAR_0x8004, MALE
	goto_if_eq Script_PlayersHouse_1F_PetalburgGymReport_14
# 462 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Script_PlayersHouse_1F_PetalburgGymReport_Movement_5
Script_PlayersHouse_1F_PetalburgGymReport_13:
# 467 "data/scripts/players_house.pory"
	call Script_PlayersHouse_1F_TV_GymBroadcast
# 468 "data/scripts/players_house.pory"
	compare VAR_0x8004, MALE
	goto_if_eq Script_PlayersHouse_1F_PetalburgGymReport_18
# 471 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
Script_PlayersHouse_1F_PetalburgGymReport_17:
# 473 "data/scripts/players_house.pory"
	waitmovement 0
# 474 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_ItsOver
# 475 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_GoIntroduceProfBirch
# 476 "data/scripts/players_house.pory"
	closemessage
# 477 "data/scripts/players_house.pory"
	setvar VAR_TEMP_1, 1
# 478 "data/scripts/players_house.pory"
	compare VAR_0x8004, MALE
	goto_if_eq Script_PlayersHouse_1F_PetalburgGymReport_22
# 485 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Script_PlayersHouse_1F_PetalburgGymReport_Movement_7
Script_PlayersHouse_1F_PetalburgGymReport_21:
# 491 "data/scripts/players_house.pory"
	waitmovement 0
# 492 "data/scripts/players_house.pory"
	setvar VAR_QUEST_INTRO_STATE, 5
# 493 "data/scripts/players_house.pory"
	releaseall
	return

Script_PlayersHouse_1F_PetalburgGymReport_2:
# 423 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterRight
	goto Script_PlayersHouse_1F_PetalburgGymReport_1

Script_PlayersHouse_1F_PetalburgGymReport_6:
# 430 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Script_PlayersHouse_1F_PetalburgGymReport_Movement_0
	goto Script_PlayersHouse_1F_PetalburgGymReport_5

Script_PlayersHouse_1F_PetalburgGymReport_10:
# 445 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Script_PlayersHouse_1F_PetalburgGymReport_Movement_2
	goto Script_PlayersHouse_1F_PetalburgGymReport_9

Script_PlayersHouse_1F_PetalburgGymReport_14:
# 457 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Script_PlayersHouse_1F_PetalburgGymReport_Movement_4
	goto Script_PlayersHouse_1F_PetalburgGymReport_13

Script_PlayersHouse_1F_PetalburgGymReport_18:
# 469 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	goto Script_PlayersHouse_1F_PetalburgGymReport_17

Script_PlayersHouse_1F_PetalburgGymReport_22:
# 479 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Script_PlayersHouse_1F_PetalburgGymReport_Movement_6
	goto Script_PlayersHouse_1F_PetalburgGymReport_21


Script_PlayersHouse_1F_Mom_NoticesGymBroadcast::
# 497 "data/scripts/players_house.pory"
	playse SE_PIN
# 498 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_ExclamationMark
# 499 "data/scripts/players_house.pory"
	waitmovement 0
# 500 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_Delay48
# 501 "data/scripts/players_house.pory"
	waitmovement 0
# 502 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_OhComeQuickly
# 503 "data/scripts/players_house.pory"
	closemessage
	return


Script_PlayersHouse_1F_TV_GymBroadcast:
# 524 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 525 "data/scripts/players_house.pory"
	waitmovement 0
# 526 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Interviewer_PetalburgGym
# 527 "data/scripts/players_house.pory"
	fadedefaultbgm
# 528 "data/scripts/players_house.pory"
	special TurnOffTVScreen
# 529 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_HOME
# 530 "data/scripts/players_house.pory"
	delay 35
	return


Script_PlayersHouse_1F_Intro_EnterHouse::
# 550 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_ItsNiceInHere
# 551 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_FacePlayer
# 552 "data/scripts/players_house.pory"
	waitmovement
# 553 "data/scripts/players_house.pory"
	compare VAR_0x8005, MALE
	goto_if_eq Script_PlayersHouse_1F_Intro_EnterHouse_2
# 556 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
Script_PlayersHouse_1F_Intro_EnterHouse_1:
# 558 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_MoversAndGift
# 559 "data/scripts/players_house.pory"
	closemessage
# 560 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Script_PlayersHouse_1F_Intro_EnterHouse_Movement_0
# 561 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 562 "data/scripts/players_house.pory"
	waitmovement 0
# 563 "data/scripts/players_house.pory"
	setvar VAR_QUEST_INTRO_STATE, 2
# 564 "data/scripts/players_house.pory"
	releaseall
	end

Script_PlayersHouse_1F_Intro_EnterHouse_2:
# 554 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	goto Script_PlayersHouse_1F_Intro_EnterHouse_1


Script_PlayersHouse_1F_SetMovingBoxes:
# 587 "data/scripts/players_house.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 588 "data/scripts/players_house.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
	return


Script_PlayersHouse_1F_Interact_Vigoroth_1::
# 597 "data/scripts/players_house.pory"
	lock
# 598 "data/scripts/players_house.pory"
	faceplayer
# 599 "data/scripts/players_house.pory"
	waitse
# 600 "data/scripts/players_house.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 601 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Vigoroth_Fugi
# 602 "data/scripts/players_house.pory"
	waitmoncry
# 603 "data/scripts/players_house.pory"
	release
	end


Script_PlayersHouse_1F_Interact_Vigoroth_2::
# 612 "data/scripts/players_house.pory"
	lock
# 613 "data/scripts/players_house.pory"
	faceplayer
# 614 "data/scripts/players_house.pory"
	waitse
# 615 "data/scripts/players_house.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 616 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Vigoroth_Huggoh
# 617 "data/scripts/players_house.pory"
	waitmoncry
# 618 "data/scripts/players_house.pory"
	release
	end


Script_PlayersHouse_1F_Interact_RunningShoesManual::
# 628 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_RunningShoesManual
# 629 "data/scripts/players_house.pory"
	closemessage
	end


Script_PlayersHouse_2F_BlockStairsUntilGiftIsAccepted::
# 688 "data/scripts/players_house.pory"
	setvar VAR_QUEST_INTRO_STATE, 3
	return


Script_PlayersHouse_2F_Interact_MomsGift::
# 694 "data/scripts/players_house.pory"
	lockall
# 695 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_MomsGift_Note
# 696 "data/scripts/players_house.pory"
	giveitem ITEM_OVAL_CHARM, 1
# 697 "data/scripts/players_house.pory"
	giveitem ITEM_CATCHING_CHARM, 1
# 698 "data/scripts/players_house.pory"
	giveitem ITEM_SHINY_CHARM, 1
# 699 "data/scripts/players_house.pory"
	giveitem ITEM_EXP_CHARM, 1
# 700 "data/scripts/players_house.pory"
	giveitem ITEM_GLIMMERING_CHARM, 1
# 701 "data/scripts/players_house.pory"
	waitmessage
# 702 "data/scripts/players_house.pory"
	closemessage
# 703 "data/scripts/players_house.pory"
	setvar VAR_QUEST_INTRO_STATE, 4
# 704 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_PLAYERS_HOUSE_MOMS_GIFT
# 705 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_PLAYERS_HOUSE_VIGOROTHS
# 706 "data/scripts/players_house.pory"
	removeobject VAR_LAST_TALKED
# 707 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer
# 708 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_Mom_HowDoYouLikeYourRoom
# 709 "data/scripts/players_house.pory"
	waitmessage
# 710 "data/scripts/players_house.pory"
	closemessage
# 711 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_Leaves
# 712 "data/scripts/players_house.pory"
	releaseall
	end


Script_PlayersHouse_2F_Mom_ApproachPlayer:
# 724 "data/scripts/players_house.pory"
	addobject LOCALID_PLAYERS_HOUSE_2F_MOM
	checkplayergender
# 0 "data/scripts/players_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_PlayersHouse_2F_Mom_ApproachPlayer_2
# 728 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer_Female
Script_PlayersHouse_2F_Mom_ApproachPlayer_1:
	return

Script_PlayersHouse_2F_Mom_ApproachPlayer_2:
# 726 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer_Male
	goto Script_PlayersHouse_2F_Mom_ApproachPlayer_1


Script_PlayersHouse_2F_Mom_ApproachPlayer_North:
	checkplayergender
# 0 "data/scripts/players_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_PlayersHouse_2F_Mom_ApproachPlayer_North_1
# 741 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_ApproachPlayer_North_Movement_1
# 745 "data/scripts/players_house.pory"
	waitmovement 0
	return

Script_PlayersHouse_2F_Mom_ApproachPlayer_North_1:
# 735 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_ApproachPlayer_North_Movement_0
# 739 "data/scripts/players_house.pory"
	waitmovement 0
	return


Script_PlayersHouse_2F_Mom_ApproachPlayer_West:
# 750 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_ApproachPlayer_West_Movement_0
# 754 "data/scripts/players_house.pory"
	waitmovement 0
	return


Script_PlayersHouse_2F_Mom_ApproachPlayer_South:
# 759 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_ApproachPlayer_South_Movement_0
# 763 "data/scripts/players_house.pory"
	waitmovement 0
	return


Script_PlayersHouse_2F_Mom_ApproachPlayer_Male:
# 767 "data/scripts/players_house.pory"
	switch VAR_FACING
# 768 "data/scripts/players_house.pory"
	case DIR_NORTH, Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_3
# 770 "data/scripts/players_house.pory"
	case DIR_SOUTH, Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_4
# 772 "data/scripts/players_house.pory"
	case DIR_EAST, Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_5
# 774 "data/scripts/players_house.pory"
	case DIR_WEST, Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_6
Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_1:
	return

Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_3:
# 769 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer_South
	goto Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_1

Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_4:
# 771 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer_North
	goto Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_1

Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_5:
# 773 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_East
	goto Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_1

Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_6:
# 775 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer_West
	goto Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_1


Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_East:
# 781 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_East_Movement_0
# 786 "data/scripts/players_house.pory"
	waitmovement 0
	return


Script_PlayersHouse_2F_Mom_ApproachPlayer_Female:
# 790 "data/scripts/players_house.pory"
	switch VAR_FACING
# 791 "data/scripts/players_house.pory"
	case DIR_NORTH, Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_3
# 794 "data/scripts/players_house.pory"
	case DIR_SOUTH, Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_4
# 797 "data/scripts/players_house.pory"
	case DIR_EAST, Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_5
# 800 "data/scripts/players_house.pory"
	case DIR_WEST, Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_6
Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_1:
	return

Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_3:
# 792 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer_South
	goto Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_1

Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_4:
# 795 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer_North
	goto Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_1

Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_5:
# 798 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer_West
	goto Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_1

Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_6:
# 801 "data/scripts/players_house.pory"
	call Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_East
	goto Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_1


Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_East:
# 808 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_East_Movement_0
# 813 "data/scripts/players_house.pory"
	waitmovement 0
	return


Script_PlayersHouse_2F_Mom_Leaves:
# 819 "data/scripts/players_house.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq Script_PlayersHouse_2F_Mom_Leaves_2
# 825 "data/scripts/players_house.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq Script_PlayersHouse_2F_Mom_Leaves_3
# 831 "data/scripts/players_house.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq Script_PlayersHouse_2F_Mom_Leaves_4
# 846 "data/scripts/players_house.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq Script_PlayersHouse_2F_Mom_Leaves_5
Script_PlayersHouse_2F_Mom_Leaves_1:
# 862 "data/scripts/players_house.pory"
	removeobject LOCALID_PLAYERS_HOUSE_2F_MOM
	return

Script_PlayersHouse_2F_Mom_Leaves_2:
# 820 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_Leaves_Movement_0
# 824 "data/scripts/players_house.pory"
	waitmovement 0
	goto Script_PlayersHouse_2F_Mom_Leaves_1

Script_PlayersHouse_2F_Mom_Leaves_3:
# 826 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_Leaves_Movement_1
# 830 "data/scripts/players_house.pory"
	waitmovement 0
	goto Script_PlayersHouse_2F_Mom_Leaves_1

Script_PlayersHouse_2F_Mom_Leaves_4:
	checkplayergender
# 0 "data/scripts/players_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_PlayersHouse_2F_Mom_Leaves_10
# 839 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_Leaves_Movement_2
# 844 "data/scripts/players_house.pory"
	waitmovement 0
	goto Script_PlayersHouse_2F_Mom_Leaves_1

Script_PlayersHouse_2F_Mom_Leaves_5:
	checkplayergender
# 0 "data/scripts/players_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_PlayersHouse_2F_Mom_Leaves_13
# 855 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_Leaves_Movement_0
# 859 "data/scripts/players_house.pory"
	waitmovement 0
	goto Script_PlayersHouse_2F_Mom_Leaves_1

Script_PlayersHouse_2F_Mom_Leaves_10:
# 833 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_Leaves_Movement_0
# 837 "data/scripts/players_house.pory"
	waitmovement 0
	goto Script_PlayersHouse_2F_Mom_Leaves_1

Script_PlayersHouse_2F_Mom_Leaves_13:
# 848 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_MOM, Script_PlayersHouse_2F_Mom_Leaves_Movement_3
# 853 "data/scripts/players_house.pory"
	waitmovement 0
	goto Script_PlayersHouse_2F_Mom_Leaves_1


Script_PlayersHouse_2F_Interact_Notebook::
# 880 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_Notebook, MSGBOX_SIGN
	end


Script_PlayersHouse_2F_Interact_GameCube::
# 900 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_EnterCode, MSGBOX_YESNO
# 901 "data/scripts/players_house.pory"
	compare VAR_RESULT, NO
	goto_if_eq Script_PlayersHouse_2F_Interact_GameCube_2
# 905 "data/scripts/players_house.pory"
	special EnterCode
# 906 "data/scripts/players_house.pory"
	waitstate
# 907 "data/scripts/players_house.pory"
	special GetCodeFeedback
# 908 "data/scripts/players_house.pory"
	compare VAR_RESULT, 0
	goto_if_le Script_PlayersHouse_2F_Interact_GameCube_5
# 908 "data/scripts/players_house.pory"
	compare VAR_RESULT, 7
	goto_if_gt Script_PlayersHouse_2F_Interact_GameCube_5
# 914 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_Success
# 915 "data/scripts/players_house.pory"
	compare VAR_RESULT, 1
	goto_if_eq Script_PlayersHouse_2F_Interact_GameCube_10
# 921 "data/scripts/players_house.pory"
	compare VAR_RESULT, 2
	goto_if_eq Script_PlayersHouse_2F_Interact_GameCube_11
# 923 "data/scripts/players_house.pory"
	compare VAR_RESULT, 3
	goto_if_eq Script_PlayersHouse_2F_Interact_GameCube_12
# 929 "data/scripts/players_house.pory"
	compare VAR_RESULT, 4
	goto_if_eq Script_PlayersHouse_2F_Interact_GameCube_13
# 935 "data/scripts/players_house.pory"
	compare VAR_RESULT, 5
	goto_if_eq Script_PlayersHouse_2F_Interact_GameCube_14
# 937 "data/scripts/players_house.pory"
	compare VAR_RESULT, 6
	goto_if_eq Script_PlayersHouse_2F_Interact_GameCube_15
# 943 "data/scripts/players_house.pory"
	compare VAR_RESULT, 7
	goto_if_eq Script_PlayersHouse_2F_Interact_GameCube_16
Script_PlayersHouse_2F_Interact_GameCube_9:
# 950 "data/scripts/players_house.pory"
	waitmessage
# 951 "data/scripts/players_house.pory"
	releaseall
	end

Script_PlayersHouse_2F_Interact_GameCube_2:
# 902 "data/scripts/players_house.pory"
	releaseall
	end

Script_PlayersHouse_2F_Interact_GameCube_5:
# 909 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_Fail
# 910 "data/scripts/players_house.pory"
	waitmessage
# 911 "data/scripts/players_house.pory"
	releaseall
	end

Script_PlayersHouse_2F_Interact_GameCube_10:
# 916 "data/scripts/players_house.pory"
	goto_if_set FLAG_DEXALL, Script_PlayersHouse_2F_Interact_GameCube_24
# 919 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_DexAll_Off
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_11:
# 922 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_CaughtAll_On
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_12:
# 924 "data/scripts/players_house.pory"
	goto_if_set FLAG_EZCATCH, Script_PlayersHouse_2F_Interact_GameCube_27
# 927 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_EzCatch_Off
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_13:
# 930 "data/scripts/players_house.pory"
	goto_if_set FLAG_SHINY_STARTERS, Script_PlayersHouse_2F_Interact_GameCube_30
# 933 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_ShinyStarter_Off
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_14:
# 936 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_MaxMoney
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_15:
# 938 "data/scripts/players_house.pory"
	goto_if_set FLAG_SHINY_LEGENDS, Script_PlayersHouse_2F_Interact_GameCube_33
# 941 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_ShinyLegends_Off
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_16:
# 944 "data/scripts/players_house.pory"
	goto_if_set FLAG_MONOTYPE_STARTERS, Script_PlayersHouse_2F_Interact_GameCube_36
# 947 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_MonoStarter_Off
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_24:
# 917 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_DexAll_On
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_27:
# 925 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_EzCatch_On
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_30:
# 931 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_ShinyStarter_On
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_33:
# 939 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_ShinyLegends_On
	goto Script_PlayersHouse_2F_Interact_GameCube_9

Script_PlayersHouse_2F_Interact_GameCube_36:
# 945 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_2F_GameCube_Code_MonoStarter_On
	goto Script_PlayersHouse_2F_Interact_GameCube_9


LittlerootTown_PlayersHouse_2F_EventScript_CheckPlayersPC::
	checkplayergender
# 0 "data/scripts/players_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_PlayersHouse_2F_EventScript_CheckPlayersPC_2
# 1025 "data/scripts/players_house.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
LittlerootTown_PlayersHouse_2F_EventScript_CheckPlayersPC_1:
# 1027 "data/scripts/players_house.pory"
	playse SE_PC_ON
# 1028 "data/scripts/players_house.pory"
	msgbox gText_PlayerHouseBootPC
# 1029 "data/scripts/players_house.pory"
	special BedroomPC
	return

LittlerootTown_PlayersHouse_2F_EventScript_CheckPlayersPC_2:
# 1023 "data/scripts/players_house.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
	goto LittlerootTown_PlayersHouse_2F_EventScript_CheckPlayersPC_1


PlayersHouse_1F_EventScript_MomGoSeeRoom::
# 1034 "data/scripts/players_house.pory"
	msgbox Text_PlayersHouse_1F_Mom_ArentYouInterestedInRoom
# 1035 "data/scripts/players_house.pory"
	closemessage
# 1036 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 1037 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Script_PlayersHouse_1F_Intro_EnterHouse_Movement_0
# 1038 "data/scripts/players_house.pory"
	waitmovement 0
# 1039 "data/scripts/players_house.pory"
	releaseall
	end


# 430 "data/scripts/players_house.pory"
Script_PlayersHouse_1F_PetalburgGymReport_Movement_0:
# 431 "data/scripts/players_house.pory"
	walk_down
# 431 "data/scripts/players_house.pory"
	walk_down
# 432 "data/scripts/players_house.pory"
	walk_left
# 432 "data/scripts/players_house.pory"
	walk_left
# 432 "data/scripts/players_house.pory"
	walk_left
	step_end

# 435 "data/scripts/players_house.pory"
Script_PlayersHouse_1F_PetalburgGymReport_Movement_1:
# 436 "data/scripts/players_house.pory"
	walk_down
# 436 "data/scripts/players_house.pory"
	walk_down
# 437 "data/scripts/players_house.pory"
	walk_right
# 437 "data/scripts/players_house.pory"
	walk_right
# 437 "data/scripts/players_house.pory"
	walk_right
	step_end

# 445 "data/scripts/players_house.pory"
Script_PlayersHouse_1F_PetalburgGymReport_Movement_2:
# 446 "data/scripts/players_house.pory"
	walk_left
# 447 "data/scripts/players_house.pory"
	walk_in_place_faster_right
	step_end

# 450 "data/scripts/players_house.pory"
Script_PlayersHouse_1F_PetalburgGymReport_Movement_3:
# 451 "data/scripts/players_house.pory"
	walk_right
# 452 "data/scripts/players_house.pory"
	walk_in_place_faster_left
	step_end

# 457 "data/scripts/players_house.pory"
Script_PlayersHouse_1F_PetalburgGymReport_Movement_4:
# 458 "data/scripts/players_house.pory"
	walk_left
# 459 "data/scripts/players_house.pory"
	face_up
	step_end

# 462 "data/scripts/players_house.pory"
Script_PlayersHouse_1F_PetalburgGymReport_Movement_5:
# 463 "data/scripts/players_house.pory"
	walk_right
# 464 "data/scripts/players_house.pory"
	face_up
	step_end

# 479 "data/scripts/players_house.pory"
Script_PlayersHouse_1F_PetalburgGymReport_Movement_6:
# 480 "data/scripts/players_house.pory"
	walk_left
# 481 "data/scripts/players_house.pory"
	walk_down
# 482 "data/scripts/players_house.pory"
	walk_in_place_faster_right
	step_end

# 485 "data/scripts/players_house.pory"
Script_PlayersHouse_1F_PetalburgGymReport_Movement_7:
# 486 "data/scripts/players_house.pory"
	walk_right
# 487 "data/scripts/players_house.pory"
	walk_down
# 488 "data/scripts/players_house.pory"
	walk_in_place_faster_left
	step_end

# 560 "data/scripts/players_house.pory"
Script_PlayersHouse_1F_Intro_EnterHouse_Movement_0:
# 560 "data/scripts/players_house.pory"
	walk_up
	step_end

# 735 "data/scripts/players_house.pory"
Script_PlayersHouse_2F_Mom_ApproachPlayer_North_Movement_0:
# 736 "data/scripts/players_house.pory"
	walk_down
# 736 "data/scripts/players_house.pory"
	walk_down
# 736 "data/scripts/players_house.pory"
	walk_down
# 737 "data/scripts/players_house.pory"
	face_left
	step_end

# 741 "data/scripts/players_house.pory"
Script_PlayersHouse_2F_Mom_ApproachPlayer_North_Movement_1:
# 742 "data/scripts/players_house.pory"
	walk_down
# 742 "data/scripts/players_house.pory"
	walk_down
# 742 "data/scripts/players_house.pory"
	walk_down
# 743 "data/scripts/players_house.pory"
	face_right
	step_end

# 750 "data/scripts/players_house.pory"
Script_PlayersHouse_2F_Mom_ApproachPlayer_West_Movement_0:
# 751 "data/scripts/players_house.pory"
	walk_down
# 751 "data/scripts/players_house.pory"
	walk_down
# 751 "data/scripts/players_house.pory"
	walk_down
# 752 "data/scripts/players_house.pory"
	face_down
	step_end

# 759 "data/scripts/players_house.pory"
Script_PlayersHouse_2F_Mom_ApproachPlayer_South_Movement_0:
# 760 "data/scripts/players_house.pory"
	walk_down
# 760 "data/scripts/players_house.pory"
	walk_down
# 760 "data/scripts/players_house.pory"
	walk_down
# 760 "data/scripts/players_house.pory"
	walk_down
# 760 "data/scripts/players_house.pory"
	walk_down
# 761 "data/scripts/players_house.pory"
	face_player
	step_end

# 781 "data/scripts/players_house.pory"
Script_PlayersHouse_2F_Mom_ApproachPlayer_Male_East_Movement_0:
# 782 "data/scripts/players_house.pory"
	walk_down
# 782 "data/scripts/players_house.pory"
	walk_down
# 782 "data/scripts/players_house.pory"
	walk_down
# 783 "data/scripts/players_house.pory"
	walk_left
# 783 "data/scripts/players_house.pory"
	walk_left
# 784 "data/scripts/players_house.pory"
	face_player
	step_end

# 808 "data/scripts/players_house.pory"
Script_PlayersHouse_2F_Mom_ApproachPlayer_Female_East_Movement_0:
# 809 "data/scripts/players_house.pory"
	walk_down
# 809 "data/scripts/players_house.pory"
	walk_down
# 809 "data/scripts/players_house.pory"
	walk_down
# 810 "data/scripts/players_house.pory"
	walk_right
# 810 "data/scripts/players_house.pory"
	walk_right
# 811 "data/scripts/players_house.pory"
	face_player
	step_end

# 820 "data/scripts/players_house.pory"
Script_PlayersHouse_2F_Mom_Leaves_Movement_0:
# 821 "data/scripts/players_house.pory"
	walk_up
# 821 "data/scripts/players_house.pory"
	walk_up
# 821 "data/scripts/players_house.pory"
	walk_up
# 822 "data/scripts/players_house.pory"
	set_invisible
	step_end

# 826 "data/scripts/players_house.pory"
Script_PlayersHouse_2F_Mom_Leaves_Movement_1:
# 827 "data/scripts/players_house.pory"
	walk_up
# 827 "data/scripts/players_house.pory"
	walk_up
# 827 "data/scripts/players_house.pory"
	walk_up
# 827 "data/scripts/players_house.pory"
	walk_up
# 827 "data/scripts/players_house.pory"
	walk_up
# 828 "data/scripts/players_house.pory"
	set_invisible
	step_end

# 839 "data/scripts/players_house.pory"
Script_PlayersHouse_2F_Mom_Leaves_Movement_2:
# 840 "data/scripts/players_house.pory"
	walk_left
# 840 "data/scripts/players_house.pory"
	walk_left
# 841 "data/scripts/players_house.pory"
	walk_up
# 841 "data/scripts/players_house.pory"
	walk_up
# 841 "data/scripts/players_house.pory"
	walk_up
# 842 "data/scripts/players_house.pory"
	set_invisible
	step_end

# 848 "data/scripts/players_house.pory"
Script_PlayersHouse_2F_Mom_Leaves_Movement_3:
# 849 "data/scripts/players_house.pory"
	walk_right
# 849 "data/scripts/players_house.pory"
	walk_right
# 850 "data/scripts/players_house.pory"
	walk_up
# 850 "data/scripts/players_house.pory"
	walk_up
# 850 "data/scripts/players_house.pory"
	walk_up
# 851 "data/scripts/players_house.pory"
	set_invisible
	step_end

Text_PlayersHouse_1F_Mom_DidYouMeetBirch:
# 363 "data/scripts/players_house.pory"
	.string "Mom: Did you introduce yourself to\n"
	.string "Prof. Birch?$"

Text_PlayersHouse_1F_Mom_YouShouldRest:
# 368 "data/scripts/players_house.pory"
	.string "Mom: How are you doing, {PLAYER}?\n"
	.string "You look a little tired.\p"
	.string "I thin you should rest a bit.$"

Text_PlayersHouse_1F_Mom_SomethingFromMom:
# 374 "data/scripts/players_house.pory"
	.string "Mom: Oh? Did Dad give you that Badge?\p"
	.string "Then here's something from your Mom!$"

Text_PlayersHouse_1F_Mom_PokeNav:
# 379 "data/scripts/players_house.pory"
	.string "Mom: What is that, honey? A PokéNav?\n"
	.string "Someone from Devon gave it to you?\p"
	.string "Well, honey, how about registering\n"
	.string "your mom?\p"
	.string "… … …$"

Text_PlayersHouse_1F_Mom_PokeNav_Registered:
# 387 "data/scripts/players_house.pory"
	.string "Registered Mom\n"
	.string "in the PokéNav.$"

Text_PlayersHouse_1F_Mom_TakeCareHoney:
# 407 "data/scripts/players_house.pory"
	.string "Mom: Take care, honey!$"

Text_PlayersHouse_1F_Mom_SeeYouHoney:
# 411 "data/scripts/players_house.pory"
	.string "Mom: See you, honey!$"

Text_PlayersHouse_1F_Mom_DontPushYourselfTooHard::
# 415 "data/scripts/players_house.pory"
	.string "Mom: Don't push yourself too hard, dear.\n"
	.string "You can always come home.\p"
	.string "Go for it, honey!$"

Text_PlayersHouse_1F_Mom_OhComeQuickly:
# 507 "data/scripts/players_house.pory"
	.string "Mom: Oh! {PLAYER}, {PLAYER}!\n"
	.string "Quick! Come quickly!$"

Text_PlayersHouse_1F_Mom_MaybeDadWillBeOn:
# 512 "data/scripts/players_house.pory"
	.string "Mom: Look! It's Petalburg Gym!\n"
	.string "Maybe Dad will be on!$"

Text_PlayersHouse_1F_Mom_ItsOver:
# 517 "data/scripts/players_house.pory"
	.string "Mom: Oh… It's over.\p"
	.string "I think Dad was on, but we missed him.\n"
	.string "Too bad.$"

Text_PlayersHouse_1F_Interviewer_PetalburgGym:
# 534 "data/scripts/players_house.pory"
	.string "Interviewer: …We brought you this\n"
	.string "report from in front of Petalburg Gym.$"

Text_PlayersHouse_1F_Mom_GoIntroduceProfBirch:
# 539 "data/scripts/players_house.pory"
	.string "Oh, yes.\n"
	.string "One of your Dad's and I's friends\l"
	.string "lives and works in Littleroot Town.\p"
	.string "Prof. Birch is his name.\n"
	.string "He and his family lives next door.\p"
	.string "You should vist him in his lab\n"
	.string "for the next part of your gift!$"

Text_PlayersHouse_1F_Mom_ItsNiceInHere:
# 568 "data/scripts/players_house.pory"
	.string "Mom: See, {PLAYER}?\n"
	.string "Isn't it nice in here, too?$"

Text_PlayersHouse_1F_Mom_MoversAndGift:
# 573 "data/scripts/players_house.pory"
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
# 592 "data/scripts/players_house.pory"
	.string "Mom: Go open my gift upstairs, honey.$"

Text_PlayersHouse_1F_Vigoroth_Fugi::
# 607 "data/scripts/players_house.pory"
	.string "Fugiiiih!$"

Text_PlayersHouse_1F_Vigoroth_Huggoh::
# 622 "data/scripts/players_house.pory"
	.string "Huggoh, uggo uggo…$"

Text_PlayersHouse_1F_RunningShoesManual::
# 633 "data/scripts/players_house.pory"
	.string "It's the instruction booklet for the\n"
	.string "Running Shoes.\p"
	.string "Press the B Button to run while\n"
	.string "wearing your Running Shoes.\p"
	.string "“Lace up your Running Shoes and hit\n"
	.string "the road running!”$"

Text_PlayersHouse_1F_Dad_TicketFromBriney::
# 642 "data/scripts/players_house.pory"
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
# 653 "data/scripts/players_house.pory"
	.string "Dad: Hm, a Ticket for a ferry?"
	.string "If I recall, there are ferry ports in\n"
	.string "Slateport and Lilycove.$"

Text_PlayersHouse_1F_Dad_BetterGetBackToGym::
# 659 "data/scripts/players_house.pory"
	.string "I'd better get back to Petalburg Gym.\p"
	.string "Mom, thanks for looking after the house\n"
	.string "while I'm away.$"

Text_PlayersHouse_1F_Mom_DadShouldStayLonger::
# 665 "data/scripts/players_house.pory"
	.string "Mom: That Dad of yours…\p"
	.string "He comes home for the first time in a\n"
	.string "while, but all he talks about is Pokémon.\p"
	.string "He should relax and stay a little longer.$"

Text_PlayersHouse_1F_Mom_BreakingNews::
# 672 "data/scripts/players_house.pory"
	.string "Mom: Is that a breaking news story?$"

Text_PlayersHouse_1F_Mom_WhatColor::
# 676 "data/scripts/players_house.pory"
	.string "Mom: {PLAYER}, did you catch that?\p"
	.string "What color did the announcer say\n"
	.string "that Pokémon was?$"

Text_PlayersHouse_1F_Mom_StillUnknownPokemon::
# 682 "data/scripts/players_house.pory"
	.string "Mom: Well, isn't that something!\n"
	.string "There are still unknown Pokémon.$"

Text_PlayersHouse_2F_MomsGift_Note::
# 716 "data/scripts/players_house.pory"
	.string "“I know moving to Hoenn wasn't\n"
	.string "really what you wanted. But hopefully\l"
	.string "these will make your time in Hoenn,\l"
	.string "that much more exciting!” - Mom$"

Text_PlayersHouse_2F_Mom_HowDoYouLikeYourRoom:
# 865 "data/scripts/players_house.pory"
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
# 884 "data/scripts/players_house.pory"
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
# 955 "data/scripts/players_house.pory"
	.string "It's a Nintendo GameCube.\p"
	.string "Enter a cheat code?$"

Text_PlayersHouse_2F_GameCube_Code_Fail:
# 960 "data/scripts/players_house.pory"
	.string "Cheat code failed.$"

Text_PlayersHouse_2F_GameCube_Code_Success:
# 964 "data/scripts/players_house.pory"
	.string "Cheat code succeeded.$"

Text_PlayersHouse_2F_GameCube_Code_DexAll_On:
# 968 "data/scripts/players_house.pory"
	.string "DexAll cheat enabled.$"

Text_PlayersHouse_2F_GameCube_Code_DexAll_Off:
# 972 "data/scripts/players_house.pory"
	.string "DexAll cheat disabled.$"

Text_PlayersHouse_2F_GameCube_Code_CaughtAll_On:
# 976 "data/scripts/players_house.pory"
	.string "CaughtAll cheat enabled.$"

Text_PlayersHouse_2F_GameCube_Code_MaxMoney:
# 980 "data/scripts/players_house.pory"
	.string "Money set to max amount.$"

Text_PlayersHouse_2F_GameCube_Code_EzCatch_On:
# 984 "data/scripts/players_house.pory"
	.string "EZCatch cheat enabled.$"

Text_PlayersHouse_2F_GameCube_Code_EzCatch_Off:
# 988 "data/scripts/players_house.pory"
	.string "EZCatch cheat disabled.$"

Text_PlayersHouse_2F_GameCube_Code_ShinyStarter_On:
# 992 "data/scripts/players_house.pory"
	.string "ShinyStarters cheat enabled.$"

Text_PlayersHouse_2F_GameCube_Code_ShinyStarter_Off:
# 996 "data/scripts/players_house.pory"
	.string "ShinyStarters cheat disabled.$"

Text_PlayersHouse_2F_GameCube_Code_ShinyLegends_On:
# 1000 "data/scripts/players_house.pory"
	.string "ShinyLegends cheat enabled.$"

Text_PlayersHouse_2F_GameCube_Code_ShinyLegends_Off:
# 1004 "data/scripts/players_house.pory"
	.string "ShinyLegends cheat disabled.$"

Text_PlayersHouse_2F_GameCube_Code_MonoStarter_On:
# 1008 "data/scripts/players_house.pory"
	.string "Monotype Starters cheat enabled.$"

Text_PlayersHouse_2F_GameCube_Code_MonoStarter_Off:
# 1012 "data/scripts/players_house.pory"
	.string "Monotype Starters cheat disabled.$"

Text_Common_LookCloserAtMap:
# 1016 "data/scripts/players_house.pory"
	.string "{PLAYER} took a closer look at the\n"
	.string "{REGION} region map.$"

Text_PlayersHouse_1F_Mom_ArentYouInterestedInRoom::
# 1043 "data/scripts/players_house.pory"
	.string "Mom: Well, {PLAYER}?\p"
	.string "Aren't you interested in seeing your\n"
	.string "very own room?$"
