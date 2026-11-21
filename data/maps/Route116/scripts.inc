Route116_MapScripts::
# 2 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_OnTransition
# 3 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route116_OnLoad
# 4 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route116_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route116_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/Route116/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
	.2byte 0


Route116_OnTransition:
# 10 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_OnTransition_2
Route116_OnTransition_1:
# 13 "data/maps/Route116/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
	goto_if_eq Route116_OnTransition_5
Route116_OnTransition_4:
# 17 "data/maps/Route116/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH
	goto_if_eq Route116_OnTransition_8
# 18 "data/maps/Route116/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH
	goto_if_eq Route116_OnTransition_8
Route116_OnTransition_7:
	end

Route116_OnTransition_2:
# 11 "data/maps/Route116/scripts.pory"
	setobjectxyperm LOCALID_ROUTE116_WANDAS_BF, 38, 10
	goto Route116_OnTransition_1

Route116_OnTransition_5:
# 14 "data/maps/Route116/scripts.pory"
	call AbnormalWeather_EventScript_HideMapNamePopup
	goto Route116_OnTransition_4

Route116_OnTransition_8:
# 20 "data/maps/Route116/scripts.pory"
	call AbnormalWeather_StartGroudonWeather
	goto Route116_OnTransition_7


Route116_OnLoad:
# 27 "data/maps/Route116/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH
	goto_if_eq Route116_OnLoad_2
Route116_OnLoad_1:
# 30 "data/maps/Route116/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH
	goto_if_eq Route116_OnLoad_4
	return

Route116_OnLoad_2:
# 28 "data/maps/Route116/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute116North
	goto Route116_OnLoad_1

Route116_OnLoad_4:
# 31 "data/maps/Route116/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute116South
	return


Route116_EventScript_WandasBoyfriend::
# 36 "data/maps/Route116/scripts.pory"
	lock
# 37 "data/maps/Route116/scripts.pory"
	faceplayer
# 38 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_WandasBoyfriend_2
# 40 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, Route116_EventScript_WandasBoyfriend_3
# 43 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_WantToDigTunnel
Route116_EventScript_WandasBoyfriend_1:
# 45 "data/maps/Route116/scripts.pory"
	release
	end

Route116_EventScript_WandasBoyfriend_2:
# 39 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_GoonHightailedItOutOfTunnel
	goto Route116_EventScript_WandasBoyfriend_1

Route116_EventScript_WandasBoyfriend_3:
# 41 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DiggingTunnelWhenGoonOrderedMeOut
	goto Route116_EventScript_WandasBoyfriend_1


Route116_EventScript_DevonEmployee::
# 50 "data/maps/Route116/scripts.pory"
	lock
# 51 "data/maps/Route116/scripts.pory"
	faceplayer
# 52 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, Route116_EventScript_DevonEmployee_2
# 55 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ThankYouTokenOfAppreciation
Route116_EventScript_DevonEmployee_1:
# 57 "data/maps/Route116/scripts.pory"
	setflag FLAG_MET_DEVON_EMPLOYEE
# 58 "data/maps/Route116/scripts.pory"
	giveitem ITEM_REPEAT_BALL
# 59 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_EventScript_DevonEmployee_6
# 64 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NewBallAvailableAtMart
# 65 "data/maps/Route116/scripts.pory"
	closemessage
# 66 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq Route116_EventScript_DevonEmployee_9
# 72 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_EventScript_DevonEmployee_Movement_1
Route116_EventScript_DevonEmployee_8:
# 74 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 76 "data/maps/Route116/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 77 "data/maps/Route116/scripts.pory"
	setflag FLAG_RECEIVED_REPEAT_BALL
	end

Route116_EventScript_DevonEmployee_2:
# 53 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TokenOfAppreciation
	goto Route116_EventScript_DevonEmployee_1

Route116_EventScript_DevonEmployee_6:
# 60 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_BagIsJamPacked
# 61 "data/maps/Route116/scripts.pory"
	release
	return

Route116_EventScript_DevonEmployee_9:
# 67 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_EventScript_DevonEmployee_Movement_0
	goto Route116_EventScript_DevonEmployee_8


Route116_EventScript_RouteSignRustboro::
# 82 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RouteSignRustboro, MSGBOX_SIGN
	end


Route116_EventScript_RusturfTunnelSign::
# 87 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RusturfTunnelSign, MSGBOX_SIGN
	end


Route116_EventScript_TunnelersRestHouseSign::
# 92 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TunnelersRestHouse, MSGBOX_SIGN
	end


Route116_EventScript_TrainerTipsBToStopEvolution::
# 97 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBToStopEvolution, MSGBOX_SIGN
	end


