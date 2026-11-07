Script_ProfBirch_Interact_Pokedex_AskForRating::
# 2 "data/scripts/prof_birch.pory"
	msgbox gBirchDexRatingText_AreYouCurious, MSGBOX_YESNO
# 3 "data/scripts/prof_birch.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_ProfBirch_Interact_Pokedex_AskForRating_2
# 6 "data/scripts/prof_birch.pory"
	msgbox gBirchDexRatingText_Cancel
Script_ProfBirch_Interact_Pokedex_AskForRating_1:
# 8 "data/scripts/prof_birch.pory"
	release
	end

Script_ProfBirch_Interact_Pokedex_AskForRating_2:
# 4 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Pokedex_Rate
	goto Script_ProfBirch_Interact_Pokedex_AskForRating_1


Script_ProfBirch_Interact_Pokedex_Rate::
# 13 "data/scripts/prof_birch.pory"
	setvar VAR_0x8004, 0
# 14 "data/scripts/prof_birch.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 15 "data/scripts/prof_birch.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 16 "data/scripts/prof_birch.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 17 "data/scripts/prof_birch.pory"
	copyvar VAR_0x800A, VAR_RESULT
# 18 "data/scripts/prof_birch.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 19 "data/scripts/prof_birch.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 20 "data/scripts/prof_birch.pory"
	msgbox gBirchDexRatingText_SoYouveSeenAndCaught
# 21 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Pokedex_Rate_Show
# 22 "data/scripts/prof_birch.pory"
	setvar VAR_0x8004, 1
# 23 "data/scripts/prof_birch.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 24 "data/scripts/prof_birch.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 25 "data/scripts/prof_birch.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 26 "data/scripts/prof_birch.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 27 "data/scripts/prof_birch.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 28 "data/scripts/prof_birch.pory"
	msgbox gBirchDexRatingText_OnANationwideBasis
	return


Script_ProfBirch_Interact_Pokedex_Rate_Show::
# 33 "data/scripts/prof_birch.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 34 "data/scripts/prof_birch.pory"
	special ShowPokedexRatingMessage
# 35 "data/scripts/prof_birch.pory"
	waitmessage
# 36 "data/scripts/prof_birch.pory"
	waitbuttonpress
	return


Script_ProfBirch_Interact_Register::
# 41 "data/scripts/prof_birch.pory"
	msgbox MatchCall_Text_BirchRegisterCall
# 42 "data/scripts/prof_birch.pory"
	closemessage
# 43 "data/scripts/prof_birch.pory"
	delay 30
# 44 "data/scripts/prof_birch.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 45 "data/scripts/prof_birch.pory"
	msgbox MatchCall_Text_RegisteredBirch
# 46 "data/scripts/prof_birch.pory"
	waitfanfare
# 47 "data/scripts/prof_birch.pory"
	closemessage
# 48 "data/scripts/prof_birch.pory"
	delay 30
# 49 "data/scripts/prof_birch.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 50 "data/scripts/prof_birch.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 51 "data/scripts/prof_birch.pory"
	release
	end


Script_ProfBirch_Interact::
# 56 "data/scripts/prof_birch.pory"
	lockall
# 57 "data/scripts/prof_birch.pory"
	faceplayer
# 58 "data/scripts/prof_birch.pory"
	compare VAR_QUEST_INTRO_STATE, 5
	goto_if_lt Script_ProfBirch_Interact_2
# 60 "data/scripts/prof_birch.pory"
	compare VAR_QUEST_INTRO_STATE, 5
	goto_if_eq Script_ProfBirch_Interact_3
# 62 "data/scripts/prof_birch.pory"
	compare VAR_QUEST_INTRO_STATE, 6
	goto_if_eq Script_ProfBirch_Interact_4
Script_ProfBirch_Interact_1:
# 65 "data/scripts/prof_birch.pory"
	release
	end

Script_ProfBirch_Interact_2:
# 59 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Early
	goto Script_ProfBirch_Interact_1

Script_ProfBirch_Interact_3:
# 61 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Starter
	goto Script_ProfBirch_Interact_1

