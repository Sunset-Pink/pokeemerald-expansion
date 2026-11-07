SlateportCity_PokemonFanClub_MapScripts::
	.byte 0


# 2 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 3 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Chairman::
# 4 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 5 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 6 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_unset FLAG_ENTERED_CONTEST, SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest
# 7 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN, SlateportCity_PokemonFanClub_EventScript_MeetChairman
# 8 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	switch VAR_SLATEPORT_FAN_CLUB_STATE
# 9 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 0, SlateportCity_PokemonFanClub_EventScript_ChairmanFirstAssessment
# 10 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 1, SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon
# 11 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 2, SlateportCity_PokemonFanClub_EventScript_NoMoreScarves
# 12 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 13 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 14 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 15 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanFirstAssessment::
# 16 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_SLATEPORT_FAN_CLUB_STATE, 1
# 17 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_AllowMeToExamineYourPokemon, MSGBOX_DEFAULT
# 18 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon
# 19 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 20 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 21 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon::
# 22 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_2, 0
# 23 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_YELLOW_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 24 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_GREEN_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 25 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_PINK_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 26 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_BLUE_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 27 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_RED_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 28 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_TEMP_2, CONTEST_CATEGORIES_COUNT, SlateportCity_PokemonFanClub_EventScript_ReceivedAllScarves
# 29 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_SLATEPORT_FAN_CLUB_STATE, 2, SlateportCity_PokemonFanClub_EventScript_NoMoreScarves
# 30 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_HowIsYourPokemonGrowing, MSGBOX_DEFAULT
# 31 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon
# 32 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 33 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 34 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_NoMoreScarves::
# 35 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_NothingElseToGiveYou, MSGBOX_DEFAULT
# 36 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 37 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 38 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 39 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon::
# 40 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_HmHmISee, MSGBOX_DEFAULT
# 41 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 0
# 42 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_YELLOW_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonTough
# 43 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_GREEN_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonSmart
# 44 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_PINK_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonCute
# 45 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_BLUE_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty
# 46 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_RED_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonCool
# 47 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 48 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	switch VAR_TEMP_1
# 49 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 0, SlateportCity_PokemonFanClub_EventScript_NoHighConditions
# 50 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 1, SlateportCity_PokemonFanClub_EventScript_GiveRedScarf
# 51 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 2, SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf
# 52 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 3, SlateportCity_PokemonFanClub_EventScript_GivePinkScarf
# 53 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 4, SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf
# 54 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 5, SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf
# 55 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 56 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 57 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 58 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ReceivedAllScarves::
# 59 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_SLATEPORT_FAN_CLUB_STATE, 2
# 60 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 61 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 62 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf::
# 63 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	addvar VAR_TEMP_2, 1
# 64 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 65 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 66 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_NoHighConditions::
# 67 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_GiveMonMorePokeblocks, MSGBOX_DEFAULT
# 68 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 69 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 70 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 71 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveRedScarf::
# 72 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_RED_SCARF
# 73 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 74 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 75 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_RED_SCARF
# 76 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_RED_SCARF
# 77 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainRedScarf, MSGBOX_DEFAULT
# 78 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 79 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 80 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 81 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf::
# 82 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_BLUE_SCARF
# 83 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 84 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 85 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_BLUE_SCARF
# 86 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_BLUE_SCARF
# 87 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainBlueScarf, MSGBOX_DEFAULT
# 88 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 89 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 90 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 91 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GivePinkScarf::
# 92 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_PINK_SCARF
# 93 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 94 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 95 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_PINK_SCARF
# 96 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_PINK_SCARF
# 97 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainPinkScarf, MSGBOX_DEFAULT
# 98 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 99 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 100 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 101 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf::
# 102 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_GREEN_SCARF
# 103 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 104 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 105 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_GREEN_SCARF
# 106 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_GREEN_SCARF
# 107 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainGreenScarf, MSGBOX_DEFAULT
# 108 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 109 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 110 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 111 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf::
# 112 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_YELLOW_SCARF
# 113 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 114 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 115 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_YELLOW_SCARF
# 116 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_YELLOW_SCARF
# 117 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainYellowScarf, MSGBOX_DEFAULT
# 118 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 119 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 120 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 121 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf::
# 122 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_NoSpaceForReward, MSGBOX_DEFAULT
# 123 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 124 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 125 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 126 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonCool::
# 127 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonCool
# 128 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonCool
# 129 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 130 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 131 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonCool::
# 132 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 1
# 133 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 134 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 135 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty::
# 136 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonBeauty
# 137 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonBeauty
# 138 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 139 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 140 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonBeauty::
# 141 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 2
# 142 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 143 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 144 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonCute::
# 145 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonCute
# 146 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonCute
# 147 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 148 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 149 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonCute::
# 150 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 3
# 151 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 152 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 153 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonSmart::
# 154 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonSmart
# 155 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonSmart
# 156 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 157 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 158 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonSmart::
# 159 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 4
# 160 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 161 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 162 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonTough::
# 163 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonTough
# 164 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonTough
# 165 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 166 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 167 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonTough::
# 168 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 5
# 169 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 170 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 171 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest::
# 172 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN, SlateportCity_PokemonFanClub_EventScript_ChairmanEnterContest
# 173 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MeetChairman, MSGBOX_DEFAULT
# 174 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN
# 175 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 176 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 177 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 178 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanEnterContest::
# 179 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_LikeToSeeEnteredContestPokemon, MSGBOX_DEFAULT
# 180 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 181 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 182 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 183 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_MeetChairman::
# 184 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MeetChairman, MSGBOX_DEFAULT
# 185 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN
# 186 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 187 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 188 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SootheBellWoman::
# 189 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 190 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 191 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOOTHE_BELL, SlateportCity_PokemonFanClub_EventScript_ReceivedSootheBell
# 192 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ShowMePokemonThatLoveYou, MSGBOX_DEFAULT
# 193 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 194 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_150_TO_199, SlateportCity_PokemonFanClub_EventScript_GiveSootheBell
# 195 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 196 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 197 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 198 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveSootheBell::
# 199 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playse SE_PIN
# 200 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 201 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 202 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
# 203 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 204 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_PokemonAdoresYou, MSGBOX_DEFAULT
# 205 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 206 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 207 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_SOOTHE_BELL
# 208 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 209 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 210 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 211 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ReceivedSootheBell::
# 212 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_TreatPokemonWithLove, MSGBOX_DEFAULT
# 213 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 214 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 215 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 216 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Man::
# 217 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_PokemonDontLikeFainting, MSGBOX_NPC
# 218 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 219 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 220 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Twin::
# 221 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonEnjoyedProtein, MSGBOX_NPC
# 222 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 223 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 224 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Skitty::
# 225 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 226 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 227 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 228 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 229 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Skitty, MSGBOX_DEFAULT
# 230 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 231 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 232 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 233 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 234 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Zigzagoon::
# 235 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 236 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 237 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 238 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 239 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Zigzagoon, MSGBOX_DEFAULT
# 240 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 241 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 242 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 243 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 244 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Azumarill::
# 245 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 246 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 247 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 248 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 249 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Azumarill, MSGBOX_DEFAULT
# 250 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 251 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 252 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end

