SlateportCity_MapScripts::
# 2 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 3 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SlateportCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
	.2byte 0


# 8 "data/maps/SlateportCity/scripts.pory"

# 9 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 10 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 11 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 12 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 13 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 14 "data/maps/SlateportCity/scripts.pory"
	end
# 15 "data/maps/SlateportCity/scripts.pory"

# 16 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 17 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 18 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 19 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 20 "data/maps/SlateportCity/scripts.pory"
	return
# 21 "data/maps/SlateportCity/scripts.pory"

# 22 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 23 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_CAPT_STERN, 28, 13
# 24 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_OLD_WOMAN, 25, 13
# 25 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_RICH_BOY, 25, 14
# 26 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_COOK, 27, 16
# 27 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_GIRL, 28, 16
# 28 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_FAT_MAN, 29, 16
# 29 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_MAN_1, 31, 14
# 30 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 31 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 32 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 33 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_COOK, MOVEMENT_TYPE_FACE_UP
# 34 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_GIRL, MOVEMENT_TYPE_FACE_UP
# 35 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 36 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 37 "data/maps/SlateportCity/scripts.pory"
	return
# 38 "data/maps/SlateportCity/scripts.pory"

# 39 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 40 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 41 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 42 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 43 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 23, 27
# 44 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 45 "data/maps/SlateportCity/scripts.pory"
	return
# 46 "data/maps/SlateportCity/scripts.pory"

# 47 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 48 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 22, 27
# 49 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 50 "data/maps/SlateportCity/scripts.pory"
	return
# 51 "data/maps/SlateportCity/scripts.pory"

# 52 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 53 "data/maps/SlateportCity/scripts.pory"
	lockall
# 54 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 55 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 56 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 57 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 58 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 59 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 60 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 61 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 62 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 63 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 64 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 65 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 66 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 67 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 68 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 69 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 70 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 71 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 72 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 73 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 74 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 75 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 76 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 77 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExit
# 78 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 79 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 80 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 10, 12
# 81 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 82 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 83 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 84 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 85 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 86 "data/maps/SlateportCity/scripts.pory"
	end
# 87 "data/maps/SlateportCity/scripts.pory"

# 88 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 89 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 90 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 91 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 92 "data/maps/SlateportCity/scripts.pory"
	step_end
# 93 "data/maps/SlateportCity/scripts.pory"

# 94 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 95 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 96 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 97 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 98 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 99 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 100 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 101 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 102 "data/maps/SlateportCity/scripts.pory"
	step_end
# 103 "data/maps/SlateportCity/scripts.pory"

# 104 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 105 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 106 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 107 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 108 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 109 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 110 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 111 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 112 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 113 "data/maps/SlateportCity/scripts.pory"
	step_end
# 114 "data/maps/SlateportCity/scripts.pory"

# 115 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 116 "data/maps/SlateportCity/scripts.pory"
	lock
# 117 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 118 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 119 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 120 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 121 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 122 "data/maps/SlateportCity/scripts.pory"
	release
# 123 "data/maps/SlateportCity/scripts.pory"
	end
# 124 "data/maps/SlateportCity/scripts.pory"

# 125 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 126 "data/maps/SlateportCity/scripts.pory"
	lock
# 127 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 128 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 129 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 130 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 131 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 132 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 133 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 134 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 135 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 136 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 137 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 138 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 139 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 140 "data/maps/SlateportCity/scripts.pory"
	release
# 141 "data/maps/SlateportCity/scripts.pory"
	end
# 142 "data/maps/SlateportCity/scripts.pory"

# 143 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 144 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 145 "data/maps/SlateportCity/scripts.pory"
	release
# 146 "data/maps/SlateportCity/scripts.pory"
	end
# 147 "data/maps/SlateportCity/scripts.pory"

# 148 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 149 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 150 "data/maps/SlateportCity/scripts.pory"
	release
# 151 "data/maps/SlateportCity/scripts.pory"
	end
# 152 "data/maps/SlateportCity/scripts.pory"

# 153 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 154 "data/maps/SlateportCity/scripts.pory"
	lock
# 155 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 156 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 157 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 158 "data/maps/SlateportCity/scripts.pory"
	release
# 159 "data/maps/SlateportCity/scripts.pory"
	end
# 160 "data/maps/SlateportCity/scripts.pory"

# 161 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 162 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 163 "data/maps/SlateportCity/scripts.pory"
	release
# 164 "data/maps/SlateportCity/scripts.pory"
	end
# 165 "data/maps/SlateportCity/scripts.pory"

# 166 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 167 "data/maps/SlateportCity/scripts.pory"
	lock
# 168 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 169 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 170 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 171 "data/maps/SlateportCity/scripts.pory"
	release
# 172 "data/maps/SlateportCity/scripts.pory"
	end
# 173 "data/maps/SlateportCity/scripts.pory"

# 174 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 175 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 176 "data/maps/SlateportCity/scripts.pory"
	release
# 177 "data/maps/SlateportCity/scripts.pory"
	end
# 178 "data/maps/SlateportCity/scripts.pory"

# 179 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 180 "data/maps/SlateportCity/scripts.pory"
	lock
# 181 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 182 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 183 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 184 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 185 "data/maps/SlateportCity/scripts.pory"
	release