Script_ProfBirch_Interact_4:
# 63 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Starter_ChangeSelection
	goto Script_ProfBirch_Interact_1


Script_ProfBirch_Interact_Early::
# 70 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Early
	return


Script_ProfBirch_Interact_Starter::
	checkplayergender
# 0 "data/scripts/prof_birch.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_ProfBirch_Interact_Starter_2
# 90 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Welcome_Female
Script_ProfBirch_Interact_Starter_1:
# 92 "data/scripts/prof_birch.pory"
	closemessage
# 93 "data/scripts/prof_birch.pory"
	setvar VAR_QUEST_INTRO_STATE, 6
# 94 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Starter_ChangeSelection
	return

Script_ProfBirch_Interact_Starter_2:
# 88 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Welcome_Male
	goto Script_ProfBirch_Interact_Starter_1


Script_ProfBirch_Interact_Starter_ChangeSelection::
# 157 "data/scripts/prof_birch.pory"
	goto_if_set FLAG_MONOTYPE_STARTERS, Script_ProfBirch_Interact_Starter_ChangeSelection_1
# 162 "data/scripts/prof_birch.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Birch_Starter_ChangeGeneration
# 163 "data/scripts/prof_birch.pory"
	waitmessage
# 164 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Starter_GenBased
	return

Script_ProfBirch_Interact_Starter_ChangeSelection_1:
# 158 "data/scripts/prof_birch.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Birch_Starter_ChangeMonotype
# 159 "data/scripts/prof_birch.pory"
	waitmessage
# 160 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Starter_TypeBased
	return


Script_ProfBirch_Interact_Starter_GenBased::
# 169 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_0, 0
# 170 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_1, 1
# 171 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_2, 2
# 172 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_3, 3
# 173 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_4, 4
# 174 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_5, 5
# 175 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_6, 6
# 176 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_7, 7
# 177 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_8, 8
# 178 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_9, MULTI_B_PRESSED
# 179 "data/scripts/prof_birch.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 181 "data/scripts/prof_birch.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne Script_ProfBirch_Interact_Starter_GenBased_2
Script_ProfBirch_Interact_Starter_GenBased_1:
# 184 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Starter_SayShowing_Gen
	return

Script_ProfBirch_Interact_Starter_GenBased_2:
# 182 "data/scripts/prof_birch.pory"
	copyvar VAR_STARTER_SELECTION, VAR_RESULT
	goto Script_ProfBirch_Interact_Starter_GenBased_1


Script_ProfBirch_Interact_Starter_TypeBased::
# 189 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starter_AnyType
# 190 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_0, 0
# 191 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_1, 1
# 192 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_2, 2
# 193 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_3, 3
# 194 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_4, 4
# 195 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_5, 5
# 196 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_6, 6
# 197 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_7, 7
# 198 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_8, 8
# 199 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_9, 9
# 200 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_10, 10
# 201 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_11, 11
# 202 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_12, 12
# 203 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_13, 13
# 204 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_TypeBased_Text_14, 14
# 205 "data/scripts/prof_birch.pory"
	dynmultipush Script_ProfBirch_Interact_Starter_GenBased_Text_9, MULTI_B_PRESSED
# 206 "data/scripts/prof_birch.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 208 "data/scripts/prof_birch.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne Script_ProfBirch_Interact_Starter_TypeBased_2
Script_ProfBirch_Interact_Starter_TypeBased_1:
# 211 "data/scripts/prof_birch.pory"
	call Script_ProfBirch_Interact_Starter_SayShowing_Mono
	return

Script_ProfBirch_Interact_Starter_TypeBased_2:
# 209 "data/scripts/prof_birch.pory"
	copyvar VAR_STARTER_SELECTION, VAR_RESULT
	goto Script_ProfBirch_Interact_Starter_TypeBased_1


Script_ProfBirch_Interact_Starter_SayShowing_Gen::
# 224 "data/scripts/prof_birch.pory"
	switch VAR_STARTER_SELECTION
# 225 "data/scripts/prof_birch.pory"
	case 0, Script_ProfBirch_Interact_Starter_SayShowing_Gen_3
