Route103_MapScripts::
# 2 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 3 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
	.byte 0


Route103_OnTransition:
# 7 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	end


Route103_OnLoad::
# 12 "data/maps/Route103/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route103_OnLoad_2
Route103_OnLoad_1:
	end

Route103_OnLoad_2:
# 13 "data/maps/Route103/scripts.pory"
	call Route103_EventScript_OpenAlteringCave
	goto Route103_OnLoad_1


Route103_EventScript_OpenAlteringCave::
# 19 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 20 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
	return


Route103_EventScript_Rival::
# 25 "data/maps/Route103/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route103_EventScript_Rival_2
# 29 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalBrendan
Route103_EventScript_Rival_1:
	end

Route103_EventScript_Rival_2:
# 27 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalMay
	goto Route103_EventScript_Rival_1


Route103_EventScript_RivalMay::
# 35 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon
# 36 "data/maps/Route103/scripts.pory"
	closemessage
# 37 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 38 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_FacePlayer
# 39 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_ExclamationMark
# 41 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_Delay48
# 43 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle
# 45 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 46 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_RivalMay_3
# 47 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_RivalMay_4
# 48 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_RivalMay_5
Route103_EventScript_RivalMay_1:
# 50 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack
# 51 "data/maps/Route103/scripts.pory"
	call Route103_EventScript_RivalExit
# 52 "data/maps/Route103/scripts.pory"
	call Route103_EventScript_RivalEnd
	return

Route103_EventScript_RivalMay_3:
# 46 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
	goto Route103_EventScript_RivalMay_1

Route103_EventScript_RivalMay_4:
# 47 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
	goto Route103_EventScript_RivalMay_1

Route103_EventScript_RivalMay_5:
# 48 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
	goto Route103_EventScript_RivalMay_1


Route103_EventScript_RivalBrendan::
# 57 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon
# 58 "data/maps/Route103/scripts.pory"
	closemessage
# 59 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 60 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_FacePlayer
# 61 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_ExclamationMark
# 63 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_Delay48
# 65 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanLetsBattle
# 67 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 68 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_RivalBrendan_3
# 69 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_RivalBrendan_4
# 70 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_RivalBrendan_5
Route103_EventScript_RivalBrendan_1:
# 72 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanTimeToHeadBack
# 73 "data/maps/Route103/scripts.pory"
	call Route103_EventScript_RivalExit
# 74 "data/maps/Route103/scripts.pory"
	call Route103_EventScript_RivalEnd
	return

Route103_EventScript_RivalBrendan_3:
# 68 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
	goto Route103_EventScript_RivalBrendan_1

Route103_EventScript_RivalBrendan_4:
# 69 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
	goto Route103_EventScript_RivalBrendan_1

Route103_EventScript_RivalBrendan_5:
# 70 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated
	goto Route103_EventScript_RivalBrendan_1


Route103_EventScript_RivalExit::
# 80 "data/maps/Route103/scripts.pory"
	closemessage
# 81 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 82 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExit_3
# 83 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExit_4
# 84 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExit_5
# 85 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExit_6
Route103_EventScript_RivalExit_1:
	return

Route103_EventScript_RivalExit_3:
# 82 "data/maps/Route103/scripts.pory"
	call Route103_EventScript_RivalExitFacingSouth
	goto Route103_EventScript_RivalExit_1

Route103_EventScript_RivalExit_4:
# 83 "data/maps/Route103/scripts.pory"
	call Route103_EventScript_RivalExitFacingNorth
	goto Route103_EventScript_RivalExit_1

Route103_EventScript_RivalExit_5:
# 84 "data/maps/Route103/scripts.pory"
	call Route103_EventScript_RivalExitFacingEastOrWest
	goto Route103_EventScript_RivalExit_1

Route103_EventScript_RivalExit_6:
# 85 "data/maps/Route103/scripts.pory"
	call Route103_EventScript_RivalExitFacingEastOrWest
	goto Route103_EventScript_RivalExit_1


Route103_EventScript_RivalExitFacingNorth::
# 91 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_PLAYER, Route103_EventScript_RivalExitFacingNorth_Movement_0
# 98 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_EventScript_RivalExitFacingNorth_Movement_1
# 102 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 104 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_EventScript_RivalExitFacingNorth_Movement_2
# 109 "data/maps/Route103/scripts.pory"
	waitmovement 0
	return


