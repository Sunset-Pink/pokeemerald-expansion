VerdanturfTown_WandasHouse_MapScripts::
	.byte 0


# 3 "data/maps/VerdanturfTown_WandasHouse/script.pory"

# 4 "data/maps/VerdanturfTown_WandasHouse/script.pory"
VerdanturfTown_WandasHouse_EventScript_Wally::
# 5 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	lock
# 6 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	faceplayer
# 7 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	goto_if_set FLAG_WALLY_SPEECH, VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech
# 8 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeech, MSGBOX_DEFAULT
# 9 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	setflag FLAG_WALLY_SPEECH
# 10 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	release
# 11 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	end
# 12 "data/maps/VerdanturfTown_WandasHouse/script.pory"

# 13 "data/maps/VerdanturfTown_WandasHouse/script.pory"
VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech::
# 14 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeechShort, MSGBOX_DEFAULT
# 15 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	release
# 16 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	end
# 17 "data/maps/VerdanturfTown_WandasHouse/script.pory"

# 18 "data/maps/VerdanturfTown_WandasHouse/script.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncle::
# 19 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	lock
# 20 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	faceplayer
# 21 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande
# 22 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff
# 23 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallysNextDoor, MSGBOX_DEFAULT
# 24 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	release
# 25 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	end
# 26 "data/maps/VerdanturfTown_WandasHouse/script.pory"

# 27 "data/maps/VerdanturfTown_WandasHouse/script.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff::
# 28 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallySlippedOff, MSGBOX_DEFAULT
# 29 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	release
# 30 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	end
# 31 "data/maps/VerdanturfTown_WandasHouse/script.pory"

# 32 "data/maps/VerdanturfTown_WandasHouse/script.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande::
# 33 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyGoneThatFar, MSGBOX_DEFAULT
# 34 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	release
# 35 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	end
# 36 "data/maps/VerdanturfTown_WandasHouse/script.pory"

# 37 "data/maps/VerdanturfTown_WandasHouse/script.pory"
VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend::
# 38 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	msgbox VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay, MSGBOX_NPC
# 39 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	end
# 40 "data/maps/VerdanturfTown_WandasHouse/script.pory"

# 41 "data/maps/VerdanturfTown_WandasHouse/script.pory"
VerdanturfTown_WandasHouse_EventScript_Wanda::
# 42 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	lock
# 43 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	faceplayer
# 44 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WandaDontWorry
# 45 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	goto_if_set FLAG_DEFEATED_WALLY_MAUVILLE, VerdanturfTown_WandasHouse_EventScript_MeetWanda
# 46 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
# 47 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	release
# 48 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	end
# 49 "data/maps/VerdanturfTown_WandasHouse/script.pory"

# 50 "data/maps/VerdanturfTown_WandasHouse/script.pory"
VerdanturfTown_WandasHouse_EventScript_MeetWanda::
# 51 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	msgbox VerdanturfTown_WandasHouse_Text_MeetWanda, MSGBOX_DEFAULT
# 52 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	release
# 53 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	end
# 54 "data/maps/VerdanturfTown_WandasHouse/script.pory"

# 55 "data/maps/VerdanturfTown_WandasHouse/script.pory"
VerdanturfTown_WandasHouse_EventScript_WandaDontWorry::
# 56 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
# 57 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	release
# 58 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	end
# 59 "data/maps/VerdanturfTown_WandasHouse/script.pory"

# 60 "data/maps/VerdanturfTown_WandasHouse/script.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAunt::
# 61 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	lock
# 62 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	faceplayer
# 63 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande
# 64 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened
# 65 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen
# 66 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven, MSGBOX_DEFAULT
# 67 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	release
# 68 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	end
# 69 "data/maps/VerdanturfTown_WandasHouse/script.pory"

# 70 "data/maps/VerdanturfTown_WandasHouse/script.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen::
# 71 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging, MSGBOX_DEFAULT
# 72 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	release
# 73 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	end
# 74 "data/maps/VerdanturfTown_WandasHouse/script.pory"

