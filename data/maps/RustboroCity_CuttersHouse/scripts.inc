RustboroCity_CuttersHouse_MapScripts::
	.byte 0


RustboroCity_CuttersHouse_EventScript_Cutter::
# 4 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lock
# 5 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	faceplayer
# 6 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_CUT, RustboroCity_CuttersHouse_EventScript_Cutter_2
RustboroCity_CuttersHouse_EventScript_Cutter_1:
# 11 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut
# 12 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
	end

RustboroCity_CuttersHouse_EventScript_Cutter_2:
# 7 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse
# 8 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	giveitem ITEM_HM_CUT
# 9 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
	goto RustboroCity_CuttersHouse_EventScript_Cutter_1


RustboroCity_CuttersHouse_EventScript_Lass::
# 17 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees, MSGBOX_NPC
	end


RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse:
# 21 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "That determined expression…\n"
	.string "That limber way you move…\l"
	.string "And your well-trained Pokémon…\p"
	.string "You're obviously a skilled Trainer!\p"
	.string "No, wait, don't say a word.\n"
	.string "I can tell just by looking at you.\p"
	.string "I'm sure that you can put this\n"
	.string "Hidden Machine to good use.\p"
	.string "No need to be modest or shy.\n"
	.string "Go on, take it!$"

RustboroCity_CuttersHouse_Text_ExplainCut:
# 34 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "That Hidden Machine, or HM for\n"
	.string "short, is Cut.\p"
	.string "An HM move is one that can be used\n"
	.string "by Pokémon outside of battle.\p"
	.string "Any Pokémon that's learned Cut can\n"
	.string "chop down thin trees if the Trainer\l"
	.string "has earned the Stone Badge.\p"
	.string "And, unlike a TM, an HM can be used\n"
	.string "more than once.$"

RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees:
# 46 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "When they were expanding the city of\n"
	.string "Rustboro, my dad helped out.\p"
	.string "He made his Pokémon use Cut to clear\n"
	.string "the land of trees.$"