Route103_EventScript_RivalExitFacingEastOrWest::
# 113 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_PLAYER, Route103_EventScript_RivalExitFacingEastOrWest_Movement_0
# 117 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_EventScript_RivalExitFacingEastOrWest_Movement_1
# 118 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 119 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 120 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit_EastWest
# 121 "data/maps/Route103/scripts.pory"
	waitmovement 0
	return


Route103_EventScript_RivalExitFacingSouth::
# 126 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_EventScript_RivalExitFacingEastOrWest_Movement_1
# 127 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 128 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 129 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit_EastWest
# 130 "data/maps/Route103/scripts.pory"
	waitmovement 0
	return


# 134 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit_EastWest:
# 135 "data/maps/Route103/scripts.pory"
	jump_2_down
# 136 "data/maps/Route103/scripts.pory"
	delay_16
# 137 "data/maps/Route103/scripts.pory"
	walk_down
# 137 "data/maps/Route103/scripts.pory"
	walk_down
# 137 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

Route103_EventScript_RivalEnd::
# 142 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_ROUTE103_RIVAL
# 144 "data/maps/Route103/scripts.pory"
	setvar VAR_RIVAL_STATE, 3
# 146 "data/maps/Route103/scripts.pory"
	setvar VAR_QUEST_INTRO_STATE, 8
# 147 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 148 "data/maps/Route103/scripts.pory"
	setflag FLAG_HIDE_ROUTE_103_RIVAL
# 149 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 150 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 151 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 152 "data/maps/Route103/scripts.pory"
	releaseall
	end


# 156 "data/maps/Route103/scripts.pory"

# 157 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 158 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 159 "data/maps/Route103/scripts.pory"
	end
# 160 "data/maps/Route103/scripts.pory"

# 161 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 162 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 163 "data/maps/Route103/scripts.pory"
	end
# 164 "data/maps/Route103/scripts.pory"

# 165 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 166 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 167 "data/maps/Route103/scripts.pory"
	end
# 168 "data/maps/Route103/scripts.pory"

# 169 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 170 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 171 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 172 "data/maps/Route103/scripts.pory"
	end
# 173 "data/maps/Route103/scripts.pory"

# 174 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 175 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 176 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 177 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 178 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 179 "data/maps/Route103/scripts.pory"
	end
# 180 "data/maps/Route103/scripts.pory"

# 181 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 182 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 183 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 184 "data/maps/Route103/scripts.pory"
	release
# 185 "data/maps/Route103/scripts.pory"
	end
# 186 "data/maps/Route103/scripts.pory"

# 187 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 188 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 189 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 190 "data/maps/Route103/scripts.pory"
	end
# 191 "data/maps/Route103/scripts.pory"

# 192 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 193 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 194 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 195 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 196 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 197 "data/maps/Route103/scripts.pory"
	end
# 198 "data/maps/Route103/scripts.pory"

# 199 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 200 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 201 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 202 "data/maps/Route103/scripts.pory"
	release
# 203 "data/maps/Route103/scripts.pory"
	end
# 204 "data/maps/Route103/scripts.pory"

# 205 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 206 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 207 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/Route103/scripts.pory"
	end
# 209 "data/maps/Route103/scripts.pory"

# 210 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 211 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 212 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 213 "data/maps/Route103/scripts.pory"
	end
# 214 "data/maps/Route103/scripts.pory"

# 215 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 216 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 217 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 218 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 219 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 220 "data/maps/Route103/scripts.pory"
	release
# 221 "data/maps/Route103/scripts.pory"
	end
# 222 "data/maps/Route103/scripts.pory"

# 223 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 224 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 225 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 226 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 227 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 228 "data/maps/Route103/scripts.pory"
	release
# 229 "data/maps/Route103/scripts.pory"
	end
# 230 "data/maps/Route103/scripts.pory"

# 231 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 232 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 233 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 234 "data/maps/Route103/scripts.pory"
	end
# 235 "data/maps/Route103/scripts.pory"

# 236 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 237 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 238 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 239 "data/maps/Route103/scripts.pory"
	end
