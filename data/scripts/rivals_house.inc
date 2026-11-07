Script_RivalsHouse_1F_Interact_RivalMom::
# 17 "data/scripts/rivals_house.pory"
	lock
# 18 "data/scripts/rivals_house.pory"
	faceplayer
# 19 "data/scripts/rivals_house.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, Script_RivalsHouse_1F_Interact_RivalMom_2
# 21 "data/scripts/rivals_house.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Script_RivalsHouse_1F_Interact_RivalMom_3
# 23 "data/scripts/rivals_house.pory"
	compare VAR_RIVAL_STATE, 1
	goto_if_eq Script_RivalsHouse_1F_Interact_RivalMom_4
# 26 "data/scripts/rivals_house.pory"
	special GetRivalSonDaughterString
# 27 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_1F_RivalsMom_LikeChildLikeFather
Script_RivalsHouse_1F_Interact_RivalMom_1:
# 29 "data/scripts/rivals_house.pory"
	release
	end

Script_RivalsHouse_1F_Interact_RivalMom_2:
# 20 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_1F_RivalsMom_ShouldGoHome
	goto Script_RivalsHouse_1F_Interact_RivalMom_1

Script_RivalsHouse_1F_Interact_RivalMom_3:
# 22 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_1F_RivalsMom_WentOutToRoute103
	goto Script_RivalsHouse_1F_Interact_RivalMom_1

Script_RivalsHouse_1F_Interact_RivalMom_4:
# 24 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_1F_RivalsMom_TooBusyToNoticeVisit
	goto Script_RivalsHouse_1F_Interact_RivalMom_1


Script_RivalsHouse_1F_Interact_RivalSibling::
# 65 "data/scripts/rivals_house.pory"
	lockall
# 66 "data/scripts/rivals_house.pory"
	faceplayer
# 67 "data/scripts/rivals_house.pory"
	special GetPlayerBigGuyGirlString
# 68 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_1F_RivalSibling_DoYouHavePokemon
# 69 "data/scripts/rivals_house.pory"
	release
	end


Script_RivalsHouse_2F_Interact_GameCube::
# 80 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_2F_GameCube, MSGBOX_SIGN
	return


Script_RivalsHouse_2F_Interact_Notebook::
# 91 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_2F_Notebook, MSGBOX_SIGN
	return


RivalsHouse_2F_EventScript_Rival::
# 111 "data/scripts/rivals_house.pory"
	lockall
# 112 "data/scripts/rivals_house.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, RivalsHouse_2F_EventScript_Rival_2
RivalsHouse_2F_EventScript_Rival_1:
# 115 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_2F_Rival_GettingRead
# 116 "data/scripts/rivals_house.pory"
	releaseall
	end

RivalsHouse_2F_EventScript_Rival_2:
# 113 "data/scripts/rivals_house.pory"
	goto RivalsHouse_2F_EventScript_RivalPostLilycove
	goto RivalsHouse_2F_EventScript_Rival_1


RivalsHouse_2F_EventScript_RivalPostLilycove::
# 121 "data/scripts/rivals_house.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 122 "data/scripts/rivals_house.pory"
	waitmovement 0
	checkplayergender
# 0 "data/scripts/rivals_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_RivalPostLilycove_2
# 130 "data/scripts/rivals_house.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_RivalPostLilycove_8
# 133 "data/scripts/rivals_house.pory"
	msgbox RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex
RivalsHouse_2F_EventScript_RivalPostLilycove_1:
# 136 "data/scripts/rivals_house.pory"
	setflag FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE
# 137 "data/scripts/rivals_house.pory"
	releaseall
	end

RivalsHouse_2F_EventScript_RivalPostLilycove_2:
# 124 "data/scripts/rivals_house.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_RivalPostLilycove_5
# 127 "data/scripts/rivals_house.pory"
	msgbox RivalsHouse_2F_Text_MayJustCheckingMyPokedex
	goto RivalsHouse_2F_EventScript_RivalPostLilycove_1

RivalsHouse_2F_EventScript_RivalPostLilycove_5:
# 125 "data/scripts/rivals_house.pory"
	msgbox RivalsHouse_2F_Text_MayWhereShouldIGoNext
	goto RivalsHouse_2F_EventScript_RivalPostLilycove_1

RivalsHouse_2F_EventScript_RivalPostLilycove_8:
# 131 "data/scripts/rivals_house.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhereShouldIGoNext
	goto RivalsHouse_2F_EventScript_RivalPostLilycove_1


LittlerootTown_RivalsHouse_2F_EventScript_TurnOffPlayerPC::
	checkplayergender
# 0 "data/scripts/rivals_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_RivalsHouse_2F_EventScript_TurnOffPlayerPC_2
# 183 "data/scripts/rivals_house.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
LittlerootTown_RivalsHouse_2F_EventScript_TurnOffPlayerPC_1:
# 185 "data/scripts/rivals_house.pory"
	playse SE_PC_OFF
