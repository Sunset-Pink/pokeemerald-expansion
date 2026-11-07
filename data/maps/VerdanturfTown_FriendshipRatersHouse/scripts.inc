# 2 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 3 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_MapScripts::
# 4 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.byte 0
# 5 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 6 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater::
# 7 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	lock
# 8 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	faceplayer
# 9 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_SeeHowMuchPokemonLikesYou, MSGBOX_DEFAULT
# 10 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 11 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	switch VAR_RESULT
# 12 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_NONE, VerdanturfTown_FriendshipRatersHouse_EventScript_DetestsYou
# 13 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_1_TO_49, VerdanturfTown_FriendshipRatersHouse_EventScript_VeryWary
# 14 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_50_TO_99, VerdanturfTown_FriendshipRatersHouse_EventScript_NotUsedToYou
# 15 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_100_TO_149, VerdanturfTown_FriendshipRatersHouse_EventScript_GettingUsedToYou
# 16 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_150_TO_199, VerdanturfTown_FriendshipRatersHouse_EventScript_LikesYouQuiteALot
# 17 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_200_TO_254, VerdanturfTown_FriendshipRatersHouse_EventScript_VeryHappy
# 18 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_MAX, VerdanturfTown_FriendshipRatersHouse_EventScript_AdoresYou
# 19 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 20 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 21 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 22 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_DetestsYou::
# 23 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_DetestsYou, MSGBOX_DEFAULT
# 24 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 25 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 26 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 27 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_VeryWary::
# 28 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_VeryWary, MSGBOX_DEFAULT
# 29 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 30 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 31 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 32 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_NotUsedToYou::
# 33 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_NotUsedToYou, MSGBOX_DEFAULT
# 34 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 35 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 36 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 37 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_GettingUsedToYou::
# 38 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_GettingUsedToYou, MSGBOX_DEFAULT
# 39 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 40 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 41 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 42 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_LikesYouQuiteALot::
# 43 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_LikesYouQuiteALot, MSGBOX_DEFAULT
# 44 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 45 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 46 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 47 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_VeryHappy::
# 48 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_VeryHappy, MSGBOX_DEFAULT
# 49 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 50 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 51 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 52 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_AdoresYou::
# 53 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_AdoresYou, MSGBOX_DEFAULT
# 54 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 55 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end
# 56 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"

# 57 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu::
# 58 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	lock
# 59 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	faceplayer
# 60 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	waitse
# 61 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 62 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_Pikachu, MSGBOX_DEFAULT
# 63 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	waitmoncry
# 64 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	release
# 65 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	end

VerdanturfTown_FriendshipRatersHouse_Text_SeeHowMuchPokemonLikesYou:
# 67 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Let me see your Pokémon.\n"
	.string "I'll check to see how much it likes you.\p"
	.string "Oh.\n"
	.string "Your Pokémon…$"

VerdanturfTown_FriendshipRatersHouse_Text_AdoresYou:
# 74 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It adores you.\n"
	.string "It can't possibly love you any more.\l"
	.string "I even feel happy seeing it.$"

VerdanturfTown_FriendshipRatersHouse_Text_VeryHappy:
# 80 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It seems to be very happy.\n"
	.string "It obviously likes you a whole lot.$"

VerdanturfTown_FriendshipRatersHouse_Text_LikesYouQuiteALot:
# 85 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It likes you quite a lot.\n"
	.string "It seems to want to be babied a little.$"

VerdanturfTown_FriendshipRatersHouse_Text_GettingUsedToYou:
# 90 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It's getting used to you.\n"
	.string "It seems to believe in you.$"

VerdanturfTown_FriendshipRatersHouse_Text_NotUsedToYou:
# 95 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It's not very used to you yet.\n"
	.string "It neither loves nor hates you.$"

VerdanturfTown_FriendshipRatersHouse_Text_VeryWary:
# 100 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It's very wary.\n"
	.string "It has scary viciousness in its eyes.\l"
	.string "It doesn't like you much at all.$"

VerdanturfTown_FriendshipRatersHouse_Text_DetestsYou:
# 106 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "This is a little hard for me to say…\p"
	.string "Your Pokémon simply detests you.\n"
	.string "Doesn't that make you uncomfortable?$"

VerdanturfTown_FriendshipRatersHouse_Text_Pikachu:
# 112 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Pikachu: Pika pika!$"
