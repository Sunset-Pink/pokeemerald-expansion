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

LittlerootTown_ProfessorBirchsLab_MapScripts::
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Script_LittlerootTown_ProfessorBirchsLab_OnTransition
# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, Script_LittlerootTown_ProfessorBirchsLab_SetPlayerPosForReceiveStarter
	.2byte 0


Script_LittlerootTown_ProfessorBirchsLab_OnTransition::
# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_SELECTION, 0
# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_NAME_CHOICE, 1
	return


Script_LittlerootTown_ProfessorBirchsLab_SetPlayerPosForReceiveStarter::
# 155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


Script_LittlerootTown_ProfessorBirchsLab_Interact_Books::
# 160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Books, MSGBOX_SIGN
	end


Script_LittlerootTown_ProfessorBirchsLab_Interact_Machine::
# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Machine, MSGBOX_SIGN
	end


Script_LittlerootTown_ProfessorBirchsLab_Interact_PC::
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_PC, MSGBOX_SIGN
# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
	end


Script_LittlerootTown_ProfessorBirchsLab_Interact_Bookshelf::
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Bookshelf
	end


Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left::
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 5
	goto_if_le Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_2
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_3
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_3
Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_1:
# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_2:
# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Pokeballs_BeforeSelection
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_3:
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferstarterinfo STR_VAR_1, 0
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic VAR_0x8006, 10, 3
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_0, MSGBOX_YESNO
# 210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_8
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_GiveStarter
# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_2
# 220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_LEFT_BALL
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_8:
# 211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_1
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle::
# 232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 5
	goto_if_le Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_2
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_3
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_3
Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_1:
# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_2:
# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Pokeballs_BeforeSelection
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_3:
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferstarterinfo STR_VAR_1, 1
# 237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic VAR_0x8006, 10, 3
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_0, MSGBOX_YESNO
# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_8
# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_GiveStarter
# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_2
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_MIDDLE_BALL
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_8:
# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_1
# 242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right::
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 5
	goto_if_le Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_2
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_3
# 282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_3
Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_1:
# 284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_2:
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Pokeballs_BeforeSelection
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_3:
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferstarterinfo STR_VAR_1, 2
# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic VAR_0x8006, 10, 3
# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_0, MSGBOX_YESNO
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_8
# 274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_GiveStarter
# 276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_2
# 278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_RIGHT_BALL
# 280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_8:
# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_1
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


Script_LittlerootTown_ProfessorBirchsLab_GiveStarter::
# 294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, Script_LittlerootTown_ProfessorBirchsLab_GiveStarter_1
# 297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon VAR_0x8006, 5
	return

Script_LittlerootTown_ProfessorBirchsLab_GiveStarter_1:
# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon VAR_0x8006, 5, shinyMode = TRUE
	return


Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose::
# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_QUEST_INTRO_STATE, 7
# 303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_2
Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_1:
# 309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Rival_MoveTo_Rout103
# 312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_STARTER_MON
# 313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_5
# 315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_6
# 317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_7
	return

Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_2:
# 306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_1

Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_5:
# 314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Birch_Starter_RivalsChoice_Torchic
	return

Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_6:
# 316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Birch_Starter_RivalsChoice_Mudkip
	return

Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_7:
# 318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Birch_Starter_RivalsChoice_Treecko
	return


Rival_MoveTo_Rout103:
	checkplayergender
# 0 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_MoveTo_Rout103_2
# 328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
Rival_MoveTo_Rout103_1:
# 331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RIVAL_STATE, 3
	return

Rival_MoveTo_Rout103_2:
# 326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	goto Rival_MoveTo_Rout103_1


Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide::
# 336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 5
	goto_if_lt Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_2
# 340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 6
	goto_if_eq Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_3