# 186 "data/scripts/rivals_house.pory"
	special DoPCTurnOffEffect
# 187 "data/scripts/rivals_house.pory"
	releaseall
	end

LittlerootTown_RivalsHouse_2F_EventScript_TurnOffPlayerPC_2:
# 181 "data/scripts/rivals_house.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
	goto LittlerootTown_RivalsHouse_2F_EventScript_TurnOffPlayerPC_1


RivalsHouse_2F_EventScript_RivalsPokeBall::
# 192 "data/scripts/rivals_house.pory"
	lockall
# 193 "data/scripts/rivals_house.pory"
	compare VAR_RIVAL_STATE, 0
	goto_if_eq RivalsHouse_2F_EventScript_RivalsPokeBall_2
# 196 "data/scripts/rivals_house.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall
RivalsHouse_2F_EventScript_RivalsPokeBall_1:
# 198 "data/scripts/rivals_house.pory"
	releaseall
	end

RivalsHouse_2F_EventScript_RivalsPokeBall_2:
# 194 "data/scripts/rivals_house.pory"
	call RivalsHouse_2F_EventScript_MeetRival
	goto RivalsHouse_2F_EventScript_RivalsPokeBall_1


RivalsHouse_2F_EventScript_MeetRival::
# 209 "data/scripts/rivals_house.pory"
	delay 10
# 210 "data/scripts/rivals_house.pory"
	addobject LOCALID_RIVALS_HOUSE_2F_RIVAL
	checkplayergender
# 0 "data/scripts/rivals_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_MeetRival_2
# 217 "data/scripts/rivals_house.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, RivalsHouse_2F_EventScript_MeetRival_Movement_1
RivalsHouse_2F_EventScript_MeetRival_1:
# 222 "data/scripts/rivals_house.pory"
	waitmovement 0
# 223 "data/scripts/rivals_house.pory"
	playse SE_PIN
# 224 "data/scripts/rivals_house.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_ExclamationMark
# 225 "data/scripts/rivals_house.pory"
	waitmovement 0
# 226 "data/scripts/rivals_house.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_Delay48
# 227 "data/scripts/rivals_house.pory"
	waitmovement 0
# 228 "data/scripts/rivals_house.pory"
	delay 10
	checkplayergender
# 0 "data/scripts/rivals_house.pory"
	compare VAR_RESULT, 0
	goto_if_ne RivalsHouse_2F_EventScript_MeetRival_6
# 232 "data/scripts/rivals_house.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
RivalsHouse_2F_EventScript_MeetRival_5:
# 234 "data/scripts/rivals_house.pory"
	switch VAR_FACING
# 235 "data/scripts/rivals_house.pory"
	case DIR_NORTH, RivalsHouse_2F_EventScript_MeetRival_11
# 236 "data/scripts/rivals_house.pory"
	case DIR_SOUTH, RivalsHouse_2F_EventScript_MeetRival_12
# 237 "data/scripts/rivals_house.pory"
	case DIR_WEST, RivalsHouse_2F_EventScript_MeetRival_13
# 238 "data/scripts/rivals_house.pory"
	case DIR_EAST, RivalsHouse_2F_EventScript_MeetRival_14
RivalsHouse_2F_EventScript_MeetRival_9:
# 240 "data/scripts/rivals_house.pory"
	setvar VAR_RIVAL_STATE, 1
	checkplayergender
# 0 "data/scripts/rivals_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_MeetRival_16
# 245 "data/scripts/rivals_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 246 "data/scripts/rivals_house.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
RivalsHouse_2F_EventScript_MeetRival_15:
# 248 "data/scripts/rivals_house.pory"
	savebgm MUS_DUMMY
# 249 "data/scripts/rivals_house.pory"
	fadedefaultbgm
# 250 "data/scripts/rivals_house.pory"
	releaseall
	end

RivalsHouse_2F_EventScript_MeetRival_2:
# 212 "data/scripts/rivals_house.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, RivalsHouse_2F_EventScript_MeetRival_Movement_0
	goto RivalsHouse_2F_EventScript_MeetRival_1

RivalsHouse_2F_EventScript_MeetRival_6:
# 230 "data/scripts/rivals_house.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	goto RivalsHouse_2F_EventScript_MeetRival_5

RivalsHouse_2F_EventScript_MeetRival_11:
# 235 "data/scripts/rivals_house.pory"
	call RivalsHouse_2F_EventScript_MeetRivalNorth
	goto RivalsHouse_2F_EventScript_MeetRival_9

RivalsHouse_2F_EventScript_MeetRival_12:
# 236 "data/scripts/rivals_house.pory"
	call RivalsHouse_2F_EventScript_MeetRivalSouth
	goto RivalsHouse_2F_EventScript_MeetRival_9

