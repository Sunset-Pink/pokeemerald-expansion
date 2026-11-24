RustboroCity_Mart_MapScripts::
	.byte 0


RustboroCity_Mart_EventScript_Clerk::
# 4 "data/maps/RustboroCity_Mart/scripts.pory"
	lock
# 5 "data/maps/RustboroCity_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/RustboroCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/RustboroCity_Mart/scripts.pory"
	goto_if_unset FLAG_MET_DEVON_EMPLOYEE, RustboroCity_Mart_EventScript_Clerk_2
# 11 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Expanded
RustboroCity_Mart_EventScript_Clerk_1:
# 13 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 14 "data/maps/RustboroCity_Mart/scripts.pory"
	release
	end

RustboroCity_Mart_EventScript_Clerk_2:
# 9 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Basic
	goto RustboroCity_Mart_EventScript_Clerk_1


	.align 2
# 18 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Basic:
# 19 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 20 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 21 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 22 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 23 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 24 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 25 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 26 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 27 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_NONE

	.align 2
# 30 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Expanded:
# 31 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 32 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 33 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 34 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 35 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 36 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 37 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 38 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 39 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 40 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 41 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_NONE

RustboroCity_Mart_EventScript_PokefanF::
# 45 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish, MSGBOX_NPC
	end


RustboroCity_Mart_EventScript_Boy::
# 50 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead, MSGBOX_NPC
	end


RustboroCity_Mart_EventScript_BugCatcher::
# 55 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_GettingEscapeRopeJustInCase, MSGBOX_NPC
	end


RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish:
# 59 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I'm buying some Paralyz Heals and\n"
	.string "Antidotes.\p"
	.string "Just in case I run into Shroomish\n"
	.string "in Petalburg Woods.$"

RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead:
# 66 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "My Pokémon evolved.\n"
	.string "It has a lot of HP now.\p"
	.string "I should buy Super Potions for it\n"
	.string "instead of ordinary Potions.$"

RustboroCity_Mart_Text_GettingEscapeRopeJustInCase:
# 73 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I'm getting an Escape Rope just in\n"
	.string "case I get lost in a cave.\p"
	.string "I just need to use it to get back to\n"
	.string "the entrance.$"