# 186 "data/maps/SlateportCity/scripts.pory"
	end
# 187 "data/maps/SlateportCity/scripts.pory"

# 188 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 189 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 190 "data/maps/SlateportCity/scripts.pory"
	release
# 191 "data/maps/SlateportCity/scripts.pory"
	end
# 192 "data/maps/SlateportCity/scripts.pory"

# 193 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 194 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 195 "data/maps/SlateportCity/scripts.pory"
	release
# 196 "data/maps/SlateportCity/scripts.pory"
	end
# 197 "data/maps/SlateportCity/scripts.pory"

# 198 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 199 "data/maps/SlateportCity/scripts.pory"
	lock
# 200 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 201 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 202 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 203 "data/maps/SlateportCity/scripts.pory"
	release
# 204 "data/maps/SlateportCity/scripts.pory"
	end
# 205 "data/maps/SlateportCity/scripts.pory"

# 206 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 207 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 208 "data/maps/SlateportCity/scripts.pory"
	release
# 209 "data/maps/SlateportCity/scripts.pory"
	end
# 210 "data/maps/SlateportCity/scripts.pory"

# 211 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 212 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 213 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 214 "data/maps/SlateportCity/scripts.pory"
	end
# 215 "data/maps/SlateportCity/scripts.pory"

# 216 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 217 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 218 "data/maps/SlateportCity/scripts.pory"
	end
# 219 "data/maps/SlateportCity/scripts.pory"

# 220 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 221 "data/maps/SlateportCity/scripts.pory"
	lock
# 222 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 223 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 224 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 225 "data/maps/SlateportCity/scripts.pory"
	release
# 226 "data/maps/SlateportCity/scripts.pory"
	end
# 227 "data/maps/SlateportCity/scripts.pory"

# 228 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 229 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 230 "data/maps/SlateportCity/scripts.pory"
	release
# 231 "data/maps/SlateportCity/scripts.pory"
	end
# 232 "data/maps/SlateportCity/scripts.pory"

# 233 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 234 "data/maps/SlateportCity/scripts.pory"
	lock
# 235 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 236 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 237 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 238 "data/maps/SlateportCity/scripts.pory"
	release
# 239 "data/maps/SlateportCity/scripts.pory"
	end
# 240 "data/maps/SlateportCity/scripts.pory"

# 241 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 242 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 243 "data/maps/SlateportCity/scripts.pory"
	release
# 244 "data/maps/SlateportCity/scripts.pory"
	end
# 245 "data/maps/SlateportCity/scripts.pory"

# 246 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 247 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 248 "data/maps/SlateportCity/scripts.pory"
	end
# 249 "data/maps/SlateportCity/scripts.pory"

# 250 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 251 "data/maps/SlateportCity/scripts.pory"
	lockall
# 252 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 253 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 254 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 255 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 256 "data/maps/SlateportCity/scripts.pory"
	end
# 257 "data/maps/SlateportCity/scripts.pory"

# 258 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 259 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 260 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 261 "data/maps/SlateportCity/scripts.pory"
	end
# 262 "data/maps/SlateportCity/scripts.pory"

# 263 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 264 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 265 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 266 "data/maps/SlateportCity/scripts.pory"
	end
# 267 "data/maps/SlateportCity/scripts.pory"

# 268 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 269 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 270 "data/maps/SlateportCity/scripts.pory"
	end
# 271 "data/maps/SlateportCity/scripts.pory"

# 272 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 273 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 274 "data/maps/SlateportCity/scripts.pory"
	end
# 275 "data/maps/SlateportCity/scripts.pory"

# 276 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 277 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 278 "data/maps/SlateportCity/scripts.pory"
	end
# 279 "data/maps/SlateportCity/scripts.pory"

# 280 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 281 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 282 "data/maps/SlateportCity/scripts.pory"
	end
# 283 "data/maps/SlateportCity/scripts.pory"

# 284 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 285 "data/maps/SlateportCity/scripts.pory"
	lockall
# 286 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 287 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 288 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 289 "data/maps/SlateportCity/scripts.pory"
	end
# 290 "data/maps/SlateportCity/scripts.pory"

# 291 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 292 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 293 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 294 "data/maps/SlateportCity/scripts.pory"
	end
# 295 "data/maps/SlateportCity/scripts.pory"

# 296 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 297 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 298 "data/maps/SlateportCity/scripts.pory"
	end
# 299 "data/maps/SlateportCity/scripts.pory"

# 300 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 301 "data/maps/SlateportCity/scripts.pory"
	lock
# 302 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 303 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 304 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 305 "data/maps/SlateportCity/scripts.pory"
	release
# 306 "data/maps/SlateportCity/scripts.pory"
	end
# 307 "data/maps/SlateportCity/scripts.pory"

# 308 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 309 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 310 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 311 "data/maps/SlateportCity/scripts.pory"
	release
# 312 "data/maps/SlateportCity/scripts.pory"
	end
# 313 "data/maps/SlateportCity/scripts.pory"

# 314 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 315 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 316 "data/maps/SlateportCity/scripts.pory"
	end
# 317 "data/maps/SlateportCity/scripts.pory"

# 318 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 319 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 320 "data/maps/SlateportCity/scripts.pory"
	end
# 321 "data/maps/SlateportCity/scripts.pory"