# 347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_FieldWork
Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_1:
# 349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	end

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_2:
# 339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_Early, MSGBOX_NPC
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_3:
# 341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_MONOTYPE_STARTERS, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_7
# 344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_7:
# 342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_1


Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono::
# 378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_STARTER_SELECTION
# 379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_2
# 381 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_3
# 383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_4
# 385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_5
# 387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_6
# 389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_7
# 391 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_8
# 393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_9
# 395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_10
# 397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 9, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_11
# 399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 10, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_12
# 401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 11, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_13
# 403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 12, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_14
# 405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 13, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_15
# 407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 14, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_16
# 410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_Text_0, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_2:
# 380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Fighting, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_3:
# 382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Flying, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_4:
# 384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Poison, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_5:
# 386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Ground, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_6:
# 388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Rock, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_7:
# 390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Bug, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_8:
# 392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Ghost, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_9:
# 394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Steel, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_10:
# 396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Electric, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_11:
# 398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Psychic, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_12:
# 400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Ice, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_13:
# 402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Dragon, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_14:
# 404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Dark, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_15:
# 406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Normal, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_16:
# 408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Fairy, MSGBOX_NPC
	return


Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen::
# 526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_STARTER_SELECTION
# 527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_2
# 529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_3
# 531 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_4
# 533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_5
# 535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_6
# 537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_7
# 539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_8
# 541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_9
# 543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_10
# 546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_Text_0, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_2:
# 528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen1, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_3:
# 530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen2, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_4:
# 532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen3, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_5:
# 534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen4, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_6:
# 536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen5, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_7:
# 538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen6, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_8:
# 540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen7, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_9:
# 542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen8, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_10:
# 544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen9, MSGBOX_NPC
	return


Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_0:
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_1:
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You did not choose this Pokémon$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_2:
# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_3:
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better not get greedy!$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_Text_0:
# 410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "WTF did you do to see this message!?$"

Text_LittlerootTown_ProfessorBirchsLab_Books:
# 164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a book that's too hard to read.$"

Text_LittlerootTown_ProfessorBirchsLab_Machine:
# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a serious-looking machine.\n"
	.string "The Prof. must use this for research.$"

Text_LittlerootTown_ProfessorBirchsLab_PC:
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a PC used for research.\n"
	.string "Better not mess around with it.$"

Text_LittlerootTown_ProfessorBirchsLab_Bookshelf:
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's crammed with books on Pokémon.$"

Text_LittlerootTown_ProfessorBirchsLab_Pokeballs_BeforeSelection:
# 288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better talk to Prof. Birch\n"
	.string "before messing with his stuff.$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_Early:
# 353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Unfortunatley preperations\n"
	.string "aren't done yet.\l"
	.string "We probably would be done already\l"
	.string "but the Prof. had to run off to\l"
	.string "Route 101 this morning.\p"
	.string "He appearently got overwhelmed\n"
	.string "by some Zigzagoons and raced back here.$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_FieldWork:
# 363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hunh? Prof. Birch?\p"
	.string "The Prof's away on fieldwork.\n"
	.string "Ergo, he isn't here.\p"
	.string "Oh, let me explain what fieldwork is.\p"
	.string "It is to study things in the natural\n"
	.string "environment, like fields and mountains,\l"
	.string "instead of a laboratory.\p"
	.string "The Prof. isn't one for doing desk work.\n"
	.string "He's the type of person who would\l"
	.string "rather go outside and experience\l"
	.string "things than read about them here.$"

Text_Aide_Mono_Fighting::
# 414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Primeape will evolve into Annihilape\n"
	.string "when it knows Shadow Punch.\p"
	.string "Machamp can Mega Evolve.$"

Text_Aide_Mono_Flying::
# 422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Hoppip's evolution line has\n"
	.string "been buffed.$"

Text_Aide_Mono_Poison::
# 429 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Roserade can Mega Evolve.\p"
	.string "Scolipede can Mega Evolve.$"

Text_Aide_Mono_Ground::
# 436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Geodude's evolution line has\n"
	.string "been buffed.$"

Text_Aide_Mono_Rock::
# 443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Coalossal can Mega Evolve.\n"
	.string "Geodude's evolution line has\n"
	.string "been buffed.$"

Text_Aide_Mono_Bug::
# 451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Blipbug's evolution line has\n"
	.string "been buffed.\l"
	.string "Orbeetle can Mega Evolve.$"

Text_Aide_Mono_Ghost::
# 459 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Chandelure can Mega Evolve.\p"
	.string "Dusknoir can Mega Evolve.$"

Text_Aide_Mono_Steel::
# 466 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Klink's evolution line has\n"
	.string "been slightly buffed.$"

Text_Aide_Mono_Electric::
# 473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Raichu is Electric/Normal type.\p"
	.string "Shinx's evolution line is\n"
	.string "Electric/Dark type.\l"
	.string "Luxray can Mega Evolve.\p"
	.string "Ampharos is Electric/Dragon type.$"

Text_Aide_Mono_Psychic::
# 483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Actually, most of these Pokémon\n"
	.string "haven't changed much.$"

