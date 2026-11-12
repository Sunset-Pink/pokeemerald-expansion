RustboroCity_Gym_MapScripts::
	.byte 0


RustboroCity_Gym_EventScript_GymGuide::
# 4 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 5 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
	switch VAR_STONE_BADGE_LEVEL
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	case 1, RustboroCity_Gym_EventScript_GymGuide_3
RustboroCity_Gym_EventScript_GymGuide_1:
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	end

RustboroCity_Gym_EventScript_GymGuide_3:
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
defeault:
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice
	goto RustboroCity_Gym_EventScript_GymGuide_1


RustboroCity_Gym_EventScript_Josh::
# 51 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 52 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_Gym_EventScript_Tommy::
# 71 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_Gym_EventScript_Marc::
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_Gym_EventScript_Roxanne::
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_STONE_BADGE_LEVEL, 0
	goto_if_eq RustboroCity_Gym_EventScript_Roxanne_2
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	call Roxanne_Extended_Levels
RustboroCity_Gym_EventScript_Roxanne_1:
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	end

RustboroCity_Gym_EventScript_Roxanne_2:
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_NORMAL, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	goto RustboroCity_Gym_EventScript_Roxanne_1


Roxanne_Extended_Levels::
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox Roxanne_Extended_Levels_Text_0
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_STONE_BADGE_LEVEL, 8
	goto_if_ge Roxanne_Extended_Levels_3
Roxanne_Extended_Levels_1:
# 159 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_STONE_BADGE_LEVEL, 7
	goto_if_ge Roxanne_Extended_Levels_8
Roxanne_Extended_Levels_6:
# 162 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_STONE_BADGE_LEVEL, 6
	goto_if_ge Roxanne_Extended_Levels_13
Roxanne_Extended_Levels_11:
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_STONE_BADGE_LEVEL, 5
	goto_if_ge Roxanne_Extended_Levels_18
Roxanne_Extended_Levels_16:
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_STONE_BADGE_LEVEL, 4
	goto_if_ge Roxanne_Extended_Levels_23
Roxanne_Extended_Levels_21:
# 171 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_STONE_BADGE_LEVEL, 3
	goto_if_ge Roxanne_Extended_Levels_28
Roxanne_Extended_Levels_26:
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_STONE_BADGE_LEVEL, 2
	goto_if_ge Roxanne_Extended_Levels_33
Roxanne_Extended_Levels_31:
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_STONE_BADGE_LEVEL, 1
	goto_if_ge Roxanne_Extended_Levels_38
Roxanne_Extended_Levels_36:
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	dynmultipush Roxanne_Extended_Levels_Text_9, 1
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	dynmultipush Roxanne_Extended_Levels_Text_10, MULTI_B_PRESSED
# 182 "data/maps/RustboroCity_Gym/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Roxanne_Extended_Levels_42
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
	switch VAR_RESULT
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	case 9, Roxanne_Extended_Levels_45
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	case 8, Roxanne_Extended_Levels_46
# 206 "data/maps/RustboroCity_Gym/scripts.pory"
	case 7, Roxanne_Extended_Levels_47
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	case 6, Roxanne_Extended_Levels_48
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	case 5, Roxanne_Extended_Levels_49
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	case 4, Roxanne_Extended_Levels_50
# 238 "data/maps/RustboroCity_Gym/scripts.pory"
	case 3, Roxanne_Extended_Levels_51
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	case 2, Roxanne_Extended_Levels_52
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	case 1, Roxanne_Extended_Levels_53
	return

Roxanne_Extended_Levels_2:
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	dynmultipush Roxanne_Extended_Levels_Text_1, 9
	goto Roxanne_Extended_Levels_1

Roxanne_Extended_Levels_3:
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_CHAMPION, Roxanne_Extended_Levels_2
	goto Roxanne_Extended_Levels_1

Roxanne_Extended_Levels_7:
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	dynmultipush Roxanne_Extended_Levels_Text_2, 8
	goto Roxanne_Extended_Levels_6

Roxanne_Extended_Levels_8:
# 159 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Roxanne_Extended_Levels_7
	goto Roxanne_Extended_Levels_6

Roxanne_Extended_Levels_12:
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	dynmultipush Roxanne_Extended_Levels_Text_3, 7
	goto Roxanne_Extended_Levels_11

Roxanne_Extended_Levels_13:
# 162 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Roxanne_Extended_Levels_12
	goto Roxanne_Extended_Levels_11

Roxanne_Extended_Levels_17:
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	dynmultipush Roxanne_Extended_Levels_Text_4, 6
	goto Roxanne_Extended_Levels_16

Roxanne_Extended_Levels_18:
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Roxanne_Extended_Levels_17
	goto Roxanne_Extended_Levels_16