# 322 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 323 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 324 "data/maps/SlateportCity/scripts.pory"
	end
# 325 "data/maps/SlateportCity/scripts.pory"

# 326 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 327 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 328 "data/maps/SlateportCity/scripts.pory"
	end
# 329 "data/maps/SlateportCity/scripts.pory"

# 330 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 331 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 332 "data/maps/SlateportCity/scripts.pory"
	end
# 333 "data/maps/SlateportCity/scripts.pory"

# 334 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 335 "data/maps/SlateportCity/scripts.pory"
	lock
# 336 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 337 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 338 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 339 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_1, Common_Movement_FaceOriginalDirection
# 340 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 341 "data/maps/SlateportCity/scripts.pory"
	release
# 342 "data/maps/SlateportCity/scripts.pory"
	end
# 343 "data/maps/SlateportCity/scripts.pory"

# 344 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 345 "data/maps/SlateportCity/scripts.pory"
	lock
# 346 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 347 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 348 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 349 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_2, Common_Movement_FaceOriginalDirection
# 350 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 351 "data/maps/SlateportCity/scripts.pory"
	release
# 352 "data/maps/SlateportCity/scripts.pory"
	end
# 353 "data/maps/SlateportCity/scripts.pory"

# 354 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 355 "data/maps/SlateportCity/scripts.pory"
	lock
# 356 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 357 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 358 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 359 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_3, Common_Movement_FaceOriginalDirection
# 360 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 361 "data/maps/SlateportCity/scripts.pory"
	release
# 362 "data/maps/SlateportCity/scripts.pory"
	end
# 363 "data/maps/SlateportCity/scripts.pory"

# 364 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 365 "data/maps/SlateportCity/scripts.pory"
	lock
# 366 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 367 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 368 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 369 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_4, Common_Movement_FaceOriginalDirection
# 370 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 371 "data/maps/SlateportCity/scripts.pory"
	release
# 372 "data/maps/SlateportCity/scripts.pory"
	end
# 373 "data/maps/SlateportCity/scripts.pory"

# 374 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 375 "data/maps/SlateportCity/scripts.pory"
	lock
# 376 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 377 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 378 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 379 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_5, Common_Movement_FaceOriginalDirection
# 380 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 381 "data/maps/SlateportCity/scripts.pory"
	release
# 382 "data/maps/SlateportCity/scripts.pory"
	end
# 383 "data/maps/SlateportCity/scripts.pory"

# 384 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 385 "data/maps/SlateportCity/scripts.pory"
	lock
# 386 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 387 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 388 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 389 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_6, Common_Movement_FaceOriginalDirection
# 390 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 391 "data/maps/SlateportCity/scripts.pory"
	release
# 392 "data/maps/SlateportCity/scripts.pory"
	end
# 393 "data/maps/SlateportCity/scripts.pory"

# 394 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 395 "data/maps/SlateportCity/scripts.pory"
	lock
# 396 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 397 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 398 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 399 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_7, Common_Movement_FaceOriginalDirection
# 400 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 401 "data/maps/SlateportCity/scripts.pory"
	release
# 402 "data/maps/SlateportCity/scripts.pory"
	end
# 403 "data/maps/SlateportCity/scripts.pory"

# 404 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 405 "data/maps/SlateportCity/scripts.pory"
	lock
# 406 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 407 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 408 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 409 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_8, Common_Movement_FaceOriginalDirection
# 410 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 411 "data/maps/SlateportCity/scripts.pory"
	release
# 412 "data/maps/SlateportCity/scripts.pory"
	end
# 413 "data/maps/SlateportCity/scripts.pory"

# 414 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 415 "data/maps/SlateportCity/scripts.pory"
	lock
# 416 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 417 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 418 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_ExclamationMark
# 419 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 420 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_Delay48
# 421 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 422 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 423 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 424 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 425 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 426 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 427 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 428 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 429 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 430 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 431 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 432 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 433 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 434 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 435 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 436 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 437 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 438 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 439 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 440 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 441 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 442 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 443 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 444 "data/maps/SlateportCity/scripts.pory"
	release
# 445 "data/maps/SlateportCity/scripts.pory"
	end
# 446 "data/maps/SlateportCity/scripts.pory"

# 447 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 448 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 449 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 450 "data/maps/SlateportCity/scripts.pory"
	step_end
# 451 "data/maps/SlateportCity/scripts.pory"

# 452 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 453 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 454 "data/maps/SlateportCity/scripts.pory"
	end
# 455 "data/maps/SlateportCity/scripts.pory"

# 456 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 457 "data/maps/SlateportCity/scripts.pory"
	lock
# 458 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 459 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 460 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 461 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_11, Common_Movement_FaceOriginalDirection
# 462 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 463 "data/maps/SlateportCity/scripts.pory"
	release
# 464 "data/maps/SlateportCity/scripts.pory"
	end
# 465 "data/maps/SlateportCity/scripts.pory"

# 466 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 467 "data/maps/SlateportCity/scripts.pory"
	lock
# 468 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 469 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 470 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 471 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 472 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 473 "data/maps/SlateportCity/scripts.pory"
	release
# 474 "data/maps/SlateportCity/scripts.pory"
	end
# 475 "data/maps/SlateportCity/scripts.pory"

# 476 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 477 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 478 "data/maps/SlateportCity/scripts.pory"
	release
