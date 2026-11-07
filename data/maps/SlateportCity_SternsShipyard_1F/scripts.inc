SlateportCity_SternsShipyard_1F_MapScripts::
	.byte 0


# 2 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 3 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Dock::
# 4 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	lockall
# 5 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_SternsShipyard_1F_EventScript_FerryReady
# 6 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_SternsShipyard_1F_EventScript_BrineyJoined
# 7 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_DELIVERED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_NeedVeteran
# 8 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_GoFindStern
# 9 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CantMakeHeadsOrTails, MSGBOX_DEFAULT
# 10 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 11 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 12 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_MeetDockDeliverToStern, MSGBOX_DEFAULT
# 13 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	closemessage
# 14 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FaceOriginalDirection
# 15 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 16 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	setflag FLAG_DOCK_REJECTED_DEVON_GOODS
# 17 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA
# 18 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 19 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 20 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 21 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_FerryReady::
# 22 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 23 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 24 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_FerryIsReady, MSGBOX_DEFAULT
# 25 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 26 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 27 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 28 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_BrineyJoined::
# 29 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 30 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 31 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_BrineyJoinedUs, MSGBOX_DEFAULT
# 32 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 33 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 34 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 35 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_GoFindStern::
# 36 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 37 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 38 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CouldYouFindStern, MSGBOX_DEFAULT
# 39 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	closemessage
# 40 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FaceOriginalDirection
# 41 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 42 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 43 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 44 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 45 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_NeedVeteran::
# 46 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 47 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 48 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CouldUseAdviceFromVeteran, MSGBOX_DEFAULT
# 49 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 50 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 51 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 52 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Scientist1::
# 53 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_SeaIsLikeLivingThing, MSGBOX_NPC
# 54 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 55 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 56 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Scientist2::
# 57 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_GetSeasickEasily, MSGBOX_NPC
# 58 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 59 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 60 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Briney::
# 61 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_DecidedToHelpDock, MSGBOX_NPC
# 62 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end

SlateportCity_SternsShipyard_1F_Text_CantMakeHeadsOrTails:
# 65 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Umm… If this goes here, and that\n"
	.string "goes over there…\p"
	.string "Then where does this thing go?\n"
	.string "And what about that doohickey?\p"
	.string "Aaargh! I can't make heads or tails\n"
	.string "of this!$"

SlateportCity_SternsShipyard_1F_Text_MeetDockDeliverToStern:
# 74 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Hm?\n"
	.string "Hi, I'm Dock.\p"
	.string "Capt. Stern commissioned me to\n"
	.string "design a ferry.\p"
	.string "Oh! That there…\n"
	.string "Are they Devon Goods?\p"
	.string "But, hmm…\n"
	.string "This won't do…\p"
	.string "Capt. Stern went off somewhere.\n"
	.string "He said he had some work to do.\p"
	.string "Could I get you to go find Capt.\n"
	.string "Stern and deliver that to him?$"

SlateportCity_SternsShipyard_1F_Text_CouldYouFindStern:
# 89 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Dock: Where could Capt. Stern have\n"
	.string "gone off to?\p"
	.string "Could you go find Capt. Stern and\n"
	.string "deliver that parcel to him?$"

SlateportCity_SternsShipyard_1F_Text_CouldUseAdviceFromVeteran:
# 96 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Dock: Shipbuilding is an art.\p"
	.string "A lot of things can't be figured out\n"
	.string "just by calculating.\p"
	.string "I really could use advice from a veteran\n"
	.string "who knows the seas…$"

SlateportCity_SternsShipyard_1F_Text_BrineyJoinedUs:
# 104 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Dock: Hi! Mr. Briney's joined us to\n"
	.string "lend us his help.\p"
	.string "Thanks to the veteran sailor, the\n"
	.string "ferry is steadily coming together.$"

SlateportCity_SternsShipyard_1F_Text_FerryIsReady:
# 111 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Dock: The ferry is finally ready!\p"
	.string "The new S.S. TIDAL is truly a marvel\n"
	.string "of technology!\p"
	.string "But, I get the feeling that we can\n"
	.string "make something even better.\p"
	.string "You know, there's never an end to\n"
	.string "technology's march.$"

SlateportCity_SternsShipyard_1F_Text_DecidedToHelpDock:
# 121 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Mr. Briney: Ah, {PLAYER}{KUN}!\n"
	.string "It's been too long!\p"
	.string "Aye, since I met you, this old sea dog's\n"
	.string "been feeling frisky!\p"
	.string "So I've decided to help Dock make\n"
	.string "a ferry.\p"
	.string "Aye, after all, a ferry would be able\n"
	.string "to carry a lot of people.\p"
	.string "But, you know, that Dock is really\n"
	.string "something special.\p"
	.string "With his knack for technology and\n"
	.string "my experience, I'm sure that we can\l"
	.string "build one great ship, aye!$"

SlateportCity_SternsShipyard_1F_Text_SeaIsLikeLivingThing:
# 137 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "The seasons, the weather, where\n"
	.string "the moon sits in the sky…\p"
	.string "These and other conditions make\n"
	.string "the sea change its expression.\p"
	.string "That's right!\n"
	.string "The sea is like a living thing!$"

SlateportCity_SternsShipyard_1F_Text_GetSeasickEasily:
# 146 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "I get seasick real easily.\n"
	.string "So I get to help out here instead.$"