Roxanne_Extended_Levels_22:
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	dynmultipush Roxanne_Extended_Levels_Text_5, 5
	goto Roxanne_Extended_Levels_21

Roxanne_Extended_Levels_23:
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Roxanne_Extended_Levels_22
	goto Roxanne_Extended_Levels_21

Roxanne_Extended_Levels_27:
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	dynmultipush Roxanne_Extended_Levels_Text_6, 4
	goto Roxanne_Extended_Levels_26

Roxanne_Extended_Levels_28:
# 171 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Roxanne_Extended_Levels_27
	goto Roxanne_Extended_Levels_26

Roxanne_Extended_Levels_32:
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	dynmultipush Roxanne_Extended_Levels_Text_7, 3
	goto Roxanne_Extended_Levels_31

Roxanne_Extended_Levels_33:
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Roxanne_Extended_Levels_32
	goto Roxanne_Extended_Levels_31

Roxanne_Extended_Levels_37:
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
	dynmultipush Roxanne_Extended_Levels_Text_8, 2
	goto Roxanne_Extended_Levels_36

Roxanne_Extended_Levels_38:
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Roxanne_Extended_Levels_37
	goto Roxanne_Extended_Levels_36

Roxanne_Extended_Levels_42:
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox Roxanne_Challenge_Exit, MSGBOX_NPC
	return

Roxanne_Extended_Levels_45:
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_MASTER, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, Roxanne_Master_Defeated, NO_MUSIC
	return

Roxanne_Extended_Levels_46:
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_double TRAINER_ROXANNE_ULTRA, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, Roxanne_Ultra_Defeated, NO_MUSIC
	return

Roxanne_Extended_Levels_47:
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_HYPER, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, Roxanne_Hyper_Defeated, NO_MUSIC
	return

Roxanne_Extended_Levels_48:
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_PLATINUM, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, Roxanne_Platinum_Defeated, NO_MUSIC
	return

Roxanne_Extended_Levels_49:
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_DIAMOND, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, Roxanne_Diamond_Defeated, NO_MUSIC
	return

Roxanne_Extended_Levels_50:
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_GOLD, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, Roxanne_Gold_Defeated, NO_MUSIC
	return

Roxanne_Extended_Levels_51:
# 239 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_SILVER, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, Roxanne_Silver_Defeated, NO_MUSIC
	return

Roxanne_Extended_Levels_52:
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_BRONZE, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, Roxanne_Bronze_Defeated, NO_MUSIC
	return

Roxanne_Extended_Levels_53:
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_NORMAL, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, Roxanne_Bronze_Defeated, NO_MUSIC
	return


Roxanne_Normal_Defeated:
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_STONE_BADGE_LEVEL, 0
	goto_if_eq Roxanne_Normal_Defeated_2
Roxanne_Normal_Defeated_1:
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox Roxanne_Challenge_Exit
	return

Roxanne_Normal_Defeated_2:
# 273 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_STONE_BADGE_LEVEL, 1
	goto Roxanne_Normal_Defeated_1


Roxanne_Bronze_Defeated:
# 280 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_STONE_BADGE_LEVEL, 1
	goto_if_eq Roxanne_Bronze_Defeated_2
Roxanne_Bronze_Defeated_1:
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox Roxanne_Challenge_Exit
	return

Roxanne_Bronze_Defeated_2:
# 281 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_STONE_BADGE_LEVEL, 1
	goto Roxanne_Bronze_Defeated_1


Roxanne_Silver_Defeated:
# 288 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_STONE_BADGE_LEVEL, 2
	goto_if_eq Roxanne_Silver_Defeated_2
Roxanne_Silver_Defeated_1:
# 291 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox Roxanne_Challenge_Exit
	return

Roxanne_Silver_Defeated_2:
# 289 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_STONE_BADGE_LEVEL, 1
	goto Roxanne_Silver_Defeated_1


Roxanne_Gold_Defeated:
# 296 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_STONE_BADGE_LEVEL, 3
	goto_if_eq Roxanne_Gold_Defeated_2
Roxanne_Gold_Defeated_1:
# 299 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox Roxanne_Challenge_Exit
	return

Roxanne_Gold_Defeated_2:
# 297 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_STONE_BADGE_LEVEL, 1
	goto Roxanne_Gold_Defeated_1


Roxanne_Diamond_Defeated:
# 304 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_STONE_BADGE_LEVEL, 4
	goto_if_eq Roxanne_Diamond_Defeated_2
Roxanne_Diamond_Defeated_1:
# 307 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox Roxanne_Challenge_Exit
	return

Roxanne_Diamond_Defeated_2:
# 305 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_STONE_BADGE_LEVEL, 1
	goto Roxanne_Diamond_Defeated_1