# 75 "data/maps/VerdanturfTown_WandasHouse/script.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened::
# 76 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	msgbox VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally, MSGBOX_DEFAULT
# 77 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	release
# 78 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	end
# 79 "data/maps/VerdanturfTown_WandasHouse/script.pory"

# 80 "data/maps/VerdanturfTown_WandasHouse/script.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande::
# 81 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande, MSGBOX_DEFAULT
# 82 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	release
# 83 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	end

VerdanturfTown_WandasHouse_Text_StrongerSpeech:
# 86 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	.string "Wally: I lost to you, {PLAYER}, but I'm\n"
	.string "not feeling down anymore.\p"
	.string "Because I have a new purpose in life.\n"
	.string "Together with my Ralts, I'm going\l"
	.string "to challenge Pokémon Gyms and become\l"
	.string "a great Trainer.\p"
	.string "Please watch me, {PLAYER}.\n"
	.string "I'm going to be stronger than you.\p"
	.string "When I do, I'm going to challenge you\n"
	.string "to another battle.$"

VerdanturfTown_WandasHouse_Text_StrongerSpeechShort:
# 99 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	.string "Wally: Please watch me, {PLAYER}.\n"
	.string "I'm going to get stronger than you.\p"
	.string "When I do, I'm going to challenge you\n"
	.string "to another battle.$"

VerdanturfTown_WandasHouse_Text_WallysNextDoor:
# 106 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	.string "Uncle: Oh! {PLAYER}{KUN}!\n"
	.string "Wally's next door.\p"
	.string "But, boy, there's something I have to\n"
	.string "tell you.\p"
	.string "This natural environment is doing\n"
	.string "wonders for Wally's health.\p"
	.string "Maybe it's not just the environment.\n"
	.string "It could be Pokémon that are giving\l"
	.string "the boy hope.$"

VerdanturfTown_WandasHouse_Text_WallySlippedOff:
# 118 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	.string "Wally's gone away…\n"
	.string "He slipped off on his own…$"

VerdanturfTown_WandasHouse_Text_WallyGoneThatFar:
# 123 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	.string "Uncle: Is that right?\n"
	.string "Wally's gone away that far all by\l"
	.string "himself…\p"
	.string "Well, I have to give him credit--he is\n"
	.string "my little brother's son.$"

VerdanturfTown_WandasHouse_Text_MeetWanda:
# 131 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	.string "Wanda: You are?\n"
	.string "Oh, right, I get it!\p"
	.string "You're the {PLAYER} who Wally was\n"
	.string "telling me about.\p"
	.string "I'm Wally's cousin.\n"
	.string "Glad to meet you!\p"
	.string "I think Wally's become a lot more lively\n"
	.string "and healthy since he came here.$"

VerdanturfTown_WandasHouse_Text_DontWorryAboutWally:
# 142 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	.string "Wanda: Don't worry about Wally.\n"
	.string "He'll be just fine.\p"
	.string "I know my little cousin, and he has\n"
	.string "Pokémon with him, too.$"

VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay:
# 149 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	.string "Thanks to you, I can see my girlfriend\n"
	.string "every day.\l"
	.string "Happy? You bet I am!$"

VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven:
# 155 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	.string "My daughter's boyfriend is a very\n"
	.string "driven and passionate sort of person.\p"
	.string "He's been digging a tunnel nonstop\n"
	.string "just so he can see my daughter.\p"
	.string "My daughter's a little concerned,\n"
	.string "so she goes out to the tunnel a lot.$"

VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging:
# 164 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	.string "It's amazing. My daughter's boyfriend\n"
	.string "was digging the tunnel by hand!\p"
	.string "It's so incredible!$"

VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally:
# 170 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	.string "If anything were to happen to Wally,\n"
	.string "I would never be able to look his\l"
	.string "parents in Petalburg in the eye…$"

VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande:
# 176 "data/maps/VerdanturfTown_WandasHouse/script.pory"
	.string "Wally was in Ever Grande?\p"
	.string "His parents in Petalburg would be\n"
	.string "astonished to hear that!$"