# 479 "data/maps/SlateportCity/scripts.pory"
	end
# 480 "data/maps/SlateportCity/scripts.pory"

# 481 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 482 "data/maps/SlateportCity/scripts.pory"
	lock
# 483 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 484 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 485 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 486 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 487 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 488 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 489 "data/maps/SlateportCity/scripts.pory"
	release
# 490 "data/maps/SlateportCity/scripts.pory"
	end
# 491 "data/maps/SlateportCity/scripts.pory"

# 492 "data/maps/SlateportCity/scripts.pory"

# 493 "data/maps/SlateportCity/scripts.pory"

# 494 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 495 "data/maps/SlateportCity/scripts.pory"
	lock
# 496 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 497 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 498 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 499 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 500 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 501 "data/maps/SlateportCity/scripts.pory"
	release
# 502 "data/maps/SlateportCity/scripts.pory"
	end
# 503 "data/maps/SlateportCity/scripts.pory"

# 504 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 505 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 506 "data/maps/SlateportCity/scripts.pory"
	lockall
# 507 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 508 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 509 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 510 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, Common_Movement_WalkInPlaceFasterRight
# 511 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 512 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 513 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, Common_Movement_WalkInPlaceFasterDown
# 514 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 515 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 516 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 517 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 518 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, SlateportCity_Movement_GabbyExit
# 519 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, SlateportCity_Movement_TyExit
# 520 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 521 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_GABBY
# 522 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_TY
# 523 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 524 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 525 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 526 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 527 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 528 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 529 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_COOK, Common_Movement_WalkInPlaceFasterLeft
# 530 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 531 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 532 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_RICH_BOY, Common_Movement_QuestionMark
# 533 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_MAN_1, SlateportCity_Movement_ManConcern
# 534 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 535 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 536 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 537 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 538 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 539 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_ExclamationMark
# 540 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 541 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_Delay48
# 542 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 543 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 544 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 545 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 546 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 547 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 548 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 549 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 550 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 551 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_CAPT_STERN
# 552 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 553 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 554 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 555 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 556 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 557 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 558 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 559 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 560 "data/maps/SlateportCity/scripts.pory"
	end
# 561 "data/maps/SlateportCity/scripts.pory"

# 562 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 563 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 564 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 565 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 566 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 567 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 568 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 569 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 570 "data/maps/SlateportCity/scripts.pory"
	step_end
# 571 "data/maps/SlateportCity/scripts.pory"

# 572 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 573 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 574 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 575 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 576 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 577 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 578 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 579 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 580 "data/maps/SlateportCity/scripts.pory"
	step_end
# 581 "data/maps/SlateportCity/scripts.pory"

# 582 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 583 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 584 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 585 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 586 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 587 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 588 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 589 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 590 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 591 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 592 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 593 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 594 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 595 "data/maps/SlateportCity/scripts.pory"
	step_end
# 596 "data/maps/SlateportCity/scripts.pory"

# 597 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 598 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 599 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 600 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 601 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 602 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 603 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 604 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 605 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 606 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 607 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 608 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 609 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 610 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 611 "data/maps/SlateportCity/scripts.pory"
	step_end
# 612 "data/maps/SlateportCity/scripts.pory"

# 613 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 614 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 615 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 616 "data/maps/SlateportCity/scripts.pory"
	step_end
# 617 "data/maps/SlateportCity/scripts.pory"

# 618 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 619 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 620 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 621 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 622 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 623 "data/maps/SlateportCity/scripts.pory"
	step_end
# 624 "data/maps/SlateportCity/scripts.pory"

# 625 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 626 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 627 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 628 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 629 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 630 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 631 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 632 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 633 "data/maps/SlateportCity/scripts.pory"
	step_end
# 634 "data/maps/SlateportCity/scripts.pory"

# 635 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 636 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 637 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 638 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 639 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 640 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 641 "data/maps/SlateportCity/scripts.pory"
	step_end
# 642 "data/maps/SlateportCity/scripts.pory"

# 643 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 644 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 645 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 646 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 647 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 648 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 649 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 650 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 651 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 652 "data/maps/SlateportCity/scripts.pory"
	step_end
# 653 "data/maps/SlateportCity/scripts.pory"

# 654 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 655 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 656 "data/maps/SlateportCity/scripts.pory"
	end
# 657 "data/maps/SlateportCity/scripts.pory"

# 658 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 659 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 660 "data/maps/SlateportCity/scripts.pory"
	end
# 661 "data/maps/SlateportCity/scripts.pory"

# 662 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 663 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 664 "data/maps/SlateportCity/scripts.pory"
	end
# 665 "data/maps/SlateportCity/scripts.pory"

# 666 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 667 "data/maps/SlateportCity/scripts.pory"
	lock
# 668 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 669 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 670 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 671 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 672 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 673 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 674 "data/maps/SlateportCity/scripts.pory"
	release
# 675 "data/maps/SlateportCity/scripts.pory"
	end
# 676 "data/maps/SlateportCity/scripts.pory"

# 677 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 678 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 679 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 680 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 681 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 682 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 683 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 684 "data/maps/SlateportCity/scripts.pory"
	end
# 685 "data/maps/SlateportCity/scripts.pory"

