Script_ProfBirch_Interact_Prior::
# 2 "data/scripts/prof_birch.pory"
	lock
# 3 "data/scripts/prof_birch.pory"
	faceplayer
# 4 "data/scripts/prof_birch.pory"
	goto_if_unset FLAG_HAS_MATCH_CALL, Script_ProfBirch_Interact_Prior_2
# 6 "data/scripts/prof_birch.pory"
	goto_if_set FLAG_ENABLE_PROF_BIRCH_MATCH_CALL, Script_ProfBirch_Interact_Prior_3
# 8 "data/scripts/prof_birch.pory"
	compare VAR_BIRCH_LAB_STATE, 5
	goto_if_eq Script_ProfBirch_Interact_Prior_4
# 11 "data/scripts/prof_birch.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Birch_RivalsGoneHome
Script_ProfBirch_Interact_Prior_1:
# 13 "data/scripts/prof_birch.pory"
	release
	end

Script_ProfBirch_Interact_Prior_2:
# 5 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Pokedex_AskForRating
	goto Script_ProfBirch_Interact_Prior_1

Script_ProfBirch_Interact_Prior_3:
# 7 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Register
	goto Script_ProfBirch_Interact_Prior_1

Script_ProfBirch_Interact_Prior_4:
# 9 "data/scripts/prof_birch.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Birch_CountlessPokemon
	goto Script_ProfBirch_Interact_Prior_1


Script_ProfBirch_Interact_Pokedex_AskForRating::
# 34 "data/scripts/prof_birch.pory"
	msgbox gBirchDexRatingText_AreYouCurious, MSGBOX_YESNO
# 35 "data/scripts/prof_birch.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_ProfBirch_Interact_Pokedex_AskForRating_2
# 38 "data/scripts/prof_birch.pory"
	msgbox gBirchDexRatingText_Cancel
Script_ProfBirch_Interact_Pokedex_AskForRating_1:
# 40 "data/scripts/prof_birch.pory"
	release
	end

Script_ProfBirch_Interact_Pokedex_AskForRating_2:
# 36 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Pokedex_Rate
	goto Script_ProfBirch_Interact_Pokedex_AskForRating_1


Script_ProfBirch_Interact_Pokedex_Rate::
# 45 "data/scripts/prof_birch.pory"
	setvar VAR_0x8004, 0
# 46 "data/scripts/prof_birch.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 47 "data/scripts/prof_birch.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 48 "data/scripts/prof_birch.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 49 "data/scripts/prof_birch.pory"
	copyvar VAR_0x800A, VAR_RESULT
# 50 "data/scripts/prof_birch.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 51 "data/scripts/prof_birch.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 52 "data/scripts/prof_birch.pory"
	msgbox gBirchDexRatingText_SoYouveSeenAndCaught
# 53 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Pokedex_Rate_Show
# 54 "data/scripts/prof_birch.pory"
	setvar VAR_0x8004, 1
# 55 "data/scripts/prof_birch.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 56 "data/scripts/prof_birch.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 57 "data/scripts/prof_birch.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 58 "data/scripts/prof_birch.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 59 "data/scripts/prof_birch.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 60 "data/scripts/prof_birch.pory"
	msgbox gBirchDexRatingText_OnANationwideBasis
	return


Script_ProfBirch_Interact_Pokedex_Rate_Show::
# 65 "data/scripts/prof_birch.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 66 "data/scripts/prof_birch.pory"
	special ShowPokedexRatingMessage
# 67 "data/scripts/prof_birch.pory"
	waitmessage
# 68 "data/scripts/prof_birch.pory"
	waitbuttonpress
	return


Script_ProfBirch_Interact_Register::
# 73 "data/scripts/prof_birch.pory"
	msgbox MatchCall_Text_BirchRegisterCall
# 74 "data/scripts/prof_birch.pory"
	closemessage
# 75 "data/scripts/prof_birch.pory"
	delay 30