RivalsHouse_2F_EventScript_MeetRival_13:
# 237 "data/scripts/rivals_house.pory"
	call RivalsHouse_2F_EventScript_MeetRivalWest
	goto RivalsHouse_2F_EventScript_MeetRival_9

RivalsHouse_2F_EventScript_MeetRival_14:
# 238 "data/scripts/rivals_house.pory"
	call RivalsHouse_2F_EventScript_MeetRivalEast
	goto RivalsHouse_2F_EventScript_MeetRival_9

RivalsHouse_2F_EventScript_MeetRival_16:
# 242 "data/scripts/rivals_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 243 "data/scripts/rivals_house.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	goto RivalsHouse_2F_EventScript_MeetRival_15


RivalsHouse_2F_EventScript_MeetRivalNorth::
	checkplayergender
# 0 "data/scripts/rivals_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_MeetRivalNorth_2
# 263 "data/scripts/rivals_house.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, RivalsHouse_2F_EventScript_MeetRivalNorth_Movement_1
RivalsHouse_2F_EventScript_MeetRivalNorth_1:
# 269 "data/scripts/rivals_house.pory"
	waitmovement 0
	checkplayergender
# 0 "data/scripts/rivals_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_MeetRivalNorth_6
# 273 "data/scripts/rivals_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
RivalsHouse_2F_EventScript_MeetRivalNorth_5:
# 275 "data/scripts/rivals_house.pory"
	waitmovement 0
	checkplayergender
# 0 "data/scripts/rivals_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_MeetRivalNorth_10
# 279 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_2F_Brendan_WhoAreYou
RivalsHouse_2F_EventScript_MeetRivalNorth_9:
# 281 "data/scripts/rivals_house.pory"
	closemessage
	checkplayergender
# 0 "data/scripts/rivals_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_MeetRivalNorth_14
# 296 "data/scripts/rivals_house.pory"
	applymovement LOCALID_PLAYER, RivalsHouse_2F_EventScript_MeetRivalNorth_Movement_4
# 302 "data/scripts/rivals_house.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, RivalsHouse_2F_EventScript_MeetRivalNorth_Movement_5
RivalsHouse_2F_EventScript_MeetRivalNorth_13:
# 309 "data/scripts/rivals_house.pory"
	waitmovement 0
	return

RivalsHouse_2F_EventScript_MeetRivalNorth_2:
# 257 "data/scripts/rivals_house.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, RivalsHouse_2F_EventScript_MeetRivalNorth_Movement_0
	goto RivalsHouse_2F_EventScript_MeetRivalNorth_1

RivalsHouse_2F_EventScript_MeetRivalNorth_6:
# 271 "data/scripts/rivals_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	goto RivalsHouse_2F_EventScript_MeetRivalNorth_5

RivalsHouse_2F_EventScript_MeetRivalNorth_10:
# 277 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_2F_May_WhoAreYou
	goto RivalsHouse_2F_EventScript_MeetRivalNorth_9

RivalsHouse_2F_EventScript_MeetRivalNorth_14:
# 283 "data/scripts/rivals_house.pory"
	applymovement LOCALID_PLAYER, RivalsHouse_2F_EventScript_MeetRivalNorth_Movement_2
# 289 "data/scripts/rivals_house.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, RivalsHouse_2F_EventScript_MeetRivalNorth_Movement_3
	goto RivalsHouse_2F_EventScript_MeetRivalNorth_13


RivalsHouse_2F_EventScript_MeetRivalSouth::
	checkplayergender
# 0 "data/scripts/rivals_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_MeetRivalSouth_2
# 319 "data/scripts/rivals_house.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, RivalsHouse_2F_EventScript_MeetRivalSouth_Movement_1
RivalsHouse_2F_EventScript_MeetRivalSouth_1:
# 323 "data/scripts/rivals_house.pory"
	waitmovement 0
	checkplayergender
# 0 "data/scripts/rivals_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_MeetRivalSouth_6
# 327 "data/scripts/rivals_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
RivalsHouse_2F_EventScript_MeetRivalSouth_5:
# 329 "data/scripts/rivals_house.pory"
	waitmovement 0
	checkplayergender
# 0 "data/scripts/rivals_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_MeetRivalSouth_10
# 333 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_2F_Brendan_WhoAreYou
RivalsHouse_2F_EventScript_MeetRivalSouth_9:
# 335 "data/scripts/rivals_house.pory"
	closemessage
	checkplayergender
# 0 "data/scripts/rivals_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_MeetRivalSouth_14
# 350 "data/scripts/rivals_house.pory"
	applymovement LOCALID_PLAYER, RivalsHouse_2F_EventScript_MeetRivalSouth_Movement_4
# 356 "data/scripts/rivals_house.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, RivalsHouse_2F_EventScript_MeetRivalSouth_Movement_5
RivalsHouse_2F_EventScript_MeetRivalSouth_13:
# 363 "data/scripts/rivals_house.pory"
	waitmovement 0
	return