# 686 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 687 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 688 "data/maps/SlateportCity/scripts.pory"
	release
# 689 "data/maps/SlateportCity/scripts.pory"
	end
# 690 "data/maps/SlateportCity/scripts.pory"

# 691 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 692 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 693 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 694 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 695 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 696 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 697 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 698 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 699 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 700 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 701 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 702 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 703 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 704 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 705 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 706 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 707 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 708 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 709 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 710 "data/maps/SlateportCity/scripts.pory"
	end
# 711 "data/maps/SlateportCity/scripts.pory"

# 712 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 713 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 714 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 715 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 716 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 717 "data/maps/SlateportCity/scripts.pory"
	end
# 718 "data/maps/SlateportCity/scripts.pory"

# 719 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 720 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 721 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 722 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 723 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 724 "data/maps/SlateportCity/scripts.pory"
	end
# 725 "data/maps/SlateportCity/scripts.pory"

# 726 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 727 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 728 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 729 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 730 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 731 "data/maps/SlateportCity/scripts.pory"
	end
# 732 "data/maps/SlateportCity/scripts.pory"

# 733 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 734 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 735 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 736 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 737 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 738 "data/maps/SlateportCity/scripts.pory"
	end
# 739 "data/maps/SlateportCity/scripts.pory"

# 740 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 741 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 742 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 743 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 744 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 745 "data/maps/SlateportCity/scripts.pory"
	end
# 746 "data/maps/SlateportCity/scripts.pory"

# 747 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 748 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 749 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 750 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 751 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 752 "data/maps/SlateportCity/scripts.pory"
	end
# 753 "data/maps/SlateportCity/scripts.pory"

# 754 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 755 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 756 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 757 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 758 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 759 "data/maps/SlateportCity/scripts.pory"
	end
# 760 "data/maps/SlateportCity/scripts.pory"

# 761 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 762 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 763 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 764 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 765 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 766 "data/maps/SlateportCity/scripts.pory"
	end
# 767 "data/maps/SlateportCity/scripts.pory"

# 768 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 769 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 770 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 771 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 772 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 773 "data/maps/SlateportCity/scripts.pory"
	end
# 774 "data/maps/SlateportCity/scripts.pory"

# 775 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 776 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 777 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 778 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 779 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 780 "data/maps/SlateportCity/scripts.pory"
	end
# 781 "data/maps/SlateportCity/scripts.pory"

# 782 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 783 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 784 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 785 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 786 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 787 "data/maps/SlateportCity/scripts.pory"
	end
# 788 "data/maps/SlateportCity/scripts.pory"

# 789 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 790 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 791 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 792 "data/maps/SlateportCity/scripts.pory"
	release
# 793 "data/maps/SlateportCity/scripts.pory"
	end
# 794 "data/maps/SlateportCity/scripts.pory"

# 795 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 796 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 797 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 798 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 799 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 800 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 801 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 802 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 803 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 804 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 805 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 806 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 807 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 808 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 809 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 810 "data/maps/SlateportCity/scripts.pory"
	release
# 811 "data/maps/SlateportCity/scripts.pory"
	end
# 812 "data/maps/SlateportCity/scripts.pory"

# 813 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 814 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 815 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 816 "data/maps/SlateportCity/scripts.pory"
	release
# 817 "data/maps/SlateportCity/scripts.pory"
	end
# 818 "data/maps/SlateportCity/scripts.pory"

# 819 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 820 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 821 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 822 "data/maps/SlateportCity/scripts.pory"
	end
# 823 "data/maps/SlateportCity/scripts.pory"

# 824 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 825 "data/maps/SlateportCity/scripts.pory"
	lockall
# 826 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 827 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 828 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 829 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 830 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 831 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 832 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 833 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 834 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 835 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 836 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 837 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 838 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 839 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 840 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 841 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 842 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 843 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 844 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 845 "data/maps/SlateportCity/scripts.pory"
	end
# 846 "data/maps/SlateportCity/scripts.pory"

# 847 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 848 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 849 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 850 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 851 "data/maps/SlateportCity/scripts.pory"
	step_end
# 852 "data/maps/SlateportCity/scripts.pory"

# 853 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 854 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 855 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 856 "data/maps/SlateportCity/scripts.pory"
	step_end
# 857 "data/maps/SlateportCity/scripts.pory"

# 858 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 859 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 860 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 861 "data/maps/SlateportCity/scripts.pory"
	step_end
# 862 "data/maps/SlateportCity/scripts.pory"

# 863 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 864 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 865 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 866 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 867 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 868 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 869 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 870 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 871 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 872 "data/maps/SlateportCity/scripts.pory"
	step_end
# 873 "data/maps/SlateportCity/scripts.pory"

# 874 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 875 "data/maps/SlateportCity/scripts.pory"
	lockall
# 876 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 877 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 878 "data/maps/SlateportCity/scripts.pory"
	end

	.align 2
# 881 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 882 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 883 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
	.2byte ITEM_NONE

	.align 2
# 886 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 887 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 888 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 889 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 890 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 891 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 892 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 893 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 894 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 895 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 896 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 897 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 898 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 899 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 900 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
	.2byte ITEM_NONE

	.align 2
# 903 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 904 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 905 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 906 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
	.2byte ITEM_NONE

	.align 2
# 909 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 910 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 911 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 912 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 913 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 914 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 915 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE

SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 918 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the Energy Guru! I'll go for it and\n"
	.string "sell you what you need!$"

SlateportCity_Text_OhYourPokemon:
# 923 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
	.string "Your {STR_VAR_1}…$"

SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 928 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
	.string "As its reward, please give it this\n"
	.string "Effort Ribbon.$"

SlateportCity_Text_ReceivedEffortRibbon:
# 934 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the Effort Ribbon.$"

SlateportCity_Text_PutEffortRibbonOnMon:
# 938 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the Effort Ribbon\n"
	.string "on {STR_VAR_1}.$"

SlateportCity_Text_GoForItLittleHarder:
# 943 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
	.string "If you do, I'll give your Pokémon\n"
	.string "something nice.$"

SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 949 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that Effort\n"
	.string "Ribbon looks good on it!$"

SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 954 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
	.string "dozens of miles away.\p"
	.string "I wonder if it doesn't startle Pokémon\n"
	.string "in the sea.$"

SlateportCity_Text_SeaweedFullOfLife:
# 961 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
	.string "The seaweed you can get around these\n"
	.string "parts is fresh and full of life.\p"
	.string "Why, it looks like it can even rear up\n"
	.string "and attack!$"

SlateportCity_Text_HowTownIsBornAndGrows:
# 969 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
	.string "of bountiful harvest gather.\p"
	.string "And where people gather, a market\n"
	.string "soon starts.\p"
	.string "That is how a town is born and grows.$"

SlateportCity_Text_SlateportWonderfulPlace:
# 977 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
	.string "scent of the ocean…\p"
	.string "Slateport is such a wonderful place!$"

SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 983 "data/maps/SlateportCity/scripts.pory"
	.string "If you put Dolls or Cushions on\n"
	.string "the floor, they'll get dirty.\p"
	.string "I'm going to buy some Bricks so my\n"
	.string "Dolls and Cushions won't get dirty\l"
	.string "when I leave them out.$"

SlateportCity_Text_GoingToCompeteInBattleTent:
# 991 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
	.string "the Battle Tent, too!\p"
	.string "But before that, I need to catch\n"
	.string "some Pokémon!$"

SlateportCity_Text_BushedHikingFromMauville:
# 998 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
	.string "I hiked over from Mauville City.\n"
	.string "But, boy, this city's huge.\p"
	.string "If I'd known this, I would've ridden\n"
	.string "my Bike here.$"

SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1006 "data/maps/SlateportCity/scripts.pory"
	.string "Stern, the fellow who built the\n"
	.string "Museum, also happens to be the leader\l"
	.string "of an undersea exploration team.\p"
	.string "So, everyone calls him Capt. Stern.$"

SlateportCity_Text_WhatsLongLineOverThere:
# 1013 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
	.string "That long line…$"

SlateportCity_Text_VisitedMuseumOften:
# 1018 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
	.string "the Museum often.\p"
	.string "I used to dream about the mysteries of\n"
	.string "the sea after seeing the exhibits.$"

SlateportCity_Text_QuitPushing:
# 1025 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
	.string "This is the line, can't you see?$"

SlateportCity_Text_AquaHasPolicy:
# 1030 "data/maps/SlateportCity/scripts.pory"
	.string "Team Aqua has a policy of\n"
	.string "assembling and dispersing at\l"
	.string "the operation site.$"

SlateportCity_Text_BossIsBrilliant:
# 1036 "data/maps/SlateportCity/scripts.pory"
	.string "Our Boss is brilliant.\p"
	.string "What would he want to do with\n"
	.string "a Museum now?$"

SlateportCity_Text_WhatsNewSchemeIWonder:
# 1042 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
	.string "Our Boss is scary when he's mad, so\n"
	.string "I'd better not screw things up…$"

SlateportCity_Text_ShouldTakeItAll:
# 1048 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
	.string "the Museum, we should take it all!$"

SlateportCity_Text_DontButtIn:
# 1053 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
	.string "Don't butt in!$"

SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1058 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
	.string "It reminds me of the times I lined up to\n"
	.string "buy smash-hit games…$"

SlateportCity_Text_WhyAreWeLiningUp:
# 1064 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
	.string "We should just march in!$"

SlateportCity_Text_WhatDoYouWant:
# 1069 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
	.string "What do you want?$"

SlateportCity_Text_IllReadSignForYou:
# 1074 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
	.string "I'll read it for you!$"

SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1079 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
	.string "Um… I think it says something like\n"
	.string "“the life in the sea is endless.”\p"
	.string "Yup, I'm pretty sure that's what\n"
	.string "it says.$"

SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1087 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
	.string "I should've brought my Game Boy\n"
	.string "Advance so I wouldn't get bored in line…\p"
	.string "Grumble…$"

SlateportCity_Text_HotSpringsAfterOperation:
# 1094 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
	.string "you to a hot spring spa!\p"
	.string "That's what our leader said.\n"
	.string "I can't wait!$"

SlateportCity_Text_SeaIsSoWet:
# 1101 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
	.string "Could the sea have been made by\n"
	.string "the tears shed by Pokémon?$"

SlateportCity_Text_SinkOldBoats:
# 1107 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
	.string "ships that become too creaky to sail?\p"
	.string "They sink them in the sea so they\n"
	.string "become habitats for Pokémon.$"