SlateportCity_PokemonFanClub_Text_MeetChairman:
# 255 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Er-hem! I am the Chariman of the\n"
	.string "Pokémon Fan Club!\p"
	.string "Being the Chairman, I am naturally\n"
	.string "the most important!\p"
	.string "No one can best me when it comes\n"
	.string "to raising Pokémon. No one!\p"
	.string "Well, let me tell you about\n"
	.string "Pokémon Contests.\p"
	.string "They're events where one can show off\n"
	.string "Pokémon for the world to see!\p"
	.string "However, they're held in far-off towns,\n"
	.string "so I cannot participate often enough.\p"
	.string "That is why we gather here to show\n"
	.string "off our Pokémon, and have others\l"
	.string "show us theirs.$"

SlateportCity_PokemonFanClub_Text_LikeToSeeEnteredContestPokemon:
# 273 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "The Pokémon of a Trainer who has\n"
	.string "entered a Pokémon Contest…\l"
	.string "That, I would like to see.$"

SlateportCity_PokemonFanClub_Text_AllowMeToExamineYourPokemon:
# 279 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Er-hem! I see you've participated in\n"
	.string "a Pokémon Contest!\p"
	.string "Please! Allow me to examine how you\n"
	.string "have raised your Pokémon.\p"
	.string "It delights me no end to see Pokémon\n"
	.string "raised by other Trainers.\p"
	.string "The happy expressions of Pok♂on\n"
	.string "raised with proper care…\p"
	.string "The kindly eyes of the Trainer that\n"
	.string "nurtured and raised the Pokémon…\p"
	.string "The very thought fills my heart to\n"
	.string "overwhelming with joy.\p"
	.string "Oh! I do beg your pardon!\n"
	.string "Forgive me for prattling on so!\p"
	.string "Please! Allow me to examine how much\n"
	.string "your Pokémon has grown!$"

