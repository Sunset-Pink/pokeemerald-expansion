PetalburgCity_MapScripts::
# 3 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 4 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 6 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
	.2byte 0


PetalburgCity_OnTransition:
# 11 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 12 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_CITY_STATE, 0
	goto_if_eq PetalburgCity_OnTransition_2
# 14 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_CITY_STATE, 2
	goto_if_eq PetalburgCity_OnTransition_3
# 14 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_CITY_STATE, 4
	goto_if_eq PetalburgCity_OnTransition_3
PetalburgCity_OnTransition_1:
# 17 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 8
	goto_if_eq PetalburgCity_OnTransition_9
PetalburgCity_OnTransition_8:
	end

PetalburgCity_OnTransition_2:
# 13 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_MoveGymBoyToWestEntrance
	goto PetalburgCity_OnTransition_1

PetalburgCity_OnTransition_3:
# 15 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_DisableMapNameAndMusic
	goto PetalburgCity_OnTransition_1

PetalburgCity_OnTransition_9:
# 18 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_SetGymDoorsUnlocked
	goto PetalburgCity_OnTransition_8


PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 24 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
	return


PetalburgCity_EventScript_DisableMapNameAndMusic::
# 29 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 30 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
	return


PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 35 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
	return


PetalburgCity_EventScript_WallyTutorial::
# 39 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 40 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 41 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_EventScript_WallyTutorial_Movement_0
# 52 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_WallyTutorial_Movement_1
# 59 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 60 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon
# 61 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 62 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt
# 63 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 64 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_PETALBURG_WALLY, MAP_PETALBURG_CITY
# 65 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack
# 66 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 67 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 68 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 69 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 70 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 71 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 72 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 73 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY, 4, 108
# 74 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 75 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end


PetalburgCity_EventScript_WalkToWallyHouse::
# 80 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 81 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 82 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_EventScript_WalkToWallyHouse_Movement_0
# 88 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_WalkToWallyHouse_Movement_1
# 94 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 95 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 96 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 97 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 98 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 99 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_EventScript_WalkToWallyHouse_Movement_2
# 103 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_WalkToWallyHouse_Movement_3
# 106 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 107 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 108 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_PETALBURG_CITY
# 109 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 110 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 111 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 112 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 113 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 114 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 115 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 116 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end


PetalburgCity_EventScript_Boy::
# 121 "data/maps/PetalburgCity/scripts.pory"
	lock
# 122 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 123 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection
# 124 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 125 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 126 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 127 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgCity_EventScript_WallysMom::
# 132 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
	return


PetalburgCity_EventScript_GymSign::
# 137 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
	return


PetalburgCity_EventScript_CitySign::
# 142 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
	return


PetalburgCity_EventScript_Gentleman::
# 147 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
	return


PetalburgCity_EventScript_WallyHouseSign::
# 152 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
	return


PetalburgCity_EventScript_ShowGymToPlayer0::
# 157 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 158 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer1::
# 163 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 164 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer2::
# 169 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 170 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer3::
# 175 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 176 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer::
# 181 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 182 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 183 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 184 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 185 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 186 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 187 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 188 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 189 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 190 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_0x8008
# 191 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_ShowGymToPlayer_3
# 192 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_ShowGymToPlayer_4
# 193 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_ShowGymToPlayer_5
# 194 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_ShowGymToPlayer_6
PetalburgCity_EventScript_ShowGymToPlayer_1:
# 196 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer
# 197 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 198 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_0x8008
# 199 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_ShowGymToPlayer_9
# 200 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_ShowGymToPlayer_10
# 201 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_ShowGymToPlayer_11
# 202 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_ShowGymToPlayer_12
PetalburgCity_EventScript_ShowGymToPlayer_7:
# 204 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym
# 205 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 206 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 207 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 208 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign
# 209 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 210 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_0
# 214 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 215 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 216 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end

PetalburgCity_EventScript_ShowGymToPlayer_3:
# 191 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_BoyApproachPlayer0
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_4:
# 192 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_BoyApproachPlayer1
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_5:
# 193 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_BoyApproachPlayer2
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_6:
# 194 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_BoyApproachPlayer3
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_9:
# 199 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_LeadPlayerToGym0
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_10:
# 200 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_LeadPlayerToGym1
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_11:
# 201 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_LeadPlayerToGym2
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_12:
# 202 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_LeadPlayerToGym3
	goto PetalburgCity_EventScript_ShowGymToPlayer_7