SlateportCity_Text_BuyTooMuch:
# 1114 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
	.string "away and buy too much.$"

SlateportCity_Text_GetNameRaterToHelpYou:
# 1119 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your Pokémon's\n"
	.string "nickname, you'll have to get the Name\l"
	.string "Rater to help you.$"

SlateportCity_Text_CantChangeTradeMonName:
# 1125 "data/maps/SlateportCity/scripts.pory"
	.string "Any Pokémon you get in a trade,\n"
	.string "you can't change its nickname.\p"
	.string "The original Trainer's love for that\n"
	.string "Pokémon is in the nickname.$"

SlateportCity_Text_BattleTentBuiltRecently:
# 1132 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a Battle Tent was built\n"
	.string "in Slateport.\p"
	.string "Gyms are fun, but the Battle Tent's\n"
	.string "awesome in its own way.\p"
	.string "You should go find tough Pokémon\n"
	.string "for the Battle Tent!$"

SlateportCity_Text_CaptSternBeingInterviewed:
# 1141 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
	.string "so I could get an autograph.\p"
	.string "But who's that being interviewed?\n"
	.string "Isn't that Capt. Stern?$"

SlateportCity_Text_InterviewerSoCool:
# 1148 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
	.string "and pretty.\p"
	.string "When I grow up, I'm going to be\n"
	.string "an international journalist!$"

SlateportCity_Text_SternSaysDiscoveredSomething:
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern says they discovered\n"
	.string "something at the bottom of the sea.\p"
	.string "I wonder what it is?\n"
	.string "What could it be?$"

SlateportCity_Text_CaptainComeBackWithBigFish:
# 1162 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
	.string "Did the good Captain come back with\n"
	.string "a big fish from the ocean floor?$"

SlateportCity_Text_AmIOnTV:
# 1168 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
	.string "Am I on TV?$"

SlateportCity_Text_CaptainsACelebrity:
# 1173 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
	.string "The Captain's a celebrity!$"

SlateportCity_Text_BigSmileForCamera:
# 1178 "data/maps/SlateportCity/scripts.pory"
	.string "Ty: Okay, Capt. Stern, a big smile\n"
	.string "for the camera!$"

SlateportCity_Text_MostInvaluableExperience:
# 1183 "data/maps/SlateportCity/scripts.pory"
	.string "Gabby: I see, I see. You've had a most\n"
	.string "invaluable experience…$"

SlateportCity_Text_SternMoveAheadWithExploration:
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern: Yes, indeed. We intend to\n"
	.string "move ahead with our exploration.$"

SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1193 "data/maps/SlateportCity/scripts.pory"
	.string "Gabby: That's wonderful, Capt. Stern!\n"
	.string "Thank you for taking the time from\l"
	.string "your busy schedule to talk to us.\p"
	.string "We hope we can interview you again\n"
	.string "with news of more discoveries!$"

SlateportCity_Text_SternWhewFirstInterview:
# 1201 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. STern: Whew…\p"
	.string "That was my first time to be filmed for\n"
	.string "TV. That was nerve-wracking.$"

SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1207 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
	.string "You're looking great!\p"
	.string "We made a huge discovery on our last\n"
	.string "seafloor exploration.\p"
	.string "We found an underwater cavern on\n"
	.string "Route 128.\p"
	.string "We think it's the habitat of a Pokémon\n"
	.string "that's said to have been long extinct.$"

SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1218 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
	.string "Capt. Stern, I presume.\p"
	.string "We of Team Aqua will assume\n"
	.string "control of your submarine!\p"
	.string "Your objections are meaningless!\n"
	.string "We expect your total cooperation!\p"
	.string "Fufufu…\n"
	.string "Just watch and learn what Team\l"
	.string "Aqua has planned!$"

SlateportCity_Text_SternWhatWasAllThat:
# 1230 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern: What was that all about?\p"
	.string "It sounded like someone using\n"
	.string "a megaphone…\p"
	.string "Where did it come from?$"

SlateportCity_Text_FromHarborTryingToTakeSub:
# 1237 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the Harbor!\p"
	.string "The submarine!\n"
	.string "They're trying to take it!$"

SlateportCity_Text_PleaseComeWithMe:
# 1243 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
	.string "Please, come with me!$"

SlateportCity_Text_BattleTentSign:
# 1248 "data/maps/SlateportCity/scripts.pory"
	.string "Battle Tent Slateport Site\n"
	.string "“Find it! The ultimate Pokémon!”$"

SlateportCity_Text_SternsShipyardWantedSign:
# 1253 "data/maps/SlateportCity/scripts.pory"
	.string "Stern's Shipyard\p"
	.string "“Wanted: A sailor capable of sailing\n"
	.string "in all currents.”$"

SlateportCity_Text_SternsShipyardNearsCompletion:
# 1259 "data/maps/SlateportCity/scripts.pory"
	.string "Stern's Shipyard\p"
	.string "“The ferry S.S. Tidal nears\n"
	.string "completion for serving the ports of\l"
	.string "Slateport and Lilycove.”$"

SlateportCity_Text_SternsShipyardFerryComplete:
# 1266 "data/maps/SlateportCity/scripts.pory"
	.string "Stern's Shipyard\p"
	.string "“Boarding of the Slateport-Lilycove\n"
	.string "ferry S.S. Tidal is handled at the\l"
	.string "Harbor.”$"

