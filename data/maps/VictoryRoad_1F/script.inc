VictoryRoad_1F_MapScripts::
# 2 "data/maps/VictoryRoad_1F/script.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_OnTransition
	.byte 0


# 5 "data/maps/VictoryRoad_1F/script.pory"

# 6 "data/maps/VictoryRoad_1F/script.pory"

# 7 "data/maps/VictoryRoad_1F/script.pory"
VictoryRoad_1F_OnTransition:
# 8 "data/maps/VictoryRoad_1F/script.pory"
	call_if_eq VAR_VICTORY_ROAD_1F_STATE, 1, VictoryRoad_1F_EventScript_SetEntranceWallyPos1
# 9 "data/maps/VictoryRoad_1F/script.pory"
	call_if_eq VAR_VICTORY_ROAD_1F_STATE, 2, VictoryRoad_1F_EventScript_SetEntranceWallyPos2
# 10 "data/maps/VictoryRoad_1F/script.pory"
	end
# 11 "data/maps/VictoryRoad_1F/script.pory"

# 12 "data/maps/VictoryRoad_1F/script.pory"
VictoryRoad_1F_EventScript_SetEntranceWallyPos1::
# 13 "data/maps/VictoryRoad_1F/script.pory"
	setobjectxyperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, 2, 24
# 14 "data/maps/VictoryRoad_1F/script.pory"
	setobjectmovementtype LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, MOVEMENT_TYPE_FACE_DOWN
# 15 "data/maps/VictoryRoad_1F/script.pory"
	return
# 16 "data/maps/VictoryRoad_1F/script.pory"

# 17 "data/maps/VictoryRoad_1F/script.pory"
VictoryRoad_1F_EventScript_SetEntranceWallyPos2::
# 18 "data/maps/VictoryRoad_1F/script.pory"
	setobjectxyperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, 3, 24
# 19 "data/maps/VictoryRoad_1F/script.pory"
	setobjectmovementtype LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, MOVEMENT_TYPE_FACE_DOWN
# 20 "data/maps/VictoryRoad_1F/script.pory"
	return
# 21 "data/maps/VictoryRoad_1F/script.pory"

# 22 "data/maps/VictoryRoad_1F/script.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger1::
# 23 "data/maps/VictoryRoad_1F/script.pory"
	lockall
# 24 "data/maps/VictoryRoad_1F/script.pory"
	setvar VAR_0x8008, 1
# 25 "data/maps/VictoryRoad_1F/script.pory"
	addobject LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 26 "data/maps/VictoryRoad_1F/script.pory"
	applymovement LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, VictoryRoad_1F_Movement_WallyApproachPlayer1
# 27 "data/maps/VictoryRoad_1F/script.pory"
	waitmovement 0
# 28 "data/maps/VictoryRoad_1F/script.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 29 "data/maps/VictoryRoad_1F/script.pory"
	end
# 30 "data/maps/VictoryRoad_1F/script.pory"

# 31 "data/maps/VictoryRoad_1F/script.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger2::
# 32 "data/maps/VictoryRoad_1F/script.pory"
	lockall
# 33 "data/maps/VictoryRoad_1F/script.pory"
	setvar VAR_0x8008, 2
# 34 "data/maps/VictoryRoad_1F/script.pory"
	addobject LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 35 "data/maps/VictoryRoad_1F/script.pory"
	applymovement LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, VictoryRoad_1F_Movement_WallyApproachPlayer2
# 36 "data/maps/VictoryRoad_1F/script.pory"
	waitmovement 0
# 37 "data/maps/VictoryRoad_1F/script.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 38 "data/maps/VictoryRoad_1F/script.pory"
	end
# 39 "data/maps/VictoryRoad_1F/script.pory"

# 40 "data/maps/VictoryRoad_1F/script.pory"
VictoryRoad_1F_EventScript_WallyEntranceBattle::
# 41 "data/maps/VictoryRoad_1F/script.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 42 "data/maps/VictoryRoad_1F/script.pory"
	waitmovement 0
# 43 "data/maps/VictoryRoad_1F/script.pory"
	msgbox VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore, MSGBOX_DEFAULT
# 44 "data/maps/VictoryRoad_1F/script.pory"
	trainerbattle_no_intro TRAINER_WALLY_VR_1, VictoryRoad_1F_Text_WallyEntranceDefeat