PetalburgCity_EventScript_BoyApproachPlayer0::
# 221 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_BoyApproachPlayer0_Movement_0
# 225 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 226 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 227 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_BoyApproachPlayer1::
# 232 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_BoyApproachPlayer1_Movement_0
# 233 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_BoyApproachPlayer2::
# 238 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_BoyApproachPlayer2_Movement_0
# 242 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 243 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 244 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_BoyApproachPlayer3::
# 249 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_BoyApproachPlayer3_Movement_0
# 254 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 255 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 256 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_LeadPlayerToGym0::
# 261 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_LeadPlayerToGym0_Movement_0
# 267 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_LeadPlayerToGym0_Movement_1
# 272 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_LeadPlayerToGym1::
# 277 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_LeadPlayerToGym1_Movement_0
# 284 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_LeadPlayerToGym1_Movement_1
# 290 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_LeadPlayerToGym2::
# 295 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_LeadPlayerToGym0_Movement_0
# 301 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_LeadPlayerToGym2_Movement_0
# 306 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_LeadPlayerToGym3::
# 311 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_LeadPlayerToGym3_Movement_0
# 317 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_LeadPlayerToGym3_Movement_1
# 322 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_Scott0::
# 327 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 328 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott1::
# 333 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 334 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott2::
# 339 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 340 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott3::
# 345 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 346 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott::
# 351 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 352 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 353 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_0x8008
# 354 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_Scott_3
# 355 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_Scott_4
# 356 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_Scott_5
# 357 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_Scott_6
PetalburgCity_EventScript_Scott_1:
# 359 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_0
# 362 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 363 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 364 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
# 365 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 366 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
# 367 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 368 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_0
# 371 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 372 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 373 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 374 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 375 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer
# 376 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 377 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 378 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 379 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 380 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot
# 381 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 382 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 383 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 384 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 385 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers
# 386 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 387 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_0x8008
# 388 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_Scott_9
# 389 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_Scott_10
# 390 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_Scott_11
# 391 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_Scott_12
PetalburgCity_EventScript_Scott_7:
# 393 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 394 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_SCOTT
# 395 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end

PetalburgCity_EventScript_Scott_3:
# 354 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 10
	goto PetalburgCity_EventScript_Scott_1

PetalburgCity_EventScript_Scott_4:
# 355 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 11
	goto PetalburgCity_EventScript_Scott_1

PetalburgCity_EventScript_Scott_5:
# 356 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 12
	goto PetalburgCity_EventScript_Scott_1

PetalburgCity_EventScript_Scott_6:
# 357 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 13
	goto PetalburgCity_EventScript_Scott_1

PetalburgCity_EventScript_Scott_9:
# 388 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_ScottExit0
	goto PetalburgCity_EventScript_Scott_7

PetalburgCity_EventScript_Scott_10:
# 389 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_ScottExit1
	goto PetalburgCity_EventScript_Scott_7

PetalburgCity_EventScript_Scott_11:
# 390 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_ScottExit2
	goto PetalburgCity_EventScript_Scott_7

PetalburgCity_EventScript_Scott_12:
# 391 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_ScottExit3
	goto PetalburgCity_EventScript_Scott_7


PetalburgCity_EventScript_ScottExit0::
# 400 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ScottExit0_Movement_0
# 407 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_ScottExit0_Movement_1
# 411 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_ScottExit1::
# 416 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ScottExit1_Movement_0
# 423 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_ShowGymToPlayer_Movement_0
# 427 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_ScottExit2::
# 432 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ScottExit1_Movement_0
# 439 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_ShowGymToPlayer_Movement_0
# 443 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_ScottExit3::
# 448 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ScottExit3_Movement_0
# 455 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_ScottExit3_Movement_1
# 459 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	return


PetalburgCity_EventScript_GymBoy::
# 464 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer
	return


# 41 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial_Movement_0:
# 42 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 43 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 43 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 43 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 43 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 43 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 43 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 43 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 44 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 44 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 44 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 44 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 44 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 44 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 44 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 44 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 44 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 44 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 44 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 44 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 44 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 44 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 44 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 44 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 44 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 44 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 44 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 44 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 45 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 45 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 46 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 47 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 48 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 49 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 49 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 50 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
	step_end

# 52 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial_Movement_1:
# 53 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 54 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 54 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 54 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 54 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 54 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 54 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 54 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 54 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 56 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 56 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 57 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
	step_end

