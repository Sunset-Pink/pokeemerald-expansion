# 1 "data/maps/OldaleTown_House1/scripts.pory"

# 2 "data/maps/OldaleTown_House1/scripts.pory"
OldaleTown_House1_MapScripts::
# 3 "data/maps/OldaleTown_House1/scripts.pory"
	.byte 0
# 4 "data/maps/OldaleTown_House1/scripts.pory"

# 5 "data/maps/OldaleTown_House1/scripts.pory"
OldaleTown_House1_EventScript_Woman::
# 6 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_Text_LeftPokemonGoesOutFirst, MSGBOX_NPC
# 7 "data/maps/OldaleTown_House1/scripts.pory"
	end

OldaleTown_House1_Text_LeftPokemonGoesOutFirst:
# 10 "data/maps/OldaleTown_House1/scripts.pory"
	.string "When a Pokémon battle starts, the one\n"
	.string "at the left of the list goes out first.\p"
	.string "So, when you get more Pokémon in your\n"
	.string "party, try switching around the order\l"
	.string "of your Pokémon.\p"
	.string "It could give you an advantage.$"