RivalsHouse_2F_EventScript_MeetRivalSouth_2:
# 315 "data/scripts/rivals_house.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, RivalsHouse_2F_EventScript_MeetRivalSouth_Movement_0
	goto RivalsHouse_2F_EventScript_MeetRivalSouth_1

RivalsHouse_2F_EventScript_MeetRivalSouth_6:
# 325 "data/scripts/rivals_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	goto RivalsHouse_2F_EventScript_MeetRivalSouth_5

RivalsHouse_2F_EventScript_MeetRivalSouth_10:
# 331 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_2F_May_WhoAreYou
	goto RivalsHouse_2F_EventScript_MeetRivalSouth_9

RivalsHouse_2F_EventScript_MeetRivalSouth_14:
# 337 "data/scripts/rivals_house.pory"
	applymovement LOCALID_PLAYER, RivalsHouse_2F_EventScript_MeetRivalSouth_Movement_2
# 343 "data/scripts/rivals_house.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, RivalsHouse_2F_EventScript_MeetRivalSouth_Movement_3
	goto RivalsHouse_2F_EventScript_MeetRivalSouth_13


RivalsHouse_2F_EventScript_MeetRivalWest::
	checkplayergender
# 0 "data/scripts/rivals_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_MeetRivalWest_2
# 374 "data/scripts/rivals_house.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, RivalsHouse_2F_EventScript_MeetRivalWest_Movement_1
RivalsHouse_2F_EventScript_MeetRivalWest_1:
# 380 "data/scripts/rivals_house.pory"
	waitmovement 0
	checkplayergender
# 0 "data/scripts/rivals_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_MeetRivalWest_6
# 384 "data/scripts/rivals_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
RivalsHouse_2F_EventScript_MeetRivalWest_5:
# 386 "data/scripts/rivals_house.pory"
	waitmovement 0
	checkplayergender
# 0 "data/scripts/rivals_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_MeetRivalWest_10
# 390 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_2F_Brendan_WhoAreYou
RivalsHouse_2F_EventScript_MeetRivalWest_9:
# 392 "data/scripts/rivals_house.pory"
	closemessage
	checkplayergender
# 0 "data/scripts/rivals_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_MeetRivalWest_14
# 404 "data/scripts/rivals_house.pory"
	applymovement LOCALID_PLAYER, RivalsHouse_2F_EventScript_MeetRivalWest_Movement_4
# 411 "data/scripts/rivals_house.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, RivalsHouse_2F_EventScript_MeetRivalWest_Movement_5
RivalsHouse_2F_EventScript_MeetRivalWest_13:
# 417 "data/scripts/rivals_house.pory"
	waitmovement 0
	return

RivalsHouse_2F_EventScript_MeetRivalWest_2:
# 369 "data/scripts/rivals_house.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, RivalsHouse_2F_EventScript_MeetRivalWest_Movement_0
	goto RivalsHouse_2F_EventScript_MeetRivalWest_1

RivalsHouse_2F_EventScript_MeetRivalWest_6:
# 382 "data/scripts/rivals_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	goto RivalsHouse_2F_EventScript_MeetRivalWest_5

RivalsHouse_2F_EventScript_MeetRivalWest_10:
# 388 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_2F_May_WhoAreYou
	goto RivalsHouse_2F_EventScript_MeetRivalWest_9

RivalsHouse_2F_EventScript_MeetRivalWest_14:
# 394 "data/scripts/rivals_house.pory"
	applymovement LOCALID_PLAYER, RivalsHouse_2F_EventScript_MeetRivalWest_Movement_2
# 398 "data/scripts/rivals_house.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, RivalsHouse_2F_EventScript_MeetRivalWest_Movement_3
	goto RivalsHouse_2F_EventScript_MeetRivalWest_13


RivalsHouse_2F_EventScript_MeetRivalEast::
	checkplayergender
# 0 "data/scripts/rivals_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_MeetRivalEast_2
# 429 "data/scripts/rivals_house.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, RivalsHouse_2F_EventScript_MeetRivalEast_Movement_1
RivalsHouse_2F_EventScript_MeetRivalEast_1:
# 434 "data/scripts/rivals_house.pory"
	waitmovement 0
	checkplayergender
# 0 "data/scripts/rivals_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_MeetRivalEast_6
# 438 "data/scripts/rivals_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
RivalsHouse_2F_EventScript_MeetRivalEast_5:
# 440 "data/scripts/rivals_house.pory"
	waitmovement 0
	checkplayergender
# 0 "data/scripts/rivals_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_MeetRivalEast_10
# 444 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_2F_Brendan_WhoAreYou
RivalsHouse_2F_EventScript_MeetRivalEast_9:
# 446 "data/scripts/rivals_house.pory"
	closemessage
	checkplayergender