Roxanne_Platinum_Defeated:
# 312 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_STONE_BADGE_LEVEL, 5
	goto_if_eq Roxanne_Platinum_Defeated_2
Roxanne_Platinum_Defeated_1:
# 315 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox Roxanne_Challenge_Exit
	return

Roxanne_Platinum_Defeated_2:
# 313 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_STONE_BADGE_LEVEL, 1
	goto Roxanne_Platinum_Defeated_1


Roxanne_Ultra_Defeated:
# 320 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_STONE_BADGE_LEVEL, 6
	goto_if_eq Roxanne_Ultra_Defeated_2
Roxanne_Ultra_Defeated_1:
# 323 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox Roxanne_Challenge_Exit
	return

Roxanne_Ultra_Defeated_2:
# 321 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_STONE_BADGE_LEVEL, 1
	goto Roxanne_Ultra_Defeated_1


Roxanne_Hyper_Defeated:
# 328 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_STONE_BADGE_LEVEL, 7
	goto_if_eq Roxanne_Hyper_Defeated_2
Roxanne_Hyper_Defeated_1:
# 331 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox Roxanne_Challenge_Exit
	return

Roxanne_Hyper_Defeated_2:
# 329 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_STONE_BADGE_LEVEL, 1
	goto Roxanne_Hyper_Defeated_1


Roxanne_Master_Defeated:
# 336 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_STONE_BADGE_LEVEL, 8
	goto_if_eq Roxanne_Master_Defeated_2
Roxanne_Master_Defeated_1:
# 339 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox Roxanne_Challenge_Exit
	return

Roxanne_Master_Defeated_2:
# 337 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_STONE_BADGE_LEVEL, 1
	goto Roxanne_Master_Defeated_1


RustboroCity_Gym_EventScript_RegisterRoxanne::
# 344 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 345 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 346 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 347 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 348 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 349 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne
# 350 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 351 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 352 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 353 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 354 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 355 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
	end


RustboroCity_Gym_EventScript_GiveRockTomb::
# 366 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 367 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_Gym_EventScript_GiveRockTomb_2
RustboroCity_Gym_EventScript_GiveRockTomb_1:
# 370 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_RECEIVED_ANY_TM, RustboroCity_Gym_EventScript_GiveRockTomb_5
# 373 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb_WithReminder
RustboroCity_Gym_EventScript_GiveRockTomb_4:
	return

RustboroCity_Gym_EventScript_GiveRockTomb_2:
# 368 "data/maps/RustboroCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto RustboroCity_Gym_EventScript_GiveRockTomb_1

RustboroCity_Gym_EventScript_GiveRockTomb_5:
# 371 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb
	goto RustboroCity_Gym_EventScript_GiveRockTomb_4


RustboroCity_Gym_EventScript_RoxanneDefeated::
# 411 "data/maps/RustboroCity_Gym/scripts.pory"
	switch VAR_STONE_BADGE_LEVEL
# 412 "data/maps/RustboroCity_Gym/scripts.pory"
	case 9, RustboroCity_Gym_EventScript_RoxanneDefeated_3
# 413 "data/maps/RustboroCity_Gym/scripts.pory"
	case 8, RustboroCity_Gym_EventScript_RoxanneDefeated_4
# 414 "data/maps/RustboroCity_Gym/scripts.pory"
	case 7, RustboroCity_Gym_EventScript_RoxanneDefeated_5
# 415 "data/maps/RustboroCity_Gym/scripts.pory"
	case 6, RustboroCity_Gym_EventScript_RoxanneDefeated_6
# 416 "data/maps/RustboroCity_Gym/scripts.pory"
	case 5, RustboroCity_Gym_EventScript_RoxanneDefeated_7
# 417 "data/maps/RustboroCity_Gym/scripts.pory"
	case 4, RustboroCity_Gym_EventScript_RoxanneDefeated_8
# 418 "data/maps/RustboroCity_Gym/scripts.pory"
	case 3, RustboroCity_Gym_EventScript_RoxanneDefeated_9
# 419 "data/maps/RustboroCity_Gym/scripts.pory"
	case 2, RustboroCity_Gym_EventScript_RoxanneDefeated_10
# 420 "data/maps/RustboroCity_Gym/scripts.pory"
	case 1, RustboroCity_Gym_EventScript_RoxanneDefeated_11
# 421 "data/maps/RustboroCity_Gym/scripts.pory"
	case 0, RustboroCity_Gym_EventScript_RoxanneDefeated_12
RustboroCity_Gym_EventScript_RoxanneDefeated_1:
# 423 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	end