# 227 "data/scripts/prof_birch.pory"
	case 1, Script_ProfBirch_Interact_Starter_SayShowing_Gen_4
# 229 "data/scripts/prof_birch.pory"
	case 2, Script_ProfBirch_Interact_Starter_SayShowing_Gen_5
# 231 "data/scripts/prof_birch.pory"
	case 3, Script_ProfBirch_Interact_Starter_SayShowing_Gen_6
# 233 "data/scripts/prof_birch.pory"
	case 4, Script_ProfBirch_Interact_Starter_SayShowing_Gen_7
# 235 "data/scripts/prof_birch.pory"
	case 5, Script_ProfBirch_Interact_Starter_SayShowing_Gen_8
# 237 "data/scripts/prof_birch.pory"
	case 6, Script_ProfBirch_Interact_Starter_SayShowing_Gen_9
# 239 "data/scripts/prof_birch.pory"
	case 7, Script_ProfBirch_Interact_Starter_SayShowing_Gen_10
# 241 "data/scripts/prof_birch.pory"
	case 8, Script_ProfBirch_Interact_Starter_SayShowing_Gen_11
# 244 "data/scripts/prof_birch.pory"
	msgbox Script_ProfBirch_Interact_Starter_SayShowing_Gen_Text_0
Script_ProfBirch_Interact_Starter_SayShowing_Gen_1:
	return

Script_ProfBirch_Interact_Starter_SayShowing_Gen_3:
# 226 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Gen_1
	goto Script_ProfBirch_Interact_Starter_SayShowing_Gen_1

Script_ProfBirch_Interact_Starter_SayShowing_Gen_4:
# 228 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Gen_2
	goto Script_ProfBirch_Interact_Starter_SayShowing_Gen_1

Script_ProfBirch_Interact_Starter_SayShowing_Gen_5:
# 230 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Gen_3
	goto Script_ProfBirch_Interact_Starter_SayShowing_Gen_1

Script_ProfBirch_Interact_Starter_SayShowing_Gen_6:
# 232 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Gen_4
	goto Script_ProfBirch_Interact_Starter_SayShowing_Gen_1

Script_ProfBirch_Interact_Starter_SayShowing_Gen_7:
# 234 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Gen_5
	goto Script_ProfBirch_Interact_Starter_SayShowing_Gen_1

Script_ProfBirch_Interact_Starter_SayShowing_Gen_8:
# 236 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Gen_6
	goto Script_ProfBirch_Interact_Starter_SayShowing_Gen_1

Script_ProfBirch_Interact_Starter_SayShowing_Gen_9:
# 238 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Gen_7
	goto Script_ProfBirch_Interact_Starter_SayShowing_Gen_1

Script_ProfBirch_Interact_Starter_SayShowing_Gen_10:
# 240 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Gen_8
	goto Script_ProfBirch_Interact_Starter_SayShowing_Gen_1

Script_ProfBirch_Interact_Starter_SayShowing_Gen_11:
# 242 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Gen_9
	goto Script_ProfBirch_Interact_Starter_SayShowing_Gen_1


Script_ProfBirch_Interact_Starter_SayShowing_Mono::
# 286 "data/scripts/prof_birch.pory"
	switch VAR_STARTER_SELECTION
# 288 "data/scripts/prof_birch.pory"
	case 0, Script_ProfBirch_Interact_Starter_SayShowing_Mono_3
# 290 "data/scripts/prof_birch.pory"
	case 1, Script_ProfBirch_Interact_Starter_SayShowing_Mono_4
# 292 "data/scripts/prof_birch.pory"
	case 2, Script_ProfBirch_Interact_Starter_SayShowing_Mono_5
# 294 "data/scripts/prof_birch.pory"
	case 3, Script_ProfBirch_Interact_Starter_SayShowing_Mono_6
# 296 "data/scripts/prof_birch.pory"
	case 4, Script_ProfBirch_Interact_Starter_SayShowing_Mono_7
# 298 "data/scripts/prof_birch.pory"
	case 5, Script_ProfBirch_Interact_Starter_SayShowing_Mono_8