# 0 "data/scripts/rivals_house.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_MeetRivalEast_14
# 460 "data/scripts/rivals_house.pory"
	applymovement LOCALID_PLAYER, RivalsHouse_2F_EventScript_MeetRivalEast_Movement_3
# 464 "data/scripts/rivals_house.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, RivalsHouse_2F_EventScript_MeetRivalEast_Movement_4
RivalsHouse_2F_EventScript_MeetRivalEast_13:
# 470 "data/scripts/rivals_house.pory"
	waitmovement 0
	return

RivalsHouse_2F_EventScript_MeetRivalEast_2:
# 423 "data/scripts/rivals_house.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, RivalsHouse_2F_EventScript_MeetRivalEast_Movement_0
	goto RivalsHouse_2F_EventScript_MeetRivalEast_1

RivalsHouse_2F_EventScript_MeetRivalEast_6:
# 436 "data/scripts/rivals_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	goto RivalsHouse_2F_EventScript_MeetRivalEast_5

RivalsHouse_2F_EventScript_MeetRivalEast_10:
# 442 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_2F_May_WhoAreYou
	goto RivalsHouse_2F_EventScript_MeetRivalEast_9

RivalsHouse_2F_EventScript_MeetRivalEast_14:
# 448 "data/scripts/rivals_house.pory"
	applymovement LOCALID_PLAYER, RivalsHouse_2F_EventScript_MeetRivalSouth_Movement_2
# 454 "data/scripts/rivals_house.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, RivalsHouse_2F_EventScript_MeetRivalEast_Movement_2
	goto RivalsHouse_2F_EventScript_MeetRivalEast_13


# 212 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRival_Movement_0:
# 213 "data/scripts/rivals_house.pory"
	walk_down
# 213 "data/scripts/rivals_house.pory"
	walk_down
# 214 "data/scripts/rivals_house.pory"
	walk_in_place_faster_right
	step_end

# 217 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRival_Movement_1:
# 218 "data/scripts/rivals_house.pory"
	walk_down
# 218 "data/scripts/rivals_house.pory"
	walk_down
# 219 "data/scripts/rivals_house.pory"
	walk_in_place_faster_left
	step_end

# 257 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalNorth_Movement_0:
# 258 "data/scripts/rivals_house.pory"
	Walk_right
# 258 "data/scripts/rivals_house.pory"
	Walk_right
# 259 "data/scripts/rivals_house.pory"
	walk_down
# 259 "data/scripts/rivals_house.pory"
	walk_down
# 260 "data/scripts/rivals_house.pory"
	walk_right
	step_end

# 263 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalNorth_Movement_1:
# 264 "data/scripts/rivals_house.pory"
	walk_left
# 264 "data/scripts/rivals_house.pory"
	walk_left
# 265 "data/scripts/rivals_house.pory"
	walk_down
# 265 "data/scripts/rivals_house.pory"
	walk_down
# 266 "data/scripts/rivals_house.pory"
	walk_left
	step_end

# 283 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalNorth_Movement_2:
# 284 "data/scripts/rivals_house.pory"
	delay_16
# 285 "data/scripts/rivals_house.pory"
	walk_in_place_faster_up
# 286 "data/scripts/rivals_house.pory"
	delay_16
# 286 "data/scripts/rivals_house.pory"
	delay_16
# 286 "data/scripts/rivals_house.pory"
	delay_16
# 286 "data/scripts/rivals_house.pory"
	delay_16
# 287 "data/scripts/rivals_house.pory"
	walk_in_place_faster_left
	step_end

# 289 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalNorth_Movement_3:
# 290 "data/scripts/rivals_house.pory"
	walk_up
# 290 "data/scripts/rivals_house.pory"
	walk_up
# 290 "data/scripts/rivals_house.pory"
	walk_up
# 291 "data/scripts/rivals_house.pory"
	walk_in_place_faster_right
# 292 "data/scripts/rivals_house.pory"
	walk_right
# 292 "data/scripts/rivals_house.pory"
	walk_right
# 292 "data/scripts/rivals_house.pory"
	walk_right
# 292 "data/scripts/rivals_house.pory"
	walk_right
# 293 "data/scripts/rivals_house.pory"
	walk_in_place_faster_up
	step_end

# 296 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalNorth_Movement_4:
# 297 "data/scripts/rivals_house.pory"
	delay_16
# 298 "data/scripts/rivals_house.pory"
	walk_in_place_faster_up
# 299 "data/scripts/rivals_house.pory"
	delay_16
# 299 "data/scripts/rivals_house.pory"
	delay_16
# 299 "data/scripts/rivals_house.pory"
	delay_16
# 299 "data/scripts/rivals_house.pory"
	delay_16
# 300 "data/scripts/rivals_house.pory"
	walk_in_place_faster_right
	step_end

# 302 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalNorth_Movement_5:
# 303 "data/scripts/rivals_house.pory"
	walk_up
