SlateportCity_NameRatersHouse_MapScripts::
	.byte 0


# 2 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 3 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NameRater::
# 4 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	lock
# 5 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	faceplayer
# 6 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname, MSGBOX_YESNO
# 7 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate
# 8 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
# 9 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 10 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 11 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate::
# 12 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname, MSGBOX_DEFAULT
# 13 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	chooseboxmon
# 14 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitstate
# 15 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_NameRatersHouse_EventScript_RateMonNickname
# 16 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
# 17 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 18 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 19 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_DeclineNameRate::
# 20 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_DoVisitAgain, MSGBOX_DEFAULT
# 21 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 22 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 23 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 24 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_RateMonNickname::
# 25 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 26 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, SlateportCity_NameRatersHouse_EventScript_CantRateEgg
# 27 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 28 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special IsMonOTIDNotPlayers
# 29 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
# 30 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, MonOTNameNotPlayer
# 31 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 32 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
# 33 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne, MSGBOX_YESNO
# 34 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_NameRatersHouse_EventScript_ChangeNickname
# 35 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
# 36 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 37 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 38 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_CantRateEgg::
# 39 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg, MSGBOX_DEFAULT
# 40 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 41 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 42 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 43 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT::
# 44 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_MagnificentName, MSGBOX_DEFAULT
# 45 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 46 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 47 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 48 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChangeNickname::
# 49 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe, MSGBOX_DEFAULT
# 50 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 51 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
# 52 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 53 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_NewNameDifferent
# 54 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior, MSGBOX_DEFAULT
# 55 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 56 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 57 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 58 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NewNameDifferent::
# 59 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName, MSGBOX_DEFAULT
# 60 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 61 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end

SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname:
# 64 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hi, hi! I'm the Name Rater!\n"
	.string "I'm the fortune-teller of names!\p"
	.string "I shall be pleased to rate your\n"
	.string "Pokémon's nickname.$"

SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname:
# 71 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Which Pokémon's nickname should\n"
	.string "I critique?$"

SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne:
# 76 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hmmm… {STR_VAR_1}, is it? That is\n"
	.string "quite a fine name you bestowed.\p"
	.string "But! What say you, if I were to\n"
	.string "suggest a slightly better name?$"

SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe:
# 83 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Ah, good. Then, what shall the new\n"
	.string "nickname be?$"

SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName:
# 88 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Done! From now on, this Pokémon\n"
	.string "shall be known as {STR_VAR_1}!\p"
	.string "It is a better name than before!\n"
	.string "How fortunate for you!$"

SlateportCity_NameRatersHouse_Text_DoVisitAgain:
# 95 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "I see.\n"
	.string "Do come visit again.$"

SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior:
# 100 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Done! From now on, this Pokémon\n"
	.string "shall be known as {STR_VAR_1}!\p"
	.string "It looks no different from before,\n"
	.string "and yet, this is vastly superior!\p"
	.string "How fortunate for you!$"

SlateportCity_NameRatersHouse_Text_MagnificentName:
# 108 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hmmm… {STR_VAR_1} it is!\p"
	.string "This is a magnificent nickname!\n"
	.string "It is impeccably beyond reproach!\p"
	.string "You'll do well to cherish your\n"
	.string "{STR_VAR_1} now and beyond.$"

SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg:
# 116 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Now, now.\n"
	.string "That is merely an Egg!$"
