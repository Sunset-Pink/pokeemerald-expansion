SootopolisCity_LotadAndSeedotHouse_MapScripts::
	.byte 0


# 2 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 3 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother::
# 4 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetSeedotSizeRecordInfo
# 5 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lock
# 6 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	faceplayer
# 7 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigSeedot, MSGBOX_DEFAULT
# 8 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	setvar VAR_0x8009, SPECIES_SEEDOT
# 9 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	chooseboxmon SELECT_PC_MON_TRADE
# 10 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	waitstate
# 11 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowSeedot
# 12 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special CompareSeedotSize
# 13 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, COMPARE_SIZE_INCORRECT_SPECIES, SootopolisCity_LotadAndSeedotHouse_EventScript_NotSeedot
# 14 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, COMPARE_SIZE_SMALLER, SootopolisCity_LotadAndSeedotHouse_EventScript_SmallSeedot
# 15 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, COMPARE_SIZE_LARGER, SootopolisCity_LotadAndSeedotHouse_EventScript_BigSeedot
# 16 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 17 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 18 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 19 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowSeedot::
# 20 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigSeedot, MSGBOX_DEFAULT
# 21 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 22 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 23 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 24 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NotSeedot::
# 25 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotSeedot, MSGBOX_DEFAULT
# 26 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 27 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 28 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 29 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SmallSeedot::
# 30 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerSeedot, MSGBOX_DEFAULT
# 31 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 32 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 33 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 34 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_BigSeedot::
# 35 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanLotad, MSGBOX_DEFAULT
# 36 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	giveitem ITEM_ELIXIR
# 37 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir1
# 38 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	closemessage
# 39 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 40 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 41 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 42 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir1::
# 43 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1, MSGBOX_DEFAULT
# 44 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 45 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 46 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 47 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother::
# 48 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetLotadSizeRecordInfo
# 49 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lock
# 50 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	faceplayer
# 51 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigLotad, MSGBOX_DEFAULT
# 52 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	setvar VAR_0x8009, SPECIES_LOTAD
# 53 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	chooseboxmon SELECT_PC_MON_TRADE
# 54 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	waitstate
# 55 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowLotad
# 56 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special CompareLotadSize
# 57 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, COMPARE_SIZE_INCORRECT_SPECIES, SootopolisCity_LotadAndSeedotHouse_EventScript_NotLotad
# 58 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, COMPARE_SIZE_SMALLER, SootopolisCity_LotadAndSeedotHouse_EventScript_SmallLotad
# 59 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, COMPARE_SIZE_LARGER, SootopolisCity_LotadAndSeedotHouse_EventScript_BigLotad
# 60 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 61 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 62 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 63 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowLotad::
# 64 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigLotad, MSGBOX_DEFAULT
# 65 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 66 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 67 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 68 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NotLotad::
# 69 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotLotad, MSGBOX_DEFAULT
# 70 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 71 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 72 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 73 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SmallLotad::
# 74 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerLotad, MSGBOX_DEFAULT
# 75 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 76 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 77 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 78 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_BigLotad::
# 79 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanSeedot, MSGBOX_DEFAULT
# 80 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	giveitem ITEM_ELIXIR
# 81 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir2
# 82 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	closemessage
# 83 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 84 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 85 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 86 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir2::
# 87 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull2, MSGBOX_DEFAULT
# 88 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 89 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 90 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 91 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotSizeRecord::
# 92 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetSeedotSizeRecordInfo
# 93 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lockall
# 94 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BiggestSeedotInHistory, MSGBOX_DEFAULT
# 95 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	releaseall
# 96 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 97 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 98 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_LotadSizeRecord::
# 99 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetLotadSizeRecordInfo
# 100 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lockall
# 101 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory, MSGBOX_DEFAULT
# 102 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	releaseall
# 103 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end

SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigSeedot:
# 106 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Do you know the Pokémon Seedot?\n"
	.string "It's hardly ever seen in Sootopolis.\p"
	.string "Anyway, I love big Seedot.\n"
	.string "The bigger the better.\p"
	.string "But my younger brother, he says that\n"
	.string "Lotad is bigger.\p"
	.string "That's silly.\n"
	.string "Seedot has to be bigger than that!\p"
	.string "Huh? Do you have a Seedot with you?\n"
	.string "P-p-please, show me!$"

SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanLotad:
# 119 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2}!\n"
	.string "Oh, my gosh, this is a big one!\p"
	.string "It might even beat the big Lotad\n"
	.string "my younger brother saw!\p"
	.string "Thanks for showing me.\n"
	.string "This is my thanks!$"

SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1:
# 129 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Hunh?\n"
	.string "Your Bag is crammed full.$"

SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerSeedot:
# 134 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2}, is it?\p"
	.string "Hmm… I've seen a bigger Seedot\n"
	.string "than this one.$"

SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotSeedot:
# 140 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Oh, now this is quite something…\n"
	.string "But it's not a Seedot!$"

SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigSeedot:
# 145 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "You don't have a big Seedot?\n"
	.string "That's too bad…\p"
	.string "If you get a big Seedot, please\n"
	.string "come show me.$"

SootopolisCity_LotadAndSeedotHouse_Text_BiggestSeedotInHistory:
# 152 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "The biggest Seedot in history!\n"
	.string "{STR_VAR_2}'s {STR_VAR_3} giant!\p"
	.string "A Seedot bigger than a Lotad\n"
	.string "always wanted!$"

SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigLotad:
# 159 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Do you know the Pokémon Lotad?\n"
	.string "It's rarely seen in Sootopolis.\p"
	.string "I love, I mean love, big Lotad!\p"
	.string "My big brother says that Seedot is\n"
	.string "bigger.\p"
	.string "But that's wrong! Everyone knows that\n"
	.string "Lotad is a lot bigger.\p"
	.string "Hunh? Do you have a Lotad?\n"
	.string "P-p-please show me!$"

SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanSeedot:
# 171 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2}!\n"
	.string "Wow, that is big!\p"
	.string "It might be even bigger than the huge\n"
	.string "Seedot my big brother saw.\p"
	.string "Thanks for showing me!\n"
	.string "This is my thanks!$"

SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull2:
# 180 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Hunh?\n"
	.string "Your Bag is crammed full.$"

SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerLotad:
# 185 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2}?\p"
	.string "Hmm… I've seen a bigger Lotad\n"
	.string "than this one here.$"

SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotLotad:
# 191 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Well, isn't this something!\n"
	.string "But it's no Lotad!$"

SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigLotad:
# 196 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Don't you have a big Lotad?\n"
	.string "How disappointing…\p"
	.string "If you get a big Lotad, please\n"
	.string "come show me!$"

SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory:
# 203 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "The biggest Lotad in history!\n"
	.string "{STR_VAR_2}'s {STR_VAR_3} colossus!\p"
	.string "A Lotad bigger than a Seedot\n"
	.string "always wanted!$"