# 76 "data/scripts/prof_birch.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 77 "data/scripts/prof_birch.pory"
	msgbox MatchCall_Text_RegisteredBirch
# 78 "data/scripts/prof_birch.pory"
	waitfanfare
# 79 "data/scripts/prof_birch.pory"
	closemessage
# 80 "data/scripts/prof_birch.pory"
	delay 30
# 81 "data/scripts/prof_birch.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 82 "data/scripts/prof_birch.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 83 "data/scripts/prof_birch.pory"
	release
	end


Script_ProfBirch_Interact::
# 88 "data/scripts/prof_birch.pory"
	lockall
# 89 "data/scripts/prof_birch.pory"
	faceplayer
# 90 "data/scripts/prof_birch.pory"
	compare VAR_QUEST_INTRO_STATE, 5
	goto_if_lt Script_ProfBirch_Interact_2
# 92 "data/scripts/prof_birch.pory"
	compare VAR_QUEST_INTRO_STATE, 5
	goto_if_eq Script_ProfBirch_Interact_3
# 94 "data/scripts/prof_birch.pory"
	compare VAR_QUEST_INTRO_STATE, 6
	goto_if_eq Script_ProfBirch_Interact_4
Script_ProfBirch_Interact_1:
# 97 "data/scripts/prof_birch.pory"
	release
	end

Script_ProfBirch_Interact_2:
# 91 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Early
	goto Script_ProfBirch_Interact_1

Script_ProfBirch_Interact_3:
# 93 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Starter
	goto Script_ProfBirch_Interact_1

Script_ProfBirch_Interact_4:
# 95 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Starter_ChangeSelection
	goto Script_ProfBirch_Interact_1


Script_ProfBirch_Interact_Early::
# 102 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Early
	return


Script_ProfBirch_Interact_Starter::
	checkplayergender
# 0 "data/scripts/prof_birch.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_ProfBirch_Interact_Starter_2
# 122 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Welcome_Female
Script_ProfBirch_Interact_Starter_1:
# 124 "data/scripts/prof_birch.pory"
	closemessage
# 125 "data/scripts/prof_birch.pory"
	setvar VAR_QUEST_INTRO_STATE, 6
# 126 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Starter_ChangeSelection
	return

Script_ProfBirch_Interact_Starter_2:
# 120 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Welcome_Male
	goto Script_ProfBirch_Interact_Starter_1


Script_ProfBirch_Interact_Starter_ChangeSelection::
# 187 "data/scripts/prof_birch.pory"
	goto_if_set FLAG_MONOTYPE_STARTERS, Script_ProfBirch_Interact_Starter_ChangeSelection_1
# 190 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Starter_GenBased
	return

Script_ProfBirch_Interact_Starter_ChangeSelection_1:
# 188 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Starter_TypeBased
	return


Script_ProfBirch_Interact_Starter_GenBased::
# 195 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_0, 0
# 196 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_1, 1
# 197 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_2, 2
# 198 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_3, 3
# 199 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_4, 4
# 200 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_5, 5
# 201 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_6, 6
# 202 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_7, 7
# 203 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_8, 8
# 204 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_9, MULTI_B_PRESSED
# 205 "data/scripts/prof_birch.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 207 "data/scripts/prof_birch.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne Script_ProfBirch_Interact_Starter_GenBased_2
Script_ProfBirch_Interact_Starter_GenBased_1:
# 210 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Starter_SayShowing_Gen
	return

Script_ProfBirch_Interact_Starter_GenBased_2:
# 208 "data/scripts/prof_birch.pory"
	copyvar VAR_STARTER_SELECTION, VAR_RESULT
	goto Script_ProfBirch_Interact_Starter_GenBased_1