# 303 "data/scripts/rivals_house.pory"
	walk_up
# 303 "data/scripts/rivals_house.pory"
	walk_up
# 304 "data/scripts/rivals_house.pory"
	walk_in_place_faster_left
# 305 "data/scripts/rivals_house.pory"
	walk_left
# 305 "data/scripts/rivals_house.pory"
	walk_left
# 305 "data/scripts/rivals_house.pory"
	walk_left
# 305 "data/scripts/rivals_house.pory"
	walk_left
# 306 "data/scripts/rivals_house.pory"
	walk_in_place_faster_up
	step_end

# 315 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalSouth_Movement_0:
# 316 "data/scripts/rivals_house.pory"
	walk_right
# 316 "data/scripts/rivals_house.pory"
	walk_right
# 316 "data/scripts/rivals_house.pory"
	walk_right
	step_end

# 319 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalSouth_Movement_1:
# 320 "data/scripts/rivals_house.pory"
	walk_left
# 320 "data/scripts/rivals_house.pory"
	walk_left
# 320 "data/scripts/rivals_house.pory"
	walk_left
	step_end

# 337 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalSouth_Movement_2:
# 338 "data/scripts/rivals_house.pory"
	delay_16
# 339 "data/scripts/rivals_house.pory"
	walk_in_place_faster_up
# 340 "data/scripts/rivals_house.pory"
	delay_16
# 340 "data/scripts/rivals_house.pory"
	delay_16
# 341 "data/scripts/rivals_house.pory"
	walk_in_place_faster_right
	step_end

# 343 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalSouth_Movement_3:
# 344 "data/scripts/rivals_house.pory"
	walk_up
# 345 "data/scripts/rivals_house.pory"
	walk_in_place_faster_right
# 346 "data/scripts/rivals_house.pory"
	walk_right
# 346 "data/scripts/rivals_house.pory"
	walk_right
# 346 "data/scripts/rivals_house.pory"
	walk_right
# 346 "data/scripts/rivals_house.pory"
	walk_right
# 347 "data/scripts/rivals_house.pory"
	walk_in_place_faster_up
	step_end

# 350 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalSouth_Movement_4:
# 351 "data/scripts/rivals_house.pory"
	delay_16
# 352 "data/scripts/rivals_house.pory"
	walk_in_place_faster_up
# 353 "data/scripts/rivals_house.pory"
	delay_16
# 353 "data/scripts/rivals_house.pory"
	delay_16
# 354 "data/scripts/rivals_house.pory"
	walk_in_place_faster_left
	step_end

# 356 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalSouth_Movement_5:
# 357 "data/scripts/rivals_house.pory"
	walk_up
# 358 "data/scripts/rivals_house.pory"
	walk_in_place_faster_left
# 359 "data/scripts/rivals_house.pory"
	walk_left
# 359 "data/scripts/rivals_house.pory"
	walk_left
# 359 "data/scripts/rivals_house.pory"
	walk_left
# 359 "data/scripts/rivals_house.pory"
	walk_left
# 360 "data/scripts/rivals_house.pory"
	walk_in_place_faster_up
	step_end

# 369 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalWest_Movement_0:
# 370 "data/scripts/rivals_house.pory"
	walk_right
# 370 "data/scripts/rivals_house.pory"
	walk_right
# 370 "data/scripts/rivals_house.pory"
	walk_right
# 370 "data/scripts/rivals_house.pory"
	walk_right
# 370 "data/scripts/rivals_house.pory"
	walk_right
# 371 "data/scripts/rivals_house.pory"
	walk_in_place_faster_down
	step_end

# 374 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalWest_Movement_1:
# 375 "data/scripts/rivals_house.pory"
	walk_left
# 375 "data/scripts/rivals_house.pory"
	walk_left
# 376 "data/scripts/rivals_house.pory"
	walk_down
# 377 "data/scripts/rivals_house.pory"
	walk_in_place_faster_left
	step_end

# 394 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalWest_Movement_2:
# 395 "data/scripts/rivals_house.pory"
	delay_16
# 395 "data/scripts/rivals_house.pory"
	delay_16
# 396 "data/scripts/rivals_house.pory"
	walk_in_place_faster_right
	step_end

# 398 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalWest_Movement_3:
# 399 "data/scripts/rivals_house.pory"
	walk_up
# 400 "data/scripts/rivals_house.pory"
	walk_right
# 400 "data/scripts/rivals_house.pory"
	walk_right
# 401 "data/scripts/rivals_house.pory"
	walk_in_place_faster_up
	step_end

# 404 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalWest_Movement_4:
# 405 "data/scripts/rivals_house.pory"
	delay_8
# 406 "data/scripts/rivals_house.pory"
	delay_16
# 407 "data/scripts/rivals_house.pory"
	walk_in_place_faster_up
# 408 "data/scripts/rivals_house.pory"
	delay_16