# 300 "data/scripts/prof_birch.pory"
	case 6, Script_ProfBirch_Interact_Starter_SayShowing_Mono_9
# 302 "data/scripts/prof_birch.pory"
	case 7, Script_ProfBirch_Interact_Starter_SayShowing_Mono_10
# 304 "data/scripts/prof_birch.pory"
	case 8, Script_ProfBirch_Interact_Starter_SayShowing_Mono_11
# 306 "data/scripts/prof_birch.pory"
	case 9, Script_ProfBirch_Interact_Starter_SayShowing_Mono_12
# 308 "data/scripts/prof_birch.pory"
	case 10, Script_ProfBirch_Interact_Starter_SayShowing_Mono_13
# 310 "data/scripts/prof_birch.pory"
	case 11, Script_ProfBirch_Interact_Starter_SayShowing_Mono_14
# 312 "data/scripts/prof_birch.pory"
	case 12, Script_ProfBirch_Interact_Starter_SayShowing_Mono_15
# 314 "data/scripts/prof_birch.pory"
	case 13, Script_ProfBirch_Interact_Starter_SayShowing_Mono_16
# 316 "data/scripts/prof_birch.pory"
	case 14, Script_ProfBirch_Interact_Starter_SayShowing_Mono_17
# 319 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Normal
Script_ProfBirch_Interact_Starter_SayShowing_Mono_1:
# 321 "data/scripts/prof_birch.pory"
	release
	return

Script_ProfBirch_Interact_Starter_SayShowing_Mono_3:
# 289 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Fighting
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_4:
# 291 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Flying
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_5:
# 293 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Poison
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_6:
# 295 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Ground
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_7:
# 297 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Rock
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_8:
# 299 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Bug
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_9:
# 301 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Ghost
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_10:
# 303 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Steel
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_11:
# 305 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Electric
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_12:
# 307 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Psychic
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_13:
# 309 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Ice
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_14:
# 311 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Dragon
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_15:
# 313 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Dark
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_16:
# 315 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Normal
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1

Script_ProfBirch_Interact_Starter_SayShowing_Mono_17:
# 317 "data/scripts/prof_birch.pory"
	msgbox Text_ProfBirch_Starters_Mono_Fairy
	goto Script_ProfBirch_Interact_Starter_SayShowing_Mono_1


Script_ProfBirch_Interact_Starter_GenBased_Text_0:
# 169 "data/scripts/prof_birch.pory"
	.string "Gen 1$"

Script_ProfBirch_Interact_Starter_GenBased_Text_1:
# 170 "data/scripts/prof_birch.pory"
	.string "Gen 2$"

Script_ProfBirch_Interact_Starter_GenBased_Text_2:
# 171 "data/scripts/prof_birch.pory"
	.string "Gen 3$"

Script_ProfBirch_Interact_Starter_GenBased_Text_3:
# 172 "data/scripts/prof_birch.pory"
	.string "Gen 4$"

Script_ProfBirch_Interact_Starter_GenBased_Text_4:
# 173 "data/scripts/prof_birch.pory"
	.string "Gen 5$"

Script_ProfBirch_Interact_Starter_GenBased_Text_5:
# 174 "data/scripts/prof_birch.pory"
	.string "Gen 6$"

Script_ProfBirch_Interact_Starter_GenBased_Text_6:
# 175 "data/scripts/prof_birch.pory"
	.string "Gen 7$"

Script_ProfBirch_Interact_Starter_GenBased_Text_7:
# 176 "data/scripts/prof_birch.pory"
	.string "Gen 8$"

Script_ProfBirch_Interact_Starter_GenBased_Text_8:
# 177 "data/scripts/prof_birch.pory"
	.string "Gen 9$"

Script_ProfBirch_Interact_Starter_GenBased_Text_9:
# 178 "data/scripts/prof_birch.pory"
	.string "Cancel$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_0:
# 190 "data/scripts/prof_birch.pory"
	.string "Fighting$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_1:
# 191 "data/scripts/prof_birch.pory"
	.string "Flying$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_2:
# 192 "data/scripts/prof_birch.pory"
	.string "Poison$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_3:
