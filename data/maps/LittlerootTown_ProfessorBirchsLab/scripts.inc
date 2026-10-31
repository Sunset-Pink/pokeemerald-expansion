# 1 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 2 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject::
# 3 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_RIVAL
# 4 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 5 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 6 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting::
# 7 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 8 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 9 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 11 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex::
# 12 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex, MSGBOX_DEFAULT
# 13 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
# 14 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 15 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 16 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_RIVAL, LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer
# 17 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 18 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 19 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 20 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls
# 22 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls
# 23 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 24 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 25 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 26 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 27 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 31 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls::
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 33 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls, MSGBOX_DEFAULT
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 0
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls::
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls, MSGBOX_DEFAULT
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 1
# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex::
# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 51 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 52 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls::
# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull, MSGBOX_DEFAULT
# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls::
# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull, MSGBOX_DEFAULT
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 64 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer:
# 66 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_left
# 68 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 69 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 71 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 72 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 73 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 74 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext
# 75 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext
# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 79 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext::
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 83 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext::
# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans::
# 88 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere
# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly
# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere::
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere, MSGBOX_DEFAULT
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 98 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly:
# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly, MSGBOX_DEFAULT
# 100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier::
# 103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier
# 105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier
# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier::
# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier::
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork::
# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork
# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork::
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork::
# 129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	pokenavcall LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex:
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, hi, {PLAYER}{KUN}!\p"
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I heard you beat {RIVAL} on\n"
# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your first try. That's excellent!\p"
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL}'s been helping with my research\n"
# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a long time.\p"
# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} has an extensive history as\n"
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a TRAINER already.\p"
# 148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, {PLAYER}{KUN}, I ordered this for my\n"
# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "research, but I think you should have\l"
# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this POKéDEX.$"
# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex:
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"
# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex:
# 156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The POKéDEX is a high-tech\n"
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "tool that automatically makes a record\l"
# 158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of any POKéMON you meet or catch.\p"
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, goes everywhere\n"
# 160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "with it.\p"
# 161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Whenever my kid catches a rare POKéMON\n"
# 162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and records its data in the POKéDEX,\l"
# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "why, {RIVAL} looks for me while I'm out\l"
# 164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "doing fieldwork, and shows me.$"
# 165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese:
# 167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Oh, wow, {PLAYER}{KUN}!\n"
# 168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You got a POKéDEX, too!\p"
# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's great! Just like me!\n"
# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've got something for you, too!$"
# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls:
# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: It's fun if you can get a lot of\n"
# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON!\p"
# 175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to look all over the place\n"
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "because I want different POKéMON.\p"
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cute POKéMON, I'll catch\n"
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "them with POKé BALLS!$"
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull:
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh? Your BAG's full.$"
# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: I wonder where I should go look\n"
# 185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for POKéMON next?$"
# 186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese:
# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Huh…\n"
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So you got a POKéDEX, too.\p"
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Well then, here.\n"
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll give you these.$"
# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls:
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: You know it's more fun to\n"
# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "have a whole bunch of POKéMON.\p"
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to explore all over the place\n"
# 197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to find different POKéMON.\p"
# 198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cool POKéMON, you bet\n"
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll try to get them with POKé BALLS.$"
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull:
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hey, your BAG's full.$"
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext:
# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Where should I look for\n"
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON next…$"
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational:
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Now…\p"
# 210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN} and {RIVAL}, I've had the two\n"
# 211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of you help me study POKéMON.\p"
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Thanks to your help, new facts\n"
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "are coming to light.\p"
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It appears that in the HOENN region,\n"
# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "there are also POKéMON from other\l"
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "regions.\p"
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It goes to show how rich and varied\n"
# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the natural environments of HOENN\l"
# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "happen to be.\p"
# 220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's why I think it's necessary for\n"
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "me to upgrade your POKéDEX to\l"
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL Mode.\p"
# 223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, let me see your POKéDEX units.$"
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool:
# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Eheheh!\p"
# 227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's so cool that even my POKéDEX\n"
# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "is getting updated!\p"
# 229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's because you went out and caught\n"
# 230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "so many POKéMON, {PLAYER}{KUN}!$"
# 231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe:
# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: I went out all over HOENN\n"
# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and checked out POKéMON.\p"
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can thank me for getting\n"
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL Mode POKéDEX.\p"
# 237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yep, you're lucky, {PLAYER}!$"
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone:
# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Okay, all done!$"
# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational:
# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}'s POKéDEX was upgraded\n"
# 244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to the NATIONAL Mode!$"
# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2:
# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: But listen.\n"
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've become the CHAMPION,\l"
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is POKéMON.\p"
# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork:
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: I think I'll take a short break\n"
# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from fieldwork.\p"
# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I think I'll help the PROF here for\n"
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a while.$"
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork:
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: For the time being,\n"
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm taking a break from fieldwork.\p"
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll be helping out the PROF here\n"
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a while.$"
# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon:
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Let's have a look at your POKéDEX.\p"
# 270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\p"
# 272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yes, there's no doubt about it.\p"
# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You really have completed the HOENN\n"
# 274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "region's POKéDEX.\p"
# 275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's more than just impressive.\p"
# 276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I have a gift for you.\p"
# 277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Consider it my show of appreciation\n"
# 278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for the fantastic work you've done.\p"
# 279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My gift is a rare POKéMON only found\n"
# 280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in another region!\p"
# 281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three POKéMON!$"
# 283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:
# 285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Listen, {PLAYER}{KUN}.\n"
# 286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've completed the HOENN POKéDEX,\l"
# 287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is POKéMON.\p"
# 290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:
# 294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You received the promised POKéMON.\n"
# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better leave the others alone.$"
# 296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontHaveAnyRoomForPokemon:
# 299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, you don't have any room for\n"
# 300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this POKéMON.$"
# 301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere:
# 303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, after this…\n"
# 304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What are you going to do?\p"
# 305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Are you going to keep battling\n"
# 306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and sharpening your skills?\p"
# 307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or are you going to try filling\n"
# 308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL POKéDEX?\p"
# 309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm staying here to help the PROF.$"
# 310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly:
# 312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Rather than collecting\n"
# 313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON, I prefer slowly and \l"
# 314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "steadily raising the one I chose.$"
# 315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier:
# 317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\n"
# 318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone to that place,\l"
# 319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier:
# 322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}!\n"
# 323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone out to that place,\l"
# 324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall:
# 327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Beep!\p"
# 329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "SCOTT: Hi, hi, {PLAYER}!\n"
# 330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's me, SCOTT.\p"
# 331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm aboard the S.S. TIDAL now.\n"
# 332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It feels great to be on the sea!\p"
# 333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "By the way…\p"
# 334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's this place that I'd like to\n"
# 335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "invite you to for a visit.\p"
# 336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you're interested, board a ferry\n"
# 337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "at either SLATEPORT or LILYCOVE.\p"
# 338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll fill you in on the details when\n"
# 339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "we meet. I'll be waiting!\p"
# 340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Click!$"