# 408 "data/scripts/rivals_house.pory"
	delay_16
# 409 "data/scripts/rivals_house.pory"
	walk_in_place_faster_left
	step_end

# 411 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalWest_Movement_5:
# 412 "data/scripts/rivals_house.pory"
	walk_up
# 412 "data/scripts/rivals_house.pory"
	walk_up
# 413 "data/scripts/rivals_house.pory"
	walk_left
# 413 "data/scripts/rivals_house.pory"
	walk_left
# 413 "data/scripts/rivals_house.pory"
	walk_left
# 413 "data/scripts/rivals_house.pory"
	walk_left
# 413 "data/scripts/rivals_house.pory"
	walk_left
# 414 "data/scripts/rivals_house.pory"
	walk_in_place_faster_up
	step_end

# 423 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalEast_Movement_0:
# 424 "data/scripts/rivals_house.pory"
	walk_right
# 424 "data/scripts/rivals_house.pory"
	walk_right
# 425 "data/scripts/rivals_house.pory"
	walk_down
# 426 "data/scripts/rivals_house.pory"
	walk_in_place_faster_right
	step_end

# 429 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalEast_Movement_1:
# 430 "data/scripts/rivals_house.pory"
	walk_left
# 430 "data/scripts/rivals_house.pory"
	walk_left
# 430 "data/scripts/rivals_house.pory"
	walk_left
# 430 "data/scripts/rivals_house.pory"
	walk_left
# 430 "data/scripts/rivals_house.pory"
	walk_left
# 431 "data/scripts/rivals_house.pory"
	walk_in_place_faster_down
	step_end

# 454 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalEast_Movement_2:
# 455 "data/scripts/rivals_house.pory"
	walk_up
# 455 "data/scripts/rivals_house.pory"
	walk_up
# 456 "data/scripts/rivals_house.pory"
	walk_right
# 456 "data/scripts/rivals_house.pory"
	walk_right
# 457 "data/scripts/rivals_house.pory"
	walk_in_place_faster_up
	step_end

# 460 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalEast_Movement_3:
# 461 "data/scripts/rivals_house.pory"
	delay_16
# 461 "data/scripts/rivals_house.pory"
	delay_16
# 462 "data/scripts/rivals_house.pory"
	walk_in_place_faster_left
	step_end

# 464 "data/scripts/rivals_house.pory"
RivalsHouse_2F_EventScript_MeetRivalEast_Movement_4:
# 465 "data/scripts/rivals_house.pory"
	walk_up
# 466 "data/scripts/rivals_house.pory"
	walk_left
# 466 "data/scripts/rivals_house.pory"
	walk_left
# 467 "data/scripts/rivals_house.pory"
	walk_in_place_faster_up
	step_end

Text_RivalsHouse_1F_RivalsMom_OhYoureTheNewNeighbor:
# 2 "data/scripts/rivals_house.pory"
	.string "Oh, hello. And you are?\p"
	.string "… … … … … … … … …\n"
	.string "… … … … … … … … …\p"
	.string "Oh, you're {PLAYER}{KUN}, our new next-door\n"
	.string "neighbor! Hi!\p"
	.string "We have a {STR_VAR_1} about the same\n"
	.string "age as you.\p"
	.string "Our {STR_VAR_1} was excited about making\n"
	.string "Our {STR_VAR_1} was excited about making\n"
	.string "a new friend.\p"
	.string "Our {STR_VAR_1} is upstairs, I think.$"

Text_RivalsHouse_1F_RivalsMom_LikeChildLikeFather:
# 33 "data/scripts/rivals_house.pory"
	.string "Like child, like father.\p"
	.string "My husband is as wild about Pokémon\n"
	.string "as our child.\p"
	.string "If he's not at his Lab, he's likely\n"
	.string "scrabbling about in grassy places.$"

Text_RivalsHouse_1F_RivalsMom_TooBusyToNoticeVisit:
# 41 "data/scripts/rivals_house.pory"
	.string "That {RIVAL}!\p"
	.string "I guess our child is too busy with\n"
	.string "Pokémon to notice that you came\l"
	.string "to visit, {PLAYER}{KUN}.$"

Text_RivalsHouse_1F_RivalsMom_WentOutToRoute103:
# 48 "data/scripts/rivals_house.pory"
	.string "Oh, {RIVAL} went out to Route 103\n"
	.string "just a little while ago.\p"
	.string "Like farther, like child.\n"
	.string "{RIVAL} can't stay quietly at home.$"

Text_RivalsHouse_1F_RivalsMom_ShouldGoHome:
# 55 "data/scripts/rivals_house.pory"
	.string "I think it's wonderful for people to \n"
	.string "travel with Pokémon.\p"
	.string "But you should go home every so often\n"
	.string "to let your mother know you're okay.\p"
	.string "She might not say it, but I'm sure she\n"
	.string "worries about you, {PLAYER}{KUN}.$"