RustboroCity_Gym_EventScript_RoxanneDefeated_3:
# 412 "data/maps/RustboroCity_Gym/scripts.pory"
	call RoxanneDefeat_Master
	goto RustboroCity_Gym_EventScript_RoxanneDefeated_1

RustboroCity_Gym_EventScript_RoxanneDefeated_4:
# 413 "data/maps/RustboroCity_Gym/scripts.pory"
	call RoxanneDefeat_Master
	goto RustboroCity_Gym_EventScript_RoxanneDefeated_1

RustboroCity_Gym_EventScript_RoxanneDefeated_5:
# 414 "data/maps/RustboroCity_Gym/scripts.pory"
	call RoxanneDefeat_Ultra
	goto RustboroCity_Gym_EventScript_RoxanneDefeated_1

RustboroCity_Gym_EventScript_RoxanneDefeated_6:
# 415 "data/maps/RustboroCity_Gym/scripts.pory"
	call RoxanneDefeat_Hyper
	goto RustboroCity_Gym_EventScript_RoxanneDefeated_1

RustboroCity_Gym_EventScript_RoxanneDefeated_7:
# 416 "data/maps/RustboroCity_Gym/scripts.pory"
	call RoxanneDefeat_Platinum
	goto RustboroCity_Gym_EventScript_RoxanneDefeated_1

RustboroCity_Gym_EventScript_RoxanneDefeated_8:
# 417 "data/maps/RustboroCity_Gym/scripts.pory"
	call RoxanneDefeat_Diamond
	goto RustboroCity_Gym_EventScript_RoxanneDefeated_1

RustboroCity_Gym_EventScript_RoxanneDefeated_9:
# 418 "data/maps/RustboroCity_Gym/scripts.pory"
	call RoxanneDefeat_Gold
	goto RustboroCity_Gym_EventScript_RoxanneDefeated_1

RustboroCity_Gym_EventScript_RoxanneDefeated_10:
# 419 "data/maps/RustboroCity_Gym/scripts.pory"
	call RoxanneDefeat_Bronze
	goto RustboroCity_Gym_EventScript_RoxanneDefeated_1

RustboroCity_Gym_EventScript_RoxanneDefeated_11:
# 420 "data/maps/RustboroCity_Gym/scripts.pory"
	call RoxanneDefeat_Silver
	goto RustboroCity_Gym_EventScript_RoxanneDefeated_1

RustboroCity_Gym_EventScript_RoxanneDefeated_12:
# 421 "data/maps/RustboroCity_Gym/scripts.pory"
	call RoxanneDefeat_Normal
	goto RustboroCity_Gym_EventScript_RoxanneDefeated_1


RoxanneDefeat_Normal:
# 428 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge_Normal
# 429 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 430 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 431 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis
# 434 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 435 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_STONE_BADGE_LEVEL, 1
# 438 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 441 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 442 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 445 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 446 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_eq RoxanneDefeat_Normal_2
RoxanneDefeat_Normal_1:
# 450 "data/maps/RustboroCity_Gym/scripts.pory"
	call RustboroCity_Gym_EventScript_GiveRockTomb
	return

RoxanneDefeat_Normal_2:
# 447 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_ReadyPetalburgGymForBattle
	goto RoxanneDefeat_Normal_1


RoxanneDefeat_Bronze:
# 455 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_STONE_BADGE_LEVEL, 1
	return


RoxanneDefeat_Silver:
# 460 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_STONE_BADGE_LEVEL, 1
	return


RoxanneDefeat_Gold:
# 465 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_STONE_BADGE_LEVEL, 1
	return


RoxanneDefeat_Diamond:
# 470 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_STONE_BADGE_LEVEL, 1
	return


RoxanneDefeat_Platinum:
# 475 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_STONE_BADGE_LEVEL, 1
	return


RoxanneDefeat_Ultra:
# 480 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_STONE_BADGE_LEVEL, 1
	return


RoxanneDefeat_Hyper:
# 485 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_STONE_BADGE_LEVEL, 1
	return


RoxanneDefeat_Master:
# 490 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_STONE_BADGE_LEVEL, 1
	return


RoxanneDefeat_PostMaster:
	return


RustboroCity_Gym_Mart::
# 556 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 557 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 558 "data/maps/RustboroCity_Gym/scripts.pory"
	message gText_HowMayIServeYou
# 559 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 560 "data/maps/RustboroCity_Gym/scripts.pory"
	switch VAR_STONE_BADGE_LEVEL
# 561 "data/maps/RustboroCity_Gym/scripts.pory"
	case 9, RustboroCity_Gym_Mart_3
# 562 "data/maps/RustboroCity_Gym/scripts.pory"
	case 8, RustboroCity_Gym_Mart_4
# 563 "data/maps/RustboroCity_Gym/scripts.pory"
	case 7, RustboroCity_Gym_Mart_5