LittlerootTown_ProfessorBirchsLab_MapScripts::
# 345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Script_LittlerootTown_ProfessorBirchsLab_OnTransition
# 346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, Script_LittlerootTown_ProfessorBirchsLab_SetPlayerPosForReceiveStarter
	.2byte 0


Script_LittlerootTown_ProfessorBirchsLab_OnTransition::
# 352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_SELECTION, 0
# 354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_NAME_CHOICE, 1
	return


Script_LittlerootTown_ProfessorBirchsLab_SetPlayerPosForReceiveStarter::
# 358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


Script_LittlerootTown_ProfessorBirchsLab_Interact_Books::
# 363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Books, MSGBOX_SIGN
	end


Script_LittlerootTown_ProfessorBirchsLab_Interact_Machine::
# 372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Machine, MSGBOX_SIGN
	end


Script_LittlerootTown_ProfessorBirchsLab_Interact_PC::
# 382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_PC, MSGBOX_SIGN
# 383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
	end


Script_LittlerootTown_ProfessorBirchsLab_Interact_Bookshelf::
# 393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Bookshelf
	end


Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left::
# 406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_2
# 424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_3
Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_1:
# 426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 427 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_2:
# 408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferstarterinfo STR_VAR_1, 0
# 409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic VAR_0x8006, 10, 3
# 410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_0, MSGBOX_YESNO
# 411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_6
# 417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_GiveStarter
# 418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_2
# 420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_LEFT_BALL
# 422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_6:
# 412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_1
# 414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle::
# 433 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_2
# 451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_3
Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_1:
# 453 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 454 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_2:
# 435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferstarterinfo STR_VAR_1, 1
# 436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic VAR_0x8006, 10, 3
# 437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_0, MSGBOX_YESNO
# 438 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_6
# 444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_GiveStarter
# 445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_2
# 447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_MIDDLE_BALL
# 449 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_6:
# 439 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_1
# 441 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right::
# 460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_2
# 478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_3
Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_1:
# 480 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 481 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_2:
# 462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferstarterinfo STR_VAR_1, 2
# 463 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic VAR_0x8006, 10, 3
# 464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_0, MSGBOX_YESNO
# 465 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_6
# 471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_GiveStarter
# 472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_2
# 474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 475 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_RIGHT_BALL
# 476 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_6:
# 466 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 467 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_1
# 468 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