# 240 "data/maps/Route103/scripts.pory"

# 241 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 242 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 243 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 244 "data/maps/Route103/scripts.pory"
	end
# 245 "data/maps/Route103/scripts.pory"

# 246 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 247 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 248 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 249 "data/maps/Route103/scripts.pory"
	end
# 250 "data/maps/Route103/scripts.pory"

# 251 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 252 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 253 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 254 "data/maps/Route103/scripts.pory"
	end

# 91 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth_Movement_0:
# 92 "data/maps/Route103/scripts.pory"
	delay_16
# 93 "data/maps/Route103/scripts.pory"
	delay_4
# 94 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 95 "data/maps/Route103/scripts.pory"
	delay_16
# 96 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
	step_end

# 98 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth_Movement_1:
# 99 "data/maps/Route103/scripts.pory"
	walk_left
# 100 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 104 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth_Movement_2:
# 105 "data/maps/Route103/scripts.pory"
	jump_2_down
# 106 "data/maps/Route103/scripts.pory"
	delay_16
# 107 "data/maps/Route103/scripts.pory"
	walk_down
# 107 "data/maps/Route103/scripts.pory"
	walk_down
# 107 "data/maps/Route103/scripts.pory"
	walk_down
# 107 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 113 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest_Movement_0:
# 114 "data/maps/Route103/scripts.pory"
	delay_16
# 115 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
	step_end

# 117 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest_Movement_1:
# 117 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

Route103_Text_MayRoute103Pokemon:
# 257 "data/maps/Route103/scripts.pory"
	.string "May: Let's see… The Pokémon found\n"
	.string "on Route 103 include…$"

Route103_Text_MayLetsBattle:
# 262 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
	.string "…Oh, I see, my dad gave you\n"
	.string "a Pokémon as a gift.\p"
	.string "Since we're here, let's have a quick\n"
	.string "battle!\p"
	.string "I'll give you a taste of what being\n"
	.string "a Trainer is like.$"

Route103_Text_MayDefeated:
# 272 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
	.string "{PLAYER}{KUN}, you're pretty good!$"

Route103_Text_MayTimeToHeadBack:
# 277 "data/maps/Route103/scripts.pory"
	.string "May: I think I know why my dad has\n"
	.string "an eye out for you now.\p"
	.string "I mean, you just got that Pokémon,\n"
	.string "but it already likes you.\p"
	.string "You might be able to befriend any\n"
	.string "kind of Pokémon easily.\p"
	.string "Well, it's time to head back to\n"
	.string "the Lab.$"

Route103_Text_BrendanRoute103Pokemon:
# 288 "data/maps/Route103/scripts.pory"
	.string "Brendan: Okay, so it's this one and\n"
	.string "that one that live on Route 103…$"

Route103_Text_BrendanLetsBattle:
# 293 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
	.string "…Oh, yeah, Dad gave you a Pokémon.\p"
	.string "Since we're here, how about a little\n"
	.string "battle?\p"
	.string "I'll teach you what being a Trainer's\n"
	.string "about!$"

Route103_Text_BrendanDefeated:
# 302 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"

Route103_Text_BrendanTimeToHeadBack:
# 306 "data/maps/Route103/scripts.pory"
	.string "Brendan: I think I get it.\n"
	.string "I think I know why my dad has his eye\l"
	.string "out for you now.\p"
	.string "Look, your Pokémon already likes you,\n"
	.string "even though you just got it.\p"
	.string "{PLAYER}, I get the feeling that you\n"
	.string "could befriend any Pokémon with ease.\p"
	.string "We should head back to the Lab.$"

Route103_Text_ShouldHaveBroughtPotion:
# 317 "data/maps/Route103/scripts.pory"
	.string "My Pokémon is staggeringly tired…\n"
	.string "I should have brought a Potion…$"

Route103_Text_ShortcutToOldale:
# 322 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
	.string "it'll be a shortcut to Oldale Town.\p"
	.string "Fufufu, that's useful, isn't it?$"

Route103_Text_RouteSign:
# 328 "data/maps/Route103/scripts.pory"
	.string "Route 103\n"
	.string "{DOWN_ARROW} Oladale Town$"