# 564 "data/maps/RustboroCity_Gym/scripts.pory"
	case 6, RustboroCity_Gym_Mart_6
# 565 "data/maps/RustboroCity_Gym/scripts.pory"
	case 5, RustboroCity_Gym_Mart_7
# 566 "data/maps/RustboroCity_Gym/scripts.pory"
	case 4, RustboroCity_Gym_Mart_8
# 567 "data/maps/RustboroCity_Gym/scripts.pory"
	case 3, RustboroCity_Gym_Mart_9
# 568 "data/maps/RustboroCity_Gym/scripts.pory"
	case 2, RustboroCity_Gym_Mart_10
# 569 "data/maps/RustboroCity_Gym/scripts.pory"
	case 1, RustboroCity_Gym_Mart_11
# 570 "data/maps/RustboroCity_Gym/scripts.pory"
	case 0, RustboroCity_Gym_Mart_12
# 571 "data/maps/RustboroCity_Gym/scripts.pory"
	pokemart Basic_Gym_Mart
RustboroCity_Gym_Mart_1:
# 573 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox gText_PleaseComeAgain
# 574 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	end

RustboroCity_Gym_Mart_3:
# 561 "data/maps/RustboroCity_Gym/scripts.pory"
	pokemart RustboroGym_Master_Mart
	goto RustboroCity_Gym_Mart_1

RustboroCity_Gym_Mart_4:
# 562 "data/maps/RustboroCity_Gym/scripts.pory"
	pokemart RustboroGym_Silver_Mart
	goto RustboroCity_Gym_Mart_1

RustboroCity_Gym_Mart_5:
# 563 "data/maps/RustboroCity_Gym/scripts.pory"
	pokemart RustboroGym_Silver_Mart
	goto RustboroCity_Gym_Mart_1

RustboroCity_Gym_Mart_6:
# 564 "data/maps/RustboroCity_Gym/scripts.pory"
	pokemart RustboroGym_Silver_Mart
	goto RustboroCity_Gym_Mart_1

RustboroCity_Gym_Mart_7:
# 565 "data/maps/RustboroCity_Gym/scripts.pory"
	pokemart RustboroGym_Silver_Mart
	goto RustboroCity_Gym_Mart_1

RustboroCity_Gym_Mart_8:
# 566 "data/maps/RustboroCity_Gym/scripts.pory"
	pokemart RustboroGym_Silver_Mart
	goto RustboroCity_Gym_Mart_1

RustboroCity_Gym_Mart_9:
# 567 "data/maps/RustboroCity_Gym/scripts.pory"
	pokemart RustboroGym_Silver_Mart
	goto RustboroCity_Gym_Mart_1

RustboroCity_Gym_Mart_10:
# 568 "data/maps/RustboroCity_Gym/scripts.pory"
	pokemart RustboroGym_Bronze_Mart
	goto RustboroCity_Gym_Mart_1

RustboroCity_Gym_Mart_11:
# 569 "data/maps/RustboroCity_Gym/scripts.pory"
	pokemart RustboroGym_Normal_Mart
	goto RustboroCity_Gym_Mart_1

RustboroCity_Gym_Mart_12:
# 570 "data/maps/RustboroCity_Gym/scripts.pory"
	pokemart Basic_Gym_Mart
	goto RustboroCity_Gym_Mart_1


	.align 2
# 590 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroGym_Normal_Mart:
# 591 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 592 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_SODA_POP
# 593 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_LEMONADE
# 596 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_HARD_STONE
# 597 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_TM_ROCK_TOMB
	.2byte ITEM_NONE

	.align 2
# 600 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroGym_Bronze_Mart:
# 601 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 602 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_SODA_POP
# 603 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_LEMONADE
# 604 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_HARD_STONE
# 605 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_TM_ROCK_TOMB
# 608 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_ROCK_GEM
# 609 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
	.2byte ITEM_NONE

	.align 2
# 612 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroGym_Silver_Mart:
# 613 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 614 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_SODA_POP
# 615 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_LEMONADE
# 616 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_HARD_STONE
# 617 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_TM_ROCK_TOMB
# 618 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_ROCK_GEM
# 619 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 622 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_COALOSSITE
	.2byte ITEM_NONE

	.align 2
# 625 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroGym_Master_Mart:
# 626 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 627 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_SODA_POP
# 628 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_LEMONADE
# 629 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_HARD_STONE
# 630 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_TM_ROCK_TOMB
# 631 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_ROCK_GEM
# 632 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 633 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_COALOSSITE
# 634 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 635 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 636 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 637 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 640 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_ROCK_MEMORY
# 641 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_CORNERSTONE_MASK
# 642 "data/maps/RustboroCity_Gym/scripts.pory"
	.2byte ITEM_STONE_PLATE
	.2byte ITEM_NONE

