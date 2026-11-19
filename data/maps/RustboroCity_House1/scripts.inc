RustboroCity_House1_MapScripts::
	.byte 0


RustboroCity_House1_EventScript_Trader::
# 4 "data/maps/RustboroCity_House1/scripts.pory"
	lock
# 5 "data/maps/RustboroCity_House1/scripts.pory"
	faceplayer
# 6 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_set FLAG_RUSTBORO_NPC_TRADE_COMPLETED, RustboroCity_House1_EventScript_Trader_2
# 9 "data/maps/RustboroCity_House1/scripts.pory"
	ingame_trade INGAME_TRADE_SEEDOT, RustboroCity_House1_Text_IllTradeIfYouWant, RustboroCity_House1_EventScript_DeclineTrade, RustboroCity_House1_EventScript_NotRequestedMon, RustboroCity_House1_EventScript_TradeCompleted
# 16 "data/maps/RustboroCity_House1/scripts.pory"
	setflag FLAG_RUSTBORO_NPC_TRADE_COMPLETED
RustboroCity_House1_EventScript_Trader_1:
# 18 "data/maps/RustboroCity_House1/scripts.pory"
	release
	end

RustboroCity_House1_EventScript_Trader_2:
# 7 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AnyPokemonCanBeCute
	goto RustboroCity_House1_EventScript_Trader_1


RustboroCity_House1_EventScript_DeclineTrade::
# 23 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_YouDontWantToThatsOkay
# 24 "data/maps/RustboroCity_House1/scripts.pory"
	release
	end


RustboroCity_House1_EventScript_NotRequestedMon::
# 29 "data/maps/RustboroCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 30 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_DoesntLookLikeMonToMe
# 31 "data/maps/RustboroCity_House1/scripts.pory"
	release
	end


RustboroCity_House1_EventScript_TradeCompleted::
# 36 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AnyPokemonCanBeCute
# 37 "data/maps/RustboroCity_House1/scripts.pory"
	release
	end


RustboroCity_House1_EventScript_Hiker::
# 42 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AllSortsOfPlaces, MSGBOX_NPC
	end


RustboroCity_House1_Text_IllTradeIfYouWant:
# 46 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Huh? My Pokémon is cute?\n"
	.string "Sure, I knew that.\p"
	.string "But if you really want, I'm willing\n"
	.string "to trade it to you.\p"
	.string "I'll trade you my {STR_VAR_2} for\n"
	.string "a {STR_VAR_1} if you want.$"

RustboroCity_House1_Text_PleaseBeGoodToMyPokemon:
# 55 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Eheheh…\n"
	.string "Please be good to my Pokémon.$"

RustboroCity_House1_Text_DoesntLookLikeMonToMe:
# 60 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Huh? That doesn't look anything like\n"
	.string "a {STR_VAR_1} to me.$"

RustboroCity_House1_Text_YouDontWantToThatsOkay:
# 65 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Oh, if you don't want to, that's okay.\n"
	.string "But my Pokémon is cute, you know…$"

RustboroCity_House1_Text_AnyPokemonCanBeCute:
# 70 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Any Pokémon can be cute if you raise\n"
	.string "it with care and kindness.$"

RustboroCity_House1_Text_AllSortsOfPlaces:
# 75 "data/maps/RustboroCity_House1/scripts.pory"
	.string "In all sorts of places, there are all\n"
	.string "sorts of Pokémon and people.\p"
	.string "I find that fascinating, so I go to all\n"
	.string "sorts of places.$"