Script_ProfBirch_Interact_Starter_TypeBased::
# 215 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starter_AnyType
# 216 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_0, 0
# 217 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_1, 1
# 218 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_2, 2
# 219 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_3, 3
# 220 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_4, 4
# 221 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_5, 5
# 222 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_6, 6
# 223 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_7, 7
# 224 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_8, 8
# 225 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_9, 9
# 226 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_10, 10
# 227 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_11, 11
# 228 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_12, 12
# 229 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_13, 13
# 230 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_14, 14
# 231 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_9, MULTI_B_PRESSED
# 232 "data/scripts/prof_birch.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 234 "data/scripts/prof_birch.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne Script_ProfBirch_Interact_Starter_TypeBased_2
Script_ProfBirch_Interact_Starter_TypeBased_1:
# 237 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Starter_SayShowing_Mono
	return

Script_ProfBirch_Interact_Starter_TypeBased_2:
# 235 "data/scripts/prof_birch.pory"
	copyvar VAR_STARTER_SELECTION, VAR_RESULT
	goto Script_ProfBirch_Interact_Starter_TypeBased_1


Script_ProfBirch_Interact_Starter_SayShowing_Gen::
# 250 "data/scripts/prof_birch.pory"
	switch VAR_STARTER_SELECTION
# 251 "data/scripts/prof_birch.pory"
	case 0, Script_ProfBirch_Interact_Starter_SayShowing_Gen_3
# 253 "data/scripts/prof_birch.pory"
	case 1, Script_ProfBirch_Interact_Starter_SayShowing_Gen_4
# 255 "data/scripts/prof_birch.pory"
	case 2, Script_ProfBirch_Interact_Starter_SayShowing_Gen_5
# 257 "data/scripts/prof_birch.pory"
	case 3, Script_ProfBirch_Interact_Starter_SayShowing_Gen_6
# 259 "data/scripts/prof_birch.pory"
	case 4, Script_ProfBirch_Interact_Starter_SayShowing_Gen_7
# 261 "data/scripts/prof_birch.pory"
	case 5, Script_ProfBirch_Interact_Starter_SayShowing_Gen_8
# 263 "data/scripts/prof_birch.pory"
	case 6, Script_ProfBirch_Interact_Starter_SayShowing_Gen_9
# 265 "data/scripts/prof_birch.pory"
	case 7, Script_ProfBirch_Interact_Starter_SayShowing_Gen_10
# 267 "data/scripts/prof_birch.pory"
	case 8, Script_ProfBirch_Interact_Starter_SayShowing_Gen_11
# 270 "data/scripts/prof_birch.pory"
	msgbox Script_ProfBirch_Interact_Starter_SayShowing_Gen_Text_0
Script_ProfBirch_Interact_Starter_SayShowing_Gen_1:
	return

Script_ProfBirch_Interact_Starter_SayShowing_Gen_3:
# 252 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Gen_1
	goto Script_ProfBirch_Interact_Starter_SayShowing_Gen_1

Script_ProfBirch_Interact_Starter_SayShowing_Gen_4:
# 254 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Gen_2
	goto Script_ProfBirch_Interact_Starter_SayShowing_Gen_1

Script_ProfBirch_Interact_Starter_SayShowing_Gen_5:
# 256 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Gen_3
	goto Script_ProfBirch_Interact_Starter_SayShowing_Gen_1

Script_ProfBirch_Interact_Starter_SayShowing_Gen_6:
# 258 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Gen_4
	goto Script_ProfBirch_Interact_Starter_SayShowing_Gen_1

Script_ProfBirch_Interact_Starter_SayShowing_Gen_7:
# 260 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Gen_5
	goto Script_ProfBirch_Interact_Starter_SayShowing_Gen_1

Script_ProfBirch_Interact_Starter_SayShowing_Gen_8:
# 262 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Gen_6
	goto Script_ProfBirch_Interact_Starter_SayShowing_Gen_1

Script_ProfBirch_Interact_Starter_SayShowing_Gen_9:
# 264 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Gen_7
	goto Script_ProfBirch_Interact_Starter_SayShowing_Gen_1

