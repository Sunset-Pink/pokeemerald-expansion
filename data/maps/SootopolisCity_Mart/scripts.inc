SootopolisCity_Mart_MapScripts::
	.byte 0


	.align 2
# 3 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Pokemart:
# 4 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 5 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 6 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 7 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 8 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 9 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 10 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 11 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 12 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SHADOW_MAIL
	.2byte ITEM_NONE

# 16 "data/maps/SootopolisCity_Mart/scripts.pory"

# 17 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_Clerk::
# 18 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 19 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 20 "data/maps/SootopolisCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 21 "data/maps/SootopolisCity_Mart/scripts.pory"
	waitmessage
# 22 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart SootopolisCity_Mart_Pokemart
# 23 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 24 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 25 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 26 "data/maps/SootopolisCity_Mart/scripts.pory"

# 27 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_FatMan::
# 28 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 29 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 30 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_Mart_EventScript_FatManNoLegendaries
# 31 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_FatManNoLegendaries
# 32 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_TooScaryOutside, MSGBOX_DEFAULT
# 33 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 34 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 35 "data/maps/SootopolisCity_Mart/scripts.pory"

# 36 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_FatManNoLegendaries::
# 37 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_PPUpIsGreat, MSGBOX_DEFAULT
# 38 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 39 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 40 "data/maps/SootopolisCity_Mart/scripts.pory"

# 41 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_Gentleman::
# 42 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 43 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 44 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_Mart_EventScript_GentlemanNoLegendaries
# 45 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_GentlemanNoLegendaries
# 46 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_DidSomethingAwaken, MSGBOX_DEFAULT
# 47 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 48 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 49 "data/maps/SootopolisCity_Mart/scripts.pory"

# 50 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_GentlemanNoLegendaries::
# 51 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_FullRestoreItemOfDreams, MSGBOX_DEFAULT
# 52 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 53 "data/maps/SootopolisCity_Mart/scripts.pory"
	end

SootopolisCity_Mart_Text_PPUpIsGreat:
# 56 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "PP Up is great!\p"
	.string "It raises the Power Points, the PP,\n"
	.string "of a Pokémon move.$"

SootopolisCity_Mart_Text_TooScaryOutside:
# 62 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "What…\n"
	.string "What is happening?\p"
	.string "I really want to know, but it's too\n"
	.string "scary to go outside.$"

SootopolisCity_Mart_Text_FullRestoreItemOfDreams:
# 69 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Do you know Full Resteore?\p"
	.string "Full restoration of HP!\n"
	.string "Eradication of all status problems!\p"
	.string "It's truly an item of your dreams!$"

SootopolisCity_Mart_Text_DidSomethingAwaken:
# 76 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "This weather…\n"
	.string "Did something awaken?$"