# 82 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse_Movement_0:
# 83 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 84 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 84 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 85 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 85 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 85 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 85 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 85 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 85 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 85 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 85 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 86 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 86 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 86 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 86 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 86 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 86 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 88 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse_Movement_1:
# 89 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 90 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 90 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 90 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 91 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 91 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 91 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 91 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 91 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 91 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 91 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 91 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 92 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 92 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 92 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 92 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 92 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 99 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse_Movement_2:
# 100 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 101 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
	step_end

# 103 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse_Movement_3:
# 104 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 104 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 210 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_0:
# 211 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

# 221 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0_Movement_0:
# 222 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 222 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 222 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 223 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 232 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1_Movement_0:
# 232 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 232 "data/maps/PetalburgCity/scripts.pory"
	walk_right
	step_end

# 238 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2_Movement_0:
# 239 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 239 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 239 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 240 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
	step_end

# 249 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3_Movement_0:
# 250 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 251 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 252 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
	step_end

# 261 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0_Movement_0:
# 262 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 262 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 262 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 262 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 262 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 262 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 262 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 263 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 264 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 265 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 267 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0_Movement_1:
# 268 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 269 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 269 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 269 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 269 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 269 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 269 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 269 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 270 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 277 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1_Movement_0:
# 278 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 279 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 279 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 279 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 279 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 279 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 279 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 279 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 279 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 280 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 280 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 281 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 282 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 284 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1_Movement_1:
# 285 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 285 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 286 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 288 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 288 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 301 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2_Movement_0:
# 302 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 303 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 303 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 303 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 303 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 303 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 303 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 303 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 304 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 311 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3_Movement_0:
# 312 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 312 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 312 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 312 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 312 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 312 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 312 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 313 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 313 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 314 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 315 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 317 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3_Movement_1:
# 318 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 319 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 319 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 319 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 319 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 319 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 319 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 319 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 320 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 320 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 359 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_0:
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

# 400 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0_Movement_0:
# 401 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 402 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 403 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 403 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 404 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 407 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0_Movement_1:
# 408 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 408 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

# 416 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1_Movement_0:
# 417 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 419 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 420 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 448 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3_Movement_0:
# 449 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 451 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 452 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 455 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3_Movement_1:
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

PetalburgCity_Text_WhereIsWally:
# 468 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our Wally gone?\p"
	.string "We have to leave for Verdanturf Town\n"
	.string "very soon…$"

PetalburgCity_Text_AreYouRookieTrainer:
# 474 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
	.string "A rookie Trainer?\p"
	.string "Do you know what Pokémon Trainers\n"
	.string "do when they reach a new town?\p"
	.string "They first check what kind of Gym\n"
	.string "is in the town.$"

PetalburgCity_Text_ThisIsPetalburgGym:
# 483 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is Petalburg City's Gym.$"

PetalburgCity_Text_ThisIsGymSign:
# 487 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the Gym's sign. Look for it\n"
	.string "whenever you're looking for a Gym.$"

PetalburgCity_Text_WaterReflection:
# 492 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
	.string "It's a shining grin full of hope…\p"
	.string "Or it could be a look of somber silence\n"
	.string "struggling with fear…\p"
	.string "What do you see reflected in your face?$"

PetalburgCity_Text_FullPartyExplanation:
# 500 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six Pokémon.\n"
	.string "If you catch another one…\p"
	.string "It is automatically sent to a Storage\n"
	.string "You can choose one Pokémon to send to\n"
	.string "a Storage Box.$"

PetalburgCity_Text_GymSign:
# 508 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City Pokémon Gym\n"
	.string "Leader: Norman\l"
	.string "“A man in pursuit of power!”$"

PetalburgCity_Text_CitySign:
# 514 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City\n"
	.string "“Where people mingle with nature.”$"

PetalburgCity_Text_WallyHouseSign:
# 519 "data/maps/PetalburgCity/scripts.pory"
	.string "Wally's House$"

PetalburgCity_Text_AreYouATrainer:
# 523 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
	.string "Let me guess, from the way you're\n"
	.string "dressed, are you a Pokémon Trainer?$"

PetalburgCity_Text_WellMaybeNot:
# 529 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
	.string "Well, maybe not.\n"
	.string "Your clothes aren't all that dirty.\p"
	.string "You're either a rookie Trainers,\n"
	.string "or maybe you're just an ordinary kid.$"

PetalburgCity_Text_ImLookingForTalentedTrainers:
# 537 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
	.string "talented Trainers.\p"
	.string "I'm sorry to have taken your time.$"