Script_ProfBirch_Interact_Starter_SayShowing_Gen_10:
# 266 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Gen_8
	goto Script_ProfBirch_Interact_Starter_SayShowing_Gen_1

Script_ProfBirch_Interact_Starter_SayShowing_Gen_11:
# 268 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Gen_9
	goto Script_ProfBirch_Interact_Starter_SayShowing_Gen_1


Script_ProfBirch_Interact_Starter_SayShowing_Mono::
# 312 "data/scripts/prof_birch.pory"
	switch VAR_STARTER_SELECTION
# 314 "data/scripts/prof_birch.pory"
	case 0, Script_ProfBirch_Interact_Starter_SayShowing_Mono_3
# 316 "data/scripts/prof_birch.pory"
	case 1, Script_ProfBirch_Interact_Starter_SayShowing_Mono_4
# 318 "data/scripts/prof_birch.pory"
	case 2, Script_ProfBirch_Interact_Starter_SayShowing_Mono_5
# 320 "data/scripts/prof_birch.pory"
	case 3, Script_ProfBirch_Interact_Starter_SayShowing_Mono_6
# 322 "data/scripts/prof_birch.pory"
	case 4, Script_ProfBirch_Interact_Starter_SayShowing_Mono_7
# 324 "data/scripts/prof_birch.pory"
	case 5, Script_ProfBirch_Interact_Starter_SayShowing_Mono_8
# 326 "data/scripts/prof_birch.pory"
	case 6, Script_ProfBirch_Interact_Starter_SayShowing_Mono_9
# 328 "data/scripts/prof_birch.pory"
	case 7, Script_ProfBirch_Interact_Starter_SayShowing_Mono_10
# 330 "data/scripts/prof_birch.pory"
	case 8, Script_ProfBirch_Interact_Starter_SayShowing_Mono_11
# 332 "data/scripts/prof_birch.pory"
	case 9, Script_ProfBirch_Interact_Starter_SayShowing_Mono_12
# 334 "data/scripts/prof_birch.pory"
	case 10, Script_ProfBirch_Interact_Starter_SayShowing_Mono_13
# 336 "data/scripts/prof_birch.pory"
	case 11, Script_ProfBirch_Interact_Starter_SayShowing_Mono_14
# 338 "data/scripts/prof_birch.pory"
	case 12, Script_ProfBirch_Interact_Starter_SayShowing_Mono_15
# 340 "data/scripts/prof_birch.pory"
	case 13, Script_ProfBirch_Interact_Starter_SayShowing_Mono_16
# 342 "data/scripts/prof_birch.pory"
	case 14, Script_ProfBirch_Interact_Starter_SayShowing_Mono_17
# 345 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Normal
Script_ProfBirch_Interact_Starter_SayShowing_Mono_1:
# 347 "data/scripts/prof_birch.pory"
	release
	return

Script_ProfBirch_Interact_Starter_SayShowing_Mono_3:
# 315 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Fighting
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_4:
# 317 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Flying
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_5:
# 319 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Poison
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_6:
# 321 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Ground
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_7:
# 323 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Rock
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_8:
# 325 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Bug
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_9:
# 327 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Ghost
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_10:
# 329 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Steel
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_11:
# 331 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Electric
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_12:
# 333 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Psychic
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_13:
# 335 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Ice
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_14:
# 337 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Dragon
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_15:
# 339 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Dark
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_16:
# 341 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Normal
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_17:
# 343 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Fairy
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1


Script_ProfBirch_Interact_Starter_GenBased_Text_0:
# 195 "data/scripts/prof_birch.pory"
	.string "Gen 1$"

Script_ProfBirch_Interact_Starter_GenBased_Text_1:
# 196 "data/scripts/prof_birch.pory"
	.string "Gen 2$"

Script_ProfBirch_Interact_Starter_GenBased_Text_2:
# 197 "data/scripts/prof_birch.pory"
	.string "Gen 3$"

Script_ProfBirch_Interact_Starter_GenBased_Text_3:
# 198 "data/scripts/prof_birch.pory"
	.string "Gen 4$"