# 45 "data/maps/VictoryRoad_1F/script.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_DEFAULT
# 46 "data/maps/VictoryRoad_1F/script.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
# 47 "data/maps/VictoryRoad_1F/script.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 48 "data/maps/VictoryRoad_1F/script.pory"
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
# 49 "data/maps/VictoryRoad_1F/script.pory"
	copyvar VAR_VICTORY_ROAD_1F_STATE, VAR_0x8008
# 50 "data/maps/VictoryRoad_1F/script.pory"
	releaseall
# 51 "data/maps/VictoryRoad_1F/script.pory"
	end
# 52 "data/maps/VictoryRoad_1F/script.pory"

# 53 "data/maps/VictoryRoad_1F/script.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer1:
# 54 "data/maps/VictoryRoad_1F/script.pory"
	walk_left
# 55 "data/maps/VictoryRoad_1F/script.pory"
	walk_left
# 56 "data/maps/VictoryRoad_1F/script.pory"
	walk_left
# 57 "data/maps/VictoryRoad_1F/script.pory"
	walk_left
# 58 "data/maps/VictoryRoad_1F/script.pory"
	walk_left
# 59 "data/maps/VictoryRoad_1F/script.pory"
	walk_left
# 60 "data/maps/VictoryRoad_1F/script.pory"
	walk_left
# 61 "data/maps/VictoryRoad_1F/script.pory"
	walk_left
# 62 "data/maps/VictoryRoad_1F/script.pory"
	walk_left
# 63 "data/maps/VictoryRoad_1F/script.pory"
	walk_left
# 64 "data/maps/VictoryRoad_1F/script.pory"
	walk_up
# 65 "data/maps/VictoryRoad_1F/script.pory"
	step_end
# 66 "data/maps/VictoryRoad_1F/script.pory"

# 67 "data/maps/VictoryRoad_1F/script.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer2:
# 68 "data/maps/VictoryRoad_1F/script.pory"
	walk_left
# 69 "data/maps/VictoryRoad_1F/script.pory"
	walk_left
# 70 "data/maps/VictoryRoad_1F/script.pory"
	walk_left
# 71 "data/maps/VictoryRoad_1F/script.pory"
	walk_left
# 72 "data/maps/VictoryRoad_1F/script.pory"
	walk_left
# 73 "data/maps/VictoryRoad_1F/script.pory"
	walk_left
# 74 "data/maps/VictoryRoad_1F/script.pory"
	walk_left
# 75 "data/maps/VictoryRoad_1F/script.pory"
	walk_left
# 76 "data/maps/VictoryRoad_1F/script.pory"
	walk_left
# 77 "data/maps/VictoryRoad_1F/script.pory"
	walk_up
# 78 "data/maps/VictoryRoad_1F/script.pory"
	step_end
# 79 "data/maps/VictoryRoad_1F/script.pory"

# 80 "data/maps/VictoryRoad_1F/script.pory"
@ This Wally appears near the entrance once his battle is triggered and remains there until the Hall of Fame is entered
# 81 "data/maps/VictoryRoad_1F/script.pory"
VictoryRoad_1F_EventScript_EntranceWally::
# 82 "data/maps/VictoryRoad_1F/script.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_NPC
# 83 "data/maps/VictoryRoad_1F/script.pory"
	end
# 84 "data/maps/VictoryRoad_1F/script.pory"

# 85 "data/maps/VictoryRoad_1F/script.pory"
@ This Wally appears and remains at the exit after the Hall of Fame is entered
# 86 "data/maps/VictoryRoad_1F/script.pory"
VictoryRoad_1F_EventScript_ExitWally::
# 87 "data/maps/VictoryRoad_1F/script.pory"
	trainerbattle_single TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 88 "data/maps/VictoryRoad_1F/script.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 89 "data/maps/VictoryRoad_1F/script.pory"
	goto_if_eq VAR_RESULT, TRUE, VictoryRoad_1F_EventScript_RematchWally
# 90 "data/maps/VictoryRoad_1F/script.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/VictoryRoad_1F/script.pory"
	end
# 92 "data/maps/VictoryRoad_1F/script.pory"