RustboroCity_Gym_EventScript_GymStatue::
# 646 "data/maps/RustboroCity_Gym/scripts.pory"
	switch VAR_STONE_BADGE_LEVEL
# 647 "data/maps/RustboroCity_Gym/scripts.pory"
	case 0, RustboroCity_Gym_EventScript_GymStatue_3
# 648 "data/maps/RustboroCity_Gym/scripts.pory"
	case 1, RustboroCity_Gym_EventScript_GymStatue_4
# 649 "data/maps/RustboroCity_Gym/scripts.pory"
	case 2, RustboroCity_Gym_EventScript_GymStatue_5
# 650 "data/maps/RustboroCity_Gym/scripts.pory"
	case 3, RustboroCity_Gym_EventScript_GymStatue_6
# 651 "data/maps/RustboroCity_Gym/scripts.pory"
	case 4, RustboroCity_Gym_EventScript_GymStatue_7
# 652 "data/maps/RustboroCity_Gym/scripts.pory"
	case 5, RustboroCity_Gym_EventScript_GymStatue_8
# 653 "data/maps/RustboroCity_Gym/scripts.pory"
	case 6, RustboroCity_Gym_EventScript_GymStatue_9
# 654 "data/maps/RustboroCity_Gym/scripts.pory"
	case 7, RustboroCity_Gym_EventScript_GymStatue_10
# 655 "data/maps/RustboroCity_Gym/scripts.pory"
	case 8, RustboroCity_Gym_EventScript_GymStatue_11
# 656 "data/maps/RustboroCity_Gym/scripts.pory"
	case 9, RustboroCity_Gym_EventScript_GymStatue_12
RustboroCity_Gym_EventScript_GymStatue_1:
	return

RustboroCity_Gym_EventScript_GymStatue_3:
# 647 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_SIGN
	goto RustboroCity_Gym_EventScript_GymStatue_1

RustboroCity_Gym_EventScript_GymStatue_4:
# 648 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_Certified_Normal, MSGBOX_SIGN
	goto RustboroCity_Gym_EventScript_GymStatue_1

RustboroCity_Gym_EventScript_GymStatue_5:
# 649 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_Certified_Bronze, MSGBOX_SIGN
	goto RustboroCity_Gym_EventScript_GymStatue_1

RustboroCity_Gym_EventScript_GymStatue_6:
# 650 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_Certified_Silver, MSGBOX_SIGN
	goto RustboroCity_Gym_EventScript_GymStatue_1

RustboroCity_Gym_EventScript_GymStatue_7:
# 651 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_Certified_Gold, MSGBOX_SIGN
	goto RustboroCity_Gym_EventScript_GymStatue_1

RustboroCity_Gym_EventScript_GymStatue_8:
# 652 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_Certified_Diamond, MSGBOX_SIGN
	goto RustboroCity_Gym_EventScript_GymStatue_1

RustboroCity_Gym_EventScript_GymStatue_9:
# 653 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_Certified_Platinum, MSGBOX_SIGN
	goto RustboroCity_Gym_EventScript_GymStatue_1

RustboroCity_Gym_EventScript_GymStatue_10:
# 654 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_Certified_Ultra, MSGBOX_SIGN
	goto RustboroCity_Gym_EventScript_GymStatue_1

RustboroCity_Gym_EventScript_GymStatue_11:
# 655 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_Certified_Hyper, MSGBOX_SIGN
	goto RustboroCity_Gym_EventScript_GymStatue_1

RustboroCity_Gym_EventScript_GymStatue_12:
# 656 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_Certified_Master, MSGBOX_SIGN
	goto RustboroCity_Gym_EventScript_GymStatue_1


Roxanne_Extended_Levels_Text_0:
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "What Gym Rank would you like to battle?$"

Roxanne_Extended_Levels_Text_1:
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Master$"

Roxanne_Extended_Levels_Text_2:
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hyper$"

Roxanne_Extended_Levels_Text_3:
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Ultra$"

Roxanne_Extended_Levels_Text_4:
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Platinum$"

Roxanne_Extended_Levels_Text_5:
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Diamond$"

Roxanne_Extended_Levels_Text_6:
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Gold$"

Roxanne_Extended_Levels_Text_7:
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Silver$"

Roxanne_Extended_Levels_Text_8:
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Bronze$"

Roxanne_Extended_Levels_Text_9:
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Normal$"

Roxanne_Extended_Levels_Text_10:
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Cancel$"