SlateportCity_Text_PokemonFanClubSign:
# 1273 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon Fan Club\n"
	.string "“Calling all fans of Pokémon!”$"

SlateportCity_Text_OceanicMuseumSign:
# 1278 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
	.string "all life.”\p"
	.string "Oceanic Museum$"

SlateportCity_Text_CitySign:
# 1284 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport City\p"
	.string "“The port where people and Pokémon\n"
	.string "cross paths.”$"

SlateportCity_Text_MarketSign:
# 1290 "data/maps/SlateportCity/scripts.pory"
	.string "Slatport Market\n"
	.string "“Unique items found nowhere else!”$"

SlateportCity_Text_HarborFerryUnderConstruction:
# 1295 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport Harbor\p"
	.string "“The ferry S.S. Tidal is under\n"
	.string "construction in the Shipyard.\p"
	.string "“Service is scheduled to begin\n"
	.string "shortly.”$"

SlateportCity_Text_HarborSign:
# 1303 "data/maps/SlateportCity/scripts.pory"
	.string "Slatport Harbor\p"
	.string "“Enjoy a delightful cruise on\n"
	.string "the ferry S.S. Tidal.”$"

SlateportCity_Text_NameRatersHouseSign:
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "Name Rater's House\n"
	.string "“Poke♂on nicknames rated.”$"

SlateportCity_Text_ExplainBerries:
# 1314 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild Pokémon gets hurt, it heals\n"
	.string "itself by chewing on Berries.\p"
	.string "Did you know that?\p"
	.string "Somebody saw that and got the idea\n"
	.string "of making medicine from Berries.\p"
	.string "Did you know that?\p"
	.string "To turn Berries into medicine,\n"
	.string "they must be crushed into powder.\p"
	.string "Did you know that?\p"
	.string "You seem to have an interest\n"
	.string "in Berries!\p"
	.string "I've got something good for someone\n"
	.string "like you.$"

SlateportCity_Text_ExplainBerryPowder:
# 1330 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
	.string "Pokémon Centers for crushing Berries.\p"
	.string "The Berry Crush machines are at\n"
	.string "the Direct Corner upstairs.\p"
	.string "Did you know?\p"
	.string "Could you make Berry Powder for\n"
	.string "me using those machines?\p"
	.string "I can make you all sorts of medicine\n"
	.string "if you bring me lots of Berry Powder.$"

SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1342 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
	.string "Berry Powder?$"

SlateportCity_Text_ExchangeWhatWithIt:
# 1347 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
	.string "it with?$"

SlateportCity_Text_ExchangeBerryPowderForItem:
# 1352 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
	.string "Berry Powder for one {STR_VAR_1}?$"

SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1357 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
	.string "Berry Powder.$"

SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1362 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine Berry Powder.\n"
	.string "It will make excellent medicine.\p"
	.string "Would you like to trade more of your\n"
	.string "Berry Powder for something else?$"

SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1369 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
	.string "Berry Powder, bring it to me, please!$"

SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1374 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
	.string "Berry Powder for some medicine.\p"
	.string "I'm always running a bazaar here.\p"
	.string "Did you know?$"

SlateportCity_Text_YouDroveTeamAquaAway:
# 1381 "data/maps/SlateportCity/scripts.pory"
	.string "Scott: Huh?\n"
	.string "I'm sure I met you somewhere before.\p"
	.string "Have I introduced myself to you?\n"
	.string "If not, my name's Scott.\p"
	.string "I just saw Team Aqua run away from\n"
	.string "here like they were stung.\p"
	.string "Let me guess--you drove them away?$"

SlateportCity_Text_MaybeThisTrainer:
# 1391 "data/maps/SlateportCity/scripts.pory"
	.string "Scott: Hmm…\n"
	.string "Maybe, just maybe, this Trainer…$"

SlateportCity_Text_LetsRegisterEachOther:
# 1396 "data/maps/SlateportCity/scripts.pory"
	.string "Scott: All right! I think you're going\n"
	.string "to become a good friend.\p"
	.string "So, let's register each other in our\n"
	.string "PokéNavs.\p"
	.string "… … … … … …$"

SlateportCity_Text_RegisteredScott:
# 1404 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this Scott person\n"
	.string "in the PokéNav.$"

SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1409 "data/maps/SlateportCity/scripts.pory"
	.string "Scott: What I'd like to do is tag along\n"
	.string "with you, but I do want to keep an eye\l"
	.string "on the talents of other people, too.\p"
	.string "So, I'll be off to roam other towns\n"
	.string "a bit more.\p"
	.string "Be seeing you, {PLAYER}{KUN}!$"

SlateportCity_Text_TakingBattleTentChallenge:
# 1418 "data/maps/SlateportCity/scripts.pory"
	.string "Scott: Oh, hey!\n"
	.string "If it isn't {PLAYER}{KUN}!\p"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
	.string "to take the Battle Tent challenge?\p"
	.string "Yeah! That's a good idea!\n"
	.string "That's a really great idea!\p"
	.string "After all, a tough TRAINER is\n"
	.string "the perfect fit for the Battle Tent!\p"
	.string "Give it your best effort!$"