# 93 "data/maps/VictoryRoad_1F/script.pory"
VictoryRoad_1F_EventScript_RematchWally::
# 94 "data/maps/VictoryRoad_1F/script.pory"
	trainerbattle_rematch TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 95 "data/maps/VictoryRoad_1F/script.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 96 "data/maps/VictoryRoad_1F/script.pory"
	end
# 97 "data/maps/VictoryRoad_1F/script.pory"

# 98 "data/maps/VictoryRoad_1F/script.pory"
VictoryRoad_1F_EventScript_Edgar::
# 99 "data/maps/VictoryRoad_1F/script.pory"
	trainerbattle_single TRAINER_EDGAR, VictoryRoad_1F_Text_EdgarIntro, VictoryRoad_1F_Text_EdgarDefeat
# 100 "data/maps/VictoryRoad_1F/script.pory"
	msgbox VictoryRoad_1F_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
# 101 "data/maps/VictoryRoad_1F/script.pory"
	end
# 102 "data/maps/VictoryRoad_1F/script.pory"

# 103 "data/maps/VictoryRoad_1F/script.pory"
VictoryRoad_1F_EventScript_Albert::
# 104 "data/maps/VictoryRoad_1F/script.pory"
	trainerbattle_single TRAINER_ALBERT, VictoryRoad_1F_Text_AlbertIntro, VictoryRoad_1F_Text_AlbertDefeat
# 105 "data/maps/VictoryRoad_1F/script.pory"
	msgbox VictoryRoad_1F_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
# 106 "data/maps/VictoryRoad_1F/script.pory"
	end
# 107 "data/maps/VictoryRoad_1F/script.pory"

# 108 "data/maps/VictoryRoad_1F/script.pory"
VictoryRoad_1F_EventScript_Hope::
# 109 "data/maps/VictoryRoad_1F/script.pory"
	trainerbattle_single TRAINER_HOPE, VictoryRoad_1F_Text_HopeIntro, VictoryRoad_1F_Text_HopeDefeat
# 110 "data/maps/VictoryRoad_1F/script.pory"
	msgbox VictoryRoad_1F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
# 111 "data/maps/VictoryRoad_1F/script.pory"
	end
# 112 "data/maps/VictoryRoad_1F/script.pory"

# 113 "data/maps/VictoryRoad_1F/script.pory"
VictoryRoad_1F_EventScript_Quincy::
# 114 "data/maps/VictoryRoad_1F/script.pory"
	trainerbattle_single TRAINER_QUINCY, VictoryRoad_1F_Text_QuincyIntro, VictoryRoad_1F_Text_QuincyDefeat
# 115 "data/maps/VictoryRoad_1F/script.pory"
	msgbox VictoryRoad_1F_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
# 116 "data/maps/VictoryRoad_1F/script.pory"
	end
# 117 "data/maps/VictoryRoad_1F/script.pory"

# 118 "data/maps/VictoryRoad_1F/script.pory"
VictoryRoad_1F_EventScript_Katelynn::
# 119 "data/maps/VictoryRoad_1F/script.pory"
	trainerbattle_single TRAINER_KATELYNN, VictoryRoad_1F_Text_KatelynnIntro, VictoryRoad_1F_Text_KatelynnDefeat
# 120 "data/maps/VictoryRoad_1F/script.pory"
	msgbox VictoryRoad_1F_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
# 121 "data/maps/VictoryRoad_1F/script.pory"
	end

VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore:
# 124 "data/maps/VictoryRoad_1F/script.pory"
	.string "Wally: Hi! {PLAYER}!\p"
	.string "I bet you're surprised to see me here!\p"
	.string "I made it all the way here, and it's\n"
	.string "all thanks to you!\p"
	.string "{PLAYER}, losing to you that time\n"
	.string "made me stronger!\p"
	.string "But I'm not going to lose anymore!\p"
	.string "I'm going to win! For the Pokémon who\n"
	.string "gave me courage and strength!\p"
	.string "Okay… Here I come!$"

VictoryRoad_1F_Text_WallyEntranceDefeat:
# 137 "data/maps/VictoryRoad_1F/script.pory"
	.string "Wow!\n"
	.string "{PLAYER}, you are strong, after all!$"

VictoryRoad_1F_Text_WallyPostEntranceBattle:
# 142 "data/maps/VictoryRoad_1F/script.pory"
	.string "Wally: I couldn't beat you today,\n"
	.string "{PLAYER}, but one of these days, I'll\l"
	.string "catch up to you!$"