Script_ProfBirch_Interact_Starter_GenBased_Text_4:
# 199 "data/scripts/prof_birch.pory"
	.string "Gen 5$"

Script_ProfBirch_Interact_Starter_GenBased_Text_5:
# 200 "data/scripts/prof_birch.pory"
	.string "Gen 6$"

Script_ProfBirch_Interact_Starter_GenBased_Text_6:
# 201 "data/scripts/prof_birch.pory"
	.string "Gen 7$"

Script_ProfBirch_Interact_Starter_GenBased_Text_7:
# 202 "data/scripts/prof_birch.pory"
	.string "Gen 8$"

Script_ProfBirch_Interact_Starter_GenBased_Text_8:
# 203 "data/scripts/prof_birch.pory"
	.string "Gen 9$"

Script_ProfBirch_Interact_Starter_GenBased_Text_9:
# 204 "data/scripts/prof_birch.pory"
	.string "Cancel$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_0:
# 216 "data/scripts/prof_birch.pory"
	.string "Fighting$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_1:
# 217 "data/scripts/prof_birch.pory"
	.string "Flying$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_2:
# 218 "data/scripts/prof_birch.pory"
	.string "Poison$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_3:
# 219 "data/scripts/prof_birch.pory"
	.string "Ground$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_4:
# 220 "data/scripts/prof_birch.pory"
	.string "Rock$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_5:
# 221 "data/scripts/prof_birch.pory"
	.string "Bug$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_6:
# 222 "data/scripts/prof_birch.pory"
	.string "Ghost$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_7:
# 223 "data/scripts/prof_birch.pory"
	.string "Steel$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_8:
# 224 "data/scripts/prof_birch.pory"
	.string "Electric$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_9:
# 225 "data/scripts/prof_birch.pory"
	.string "Psychic$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_10:
# 226 "data/scripts/prof_birch.pory"
	.string "Ice$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_11:
# 227 "data/scripts/prof_birch.pory"
	.string "Dragon$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_12:
# 228 "data/scripts/prof_birch.pory"
	.string "Dark$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_13:
# 229 "data/scripts/prof_birch.pory"
	.string "Normal$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_14:
# 230 "data/scripts/prof_birch.pory"
	.string "Fairy$"

Script_ProfBirch_Interact_Starter_SayShowing_Gen_Text_0:
# 270 "data/scripts/prof_birch.pory"
	.string "Now showing starters.$"

Text_LittlerootTown_ProfessorBirchsLab_Birch_CountlessPokemon:
# 17 "data/scripts/prof_birch.pory"
	.string "Prof. Birch: Countless Pokémon\n"
	.string "await you!\p"
	.string "Argh, I'm getting the itch to get out\n"
	.string "and do fieldwork again!$"

Text_LittlerootTown_ProfessorBirchsLab_Birch_RivalsGoneHome:
# 24 "data/scripts/prof_birch.pory"
	.string "Prof. Birch: {RIVAL}?\n"
	.string "Gone home, I think.\p"
	.string "Or maybe that kid's scrabbling around\n"
	.string "in tall grass again somewhere…\p"
	.string "If you or your Pokémon get tired,\n"
	.string "you should get some rest at home.$"

Text_ProfBirch_Early:
# 105 "data/scripts/prof_birch.pory"
	.string "Prof. Birch: Oh… Um…\p"
	.string "Hi there, I am Prof. Birch.\n"
	.string "its nice to meet you I have heard\l"
	.string "all about you from your Mom.\p"
	.string "Sorry, I wasn't expecting you\n"
	.string "until after you finished moving in.\l"
	.string "I'm afraid I am still in the midst\l"
	.string "of setting things up.\p"
	.string "Come back once you finish moving in.\n"
	.string "And say Hi to your Mom for me.$"

