SlateportCity_Mart_MapScripts::
	.byte 0


# 2 "data/maps/SlateportCity_Mart/scripts.pory"

# 3 "data/maps/SlateportCity_Mart/scripts.pory"

# 4 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Clerk::
# 5 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 6 "data/maps/SlateportCity_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/SlateportCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 8 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 9 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_Mart_Pokemart
# 10 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 11 "data/maps/SlateportCity_Mart/scripts.pory"
	release
# 12 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 13 "data/maps/SlateportCity_Mart/scripts.pory"

# 14 "data/maps/SlateportCity_Mart/scripts.pory"

# 15 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_BlackBelt::
# 16 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_SomeItemsOnlyAtMart, MSGBOX_NPC
# 17 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 18 "data/maps/SlateportCity_Mart/scripts.pory"

# 19 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Man::
# 20 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_GreatBallIsBetter, MSGBOX_NPC
# 21 "data/maps/SlateportCity_Mart/scripts.pory"
	end

	.align 2
# 24 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Pokemart:
# 25 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 26 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 27 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 28 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 29 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 30 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 31 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 32 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 33 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_NONE

SlateportCity_Mart_Text_SomeItemsOnlyAtMart:
# 36 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "The Market does have some interesting\n"
	.string "merchandise.\p"
	.string "But there are some items you can only\n"
	.string "get at a Pokémon Mart.$"

SlateportCity_Mart_Text_GreatBallIsBetter:
# 43 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "A Great Ball is better than a Poké Ball\n"
	.string "at catching Pokémon.\p"
	.string "With this, I should be able to get that\n"
	.string "elusive Pokémon…$"
