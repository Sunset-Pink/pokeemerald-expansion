Route102_MapScripts::
	.byte 0


Route102_EventScript_LittleBoy::
# 4 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
	end


Route102_EventScript_RouteSignOldale::
# 9 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
	end


Route102_EventScript_RouteSignPetalburg::
# 14 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
	end


Route102_EventScript_Boy::
# 19 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
	end


Route102_EventScript_Calvin::
# 24 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 25 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 26 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route102_EventScript_Calvin_2
Route102_EventScript_Calvin_1:
# 29 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 30 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 31 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route102_EventScript_Calvin_5
Route102_EventScript_Calvin_4:
# 34 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle
# 35 "data/maps/Route102/scripts.pory"
	release
	end

Route102_EventScript_Calvin_2:
# 27 "data/maps/Route102/scripts.pory"
	goto Route102_EventScript_CalvinRematch
	goto Route102_EventScript_Calvin_1

Route102_EventScript_Calvin_5:
# 32 "data/maps/Route102/scripts.pory"
	goto Route102_EventScript_CalvinTryRegister
	goto Route102_EventScript_Calvin_4


Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 40 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 41 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCallAfterBattle_2
Route102_EventScript_CalvinRegisterMatchCallAfterBattle_1:
# 45 "data/maps/Route102/scripts.pory"
	release
	end

Route102_EventScript_CalvinRegisterMatchCallAfterBattle_2:
# 43 "data/maps/Route102/scripts.pory"
	goto Route102_EventScript_CalvinRegisterMatchCall
	goto Route102_EventScript_CalvinRegisterMatchCallAfterBattle_1


Route102_EventScript_CalvinRegisterMatchCall::
# 50 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort
# 51 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 52 "data/maps/Route102/scripts.pory"
	release
	end


Route102_EventScript_CalvinTryRegister::
# 57 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinTryRegister_2
Route102_EventScript_CalvinTryRegister_1:
# 60 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle
# 61 "data/maps/Route102/scripts.pory"
	release
	end

Route102_EventScript_CalvinTryRegister_2:
# 58 "data/maps/Route102/scripts.pory"
	goto Route102_EventScript_CalvinRegister
	goto Route102_EventScript_CalvinTryRegister_1


Route102_EventScript_CalvinRegister::
# 66 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister
# 67 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 68 "data/maps/Route102/scripts.pory"
	release
	end


Route102_EventScript_CalvinRematch::
# 73 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 74 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle
	end


Route102_EventScript_Rick::
# 79 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 80 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end


Route102_EventScript_Tiana::
# 85 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 86 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end


Route102_EventScript_Allen::
# 91 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 92 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end


Route102_Text_WatchMeCatchPokemon:
# 96 "data/maps/Route102/scripts.pory"
	.string "Wally: {PLAYER}…\n"
	.string "Pokémon hide in tall grass like this,\l"
	.string "don't they?\p"
	.string "Please watch me and see if I can\n"
	.string "catch one properly.\p"
	.string "…Whoa!$"

Route102_Text_WallyIDidIt:
# 105 "data/maps/Route102/scripts.pory"
	.string "Wally: I did it… It's my…\n"
	.string "My Pokémon!$"

Route102_Text_LetsGoBack:
# 110 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
	.string "Let's go back to the Gym!$"

Route102_Text_ImNotVeryTall:
# 115 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
	.string "into tall grass.\p"
	.string "The grass goes up my nose and…\n"
	.string "Fwafwafwafwafwa…\p"
	.string "Fwatchoo!$"

Route102_Text_CatchWholeBunchOfPokemon:
# 123 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
	.string "Pokémon!$"

Route102_Text_RouteSignOldale:
# 128 "data/maps/Route102/scripts.pory"
	.string "Route 102\n"
	.string "{RIGHT_ARROW} Oldale Town$"

Route102_Text_RouteSignPetalburg:
# 133 "data/maps/Route102/scripts.pory"
	.string "Route 102\n"
	.string "{LEFT_ARROW} Petalburg City$"
