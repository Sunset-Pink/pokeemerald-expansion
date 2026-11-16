PetalburgCity_WallysHouse_MapScripts::
# 2 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_WallysHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_WallysHouse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

PetalburgCity_WallysHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_GiveHMSurf
	.2byte 0

PetalburgCity_WallysHouse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther
	.2byte 0


PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther::
# 11 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 12 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject LOCALID_WALLYS_HOUSE_WALLYS_DAD, DIR_WEST
	end


PetalburgCity_WallysHouse_EventScript_GiveHMSurf::
# 17 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lockall
# 18 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_PleaseExcuseUs
# 19 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	giveitem ITEM_HM_SURF
# 20 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 21 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces
# 22 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 5
# 23 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	releaseall
	end


PetalburgCity_WallysHouse_EventScript_WallysDad::
# 28 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 29 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 30 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, PetalburgCity_WallysHouse_EventScript_WallysDad_2
# 32 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_WallysDad_3
# 34 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_THANKED_FOR_PLAYING_WITH_WALLY, PetalburgCity_WallysHouse_EventScript_WallysDad_4
# 37 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally
# 38 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_THANKED_FOR_PLAYING_WITH_WALLY
PetalburgCity_WallysHouse_EventScript_WallysDad_1:
# 40 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
	end

PetalburgCity_WallysHouse_EventScript_WallysDad_2:
# 31 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity
	goto PetalburgCity_WallysHouse_EventScript_WallysDad_1

PetalburgCity_WallysHouse_EventScript_WallysDad_3:
# 33 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon
	goto PetalburgCity_WallysHouse_EventScript_WallysDad_1

PetalburgCity_WallysHouse_EventScript_WallysDad_4:
# 35 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing
	goto PetalburgCity_WallysHouse_EventScript_WallysDad_1


PetalburgCity_WallysHouse_EventScript_WallysMom::
# 45 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 46 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 47 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_WallysMom_2
# 50 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyWasReallyHappy
PetalburgCity_WallysHouse_EventScript_WallysMom_1:
# 52 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
	return

PetalburgCity_WallysHouse_EventScript_WallysMom_2:
# 48 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling
	goto PetalburgCity_WallysHouse_EventScript_WallysMom_1


PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally:
# 56 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "You're…\n"
	.string "Ah, you must be {PLAYER}{KUN}, right?\p"
	.string "Thank you for playing with WALLY a\n"
	.string "little while ago.\p"
	.string "He's been frail and sickly ever\n"
	.string "since he was a baby.\p"
	.string "We've sent him to stay with my relatives\n"
	.string "in Verdanturf Town for a while.\p"
	.string "The air is a lot cleaner there\n"
	.string "than it is here.\p"
	.string "What's that? Where's Wally?\n"
	.string "He's already left, our Wally.\p"
	.string "I wonder where he could have\n"
	.string "gotten by now?$"

PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing:
# 73 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I wonder how our Wally is doing?$"

PetalburgCity_WallysHouse_Text_PleaseExcuseUs:
# 77 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "{PLAYER}{KUN}! Please excuse us for\n"
	.string "dragging you here this way.\p"
	.string "But our Wally's become very healthy\n"
	.string "since he went to Verdanturf Town.\p"
	.string "We owe it all to you!\p"
	.string "When Wally left town, you helped\n"
	.string "him catch a Pokémon, right?\p"
	.string "I think that made Wally really\n"
	.string "happy.\p"
	.string "Actually, not just Wally.\n"
	.string "It made me, his father, happy too.\p"
	.string "Happy that he's gained such a great\n"
	.string "friend as you.\p"
	.string "This isn't a bribe or anything, but\n"
	.string "I'd really like you to have this.$"

PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces:
# 95 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "If your Pokémon can Surf, you'll be\n"
	.string "able to go to all sorts of places.$"

PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon:
# 100 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Wally's coming home soon.\n"
	.string "I'm looking forward to that.$"

PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity:
# 105 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Oh? You met WALLY in\n"
	.string "Ever Grande City?\p"
	.string "Oh, {PLAYER}{KUN}, don't be silly.\p"
	.string "He may have gotten healthy, but he\n"
	.string "can't go somewhere far away like\l"
	.string "that all by himself.$"

PetalburgCity_WallysHouse_Text_WallyWasReallyHappy:
# 114 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Wally was really happy when he told\n"
	.string "us that he caught a Pokémon.\p"
	.string "It's been ages since I've seen him\n"
	.string "smile like that.$"

PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling:
# 121 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I want you to keep this a secret\n"
	.string "from my husband…\p"
	.string "But our Wally left Verdanturf Town\n"
	.string "without telling anyone.\p"
	.string "You know, Wally is frail, but\n"
	.string "he's surprisingly strong-willed.\p"
	.string "I'm sure that he'll come back safe\n"
	.string "and sound one day!$"