Text_ProfBirch_Welcome_Male:
# 130 "data/scripts/prof_birch.pory"
	.string "Prof. Birch: Hello there!\n"
	.string "I'm Prof. Birch, and you must\l"
	.string "be {PLAYER}. I have heard alot\l"
	.string "about you from your Mom.\p"
	.string "You just missed my daughter, {RIVAL},\n"
	.string "she stopped by and grabbed one of my\l"
	.string "starters before rushing out of here.\p"
	.string "I told her to be on the lookout for a\n"
	.string "trainer named {PLAYER}, who just moved\l"
	.string "into the house next door!\p"
	.string "I hope the two of you can be friends\n"
	.string "who can start a new Pokémon journey\l"
	.string "together.\p"
	.string "How about this, I'll give you one of\n"
	.string "these Starter Pokémon, and then if\l"
	.string "you can beat {RIVAL} with your Pokémon.\l"
	.string "Come back and I'll give you a Pokédex!\p"
	.string "I'll tell you which Starter she chose\n"
	.string "after you pick yours, it wouldn't be\l"
	.string "fair if you knew before you picked!\p"
	.string "I can let you choose from any\n"
	.string "Generation of Starter Pokémon, just\l"
	.string "ask me if you want to change them.\l"
	.string "Also my aide might be able to tell\l"
	.string "you more about each starter choice.$"

Text_ProfBirch_Welcome_Female:
# 158 "data/scripts/prof_birch.pory"
	.string "Prof. Birch: Hello there!\n"
	.string "I'm Prof. Birch, and you must\l"
	.string "be {PLAYER}. I have heard alot\l"
	.string "about you from your Mom.\p"
	.string "You just missed my son, {RIVAL},\n"
	.string "he stopped by and grabbed one of my\l"
	.string "starters before rushing out of here.\p"
	.string "I told him to be on the lookout for a\n"
	.string "trainer named {PLAYER}, who just moved\l"
	.string "into the house next door!\p"
	.string "I hope the two of you can be friends\n"
	.string "who can start a new Pokémon journey\l"
	.string "together.\p"
	.string "How about this, I'll give you one of\n"
	.string "these Starter Pokémon, and then if\l"
	.string "you can beat {RIVAL} with your Pokémon.\l"
	.string "Come back and I'll give you a Pokédex!\p"
	.string "I'll tell you which Starter he chose\n"
	.string "after you pick yours, it wouldn't be\l"
	.string "fair if you knew before you picked!\p"
	.string "I can let you choose from any\n"
	.string "Generation of Starter Pokémon, just\l"
	.string "ask me if you want to change them.\l"
	.string "Also my aide might be able to tell\l"
	.string "you more about each starter choice.$"

Text_ProfBirch_Starter_AnyType:
# 241 "data/scripts/prof_birch.pory"
	.string "I can let you choose from any\n"
	.string "Type of Starter Pokémon, just\l"
	.string "ask me if you want to change them.\l"
	.string "Also my aide might be able to tell\l"
	.string "you more about each starter choice.$"

Text_ProfBirch_Starters_Gen_1:
# 275 "data/scripts/prof_birch.pory"
	.string "Showing starters for Gen 1.$"

Text_ProfBirch_Starters_Gen_2:
# 279 "data/scripts/prof_birch.pory"
	.string "Showing starters for Gen 2.$"

Text_ProfBirch_Starters_Gen_3:
# 283 "data/scripts/prof_birch.pory"
	.string "Showing starters for Gen 3.$"

Text_ProfBirch_Starters_Gen_4:
# 287 "data/scripts/prof_birch.pory"
	.string "Showing starters for Gen 4.$"

Text_ProfBirch_Starters_Gen_5:
# 291 "data/scripts/prof_birch.pory"
	.string "Showing starters for Gen 5.$"

Text_ProfBirch_Starters_Gen_6:
# 295 "data/scripts/prof_birch.pory"
	.string "Showing starters for Gen 6.$"

Text_ProfBirch_Starters_Gen_7:
# 299 "data/scripts/prof_birch.pory"
	.string "Showing starters for Gen 7.$"

