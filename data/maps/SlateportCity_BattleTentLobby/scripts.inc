SlateportCity_BattleTentLobby_MapScripts::
# 2 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SlateportCity_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

SlateportCity_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, SlateportCity_BattleTentLobby_EventScript_GetChallengeStatus
# 4 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, SlateportCity_BattleTentLobby_EventScript_QuitWithoutSaving
# 5 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, SlateportCity_BattleTentLobby_EventScript_ResumeChallenge
# 6 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, SlateportCity_BattleTentLobby_EventScript_WonChallenge
# 7 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, SlateportCity_BattleTentLobby_EventScript_LostChallenge
	.2byte 0

SlateportCity_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 10 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, SlateportCity_BattleTentLobby_EventScript_TurnPlayerNorth
	.2byte 0


# 13 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 14 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_TurnPlayerNorth::
# 15 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 16 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 17 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 18 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 19 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_GetChallengeStatus::
# 20 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_getstatus
# 21 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 22 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 23 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_QuitWithoutSaving::
# 24 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lockall
# 25 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 26 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	closemessage
# 27 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 28 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 29 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 30 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	releaseall
# 31 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 32 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 33 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_WonChallenge::
# 34 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lockall
# 35 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message SlateportCity_BattleTentLobby_Text_WonThreeMatchesReturnMons
# 36 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 37 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_setrandomprize
# 38 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 39 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_save 0
# 40 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 41 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitse
# 42 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_GivePrize::
# 43 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_AwardYouThisPrize, MSGBOX_DEFAULT
# 44 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_giveprize
# 45 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 46 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case FALSE, SlateportCity_BattleTentLobby_EventScript_NoRoomForPrize
# 47 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 48 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ReceivedPrize  @ Odd that it uses Tower's instead of Factory's or its own
# 49 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 50 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 51 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitfanfare
# 52 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_EndGivePrize
# 53 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 54 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_NoRoomForPrize::
# 55 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_NoRoomInBagMakeRoom, MSGBOX_DEFAULT
# 56 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_EndGivePrize
# 57 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 58 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_LostChallenge::
# 59 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lockall
# 60 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message SlateportCity_BattleTentLobby_Text_ReturnRentalMonsSaveResults
# 61 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 62 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 63 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_save 0
# 64 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 65 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitse
# 66 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 67 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_EndGivePrize::
# 68 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
# 69 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	closemessage
# 70 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 71 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	releaseall
# 72 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 73 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 74 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ResumeChallenge::
# 75 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lockall
# 76 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message SlateportCity_BattleTentLobby_Text_BeenWaitingForYou
# 77 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 78 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_save CHALLENGE_STATUS_SAVING
# 79 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 80 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitse
# 81 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 82 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 83 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_0x8006, 2
# 84 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_EnterChallenge
# 85 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 86 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_Attendant::
# 87 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lock
# 88 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	faceplayer
# 89 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_getprize
# 90 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto_if_ne VAR_RESULT, ITEM_NONE, SlateportCity_BattleTentLobby_EventScript_GivePrize
# 91 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	special SavePlayerParty
# 92 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_WelcomeToBattleTent, MSGBOX_DEFAULT
# 93 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge::
# 94 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message SlateportCity_BattleTentLobby_Text_TakeChallenge
# 95 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 96 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 97 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 98 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 0, SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge
# 99 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 1, SlateportCity_BattleTentLobby_EventScript_ExplainChallenge
# 100 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 2, SlateportCity_BattleTentLobby_EventScript_CancelChallenge
# 101 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentLobby_EventScript_CancelChallenge
# 102 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 103 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge::
# 104 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
# 105 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 106 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_TENT
# 107 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
# 108 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 109 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case NO, SlateportCity_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 110 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case YES, SlateportCity_BattleTentLobby_EventScript_SaveBeforeChallenge
# 111 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 112 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 113 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_SaveBeforeChallenge::
# 114 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 115 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 116 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_init
# 117 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 118 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 119 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	closemessage
# 120 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	delay 2
# 121 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 122 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 123 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SlateportCity_BattleTentLobby_EventScript_CancelChallengeSaveFailed
# 124 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_0x8006, 0
# 125 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_EnterChallenge::
# 126 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_StepThisWay, MSGBOX_DEFAULT
# 127 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	closemessage
# 128 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	call SlateportCity_BattleTentLobby_EventScript_WalkToDoor
# 129 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	warp MAP_SLATEPORT_CITY_BATTLE_TENT_CORRIDOR, 2, 7
# 130 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 131 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitstate
# 132 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 133 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 134 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_WalkToDoor::
# 135 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	applymovement LOCALID_SLATEPORT_TENT_ATTENDANT, SlateportCity_BattleTentLobby_Movement_AttendantWalkToDoor
# 136 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_BattleTentLobby_Movement_PlayerWalkToDoor
# 137 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmovement 0
# 138 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	opendoor 6, 1
# 139 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitdooranim
# 140 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	applymovement LOCALID_SLATEPORT_TENT_ATTENDANT, SlateportCity_BattleTentLobby_Movement_AttendantEnterDoor
# 141 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_BattleTentLobby_Movement_PlayerEnterDoor
# 142 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmovement 0
# 143 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	closedoor 6, 1
# 144 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitdooranim
# 145 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 146 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 147 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Movement_AttendantWalkToDoor:
# 148 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 149 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 150 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 151 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	step_end
# 152 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 153 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Movement_AttendantEnterDoor:
# 154 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 155 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	set_invisible
# 156 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	step_end
# 157 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 158 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Movement_PlayerWalkToDoor:
# 159 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 160 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 161 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 162 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	step_end
# 163 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 164 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Movement_PlayerEnterDoor:
# 165 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 166 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 167 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	set_invisible
# 168 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	step_end
# 169 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 170 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ExplainChallenge::
# 171 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainSlateportTent, MSGBOX_DEFAULT
# 172 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge
# 173 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 174 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_CancelChallengeSaveFailed::
# 175 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 176 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_CancelChallenge
# 177 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 178 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_LoadPartyCancelChallenge::
# 179 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	special LoadPlayerParty
# 180 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_CancelChallenge::
# 181 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
# 182 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	release
# 183 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 184 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 185 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
@ Unused
# 186 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Movement_UnusedEnterDoor::
# 187 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 188 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 189 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 190 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	set_invisible
# 191 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	step_end
# 192 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 193 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_TormentGiver::
# 194 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lock
# 195 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	faceplayer
# 196 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_TORMENT, SlateportCity_BattleTentLobby_EventScript_ReceivedTorment
# 197 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_CouldntFindMonForMe, MSGBOX_DEFAULT
# 198 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	giveitem ITEM_TM_TORMENT
# 199 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 200 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setflag FLAG_RECEIVED_TM_TORMENT
# 201 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainTorment, MSGBOX_DEFAULT
# 202 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	release
# 203 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 204 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 205 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ReceivedTorment::
# 206 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainTorment, MSGBOX_DEFAULT
# 207 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	release
# 208 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 209 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 210 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_Man::
# 211 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_IllTryUsingBugMons, MSGBOX_NPC
# 212 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 213 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 214 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_Girl::
# 215 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_BattleEvenWithoutToughMons, MSGBOX_NPC
# 216 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 217 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 218 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_Woman::
# 219 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_NiceIfMoreSelection, MSGBOX_NPC
# 220 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 221 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 222 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_RulesBoard::
# 223 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lockall
# 224 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 225 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
# 226 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 227 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 228 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard::
# 229 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading
# 230 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 231 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	multichoice 17, 0, MULTI_SLATEPORT_TENT_RULES, FALSE
# 232 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 233 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 0, SlateportCity_BattleTentLobby_EventScript_RulesBasics
# 234 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 1, SlateportCity_BattleTentLobby_EventScript_RulesSwapPartner
# 235 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 2, SlateportCity_BattleTentLobby_EventScript_RulesSwapNumber
# 236 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 3, SlateportCity_BattleTentLobby_EventScript_RulesSwapNotes
# 237 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 4, SlateportCity_BattleTentLobby_EventScript_RulesMons
# 238 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 5, SlateportCity_BattleTentLobby_EventScript_ExitRules
# 239 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentLobby_EventScript_ExitRules
# 240 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 241 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 242 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_RulesBasics::
# 243 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainBasicRules, MSGBOX_DEFAULT
# 244 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
# 245 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 246 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 247 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_RulesSwapPartner::
# 248 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainSwapPartnerRules, MSGBOX_DEFAULT
# 249 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
# 250 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 251 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 252 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_RulesSwapNumber::
# 253 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainSwapNumberRules, MSGBOX_DEFAULT
# 254 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
# 255 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 256 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 257 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_RulesSwapNotes::
# 258 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainSwapNotes, MSGBOX_DEFAULT
# 259 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
# 260 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 261 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 262 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_RulesMons::
# 263 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainMonRules, MSGBOX_DEFAULT
# 264 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
# 265 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 266 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 267 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ExitRules::
# 268 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	releaseall
# 269 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end