RustboroCity_Gym_Text_GymGuideAdvice:
# 14 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
	.string "Listen, my friend!\n"
	.string "Would you like to become the Champion?\p"
	.string "I'm no Trainer, not me, but I can\n"
	.string "sure give you winning advice.\p"
	.string "That's settled, then! We'll aim for the\n"
	.string "Pokémon Championship together!\p"
	.string "It's your job as a Trainer to collect\n"
	.string "Gym Badges, am I right?\p"
	.string "But Gym Leaders aren't pushovers!\p"
	.string "And that's where I come in!\n"
	.string "I'm here to provide expert advice!\p"
	.string "Roxanne, the Gym Leader, is a user\n"
	.string "of Rock-type Pokémon.\p"
	.string "The Rock type is very durable, but\n"
	.string "it can't stand Water-type and\l"
	.string "Grass-type moves.\p"
	.string "Come see me afterwards, if you beat\n"
	.string "the Gym Leader.\p"
	.string "Well, go for it!$"

RustboroCity_Gym_Text_GymGuidePostVictory:
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
	.string "My cheering must've worked!\p"
	.string "Great!\n"
	.string "Check your Trainer Card.\p"
	.string "The Stone Badge you got should be\n"
	.string "properly recorded on it.\p"
	.string "In other words…\p"
	.string "You've climbed the first step on\n"
	.string "the stairs to the Championship!\p"
	.string "That's got to feel awesome!$"

RustboroCity_Gym_Text_JoshIntro:
# 56 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us Gym Trainers lightly!\n"
	.string "I'll show you why we're better!$"

RustboroCity_Gym_Text_JoshDefeat:
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"

RustboroCity_Gym_Text_JoshPostBattle:
# 65 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the Rock\n"
	.string "type's terrifying power!$"

RustboroCity_Gym_Text_TommyIntro:
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
	.string "a chance against Roxanne!$"

RustboroCity_Gym_Text_TommyDefeat:
# 81 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"

RustboroCity_Gym_Text_TommyPostBattle:
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne is stronger than me by\n"
	.string "several times.\p"
	.string "You'd better be on your guard!$"

RustboroCity_Gym_Text_MarcIntro:
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
	.string "but so what?\p"
	.string "My Rock Pokémon need room to\n"
	.string "rampage!$"

RustboroCity_Gym_Text_MarcDefeat:
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
	.string "Our challenger is one feisty customer!$"

RustboroCity_Gym_Text_MarcPostBattle:
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our Leader.\p"
	.string "It took smarts and sense for her to\n"
	.string "pick the Rock type at her young age.$"

RustboroCity_Gym_Text_RoxanneIntro:
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: Hello, I am Roxanne, the\n"
	.string "Rustboro Pokémon Gym Leader.\p"
	.string "I became a Gym Leader so that I might\n"
	.string "apply what I learned at the Pokémon\l"
	.string "Trainer's School in battle.\p"
	.string "Would you kindly demonstrate how you\n"
	.string "battle, and with which Pokémon?$"

RustboroCity_Gym_Text_RoxanneDefeat:
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: So…\n"
	.string "I lost…\p"
	.string "It seems that I still have much more\n"
	.string "to learn…\p"
	.string "I understand.\p"
	.string "The Pokémon League's rules state\n"
	.string "that Trainers are to be given this\l"
	.string "if they defeat a Gym Leader.\p"
	.string "Please accept the official Pokémon\n"
	.string "League Stone Badge.$"

Roxanne_Challenge_Exit:
# 265 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: Come back any time if you want\n"
	.string "a rematch.$"

RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 359 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: The Stone Badge allow you to\n"
	.string "use the HM move Cut outside of battle.\p"
	.string "Please take this with you, too.$"

RustboroCity_Gym_Text_ExplainRockTomb:
# 378 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: That Technical Machine, TM39,\n"
	.string "contains Rock Tomb.\p"
	.string "It not only inflicts damage by dropping\n"
	.string "rocks, it also lowers Speed.\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a Pokémon.\p"
	.string "You can now buy more copies of the\n"
	.string "Rock Tomb TM, at the Rustboro Gym Store.$"

RustboroCity_Gym_Text_ExplainRockTomb_WithReminder:
# 388 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That Technical Machine, TM39,\n"
	.string "contains Rock Tomb.\p"
	.string "It not only inflicts damage by dropping\n"
	.string "rocks, it also lowers Speed.\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a Pokémon.\p"
	.string "Remember, a TM can be used only once,\n"
	.string "so think before you use it."
	.string "You can now buy more copies of the\n"
	.string "Rock Tomb TM, at the Rustboro Gym Store.$"

RustboroCity_Gym_Text_RoxannePostBattle:
# 401 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
	.string "challenge other Gym Leaders.\p"
	.string "By battling many Trainers, you should\n"
	.string "learn many things.$"

