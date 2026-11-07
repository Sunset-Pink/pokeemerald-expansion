VerdanturfTown_Mart_MapScripts::
	.byte 0


	.align 2
# 4 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Pokemart:
# 5 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 6 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 7 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 8 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 9 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 10 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 11 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 12 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 13 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 14 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 15 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
	.2byte ITEM_NONE

# 18 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 19 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Clerk::
# 20 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lock
# 21 "data/maps/VerdanturfTown_Mart/scripts.pory"
	faceplayer
# 22 "data/maps/VerdanturfTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 23 "data/maps/VerdanturfTown_Mart/scripts.pory"
	waitmessage
# 24 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemart VerdanturfTown_Mart_Pokemart
# 25 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 26 "data/maps/VerdanturfTown_Mart/scripts.pory"
	release
# 27 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 28 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 29 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Boy::
# 30 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_XSpecialIsCrucial, MSGBOX_NPC
# 31 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 32 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 33 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_ExpertF::
# 34 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent, MSGBOX_NPC
# 35 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 36 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 37 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Lass::
# 38 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon, MSGBOX_NPC
# 39 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end

VerdanturfTown_Mart_Text_XSpecialIsCrucial:
# 42 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "For any Pokémon match, X Special\n"
	.string "is crucial.\p"
	.string "It jacks up the power of some moves\n"
	.string "even though it's only for one battle.$"

VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent:
# 49 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "They don't seem to sell any winning\n"
	.string "strategy guides for the Battle Tent…\p"
	.string "It seems one must rely on one's\n"
	.string "own wits after all…$"

VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon:
# 56 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "The Nest Ball works better on\n"
	.string "weakened POKéMON.\p"
	.string "Verdanturf is the only place you can\n"
	.string "buy it.$"