Text_ProfBirch_Starters_Gen_8:
# 303 "data/scripts/prof_birch.pory"
	.string "Showing starters for Gen 8.$"

Text_ProfBirch_Starters_Gen_9:
# 307 "data/scripts/prof_birch.pory"
	.string "Showing starters for Gen 9.$"

Text_ProfBirch_Starters_Mono_Fighting:
# 351 "data/scripts/prof_birch.pory"
	.string "Showing Fighting-type starters.$"

Text_ProfBirch_Starters_Mono_Flying:
# 355 "data/scripts/prof_birch.pory"
	.string "Showing Flying-type starters.$"

Text_ProfBirch_Starters_Mono_Poison:
# 359 "data/scripts/prof_birch.pory"
	.string "Showing Poison-type starters.$"

Text_ProfBirch_Starters_Mono_Ground:
# 363 "data/scripts/prof_birch.pory"
	.string "Showing Ground-type starters.$"

Text_ProfBirch_Starters_Mono_Rock:
# 367 "data/scripts/prof_birch.pory"
	.string "Showing Rock-type starters.$"

Text_ProfBirch_Starters_Mono_Bug:
# 371 "data/scripts/prof_birch.pory"
	.string "Showing Bug-type starters.$"

Text_ProfBirch_Starters_Mono_Ghost:
# 375 "data/scripts/prof_birch.pory"
	.string "Showing Ghost-type starters.$"

Text_ProfBirch_Starters_Mono_Steel:
# 379 "data/scripts/prof_birch.pory"
	.string "Showing Steel-type starters.$"

Text_ProfBirch_Starters_Mono_Electric:
# 383 "data/scripts/prof_birch.pory"
	.string "Showing Electric-type starters.$"

Text_ProfBirch_Starters_Mono_Psychic:
# 387 "data/scripts/prof_birch.pory"
	.string "Showing Psychic-type starters.$"

Text_ProfBirch_Starters_Mono_Ice:
# 391 "data/scripts/prof_birch.pory"
	.string "Showing Ice-type starters.$"

Text_ProfBirch_Starters_Mono_Dragon:
# 395 "data/scripts/prof_birch.pory"
	.string "Showing Dragon-type starters.$"

Text_ProfBirch_Starters_Mono_Dark:
# 399 "data/scripts/prof_birch.pory"
	.string "Showing Dark-type starters.$"

Text_ProfBirch_Starters_Mono_Normal:
# 403 "data/scripts/prof_birch.pory"
	.string "Showing Normal-type starters.$"

Text_ProfBirch_Starters_Mono_Fairy:
# 407 "data/scripts/prof_birch.pory"
	.string "Showing Fairy-type starters.$"

Text_LittlerootTown_ProfessorBirchsLab_Birch_Starter_RivalsChoice_Treecko::
# 412 "data/scripts/prof_birch.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Treecko as\l"
	.string "their starter!$"

Text_LittlerootTown_ProfessorBirchsLab_Birch_Starter_RivalsChoice_Torchic::
# 418 "data/scripts/prof_birch.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Torchic as\l"
	.string "their starter!$"

Text_LittlerootTown_ProfessorBirchsLab_Birch_Starter_RivalsChoice_Mudkip::
# 424 "data/scripts/prof_birch.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Mudkip as\l"
	.string "their starter!$"

Text_LittlerootTown_ProfessorBirchsLab_Birch_Starter_ChangeGeneration::
# 430 "data/scripts/prof_birch.pory"
	.string "Which Generation of Starters would you\n"
	.string "like to see? You can change\l"
	.string "Generations as many times as you want.$"

Text_LittlerootTown_ProfessorBirchsLab_Birch_Starter_ChangeMonotype::
# 436 "data/scripts/prof_birch.pory"
	.string "Which Type of Starters would you\n"
	.string "like to see? You can change\l"
	.string "Types as many times as you want.$"