Route116_EventScript_TrainerTipsBagHasPockets::
# 102 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBagHasPockets, MSGBOX_SIGN
	end


Route116_EventScript_Briney::
# 107 "data/maps/Route116/scripts.pory"
	lock
# 108 "data/maps/Route116/scripts.pory"
	faceplayer
# 109 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko
# 110 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 111 "data/maps/Route116/scripts.pory"
	release
	end


Route116_EventScript_BrineyTrigger::
# 116 "data/maps/Route116/scripts.pory"
	lockall
# 117 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_ROUTE116_BRINEY, Common_Movement_WalkInPlaceFasterRight
# 118 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 119 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 120 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko
# 121 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 122 "data/maps/Route116/scripts.pory"
	releaseall
	end


Route116_EventScript_GlassesMan::
# 127 "data/maps/Route116/scripts.pory"
	lock
# 128 "data/maps/Route116/scripts.pory"
	faceplayer
	checkitem ITEM_BLACK_GLASSES
# 0 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route116_EventScript_GlassesMan_2
# 141 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 142 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_EventScript_GlassesMan_8
# 147 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses
Route116_EventScript_GlassesMan_1:
# 151 "data/maps/Route116/scripts.pory"
	release
	end

Route116_EventScript_GlassesMan_2:
# 130 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses
# 131 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_MayISeeThoseGlasses
# 132 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 133 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_EventScript_GlassesMan_5
# 138 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingFor
	goto Route116_EventScript_GlassesMan_1

Route116_EventScript_GlassesMan_5:
# 134 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingForMaybeTheyArentHere
# 135 "data/maps/Route116/scripts.pory"
	closemessage
# 136 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_GlassesManExit
	goto Route116_EventScript_GlassesMan_1

Route116_EventScript_GlassesMan_8:
# 143 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CantFindGlassesNotHere
# 144 "data/maps/Route116/scripts.pory"
	closemessage
# 145 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_GlassesManExit
	goto Route116_EventScript_GlassesMan_1


Route116_EventScript_GlassesManExit::
# 156 "data/maps/Route116/scripts.pory"
	delay 20
# 157 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq Route116_EventScript_GlassesManExit_2
# 163 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_EventScript_DevonEmployee_Movement_1
Route116_EventScript_GlassesManExit_1:
# 165 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 166 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
	return

Route116_EventScript_GlassesManExit_2:
# 158 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_EventScript_GlassesManExit_Movement_0
	goto Route116_EventScript_GlassesManExit_1


Route116_EventScript_Joey::
# 172 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOEY, Route116_Text_JoeyIntro, Route116_Text_JoeyDefeat
# 173 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Jose::
# 178 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOSE, Route116_Text_JoseIntro, Route116_Text_JoseDefeat
# 179 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JosePostBattle, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Jerry::
# 184 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, Route116_Text_JerryIntro, Route116_Text_JerryDefeat, Route116_EventScript_TryRegisterJerryAfterBattle
# 185 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 186 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_EventScript_Jerry_2
# 190 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_JERRY_1
# 191 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 192 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_EventScript_Jerry_7
Route116_EventScript_Jerry_6:
# 196 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle
Route116_EventScript_Jerry_1:
# 199 "data/maps/Route116/scripts.pory"
	release
	end

Route116_EventScript_Jerry_2:
# 187 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_JERRY_1, Route116_Text_JerryRematchIntro, Route116_Text_JerryRematchDefeat
# 188 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostRematch, MSGBOX_AUTOCLOSE
	goto Route116_EventScript_Jerry_1

Route116_EventScript_Jerry_5:
# 193 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister1
# 194 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
	goto Route116_EventScript_Jerry_1

Route116_EventScript_Jerry_7:
# 192 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_Jerry_5
	goto Route116_EventScript_Jerry_6


Route116_EventScript_TryRegisterJerryAfterBattle::
# 204 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_TryRegisterJerryAfterBattle_2
Route116_EventScript_TryRegisterJerryAfterBattle_1:
# 210 "data/maps/Route116/scripts.pory"
	release
	return

Route116_EventScript_TryRegisterJerryAfterBattle_2:
# 205 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 206 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 207 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister2
# 208 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
	goto Route116_EventScript_TryRegisterJerryAfterBattle_1


Route116_EventScript_Clark::
# 215 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_CLARK, Route116_Text_ClarkIntro, Route116_Text_ClarkDefeat
# 216 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Janice::
# 221 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JANICE, Route116_Text_JaniceIntro, Route116_Text_JaniceDefeat
# 222 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Karen::
# 227 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_KAREN_1, Route116_Text_KarenIntro, Route116_Text_KarenDefeat, Route116_EventScript_TryRegisterKarenAfterBattle
# 228 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 229 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_EventScript_Karen_2
# 233 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_KAREN_1
# 234 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 235 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_EventScript_Karen_5
# 243 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle
Route116_EventScript_Karen_1:
# 246 "data/maps/Route116/scripts.pory"
	release
	end

