Route101_MapScripts::
	.byte 0


Script_Route101_OnTransition:
	end


Script_Route101_Interact_Youngster::
# 10 "data/maps/Route101/scripts.pory"
	msgbox Text_Route101_Youngster_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
	end


Script_Route101_Interact_Boy::
# 22 "data/maps/Route101/scripts.pory"
	msgbox Text_Route101_Boy_WildPokemonInTallGrass, MSGBOX_NPC
	end


Script_Route101_Interact_RouteSign::
# 34 "data/maps/Route101/scripts.pory"
	msgbox Text_Route101_RouteSign, MSGBOX_SIGN
	end


Text_Route101_Youngster_TakeTiredPokemonToPokeCenter:
# 14 "data/maps/Route101/scripts.pory"
	.string "If Pokémon get tired, take them to\n"
	.string "a Pokémon Center.\p"
	.string "There's a Pokémon Center in Oldale\n"
	.string "Town right close by.$"

Text_Route101_Boy_WildPokemonInTallGrass:
# 26 "data/maps/Route101/scripts.pory"
	.string "Wild Pokémon will jump out at you in\n"
	.string "tall grass.\p"
	.string "If you want to catch Pokémon, you have\n"
	.string "to go into the tall grass and search.$"

Text_Route101_RouteSign:
# 38 "data/maps/Route101/scripts.pory"
	.string "Route 101\n"
	.string "{UP_ARROW} Oldale Town.$"