# 193 "data/scripts/prof_birch.pory"
	.string "Ground$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_4:
# 194 "data/scripts/prof_birch.pory"
	.string "Rock$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_5:
# 195 "data/scripts/prof_birch.pory"
	.string "Bug$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_6:
# 196 "data/scripts/prof_birch.pory"
	.string "Ghost$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_7:
# 197 "data/scripts/prof_birch.pory"
	.string "Steel$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_8:
# 198 "data/scripts/prof_birch.pory"
	.string "Electric$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_9:
# 199 "data/scripts/prof_birch.pory"
	.string "Psychic$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_10:
# 200 "data/scripts/prof_birch.pory"
	.string "Ice$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_11:
# 201 "data/scripts/prof_birch.pory"
	.string "Dragon$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_12:
# 202 "data/scripts/prof_birch.pory"
	.string "Dark$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_13:
# 203 "data/scripts/prof_birch.pory"
	.string "Normal$"

Script_ProfBirch_Interact_Starter_TypeBased_Text_14:
# 204 "data/scripts/prof_birch.pory"
	.string "Fairy$"

Script_ProfBirch_Interact_Starter_SayShowing_Gen_Text_0:
# 244 "data/scripts/prof_birch.pory"
	.string "Now showing starters.$"

Text_ProfBirch_Early:
# 73 "data/scripts/prof_birch.pory"
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
# 98 "data/scripts/prof_birch.pory"
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
	.string "I agreed to give you a Pokémon, as\n"
	.string "part of a welcome gift, your Mom\l"
	.string "put together. How about this, if\l"
	.string "you can beat {RIVAL}, I will gift\l"
	.string "you a Pokédex as well.\p"
	.string "I'll tell you which Starter she chose\n"
	.string "after you pick yours, it wouldn't be\l"
	.string "fair if you knew before you picked!\p"
	.string "I can let you choose from any\n"
	.string "Generation of Starter Pokémon, just\l"
	.string "ask me if you want to change them.\l"
	.string "Also my aide might be able to tell\l"
	.string "you more about each starter choice.$"

Text_ProfBirch_Welcome_Female:
# 127 "data/scripts/prof_birch.pory"
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
	.string "I agreed to give you a Pokémon, as\n"
	.string "part of a welcome gift, your Mom\l"
	.string "put together. How about this, if\l"
	.string "you can beat {RIVAL}, I will gift\l"
	.string "you a Pokédex as well.\p"
	.string "I'll tell you which Starter he chose\n"
	.string "after you pick yours, it wouldn't be\l"
	.string "fair if you knew before you picked!\p"
	.string "I can let you choose from any\n"
	.string "Generation of Starter Pokémon, just\l"
	.string "ask me if you want to change them.\l"
	.string "Also my aide might be able to tell\l"
	.string "you more about each starter choice.$"

Text_ProfBirch_Starter_AnyType:
# 215 "data/scripts/prof_birch.pory"
	.string "I can let you choose from any\n"
	.string "Type of Starter Pokémon, just\l"
	.string "ask me if you want to change them.\l"
	.string "Also my aide might be able to tell\l"
	.string "you more about each starter choice.$"

Text_ProfBirch_Starters_Gen_1:
# 249 "data/scripts/prof_birch.pory"
	.string "Showing starters for Gen 1.$"

Text_ProfBirch_Starters_Gen_2:
# 253 "data/scripts/prof_birch.pory"
	.string "Showing starters for Gen 2.$"

Text_ProfBirch_Starters_Gen_3:
# 257 "data/scripts/prof_birch.pory"
	.string "Showing starters for Gen 3.$"

Text_ProfBirch_Starters_Gen_4:
# 261 "data/scripts/prof_birch.pory"
	.string "Showing starters for Gen 4.$"

Text_ProfBirch_Starters_Gen_5:
# 265 "data/scripts/prof_birch.pory"
	.string "Showing starters for Gen 5.$"

Text_ProfBirch_Starters_Gen_6:
# 269 "data/scripts/prof_birch.pory"
	.string "Showing starters for Gen 6.$"