Route116_EventScript_Karen_2:
# 230 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_KAREN_1, Route116_Text_KarenRematchIntro, Route116_Text_KarenRematchDefeat
# 231 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostRematch, MSGBOX_AUTOCLOSE
	goto Route116_EventScript_Karen_1

Route116_EventScript_Karen_5:
# 236 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_Karen_8
	goto Route116_EventScript_Karen_1

Route116_EventScript_Karen_8:
# 237 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 238 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 239 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister2
# 240 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
	goto Route116_EventScript_Karen_1


Route116_EventScript_TryRegisterKarenAfterBattle::
# 251 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_TryRegisterKarenAfterBattle_2
Route116_EventScript_TryRegisterKarenAfterBattle_1:
	return

Route116_EventScript_TryRegisterKarenAfterBattle_2:
# 252 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister1
# 253 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
	goto Route116_EventScript_TryRegisterKarenAfterBattle_1


Route116_EventScript_Sarah::
# 260 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_SARAH, Route116_Text_SarahIntro, Route116_Text_SarahDefeat
# 261 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Dawson::
# 266 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DAWSON, Route116_Text_DawsonIntro, Route116_Text_DawsonDefeat
# 267 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Devan::
# 272 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DEVAN, Route116_Text_DevanIntro, Route116_Text_DevanDefeat
# 273 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Johnson::
# 278 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOHNSON, Route116_Text_JohnsonIntro, Route116_Text_JohnsonDefeat
# 279 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
	end


# 67 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployee_Movement_0:
# 68 "data/maps/Route116/scripts.pory"
	walk_down
# 69 "data/maps/Route116/scripts.pory"
	walk_left
# 69 "data/maps/Route116/scripts.pory"
	walk_left
# 69 "data/maps/Route116/scripts.pory"
	walk_left
# 69 "data/maps/Route116/scripts.pory"
	walk_left
# 69 "data/maps/Route116/scripts.pory"
	walk_left
# 69 "data/maps/Route116/scripts.pory"
	walk_left
# 69 "data/maps/Route116/scripts.pory"
	walk_left
# 69 "data/maps/Route116/scripts.pory"
	walk_left
# 69 "data/maps/Route116/scripts.pory"
	walk_left
	step_end

# 72 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployee_Movement_1:
# 72 "data/maps/Route116/scripts.pory"
	walk_left
# 72 "data/maps/Route116/scripts.pory"
	walk_left
# 72 "data/maps/Route116/scripts.pory"
	walk_left
# 72 "data/maps/Route116/scripts.pory"
	walk_left
# 72 "data/maps/Route116/scripts.pory"
	walk_left
# 72 "data/maps/Route116/scripts.pory"
	walk_left
# 72 "data/maps/Route116/scripts.pory"
	walk_left
# 72 "data/maps/Route116/scripts.pory"
	walk_left
# 72 "data/maps/Route116/scripts.pory"
	walk_left
	step_end

# 158 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit_Movement_0:
# 159 "data/maps/Route116/scripts.pory"
	walk_up
# 160 "data/maps/Route116/scripts.pory"
	walk_left
# 160 "data/maps/Route116/scripts.pory"
	walk_left
# 160 "data/maps/Route116/scripts.pory"
	walk_left
# 160 "data/maps/Route116/scripts.pory"
	walk_left
# 160 "data/maps/Route116/scripts.pory"
	walk_left
# 160 "data/maps/Route116/scripts.pory"
	walk_left
# 160 "data/maps/Route116/scripts.pory"
	walk_left
# 160 "data/maps/Route116/scripts.pory"
	walk_left
# 160 "data/maps/Route116/scripts.pory"
	walk_left
	step_end

Route116_Text_ScoundrelMadeOffWithPeeko:
# 283 "data/maps/Route116/scripts.pory"
	.string "Ohhh, what am I to do?\p"
	.string "We were on our walk, Peeko and I, when\n"
	.string "we were jumped by an odd thug\p"
	.string "The scoundrel made off with my\n"
	.string "darling Peeko!\p"
	.string "Wrrrooooooaaaar! Peeko!$"

Route116_Text_WantToDigTunnel:
# 292 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
	.string "I want to dig that tunnel!$"