Text_RivalsHouse_1F_RivalSibling_DoYouHavePokemon:
# 73 "data/scripts/rivals_house.pory"
	.string "Hi, neighbor!\p"
	.string "Do you already have your\n"
	.string "own Pokémon?$"

Text_RivalsHouse_2F_GameCube:
# 84 "data/scripts/rivals_house.pory"
	.string "It's a Nintendo GameCube.\p"
	.string "A Game Boy Advance is connected to\n"
	.string "serve as the Controller.$"

Text_RivalsHouse_2F_Notebook:
# 95 "data/scripts/rivals_house.pory"
	.string "{PLAYER} flipped open the notebook.\p"
	.string "Adventure Rule No. 1\n"
	.string "Open the Menu with Start.\p"
	.string "Adventure Rule No. 2\n"
	.string "Record your progress with Save.\p"
	.string "The remaining pages are blank…$"

Text_RivalsHouse_2F_Rival_GettingRead:
# 104 "data/scripts/rivals_house.pory"
	.string "Pokémon fully restored…\n"
	.string "Items all packed, and…$"

RivalsHouse_2F_Text_MayJustCheckingMyPokedex:
# 141 "data/scripts/rivals_house.pory"
	.string "May: {PLAYER}{KUN}!\p"
	.string "I was just checking my PokéDex.\p"
	.string "There's still a lot of Pokémon that\n"
	.string "I've seen but haven't caught.\p"
	.string "And there are many others that\n"
	.string "I think will evolve.\p"
	.string "I wonder where I should go catch\n"
	.string "some Pokémon next?$"

RivalsHouse_2F_Text_MayWhereShouldIGoNext:
# 152 "data/scripts/rivals_house.pory"
	.string "May: I wonder where I should go catch\n"
	.string "some Pokémon next?\p"
	.string "Wouldn't it be funny if we ran into each\n"
	.string "other, {PLAYER}{KUN}?$"

RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex:
# 159 "data/scripts/rivals_house.pory"
	.string "Brendan: Hey, it's {PLAYER}.\p"
	.string "I was just checking out my PokéDex.\p"
	.string "There are still many Pokémon that\n"
	.string "I need to catch, I know, but this\l"
	.string "is looking pretty good.\p"
	.string "Checking this PokéDex out gives me\n"
	.string "the urge to hit the road again.$"

RivalsHouse_2F_Text_BrendanWhereShouldIGoNext:
# 169 "data/scripts/rivals_house.pory"
	.string "Brendan: I'm having a hard time deciding\n"
	.string "where I should catch Pokémon next.\p"
	.string "Hey, {PLAYER}, if I see you while I'm out\n"
	.string "catching Pokémon, I can pitch you a\l"
	.string "battle if you'd like.$"

RivalsHouse_2F_Text_ItsRivalsPokeBall:
# 202 "data/scripts/rivals_house.pory"
	.string "It's {RIVAL}'s Poké Ball!\p"
	.string "Better leave it right where it is.$"

Text_RivalsHouse_2F_May_WhoAreYou:
# 475 "data/scripts/rivals_house.pory"
	.string "Huh?\n"
	.string "Who… Who are you?\p"
	.string "… … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "Oh, you're {PLAYER}{KUN}.\n"
	.string "So your move was today.\p"
	.string "Um… I'm MAY.\n"
	.string "Glad to meet you!\p"
	.string "I…\n"
	.string "I have this dream of becoming friends\l"
	.string "with Pokémon all over the world.\p"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
	.string "my dad, Prof. Birch.\p"
	.string "I was hoping that you would be nice,\n"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
	.string "Oh, this is silly, isn't it?\n"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
	.string "Eheheh…\p"
	.string "Oh, no! I forgot!\p"
	.string "I was supposed to go help Dad catch\n"
	.string "some wild Pokémon!\p"
	.string "{PLAYER}{KUN}, I'll catch you later!$"

Text_RivalsHouse_2F_Brendan_WhoAreYou:
# 500 "data/scripts/rivals_house.pory"
	.string "Hey!\n"
	.string "You…\p"
	.string "Who are you?\p"
	.string "Oh, you're {PLAYER}, aren't you?\n"
	.string "Moved in next door, right?\p"
	.string "I didn't know that you're a girl.\p"
	.string "Dad, Prof. Birch, said that our new\n"
	.string "next-door neighbor is a Gym Leader's\l"
	.string "kid, so I assumed you'd be a guy.\p"
	.string "My name's Brendan.\n"
	.string "So, hi, neighbor!\p"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
	.string "a Pokémon?\p"
	.string "Do you want me to go catch you one?\p"
	.string "Aw, darn, I forgot…\p"
	.string "I'm supposed to go help my dad catch\n"
	.string "some wild Pokémon.\p"
	.string "Some other time, okay?$"
