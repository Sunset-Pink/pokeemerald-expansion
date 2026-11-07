SSTidalLowerDeck_MapScripts::
	.byte 0


# 3 "data/maps/SSTidalLowerDeck/scripts.pory"

# 4 "data/maps/SSTidalLowerDeck/scripts.pory"

# 5 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_EventScript_Phillip::
# 6 "data/maps/SSTidalLowerDeck/scripts.pory"
	trainerbattle_single TRAINER_PHILLIP, SSTidalLowerDeck_Text_PhillipIntro, SSTidalLowerDeck_Text_PhillipDefeat
# 7 "data/maps/SSTidalLowerDeck/scripts.pory"
	msgbox SSTidalLowerDeck_Text_PhillipPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/SSTidalLowerDeck/scripts.pory"
	end
# 9 "data/maps/SSTidalLowerDeck/scripts.pory"

# 10 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_EventScript_Leonard::
# 11 "data/maps/SSTidalLowerDeck/scripts.pory"
	trainerbattle_single TRAINER_LEONARD, SSTidalLowerDeck_Text_LeonardIntro, SSTidalLowerDeck_Text_LeonardDefeat
# 12 "data/maps/SSTidalLowerDeck/scripts.pory"
	msgbox SSTidalLowerDeck_Text_LeonardPostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/SSTidalLowerDeck/scripts.pory"
	end

SSTidalLowerDeck_Text_PhillipIntro:
# 16 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Arrrgh! I'm fed up and dog-tired of\n"
	.string "cleaning this huge place!\p"
	.string "Let's have a quick battle!$"

SSTidalLowerDeck_Text_PhillipDefeat:
# 22 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Little bro, I lost!$"

SSTidalLowerDeck_Text_PhillipPostBattle:
# 26 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "We're the Cleanup Brothers!\p"
	.string "The old one dumps the detergent,\n"
	.string "and the young one does the scrubbing!$"

SSTidalLowerDeck_Text_LeonardIntro:
# 32 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "This is the bottom of the ship's hull.\n"
	.string "There's plenty of room.\l"
	.string "It'll be alright for a Pokémon battle.$"

SSTidalLowerDeck_Text_LeonardDefeat:
# 38 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Big bro, I lost!$"

SSTidalLowerDeck_Text_LeonardPostBattle:
# 42 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "We're the Cleanup Brothers!\p"
	.string "The old one dumps the detergent,\n"
	.string "and the young one does the scrubbing!$"