Script_LittlerootTown_ProfessorBirchsLab_GiveStarter::
# 486 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, Script_LittlerootTown_ProfessorBirchsLab_GiveStarter_1
# 489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon VAR_0x8006, 5
	return

Script_LittlerootTown_ProfessorBirchsLab_GiveStarter_1:
# 487 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon VAR_0x8006, 5, shinyMode = TRUE
	return


Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose::
# 494 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 496 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
# 0 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_1
# 501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Route101_EventScript_HideBrendanInBedroom
	return

Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_1:
# 499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Route101_EventScript_HideMayInBedroom
	return


Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide::
# 506 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 507 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 6
	goto_if_eq Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_2
Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_1:
# 515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 516 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	end

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_2:
# 509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_MONOTYPE_STARTERS, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_4
# 512 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_4:
# 510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_1


Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono::
# 521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_STARTER_SELECTION
# 522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_2
# 524 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_3
# 526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_4
# 528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_5
# 530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_6
# 532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_7
# 534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_8
# 536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_9
# 538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_10
# 540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 9, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_11
# 542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 10, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_12
# 544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 11, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_13
# 546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 12, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_14
# 548 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 13, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_15
# 550 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 14, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_16
# 553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_Text_0
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_2:
# 523 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Fighting
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_3:
# 525 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Flying
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_4:
# 527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Poison
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_5:
# 529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Ground
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_6:
# 531 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Rock
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_7:
# 533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Bug
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_8:
# 535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Ghost
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_9:
# 537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Steel
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_10:
# 539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Electric
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_11:
# 541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Psychic
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_12:
# 543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Ice
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_13:
# 545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Dragon
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_14:
# 547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Dark
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_15:
# 549 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Normal
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_16:
# 551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Fairy
	return


Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen::
# 669 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_STARTER_SELECTION
# 670 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_2
# 672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_3
# 674 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_4
# 676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_5
# 678 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_6
# 680 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_7
# 682 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_8
# 684 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_9
# 686 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_10
# 689 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_Text_0
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_2:
# 671 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen1
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_3:
# 673 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen2
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_4:
# 675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen3
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_5:
# 677 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen4
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_6:
# 679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen5
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_7:
# 681 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen6
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_8:
# 683 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen7
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_9:
# 685 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen8
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_10:
# 687 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen9
	return


Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_0:
# 410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_1:
# 413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You did not choose this Pokémon$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_2:
# 419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_3:
# 424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better not get greedy!$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_Text_0:
# 553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "WTF did you do to see this message!?$"

Text_LittlerootTown_ProfessorBirchsLab_Books:
# 367 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a book that's too hard to read.$"