RustboroCity_Gym_Text_RoxanneRegisterCall:
# 498 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "Roxanne: Oh, hello, {PLAYER}?\n"
	.string "This is Roxanne of Rustboro City.\p"
	.string "I heard from Brawly that you're\n"
	.string "moving up through the ranks of\l"
	.string "Trainers at an incredible clip.\p"
	.string "Well, I'd rather not think that\n"
	.string "I can't beat you.\p"
	.string "I promise, I will shape up my Gym\n"
	.string "so that you may challenge us again.\p"
	.string "I hope you'll be looking forward to\n"
	.string "that occasion as much as me!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

RustboroCity_Gym_Text_RegisteredRoxanne:
# 516 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered Gym Leader Roxanne\n"
	.string "in the PokéNav.$"

RustboroCity_Gym_Text_RoxannePreRematch:
# 521 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: I'm so glad to see you again.\n"
	.string "I'm Roxanne, the Gym Leader here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become. Let us battle!$"

RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 530 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
	.string "Again, I have lost…$"

RustboroCity_Gym_Text_RoxannePostRematch:
# 535 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: I still have much to learn\n"
	.string "when it comes to battling Pokémon.\p"
	.string "That awareness makes me love battling\n"
	.string "all that much more!$"

RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 542 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: I'm so glad to see you again.\n"
	.string "I'm Roxanne, the Gym Leader here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become…\p"
	.string "Oh, no…\n"
	.string "You only have one Pokémon with you?\p"
	.string "Please return with at least one more\n"
	.string "Pokémon.$"

RustboroCity_Gym_Text_GymStatue:
# 661 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym$"

RustboroCity_Gym_Text_Certified_Normal:
# 665 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym\p"
	.string "Normal Rank Trainers:\n"
	.string "{PLAYER}$"

RustboroCity_Gym_Text_Certified_Bronze:
# 671 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym\p"
	.string "Bronze Rank Trainers:\n"
	.string "{PLAYER}$"

RustboroCity_Gym_Text_Certified_Silver:
# 677 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym\p"
	.string "Silver Rank Trainers:\n"
	.string "{PLAYER}$"

RustboroCity_Gym_Text_Certified_Gold:
# 683 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym\p"
	.string "Gold Rank Trainers:\n"
	.string "{PLAYER}$"

RustboroCity_Gym_Text_Certified_Diamond:
# 689 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym\p"
	.string "Diamond Rank Trainers:\n"
	.string "{PLAYER}$"

RustboroCity_Gym_Text_Certified_Platinum:
# 695 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym\p"
	.string "Platinum Rank Trainers:\n"
	.string "{PLAYER}$"

RustboroCity_Gym_Text_Certified_Ultra:
# 701 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym\p"
	.string "Ultra Rank Trainers:\n"
	.string "{PLAYER}$"

RustboroCity_Gym_Text_Certified_Hyper:
# 707 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym\p"
	.string "Hyper Rank Trainers:\n"
	.string "Juan, {PLAYER}$"

RustboroCity_Gym_Text_Certified_Master:
# 713 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym\p"
	.string "Master Rank Trainers:\n"
	.string "Steven, Wallace, Red, {PLAYER}$"

RustboroCity_Gym_Text_ReceivedStoneBadge_Normal:
# 721 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the Normal Rank\n"
	.string "Stone Badge from Roxanne.$"

RustboroCity_Gym_Text_ReceivedStoneBadge_Bronze:
# 726 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the Bronze Rank\n"
	.string "Stone Badge from Roxanne.$"

RustboroCity_Gym_Text_ReceivedStoneBadge_Silver:
# 731 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the Silver Rank\n"
	.string "Stone Badge from Roxanne.$"

RustboroCity_Gym_Text_ReceivedStoneBadge_Gold:
# 736 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the Gold Rank\n"
	.string "Stone Badge from Roxanne.$"

RustboroCity_Gym_Text_ReceivedStoneBadge_Diamond:
# 741 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the Diamond Rank\n"
	.string "Stone Badge from Roxanne.$"

RustboroCity_Gym_Text_ReceivedStoneBadge_Platinum:
# 746 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the Platinum Rank\n"
	.string "Stone Badge from Roxanne.$"

RustboroCity_Gym_Text_ReceivedStoneBadge_Ultra:
# 751 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the Ultra Rank\n"
	.string "Stone Badge from Roxanne.$"

RustboroCity_Gym_Text_ReceivedStoneBadge_Hyper:
# 756 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the Hyper Rank\n"
	.string "Stone Badge from Roxanne.$"

RustboroCity_Gym_Text_ReceivedStoneBadge_Master:
# 761 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the Master Rank\n"
	.string "Stone Badge from Roxanne.$"