SlateportCity_PokemonFanClub_Text_HowIsYourPokemonGrowing:
# 298 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "How is your Pokémon growing?\n"
	.string "Allow me to examine it.$"

SlateportCity_PokemonFanClub_Text_HmHmISee:
# 303 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Hm, h.\n"
	.string "I see…$"

SlateportCity_PokemonFanClub_Text_GiveMonMorePokeblocks:
# 308 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Hmmm… It's not bad, but it's not\n"
	.string "good, either…\p"
	.string "You, the Trainer, must put more\n"
	.string "effort into raising this Pokémon!\p"
	.string "For instance, may I suggest that\n"
	.string "you give it more {POKEBLOCK}s?$"

SlateportCity_PokemonFanClub_Text_NoSpaceForReward:
# 317 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Oh, my…\p"
	.string "Your Pokémon is growing quite well,\n"
	.string "so you deserve a reward.\p"
	.string "Unfortunately, you have no space for\n"
	.string "this in your Bag.$"

SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis:
# 325 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Your {STR_VAR_1}, it is growing in\n"
	.string "a most impressive manner!\l"
	.string "It is one fine specimen!\p"
	.string "But! If you were to give it this,\n"
	.string "it would grow even better! Indeed!$"

SlateportCity_PokemonFanClub_Text_ExplainRedScarf:
# 333 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a Pokémon hold that Red Scarf.\p"
	.string "Everyone will recognize the coolness\n"
	.string "of that Pokémon!$"

SlateportCity_PokemonFanClub_Text_ExplainBlueScarf:
# 339 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a Pokémon hold that Blue Scarf.\p"
	.string "Its beauty will be accentuated much\n"
	.string "more than now!$"

SlateportCity_PokemonFanClub_Text_ExplainPinkScarf:
# 345 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a Pokémon hold that Pink Scarf.\p"
	.string "It will draw out the cuteness of\n"
	.string "the Pokémon some more!$"

SlateportCity_PokemonFanClub_Text_ExplainGreenScarf:
# 351 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a Pokémon hold that Green Scarf.\p"
	.string "That will enhance the\n"
	.string "smartness of Pokémon!$"

SlateportCity_PokemonFanClub_Text_ExplainYellowScarf:
# 357 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a Pokémon hold that Yellow Scarf.\p"
	.string "It will bolster your Pokémon's\n"
	.string "toughness so much more!$"

SlateportCity_PokemonFanClub_Text_NothingElseToGiveYou:
# 363 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "I'm sorry, but I've nothing else to\n"
	.string "give you! None at all!\p"
	.string "After all, you're blessed with the gift\n"
	.string "of raising Pokémon without resorting\l"
	.string "to any items!$"

SlateportCity_PokemonFanClub_Text_ShowMePokemonThatLoveYou:
# 371 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "I love seeing Pokémon that love\n"
	.string "their Trainers.\p"
	.string "Pokémon are very sensitive to\n"
	.string "the feelings of their Trainers.\p"
	.string "If you treat your Pokémon with love\n"
	.string "and care, they'll love you back.\p"
	.string "When your Pokémon grow to love you,\n"
	.string "please come show me.$"

SlateportCity_PokemonFanClub_Text_PokemonAdoresYou:
# 382 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Your Pokémon really adores you.\p"
	.string "For you, a most compassionate\n"
	.string "Trainer, a gift from the Fan Club!$"

SlateportCity_PokemonFanClub_Text_TreatPokemonWithLove:
# 388 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Pokémon are very sensitive to\n"
	.string "the feelings of their Trainers.\p"
	.string "If you treat your Pokémon with love\n"
	.string "and care, they'll love you back.$"

SlateportCity_PokemonFanClub_Text_PokemonDontLikeFainting:
# 395 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "If you keep letting a Pokémon faint\n"
	.string "in battle, it'll come to resent it.\p"
	.string "Soon, it will become less trusting\n"
	.string "of the Trainer.\p"
	.string "In other words, it certainly won't\n"
	.string "like you very much.$"

SlateportCity_PokemonFanClub_Text_MonEnjoyedProtein:
# 404 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Do Pokémon enjoy having items used\n"
	.string "on them?\p"
	.string "Mine acted really happy when I gave\n"
	.string "it some Protein.$"

SlateportCity_PokemonFanClub_Text_Skitty:
# 411 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Skitty: Fffnyaaaah…$"

SlateportCity_PokemonFanClub_Text_Zigzagoon:
# 415 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Zigzagoon: Kyuuu…$"

SlateportCity_PokemonFanClub_Text_Azumarill:
# 419 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Azumaril: Marimari?$"