Text_LittlerootTown_ProfessorBirchsLab_Machine:
# 376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a serious-looking machine.\n"
	.string "The Prof. must use this for research.$"

Text_LittlerootTown_ProfessorBirchsLab_PC:
# 387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a PC used for research.\n"
	.string "Better not mess around with it.$"

Text_LittlerootTown_ProfessorBirchsLab_Bookshelf:
# 397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's crammed with books on Pokémon.$"

Text_Aide_Mono_Fighting::
# 557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Primeape will evolve into Annihilape\n"
	.string "when it knows Shadow Punch.\p"
	.string "Machamp can Mega Evolve.$"

Text_Aide_Mono_Flying::
# 565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Hoppip's evolution line has\n"
	.string "been buffed.$"

Text_Aide_Mono_Poison::
# 572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Roserade can Mega Evolve.\p"
	.string "Scolipede can Mega Evolve.$"

Text_Aide_Mono_Ground::
# 579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Geodude's evolution line has\n"
	.string "been buffed.$"

Text_Aide_Mono_Rock::
# 586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Coalossal can Mega Evolve.\n"
	.string "Geodude's evolution line has\n"
	.string "been buffed.$"

Text_Aide_Mono_Bug::
# 594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Blipbug's evolution line has\n"
	.string "been buffed.\l"
	.string "Orbeetle can Mega Evolve.$"

Text_Aide_Mono_Ghost::
# 602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Chandelure can Mega Evolve.\p"
	.string "Dusknoir can Mega Evolve.$"

Text_Aide_Mono_Steel::
# 609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Klink's evolution line has\n"
	.string "been slightly buffed.$"

Text_Aide_Mono_Electric::
# 616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Raichu is Electric/Normal type.\p"
	.string "Shinx's evolution line is\n"
	.string "Electric/Dark type.\l"
	.string "Luxray can Mega Evolve.\p"
	.string "Ampharos is Electric/Dragon type.$"

Text_Aide_Mono_Psychic::
# 626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Actually, most of these Pokémon\n"
	.string "haven't changed much.$"

Text_Aide_Mono_Ice::
# 633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Actually, most of these Pokémon\n"
	.string "haven't been changed much.$"

Text_Aide_Mono_Dragon::
# 640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Dragonite can Mega Evolve.$"

Text_Aide_Mono_Dark::
# 646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Bisharp evolves to Kingambit\n"
	.string "by level up now.$"

Text_Aide_Mono_Normal::
# 653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Whismur's evolution line has\n"
	.string "been buffed slightly.\p"
	.string "Lillipup's evolution line has\n"
	.string "been buffed slightly.$"

Text_Aide_Mono_Fairy::
# 662 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Grimmsnarl can Mega Evolve.$"

Text_Aide_Gen1::
# 693 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Actually, these Pokémon haven't\n"
	.string "changed significantly.$"

Text_Aide_Gen2::
# 700 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Meganium is Grass/Fairy type and\n"
	.string "can Mega Evolve.\p"
	.string "Typhlosion is Fire/Ground type.\p"
	.string "Feraligatr is Water/Dark type and\n"
	.string "can Mega Evolve.$"

Text_Aide_Gen3::
# 710 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Sceptile is Grass/Dragon type.$"

Text_Aide_Gen4::
# 716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Torterra can Mega Evolve.\p"
	.string "Infernape can Mega Evolve.\p"
	.string "Empoleon can Mega Evolve.$"

Text_Aide_Gen5::
# 724 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Emboar can Mega Evolve.\p"
	.string "Samurott is Water/Steel type.$"

Text_Aide_Gen6::
# 731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Chesnaught can Mega Evolve.\p"
	.string "Delphox can Mega Evolve.\p"
	.string "Greninja can Mega Evolve.$"

Text_Aide_Gen7::
# 739 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Rowlet's evolution line has\n"
	.string "been buffed slightly.$"

Text_Aide_Gen8::
# 746 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Actually, these Pokémon haven't\n"
	.string "changed significantly.$"

Text_Aide_Gen9::
# 753 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Actually, these Pokémon haven't\n"
	.string "changed significantly.$"