Text_Aide_Mono_Ice::
# 490 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Actually, most of these Pokémon\n"
	.string "haven't been changed much.$"

Text_Aide_Mono_Dragon::
# 497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Dragonite can Mega Evolve.$"

Text_Aide_Mono_Dark::
# 503 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Bisharp evolves to Kingambit\n"
	.string "by level up now.$"

Text_Aide_Mono_Normal::
# 510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Whismur's evolution line has\n"
	.string "been buffed slightly.\p"
	.string "Lillipup's evolution line has\n"
	.string "been buffed slightly.$"

Text_Aide_Mono_Fairy::
# 519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Grimmsnarl can Mega Evolve.$"

Text_Aide_Gen1::
# 550 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Actually, these Pokémon haven't\n"
	.string "changed significantly.$"

Text_Aide_Gen2::
# 557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Meganium is Grass/Fairy type and\n"
	.string "can Mega Evolve.\p"
	.string "Typhlosion is Fire/Ground type.\p"
	.string "Feraligatr is Water/Dark type and\n"
	.string "can Mega Evolve.$"

Text_Aide_Gen3::
# 567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Sceptile is Grass/Dragon type.$"

Text_Aide_Gen4::
# 573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Torterra can Mega Evolve.\p"
	.string "Infernape can Mega Evolve.\p"
	.string "Empoleon can Mega Evolve.$"

Text_Aide_Gen5::
# 581 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Emboar can Mega Evolve.\p"
	.string "Samurott is Water/Steel type.$"

Text_Aide_Gen6::
# 588 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Chesnaught can Mega Evolve.\p"
	.string "Delphox can Mega Evolve.\p"
	.string "Greninja can Mega Evolve.$"

Text_Aide_Gen7::
# 596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Rowlet's evolution line has\n"
	.string "been buffed slightly.$"

Text_Aide_Gen8::
# 603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Actually, these Pokémon haven't\n"
	.string "changed significantly.$"

Text_Aide_Gen9::
# 610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Actually, these Pokémon haven't\n"
	.string "changed significantly.$"

LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex:
# 618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Oh, hi, {PLAYER}{KUN}!\p"
	.string "I heard you beat {RIVAL} on\n"
	.string "your first try. That's excellent!\p"
	.string "{RIVAL}'s been helping with my research\n"
	.string "for a long time.\p"
	.string "{RIVAL} has an extensive history as\n"
	.string "a Trainer already.\p"
	.string "Here, {PLAYER}{KUN}, I ordered this for my\n"
	.string "research, but I think you should have\l"
	.string "this PokéDex.$"

LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex:
# 631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the PokéDex!$"

LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex:
# 635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: The PokéDex is a high-tech\n"
	.string "tool that automatically makes a record\l"
	.string "of any Pokémon you meet or catch.\p"
	.string "My kid, {RIVAL}, goes everywhere\n"
	.string "with it.\p"
	.string "Whenever my kid catches a rare Pokémon\n"
	.string "and records its data in the PokéDex,\l"
	.string "why, {RIVAL} looks for me while I'm out\l"
	.string "doing fieldwork, and shows me.$"

LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese:
# 647 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: Oh, wow, {PLAYER}{KUN}!\n"
	.string "You got a PokéDex, too!\p"
	.string "That's great! Just like me!\n"
	.string "I've got something for you, too!$"

LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls:
# 654 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: It's fun if you can get a lot of\n"
	.string "Pokémon!\p"
	.string "I'm going to look all over the place\n"
	.string "because I want different Pokémon.\p"
	.string "If I find any cute Pokémon, I'll catch\n"
	.string "them with Poké Balls!$"

LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull:
# 663 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh? Your Bag's full.$"

LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:
# 667 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: I wonder where I should go look\n"
	.string "for Pokémon next?$"

LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese:
# 672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: Huh…\n"
	.string "So you got a PokéDex, too.\p"
	.string "Well then, here.\n"
	.string "I'll give you these.$"

LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls:
# 679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: You know it's more fun to\n"
	.string "have a whole bunch of Pokémon.\p"
	.string "I'm going to explore all over the place\n"
	.string "to find different Pokémon.\p"
	.string "If I find any cool Pokémon, you bet\n"
	.string "I'll try to get them with POKé BALLS.$"

LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull:
# 688 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hey, your Bag's full.$"

LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext:
# 692 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: Where should I look for\n"
	.string "Pokémon next…$"

LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational:
# 697 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: No……\p"
	.string "{PLAYER}{KUN} and {RIVAL}, I've had the two\n"
	.string "of you help me study Pokémon.\p"
	.string "Thanks to your help, new facts\n"
	.string "are coming to light.\p"
	.string "It appears that in the Hoenn region,\n"
	.string "there are also Pokémon from other\l"
	.string "regions.\p"
	.string "It goes to show how rich and varied\n"
	.string "the natural environments of Hoenn\l"
	.string "happen to be.\p"
	.string "That's why I think it's necessary for\n"
	.string "me to upgrade your PokéDex to\l"
	.string "the National Mode.\p"
	.string "Here, let me see your PokéDex units.$"

LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool:
# 715 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: Eheheh!\p"
	.string "It's so cool that even my PokéDex\n"
	.string "is getting updated!\p"
	.string "It's because you went out and caught\n"
	.string "so many Pokémon, {PLAYER}{KUN}!$"

LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe:
# 723 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: I went out all over Hoenn\n"
	.string "and checked out Pokémon.\p"
	.string "You can thank me for getting\n"
	.string "the National Mode PokéDex.\p"
	.string "Yep, you're lucky, {PLAYER}!$"

LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone:
# 731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Okay, all done!$"

LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational:
# 735 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}'s PokéDex was upgraded\n"
	.string "to the National Mode!$"

LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2:
# 740 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: But listen.\n"
	.string "You've become the Champion,\l"
	.string "but your Pokémon journey isn't over.\p"
	.string "There is no end to the road\n"
	.string "that is Pokémon.\p"
	.string "Somewhere, there is a grassy patch\n"
	.string "that's waiting for you!$"

LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork:
# 750 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: I think I'll take a short break\n"
	.string "from fieldwork.\p"
	.string "I think I'll help the Prof here for\n"
	.string "a while.$"

LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork:
# 757 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: For the time being,\n"
	.string "I'm taking a break from fieldwork.\p"
	.string "I'll be helping out the Prof here\n"
	.string "for a while.$"

LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon:
# 764 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Oh, {PLAYER}{KUN}!\n"
	.string "Let's have a look at your PokéDex.\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Yes, there's no doubt about it.\p"
	.string "You really have completed the Hoenn\n"
	.string "region's PokéDex.\p"
	.string "That's more than just impressive.\p"
	.string "I have a gift for you.\p"
	.string "Consider it my show of appreciation\n"
	.string "for the fantastic work you've done.\p"
	.string "My gift is a rare Pokémon only found\n"
	.string "in another region!\p"
	.string "You can have any one of these\n"
	.string "three Pokémon!$"

LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:
# 782 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Listen, {PLAYER}{KUN}.\n"
	.string "You've completed the Hoenn PokéDex,\l"
	.string "but your Pokémon journey isn't over.\p"
	.string "There is no end to the road\n"
	.string "that is Pokémon.\p"
	.string "Somewhere, there is a grassy patch\n"
	.string "that's waiting for you!$"

LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:
# 792 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You received the promised Pokémon.\n"
	.string "Better leave the others alone.$"

LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere:
# 797 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, after this…\n"
	.string "What are you going to do?\p"
	.string "Are you going to keep battling\n"
	.string "and sharpening your skills?\p"
	.string "Or are you going to try filling\n"
	.string "the National PokéDex?\p"
	.string "I'm staying here to help the Prof.$"

LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly:
# 807 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: Rather than collecting\n"
	.string "Pokémon, I prefer slowly and \l"
	.string "steadily raising the one I chose.$"

LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier:
# 813 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: Oh, hi, {PLAYER}{KUN}!\n"
	.string "Have you gone to that place,\l"
	.string "the Battle Frontier?$"

LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier:
# 819 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: Hey, {PLAYER}!\n"
	.string "Have you gone out to that place,\l"
	.string "the Battle Frontier?$"

LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall:
# 825 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "Scott: Hi, hi, {PLAYER}!\n"
	.string "It's me, SCOTT.\p"
	.string "I'm aboard the S.S. Tidal now.\n"
	.string "It feels great to be on the sea!\p"
	.string "By the way…\p"
	.string "There's this place that I'd like to\n"
	.string "invite you to for a visit.\p"
	.string "If you're interested, board a ferry\n"
	.string "at either Slateport or Lilycove.\p"
	.string "I'll fill you in on the details when\n"
	.string "we meet. I'll be waiting!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"