Route116_Text_DiggingTunnelWhenGoonOrderedMeOut:
# 297 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\n"
	.string "What's going on?\p"
	.string "I was digging the tunnel without any\n"
	.string "tools when some goon ordered me out!\p"
	.string "That tunnel's filled with Pokémon\n"
	.string "that react badly to loud noises.\l"
	.string "They could cause an uproar.\p"
	.string "That's why we stopped using heavy\n"
	.string "equipment for tunneling…\p"
	.string "I'm worried that the goon will do\n"
	.string "something stupid and startle the\l"
	.string "Pokémon into an uproar.$"

Route116_Text_GoonHightailedItOutOfTunnel:
# 312 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
	.string "That goofy goon hightailed it out of\n"
	.string "the tunnel! I can go back to digging!$"

Route116_Text_ThankYouTokenOfAppreciation:
# 318 "data/maps/Route116/scripts.pory"
	.string "Oh! It's you!\p"
	.string "You're that person who not only helped\n"
	.string "me in Petalburg Woods, but also got\l"
	.string "back my stolen package and then even\l"
	.string "graciously delivered it to Slateport!\p"
	.string "Capt. Stern informed us that the\n"
	.string "package arrived, too!\p"
	.string "I thank you very, very much!\p"
	.string "Why, if I were a rain cloud, I would\n"
	.string "shower you with gratitude and hail\l"
	.string "you as a hero!\p"
	.string "For you, the most wonderful Trainer,\n"
	.string "I bear good news!\p"
	.string "Recently, our company developed\n"
	.string "a new kind of Poké Ball.\p"
	.string "As a token of our appreciation, this\n"
	.string "is our gift to our wonderful Trainer!$"

Route116_Text_NewBallAvailableAtMart:
# 338 "data/maps/Route116/scripts.pory"
	.string "Our new Poké Ball will be available\n"
	.string "at the Pokémon Mart in Rustboro.\p"
	.string "Please do try it out!\n"
	.string "Thank you and bye-bye!$"

Route116_Text_BagIsJamPacked:
# 345 "data/maps/Route116/scripts.pory"
	.string "Your Bag is jam-packed.\n"
	.string "I can't give you this Repeat Ball.$"

Route116_Text_TokenOfAppreciation:
# 350 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation for\n"
	.string "your delivering our package, I have\l"
	.string "a gift of a new kind of Poké Ball\l"
	.string "for our most wonderful Trainer!$"

Route116_Text_CanYouHelpMeFindGlasses:
# 357 "data/maps/Route116/scripts.pory"
	.string "I dropped my glasses…\n"
	.string "Can you help me find them?$"

Route116_Text_MayISeeThoseGlasses:
# 362 "data/maps/Route116/scripts.pory"
	.string "Those glasses!\n"
	.string "May I see them for a second?$"

Route116_Text_NotWhatImLookingForMaybeTheyArentHere:
# 367 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
	.string "These are Black Glasses.\l"
	.string "They're not what I'm looking for…\p"
	.string "Maybe my glasses aren't around\n"
	.string "here…$"

Route116_Text_CantFindGlassesNotHere:
# 375 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
	.string "I can't find my glasses anywhere…\l"
	.string "Maybe they're not around here…$"

Route116_Text_NotWhatImLookingFor:
# 381 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
	.string "These are Black Glasses.\l"
	.string "They're not what I'm looking for…$"

Route116_Text_RouteSignRustboro:
# 387 "data/maps/Route116/scripts.pory"
	.string "Route 116\n"
	.string "{LEFT_ARROW} Rustboro City$"

Route116_Text_RusturfTunnelSign:
# 392 "data/maps/Route116/scripts.pory"
	.string "Rusturf Tunnel\n"
	.string "“Linking Rustboro and Verdanturf\p"
	.string "“The tunnel project has been\n"
	.string "canceled.”$"

Route116_Text_TunnelersRestHouse:
# 399 "data/maps/Route116/scripts.pory"
	.string "Tunneler's Rest House$"

Route116_Text_TrainerTipsBToStopEvolution:
# 403 "data/maps/Route116/scripts.pory"
	.string "Trainer Tips\p"
	.string "If you want to stop a Pokémon from\n"
	.string "evolving, press the B Button while it\l"
	.string "is trying to evolve.\l"
	.string "The startled Pokémon will stop.\p"
	.string "This is called an evolution cancel.$"

Route116_Text_TrainerTipsBagHasPockets:
# 412 "data/maps/Route116/scripts.pory"
	.string "Trainer Tips\p"
	.string "Your Bag has several Pockets.\p"
	.string "Items you obtain are automatically\n"
	.string "placed in the appropriate Pockets.\p"
	.string "No Trainer can afford to be without\n"
	.string "a Bag of their own.$"