Text_ProfBirch_Starters_Gen_7:
# 273 "data/scripts/prof_birch.pory"
	.string "Showing starters for Gen 7.$"

Text_ProfBirch_Starters_Gen_8:
# 277 "data/scripts/prof_birch.pory"
	.string "Showing starters for Gen 8.$"

Text_ProfBirch_Starters_Gen_9:
# 281 "data/scripts/prof_birch.pory"
	.string "Showing starters for Gen 9.$"

Text_ProfBirch_Starters_Mono_Fighting:
# 325 "data/scripts/prof_birch.pory"
	.string "Showing Fighting-type starters.$"

Text_ProfBirch_Starters_Mono_Flying:
# 329 "data/scripts/prof_birch.pory"
	.string "Showing Flying-type starters.$"

Text_ProfBirch_Starters_Mono_Poison:
# 333 "data/scripts/prof_birch.pory"
	.string "Showing Poison-type starters.$"

Text_ProfBirch_Starters_Mono_Ground:
# 337 "data/scripts/prof_birch.pory"
	.string "Showing Ground-type starters.$"

Text_ProfBirch_Starters_Mono_Rock:
# 341 "data/scripts/prof_birch.pory"
	.string "Showing Rock-type starters.$"

Text_ProfBirch_Starters_Mono_Bug:
# 345 "data/scripts/prof_birch.pory"
	.string "Showing Bug-type starters.$"

Text_ProfBirch_Starters_Mono_Ghost:
# 349 "data/scripts/prof_birch.pory"
	.string "Showing Ghost-type starters.$"

Text_ProfBirch_Starters_Mono_Steel:
# 353 "data/scripts/prof_birch.pory"
	.string "Showing Steel-type starters.$"

Text_ProfBirch_Starters_Mono_Electric:
# 357 "data/scripts/prof_birch.pory"
	.string "Showing Electric-type starters.$"

Text_ProfBirch_Starters_Mono_Psychic:
# 361 "data/scripts/prof_birch.pory"
	.string "Showing Psychic-type starters.$"

Text_ProfBirch_Starters_Mono_Ice:
# 365 "data/scripts/prof_birch.pory"
	.string "Showing Ice-type starters.$"

Text_ProfBirch_Starters_Mono_Dragon:
# 369 "data/scripts/prof_birch.pory"
	.string "Showing Dragon-type starters.$"

Text_ProfBirch_Starters_Mono_Dark:
# 373 "data/scripts/prof_birch.pory"
	.string "Showing Dark-type starters.$"

Text_ProfBirch_Starters_Mono_Normal:
# 377 "data/scripts/prof_birch.pory"
	.string "Showing Normal-type starters.$"

Text_ProfBirch_Starters_Mono_Fairy:
# 381 "data/scripts/prof_birch.pory"
	.string "Showing Fairy-type starters.$"

Text_LittlerootTown_ProfessorBirchsLab_Birch_Starter_RivalsChoice_Treecko::
# 386 "data/scripts/prof_birch.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Treecko as their\l"
	.string "starter!$"

Text_LittlerootTown_ProfessorBirchsLab_Birch_Starter_RivalsChoice_Torchic::
# 392 "data/scripts/prof_birch.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Torchic as their\l"
	.string "starter!$"

Text_LittlerootTown_ProfessorBirchsLab_Birch_Starter_RivalsChoice_Mudkip::
# 398 "data/scripts/prof_birch.pory"
	.string "A great choice, but also an unlucky one!\n"
	.string "{RIVAL} chose a Mudkip as their\l"
	.string " starter!$"

Text_LittlerootTown_ProfessorBirchsLab_Birch_Starter_ChangeGeneration::
# 404 "data/scripts/prof_birch.pory"
	.string "Which Generation of Starters would you\n"
	.string "like to see? You can change\l"
	.string "Generations as many times as you want.$"

Text_LittlerootTown_ProfessorBirchsLab_Birch_Starter_ChangeMonotype::
# 410 "data/scripts/prof_birch.pory"
	.string "Which Type of Starters would you\n"
	.string "like to see? You can change\l"
	.string "Types as many times as you want.$"
