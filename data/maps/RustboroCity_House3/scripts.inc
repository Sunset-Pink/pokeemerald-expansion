RustboroCity_House3_MapScripts::
	.byte 0


RustboroCity_House3_EventScript_OldMan::
# 4 "data/maps/RustboroCity_House3/scripts.pory"
	msgbox RustboroCity_House3_Text_IGivePerfectlySuitedNicknames, MSGBOX_NPC
	end


RustboroCity_House3_EventScript_OldWoman::
# 9 "data/maps/RustboroCity_House3/scripts.pory"
	msgbox RustboroCity_House3_Text_NamingPikachuPekachu, MSGBOX_NPC
	end


RustboroCity_House3_EventScript_Pekachu::
# 14 "data/maps/RustboroCity_House3/scripts.pory"
	lock
# 15 "data/maps/RustboroCity_House3/scripts.pory"
	faceplayer
# 16 "data/maps/RustboroCity_House3/scripts.pory"
	waitse
# 17 "data/maps/RustboroCity_House3/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 18 "data/maps/RustboroCity_House3/scripts.pory"
	msgbox RustboroCity_House3_Text_Pekachu
# 19 "data/maps/RustboroCity_House3/scripts.pory"
	waitmoncry
# 20 "data/maps/RustboroCity_House3/scripts.pory"
	release
	end


RustboroCity_House3_Text_IGivePerfectlySuitedNicknames:
# 24 "data/maps/RustboroCity_House3/scripts.pory"
	.string "For my own Pokémon, I give them\n"
	.string "perfectly suited nicknames!\p"
	.string "It's my expression of, uh…\n"
	.string "originality, yes, that's it!$"

RustboroCity_House3_Text_NamingPikachuPekachu:
# 31 "data/maps/RustboroCity_House3/scripts.pory"
	.string "But giving the name Pekachu to\n"
	.string "a Pikachu? It seems pointless.\p"
	.string "I suppose it is good to use a name\n"
	.string "that's easy to understand, but…$"

RustboroCity_House3_Text_Pekachu:
# 38 "data/maps/RustboroCity_House3/scripts.pory"
	.string "Pekachu: Peka!$"