VictoryRoad_1F_Text_WallyIntro:
# 148 "data/maps/VictoryRoad_1F/script.pory"
	.string "Wally: Hi! {PLAYER}!\p"
	.string "I've gotten stronger since that last\n"
	.string "time! I wanted to show you, {PLAYER}!\p"
	.string "Okay… Here I come!$"

VictoryRoad_1F_Text_WallyDefeat:
# 155 "data/maps/VictoryRoad_1F/script.pory"
	.string "Wow!\n"
	.string "{PLAYER}, you are strong, after all!$"

VictoryRoad_1F_Text_WallyPostBattle:
# 160 "data/maps/VictoryRoad_1F/script.pory"
	.string "Wally: I couldn't beat you this time,\n"
	.string "too… But one of these days, {PLAYER},\l"
	.string "I'm going to catch up to you…\p"
	.string "And challenge the Pokémon League!$"

VictoryRoad_1F_Text_EdgarIntro:
# 167 "data/maps/VictoryRoad_1F/script.pory"
	.string "I've made it this far a couple times,\n"
	.string "but the last stretch is so long…$"

VictoryRoad_1F_Text_EdgarDefeat:
# 172 "data/maps/VictoryRoad_1F/script.pory"
	.string "My dream ends here again…$"

VictoryRoad_1F_Text_EdgarPostBattle:
# 176 "data/maps/VictoryRoad_1F/script.pory"
	.string "You've made it this far. Keep the\n"
	.string "momentum going and become the\l"
	.string "Champion! If anyone can, it's you!$"

VictoryRoad_1F_Text_AlbertIntro:
# 182 "data/maps/VictoryRoad_1F/script.pory"
	.string "I didn't come all this way to lose now.\n"
	.string "That possibility doesn't exist!$"

VictoryRoad_1F_Text_AlbertDefeat:
# 187 "data/maps/VictoryRoad_1F/script.pory"
	.string "Impossible…\n"
	.string "I lost?$"

VictoryRoad_1F_Text_AlbertPostBattle:
# 192 "data/maps/VictoryRoad_1F/script.pory"
	.string "I lost here…\p"
	.string "That means I lack the qualifications\n"
	.string "to become the Champion…$"

VictoryRoad_1F_Text_HopeIntro:
# 198 "data/maps/VictoryRoad_1F/script.pory"
	.string "This seemingly infinite and harsh road\n"
	.string "lives up to its name of Victory.$"

VictoryRoad_1F_Text_HopeDefeat:
# 203 "data/maps/VictoryRoad_1F/script.pory"
	.string "Your battle style is fantastic…$"

VictoryRoad_1F_Text_HopePostBattle:
# 207 "data/maps/VictoryRoad_1F/script.pory"
	.string "You seem to have the potential for\n"
	.string "becoming the Champion.$"

VictoryRoad_1F_Text_QuincyIntro:
# 212 "data/maps/VictoryRoad_1F/script.pory"
	.string "What is the Victory Road?\n"
	.string "I'll tell you if you win!$"

VictoryRoad_1F_Text_QuincyDefeat:
# 217 "data/maps/VictoryRoad_1F/script.pory"
	.string "Okay!\n"
	.string "Well done!$"

VictoryRoad_1F_Text_QuincyPostBattle:
# 222 "data/maps/VictoryRoad_1F/script.pory"
	.string "Getting through here safely--that's\n"
	.string "the final test for any Traineraiming\l"
	.string "to become the Pokémon Champion.\p"
	.string "That's why it's called the Victory\n"
	.string "Road.$"

VictoryRoad_1F_Text_KatelynnIntro:
# 230 "data/maps/VictoryRoad_1F/script.pory"
	.string "I have nothing to say to anyone\n"
	.string "that's come this far. Come on!$"

VictoryRoad_1F_Text_KatelynnDefeat:
# 235 "data/maps/VictoryRoad_1F/script.pory"
	.string "This is a disgrace…$"

VictoryRoad_1F_Text_KatelynnPostBattle:
# 239 "data/maps/VictoryRoad_1F/script.pory"
	.string "Humph, go right on ahead.\n"
	.string "See if I care.$"