SlateportCity_BattleTentLobby_Text_CouldntFindMonForMe:
# 272 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "So, like, I couldn't find myself any\n"
	.string "Pokémon that were, like, for me.\p"
	.string "So, I figured, like, hey, I should file\n"
	.string "a complaint to the guy there?\p"
	.string "And he wouldn't hear me out, like, hey!\n"
	.string "So, like, total bummer, man!\p"
	.string "Hey, like, you! Zip it, you know?\n"
	.string "Just, you know, take this!$"

SlateportCity_BattleTentLobby_Text_ExplainTorment:
# 283 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "That's, like, TM41, you know?\n"
	.string "Hey, it's Torment, you hearing me?\p"
	.string "Like, it won't let the other guy\n"
	.string "use the same move twice in a row, see?\p"
	.string "Hey, now, you listen here, like,\n"
	.string "I'm not laying a torment on you!$"

SlateportCity_BattleTentLobby_Text_IllTryUsingBugMons:
# 292 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "I don't really like Bug Pokémon,\n"
	.string "but maybe I'll try using some for\l"
	.string "a change of pace.\p"
	.string "Who knows, I might even get to like\n"
	.string "them!$"

SlateportCity_BattleTentLobby_Text_BattleEvenWithoutToughMons:
# 300 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "You can battle all you want here even\n"
	.string "if you don't have any tough Pokémon.$"

SlateportCity_BattleTentLobby_Text_NiceIfMoreSelection:
# 305 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "Wouldn't it be nice if they had more of\n"
	.string "a selection?$"
