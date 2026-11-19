RustboroCity_MapScripts::
# 2 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 3 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RustboroCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
	.2byte 0


RustboroCity_OnTransition:
# 9 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 10 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 11 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RUSTBORO_CITY_STATE, 6
	goto_if_eq RustboroCity_OnTransition_2
RustboroCity_OnTransition_1:
	return

RustboroCity_OnTransition_2:
# 12 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 13 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 14 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PositionScientistForExit
	goto RustboroCity_OnTransition_1


RustboroCity_EventScript_PositionScientistForExit::
# 20 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_0, 11
	goto_if_eq RustboroCity_EventScript_PositionScientistForExit_2
# 23 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 12, 15
RustboroCity_EventScript_PositionScientistForExit_1:
	return

RustboroCity_EventScript_PositionScientistForExit_2:
# 21 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 11, 15
	goto RustboroCity_EventScript_PositionScientistForExit_1


RustboroCity_EventScript_ScientistAddMatchCall::
# 29 "data/maps/RustboroCity/scripts.pory"
	lockall
# 30 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 31 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_EventScript_ScientistAddMatchCall_Movement_0
# 32 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 33 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 34 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 35 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_SCIENTIST
# 36 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_EventScript_ScientistAddMatchCall_Movement_1
# 40 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 41 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 42 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_ExclamationMark
# 43 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 44 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_Delay48
# 45 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 46 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 47 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 48 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_EventScript_ScientistAddMatchCall_Movement_2
# 49 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 50 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature
# 51 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 52 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 53 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 54 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 55 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 56 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 57 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 58 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 59 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 60 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 61 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 62 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 63 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 64 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 65 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone
# 66 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 67 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 70 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 71 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
RustboroCity_EventScript_ScientistAddMatchCall_2:
# 72 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ne RustboroCity_EventScript_ScientistAddMatchCall_3
# 78 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 79 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 80 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork
# 81 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 82 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_EventScript_ScientistAddMatchCall_Movement_3
# 83 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 84 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 85 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_SCIENTIST
# 86 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 87 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 88 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 89 "data/maps/RustboroCity/scripts.pory"
	releaseall
	return

RustboroCity_EventScript_ScientistAddMatchCall_3:
# 73 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav
# 74 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 75 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 76 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
	goto RustboroCity_EventScript_ScientistAddMatchCall_2


RustboroCity_EventScript_FatMan::
# 94 "data/maps/RustboroCity/scripts.pory"
	lock
# 95 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 96 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatMan_2
# 99 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon
RustboroCity_EventScript_FatMan_1:
# 101 "data/maps/RustboroCity/scripts.pory"
	release
	end

RustboroCity_EventScript_FatMan_2:
# 97 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner
	goto RustboroCity_EventScript_FatMan_1


RustboroCity_EventScript_DevonEmployee2::
# 106 "data/maps/RustboroCity/scripts.pory"
	lock
# 107 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 108 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere
# 109 "data/maps/RustboroCity/scripts.pory"
	release
	end


RustboroCity_EventScript_Woman::
# 114 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
	end


RustboroCity_EventScript_Man1::
# 119 "data/maps/RustboroCity/scripts.pory"
	lock
# 120 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 121 "data/maps/RustboroCity/scripts.pory"
	compare VAR_STONE_BADGE_LEVEL, 1
	goto_if_ge RustboroCity_EventScript_Man1_2
# 124 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym
RustboroCity_EventScript_Man1_1:
# 126 "data/maps/RustboroCity/scripts.pory"
	release
	end

RustboroCity_EventScript_Man1_2:
# 122 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge
	goto RustboroCity_EventScript_Man1_1


RustboroCity_EventScript_Boy2::
# 131 "data/maps/RustboroCity/scripts.pory"
	lock
# 132 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 133 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2_2
# 136 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel
RustboroCity_EventScript_Boy2_1:
# 138 "data/maps/RustboroCity/scripts.pory"
	release
	end

RustboroCity_EventScript_Boy2_2:
# 134 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko
	goto RustboroCity_EventScript_Boy2_1


RustboroCity_EventScript_Twin::
# 143 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
	end


RustboroCity_EventScript_NinjaBoy::
# 148 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
	end


RustboroCity_EventScript_TunnelSign::
# 153 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
	end


RustboroCity_EventScript_DevonCorpSign::
# 158 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
	end


RustboroCity_EventScript_GymSign::
# 163 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
	end


RustboroCity_EventScript_CitySign::
# 168 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
	end


RustboroCity_EventScript_TrainersSchoolSign::
# 173 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
	end


RustboroCity_EventScript_CuttersHouseSign::
# 178 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
	end


RustboroCity_EventScript_LittleBoy::
# 183 "data/maps/RustboroCity/scripts.pory"
	lock
# 184 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 185 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp
# 186 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 187 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 188 "data/maps/RustboroCity/scripts.pory"
	release
	end


RustboroCity_EventScript_LittleGirl::
# 193 "data/maps/RustboroCity/scripts.pory"
	lock
# 194 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 195 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape
# 196 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 197 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 198 "data/maps/RustboroCity/scripts.pory"
	release
	end


RustboroCity_EventScript_Man2::
# 203 "data/maps/RustboroCity/scripts.pory"
	lock
# 204 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 205 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast
# 206 "data/maps/RustboroCity/scripts.pory"
	release
	end


RustboroCity_EventScript_StolenGoodsTrigger0::
# 211 "data/maps/RustboroCity/scripts.pory"
	lockall
# 212 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 213 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_StolenGoodsScene
	end


RustboroCity_EventScript_StolenGoodsTrigger1::
# 218 "data/maps/RustboroCity/scripts.pory"
	lockall
# 219 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 220 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_StolenGoodsScene
	end


RustboroCity_EventScript_StolenGoodsTrigger2::
# 225 "data/maps/RustboroCity/scripts.pory"
	lockall
# 226 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 227 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_StolenGoodsScene
	end


RustboroCity_EventScript_StolenGoodsTrigger3::
# 232 "data/maps/RustboroCity/scripts.pory"
	lockall
# 233 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 234 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_StolenGoodsScene
	end


RustboroCity_EventScript_StolenGoodsTrigger4::
# 239 "data/maps/RustboroCity/scripts.pory"
	lockall
# 240 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 241 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_StolenGoodsScene
	end


RustboroCity_EventScript_StolenGoodsScene::
# 246 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 247 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 248 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay
# 249 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 250 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 251 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_GRUNT
# 252 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 253 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GRUNT, RustboroCity_EventScript_StolenGoodsScene_Movement_0
# 258 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 259 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_GRUNT
# 260 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_EventScript_StolenGoodsScene_Movement_1
# 264 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 265 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods
# 266 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 267 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_EventScript_StolenGoodsScene_Movement_2
# 270 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 271 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 272 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 273 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 30, 10
# 274 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 275 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 276 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 277 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 278 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 279 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 280 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 281 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 282 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 283 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 284 "data/maps/RustboroCity/scripts.pory"
	releaseall
	return


RustboroCity_EventScript_DevonEmployee1::
# 289 "data/maps/RustboroCity/scripts.pory"
	lock
# 290 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 291 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_DevonEmployee1_2
# 296 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel
RustboroCity_EventScript_DevonEmployee1_1:
# 298 "data/maps/RustboroCity/scripts.pory"
	release
	end

RustboroCity_EventScript_DevonEmployee1_2:
# 292 "data/maps/RustboroCity/scripts.pory"
	waitse
# 293 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 294 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
	goto RustboroCity_EventScript_DevonEmployee1_1


RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 303 "data/maps/RustboroCity/scripts.pory"
	lockall
# 304 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 305 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeAskToGetGoods
	end


RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 310 "data/maps/RustboroCity/scripts.pory"
	lockall
# 311 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 312 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeAskToGetGoods
	end


RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 317 "data/maps/RustboroCity/scripts.pory"
	lockall
# 318 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 319 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeAskToGetGoods
	end


RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 324 "data/maps/RustboroCity/scripts.pory"
	lockall
# 325 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 326 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeAskToGetGoods
	end


RustboroCity_EventScript_EmployeeAskToGetGoods::
# 331 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq RustboroCity_EventScript_EmployeeAskToGetGoods_2
# 333 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq RustboroCity_EventScript_EmployeeAskToGetGoods_3
# 336 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
RustboroCity_EventScript_EmployeeAskToGetGoods_1:
# 339 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 340 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 341 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 342 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 343 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 344 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 345 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq RustboroCity_EventScript_EmployeeAskToGetGoods_8
RustboroCity_EventScript_EmployeeAskToGetGoods_7:
# 349 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq RustboroCity_EventScript_EmployeeAskToGetGoods_11
# 351 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq RustboroCity_EventScript_EmployeeAskToGetGoods_12
# 354 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
RustboroCity_EventScript_EmployeeAskToGetGoods_10:
# 356 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 358 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 359 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 360 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 361 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed
# 362 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_EmployeeAskToGetGoods_2:
# 332 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
	goto RustboroCity_EventScript_EmployeeAskToGetGoods_1

RustboroCity_EventScript_EmployeeAskToGetGoods_3:
# 334 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
	goto RustboroCity_EventScript_EmployeeAskToGetGoods_1

RustboroCity_EventScript_EmployeeAskToGetGoods_8:
# 346 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_EventScript_ScientistAddMatchCall_Movement_0
# 347 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	goto RustboroCity_EventScript_EmployeeAskToGetGoods_7

RustboroCity_EventScript_EmployeeAskToGetGoods_11:
# 350 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	goto RustboroCity_EventScript_EmployeeAskToGetGoods_10

RustboroCity_EventScript_EmployeeAskToGetGoods_12:
# 352 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	goto RustboroCity_EventScript_EmployeeAskToGetGoods_10


RustboroCity_EventScript_ReturnGoodsTrigger0::
# 367 "data/maps/RustboroCity/scripts.pory"
	lockall
# 368 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 369 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
	end


RustboroCity_EventScript_ReturnGoodsTrigger1::
# 374 "data/maps/RustboroCity/scripts.pory"
	lockall
# 375 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 376 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
	end


RustboroCity_EventScript_ReturnGoodsTrigger2::
# 381 "data/maps/RustboroCity/scripts.pory"
	lockall
# 382 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 383 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
	end


RustboroCity_EventScript_ReturnGoodsTrigger3::
# 388 "data/maps/RustboroCity/scripts.pory"
	lockall
# 389 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 390 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
	end


RustboroCity_EventScript_ReturnGoods::
# 395 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq RustboroCity_EventScript_ReturnGoods_2
# 397 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq RustboroCity_EventScript_ReturnGoods_3
# 399 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq RustboroCity_EventScript_ReturnGoods_4
# 399 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq RustboroCity_EventScript_ReturnGoods_4
# 402 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
RustboroCity_EventScript_ReturnGoods_1:
# 404 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 405 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 406 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 407 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 408 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 409 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 410 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq RustboroCity_EventScript_ReturnGoods_12
RustboroCity_EventScript_ReturnGoods_11:
# 414 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq RustboroCity_EventScript_ReturnGoods_15
# 416 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq RustboroCity_EventScript_ReturnGoods_16
# 418 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq RustboroCity_EventScript_ReturnGoods_17
# 418 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq RustboroCity_EventScript_ReturnGoods_17
RustboroCity_EventScript_ReturnGoods_14:
# 421 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 422 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou
# 423 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 424 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ReturnGoods_24
RustboroCity_EventScript_ReturnGoods_23:
# 427 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe
# 428 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 429 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 430 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 431 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 432 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 433 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 434 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 435 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_ReturnGoods_2:
# 396 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
	goto RustboroCity_EventScript_ReturnGoods_1

RustboroCity_EventScript_ReturnGoods_3:
# 398 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
	goto RustboroCity_EventScript_ReturnGoods_1

RustboroCity_EventScript_ReturnGoods_4:
# 400 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
	goto RustboroCity_EventScript_ReturnGoods_1

RustboroCity_EventScript_ReturnGoods_12:
# 411 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_EventScript_ScientistAddMatchCall_Movement_0
# 412 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	goto RustboroCity_EventScript_ReturnGoods_11

RustboroCity_EventScript_ReturnGoods_15:
# 415 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	goto RustboroCity_EventScript_ReturnGoods_14

RustboroCity_EventScript_ReturnGoods_16:
# 417 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
	goto RustboroCity_EventScript_ReturnGoods_14

RustboroCity_EventScript_ReturnGoods_17:
# 419 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	goto RustboroCity_EventScript_ReturnGoods_14

RustboroCity_EventScript_ReturnGoods_24:
# 425 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems
	goto RustboroCity_EventScript_ReturnGoods_23


RustboroCity_EventScript_Rival::
# 440 "data/maps/RustboroCity/scripts.pory"
	lockall
# 441 "data/maps/RustboroCity/scripts.pory"
	goto_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_Rival_2
RustboroCity_EventScript_Rival_1:
# 444 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_FacePlayer
# 445 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 446 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return

RustboroCity_EventScript_Rival_2:
# 442 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
	goto RustboroCity_EventScript_Rival_1


RustboroCity_EventScript_PlayRivalMusic::
	checkplayergender
# 0 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RustboroCity_EventScript_PlayRivalMusic_2
# 453 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
RustboroCity_EventScript_PlayRivalMusic_1:
	return

RustboroCity_EventScript_PlayRivalMusic_2:
# 451 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	goto RustboroCity_EventScript_PlayRivalMusic_1


RustboroCity_EventScript_RivalTrigger0::
# 459 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 460 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RivalTrigger
	return


RustboroCity_EventScript_RivalTrigger::
# 464 "data/maps/RustboroCity/scripts.pory"
	lockall
# 465 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 466 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 467 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 468 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 469 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 470 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 471 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 472 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 473 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq RustboroCity_EventScript_RivalTrigger_2
# 479 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq RustboroCity_EventScript_RivalTrigger_3
# 485 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq RustboroCity_EventScript_RivalTrigger_4
# 491 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq RustboroCity_EventScript_RivalTrigger_5
# 497 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq RustboroCity_EventScript_RivalTrigger_6
# 499 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq RustboroCity_EventScript_RivalTrigger_7
# 505 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq RustboroCity_EventScript_RivalTrigger_8
# 512 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger_Movement_7
RustboroCity_EventScript_RivalTrigger_1:
# 518 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 519 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 520 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 521 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return

RustboroCity_EventScript_RivalTrigger_2:
# 474 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger_Movement_0
	goto RustboroCity_EventScript_RivalTrigger_1

RustboroCity_EventScript_RivalTrigger_3:
# 480 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger_Movement_1
	goto RustboroCity_EventScript_RivalTrigger_1

RustboroCity_EventScript_RivalTrigger_4:
# 486 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger_Movement_2
	goto RustboroCity_EventScript_RivalTrigger_1

RustboroCity_EventScript_RivalTrigger_5:
# 492 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger_Movement_3
	goto RustboroCity_EventScript_RivalTrigger_1

RustboroCity_EventScript_RivalTrigger_6:
# 498 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger_Movement_4
	goto RustboroCity_EventScript_RivalTrigger_1

RustboroCity_EventScript_RivalTrigger_7:
# 500 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger_Movement_5
	goto RustboroCity_EventScript_RivalTrigger_1

RustboroCity_EventScript_RivalTrigger_8:
# 506 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger_Movement_6
	goto RustboroCity_EventScript_RivalTrigger_1


RustboroCity_EventScript_RivalTrigger1::
# 525 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 526 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RivalTrigger
	return


RustboroCity_EventScript_RivalTrigger2::
# 530 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 531 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RivalTrigger
	return


RustboroCity_EventScript_RivalTrigger3::
# 535 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 536 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RivalTrigger
	return


RustboroCity_EventScript_RivalTrigger4::
# 540 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 541 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RivalTrigger
	return


RustboroCity_EventScript_RivalTrigger5::
# 545 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 5
# 546 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RivalTrigger
	return


RustboroCity_EventScript_RivalTrigger6::
# 550 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 6
# 551 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RivalTrigger
	return


RustboroCity_EventScript_RivalTrigger7::
# 555 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 7
# 556 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RivalTrigger
	return


RustboroCity_EventScript_RivalEncounter::
	checkplayergender
# 0 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RustboroCity_EventScript_RivalEncounter_2
# 563 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_BrendanEncounter
RustboroCity_EventScript_RivalEncounter_1:
	end

RustboroCity_EventScript_RivalEncounter_2:
# 561 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_MayEncounter
	goto RustboroCity_EventScript_RivalEncounter_1


RustboroCity_EventScript_RestoreBgm::
# 569 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 570 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
	return


RustboroCity_EventScript_MayEncounter::
# 575 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayEncounter_2
# 580 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayEncounter_3
# 599 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 600 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister
# 601 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 602 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 603 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 604 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay
# 605 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 606 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 607 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 608 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 609 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 610 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 611 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 612 "data/maps/RustboroCity/scripts.pory"
	goto RustboroMayBattle
RustboroCity_EventScript_MayEncounter_1:
# 614 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_MayEncounter_2:
# 576 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint
# 577 "data/maps/RustboroCity/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq RustboroCity_EventScript_MayEncounter_7
	goto RustboroCity_EventScript_MayEncounter_1

RustboroCity_EventScript_MayEncounter_3:
# 581 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 582 "data/maps/RustboroCity/scripts.pory"
RustboroMayBattle:
# 583 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_EventScript_MayEncounter_9
# 596 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough
	goto RustboroCity_EventScript_MayEncounter_1

RustboroCity_EventScript_MayEncounter_7:
# 578 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
	goto RustboroCity_EventScript_MayEncounter_1

RustboroCity_EventScript_MayEncounter_9:
# 584 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose
# 585 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 586 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_MayEncounter_14
# 587 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_MayEncounter_15
# 588 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_MayEncounter_16
RustboroCity_EventScript_MayEncounter_12:
# 590 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 591 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint
# 592 "data/maps/RustboroCity/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq RustboroCity_EventScript_MayEncounter_17
	goto RustboroCity_EventScript_MayEncounter_1

RustboroCity_EventScript_MayEncounter_14:
# 586 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
	goto RustboroCity_EventScript_MayEncounter_12

RustboroCity_EventScript_MayEncounter_15:
# 587 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
	goto RustboroCity_EventScript_MayEncounter_12

RustboroCity_EventScript_MayEncounter_16:
# 588 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
	goto RustboroCity_EventScript_MayEncounter_12

RustboroCity_EventScript_MayEncounter_17:
# 593 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
	goto RustboroCity_EventScript_MayEncounter_1


RustboroCity_EventScript_BrendanEncounter::
# 620 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanEncounter_2
# 625 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanEncounter_3
# 644 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 645 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister
# 646 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 647 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 648 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 649 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan
# 650 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 651 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 652 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 653 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 654 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 655 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 656 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 657 "data/maps/RustboroCity/scripts.pory"
	goto RustboroBrendanBattle
RustboroCity_EventScript_BrendanEncounter_1:
# 659 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_BrendanEncounter_2:
# 621 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint
# 622 "data/maps/RustboroCity/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq RustboroCity_EventScript_BrendanEncounter_7
	goto RustboroCity_EventScript_BrendanEncounter_1

RustboroCity_EventScript_BrendanEncounter_3:
# 626 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 627 "data/maps/RustboroCity/scripts.pory"
RustboroBrendanBattle:
# 628 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_EventScript_BrendanEncounter_9
# 641 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon
	goto RustboroCity_EventScript_BrendanEncounter_1

RustboroCity_EventScript_BrendanEncounter_7:
# 623 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
	goto RustboroCity_EventScript_BrendanEncounter_1

RustboroCity_EventScript_BrendanEncounter_9:
# 629 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy
# 630 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 631 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BrendanEncounter_14
# 632 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BrendanEncounter_15
# 633 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BrendanEncounter_16
RustboroCity_EventScript_BrendanEncounter_12:
# 635 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 636 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint
# 637 "data/maps/RustboroCity/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq RustboroCity_EventScript_BrendanEncounter_17
	goto RustboroCity_EventScript_BrendanEncounter_1

RustboroCity_EventScript_BrendanEncounter_14:
# 631 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
	goto RustboroCity_EventScript_BrendanEncounter_12

RustboroCity_EventScript_BrendanEncounter_15:
# 632 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
	goto RustboroCity_EventScript_BrendanEncounter_12

RustboroCity_EventScript_BrendanEncounter_16:
# 633 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
	goto RustboroCity_EventScript_BrendanEncounter_12

RustboroCity_EventScript_BrendanEncounter_17:
# 638 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
	goto RustboroCity_EventScript_BrendanEncounter_1


RustboroCity_EventScript_Boy1::
# 664 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
	end


# 31 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall_Movement_0:
# 31 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 36 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall_Movement_1:
# 37 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 38 "data/maps/RustboroCity/scripts.pory"
	delay_16
	step_end

# 48 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall_Movement_2:
# 48 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
	step_end

# 82 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall_Movement_3:
# 82 "data/maps/RustboroCity/scripts.pory"
	walk_up
	step_end

# 253 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene_Movement_0:
# 254 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 254 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 255 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 255 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 255 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 255 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 255 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 256 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 256 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 256 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 256 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 256 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 256 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 256 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 256 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 256 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
	step_end

# 260 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene_Movement_1:
# 261 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 261 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 261 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 261 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 261 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 261 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 262 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 267 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene_Movement_2:
# 268 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 268 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 268 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 268 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 268 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 268 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 268 "data/maps/RustboroCity/scripts.pory"
	walk_up
	step_end

# 474 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger_Movement_0:
# 475 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 476 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 476 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 476 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 476 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 477 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 480 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger_Movement_1:
# 481 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 482 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 482 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 482 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 483 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 486 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger_Movement_2:
# 487 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 488 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 488 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 489 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 492 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger_Movement_3:
# 493 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 494 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 495 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 498 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger_Movement_4:
# 498 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 498 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 500 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger_Movement_5:
# 501 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 502 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 503 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 506 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger_Movement_6:
# 507 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 508 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 508 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 509 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 512 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger_Movement_7:
# 513 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 514 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 514 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 514 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 515 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

RustboroCity_Text_WeShortenItToDevon:
# 668 "data/maps/RustboroCity/scripts.pory"
	.string "The Devon Corporation…\n"
	.string "We all just shorten it to Devon.\p"
	.string "That company makes all sorts of\n"
	.string "convenient products.$"

RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 675 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
	.string "Come to think of it, yes, a shady-\n"
	.string "looking guy went around the corner.$"

RustboroCity_Text_HaveYouChallengedGym:
# 681 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the Pokémon Gym\n"
	.string "challenge?\p"
	.string "When you get that shiny Gym Badge\n"
	.string "in hand, I guess Trainers begin to\l"
	.string "realize what is required of them.$"

RustboroCity_Text_HeyThatsRustborosGymBadge:
# 689 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's Rustboro's Gym Badge!\p"
	.string "Out of all the Pokémon Gym Badges,\n"
	.string "Rustboro's is the coolest, I'd say.$"

RustboroCity_Text_YoureNewAroundHere:
# 695 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
	.string "You're a new face around these parts.\p"
	.string "Have you just transferred into the\n"
	.string "Pokémon Trainer's School?$"

RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 702 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the Gym Leader, but…\p"
	.string "It's not going to be easy winning with\n"
	.string "my Fire-type Pokémon…\p"
	.string "Fire-type Pokémon don't match up\n"
	.string "well against Rock-type Pokémon…$"

RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 710 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor Mr. Briney lives in\n"
	.string "a cottage by the sea.\p"
	.string "He goes for walks in the tunnel every\n"
	.string "so often.$"

RustboroCity_Text_MrBrineyLovesPeeko:
# 717 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor Mr. Briney lives in\n"
	.string "a cottage by the sea.\p"
	.string "He said he was going shopping in\n"
	.string "Slateport for his pet, Peeko.\p"
	.string "That old sea dog, he must really love\n"
	.string "that Peeko.$"

RustboroCity_Text_WowYouHavePokemon:
# 726 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have Pokémon with you, too.\p"
	.string "When I get bigger, I'm going to go\n"
	.string "places with Pokémon, too.$"

RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 732 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School!\p"
	.string "If I go to this school, will I be able\n"
	.string "to catch rare Pokémon easily?$"

RustboroCity_Text_PokemonCanChangeLookFromExp:
# 738 "data/maps/RustboroCity/scripts.pory"
	.string "If a Pokémon gains experience in\n"
	.string "battles, it can sometimes change in\l"
	.string "the way it looks.$"

RustboroCity_Text_PokemonChangeShape:
# 744 "data/maps/RustboroCity/scripts.pory"
	.string "A Pokémon changes shape?\n"
	.string "If one did that, I would be shocked!$"

RustboroCity_Text_TradePokemonGrowFast:
# 749 "data/maps/RustboroCity/scripts.pory"
	.string "A Pokémon you get in a trade from\n"
	.string "someone grows fast.\p"
	.string "But if you don't have certain Gym\n"
	.string "Badges, it may not obey you…$"

RustboroCity_Text_OutOfTheWay:
# 756 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
	.string "Out of the way!$"

RustboroCity_Text_WaitDontTakeMyGoods:
# 761 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
	.string "Don't take my Goods!$"

RustboroCity_Text_HelpMeIWasRobbed:
# 766 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
	.string "You're that fantastic Trainer who\n"
	.string "helped me in Petalburg Woods!\p"
	.string "Help me! I was robbed by Team Aqua!\n"
	.string "I have to get the Devon Goods back!\p"
	.string "If I don't…\n"
	.string "I'm going to be in serious trouble.$"

RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 776 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
	.string "off towards the tunnel over there.$"

RustboroCity_Text_YouGotItThankYou:
# 781 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
	.string "The Devon Goods?\p"
	.string "You did!\n"
	.string "You got them back!\p"
	.string "You really are a great Trainer!\p"
	.string "I know! As my thanks, I'll give you\n"
	.string "another Great Ball!$"

RustboroCity_Text_YoureLoadedWithItems:
# 791 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
	.string "I can't give you this Great Ball.$"

RustboroCity_Text_PleaseComeWithMe:
# 796 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
	.string "Please come with me!$"

RustboroCity_Text_MayHiLetsRegister:
# 801 "data/maps/RustboroCity/scripts.pory"
	.string "May: Oh, hi, {PLAYER}{KUN}!\p"
	.string "You had a Match Call feature put\n"
	.string "on your PokéNav!\p"
	.string "Let's register each other so we can\n"
	.string "contact one another anytime!\p"
	.string "… … … … … …$"

RustboroCity_Text_RegisteredMay:
# 810 "data/maps/RustboroCity/scripts.pory"
	.string "Registered May\n"
	.string "in the PokéNav.$"

RustboroCity_Text_MayPassedBrineyWantToBattle:
# 815 "data/maps/RustboroCity/scripts.pory"
	.string "May: Oh, by the way, I passed\n"
	.string "Mr. Briney in Petalburg Woods.\p"
	.string "I guess he's on his way home to his\n"
	.string "cottage by the sea.\p"
	.string "How's your Pokédex coming along,\n"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
	.string "So…\n"
	.string "How about a little battle?$"

RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 826 "data/maps/RustboroCity/scripts.pory"
	.string "May: Oh, what's the matter?\p"
	.string "Haven't you caught or raised your\n"
	.string "Pokémon very much?\p"
	.string "That's not very good for a Trainer!$"

RustboroCity_Text_MayWantToBattle:
# 833 "data/maps/RustboroCity/scripts.pory"
	.string "May: So, what do you think?\n"
	.string "How about a little battle here?$"

RustboroCity_Text_MayImNotGoingToLose:
# 838 "data/maps/RustboroCity/scripts.pory"
	.string "May: You just became a Trainer,\n"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"

RustboroCity_Text_MayDefeat:
# 843 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
	.string "You're better than I expected!$"

RustboroCity_Text_MayMrBrineyHint:
# 848 "data/maps/RustboroCity/scripts.pory"
	.string "May: Oh, by the way, Mr. Briney, who\n"
	.string "I just passed…\p"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
	.string "might not know this, but Mr. Briney\l"
	.string "was once a revered seafarer.$"

RustboroCity_Text_BrendanHiLetsRegister:
# 856 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: Oh, hey, {PLAYER}!\p"
	.string "You had a Match Call feature put\n"
	.string "on your PokéNav! Cool!\p"
	.string "Let's register each other so we can\n"
	.string "get in touch anytime!\p"
	.string "… … … … … …$"

RustboroCity_Text_RegisteredBrendan:
# 865 "data/maps/RustboroCity/scripts.pory"
	.string "Registered Brendan\n"
	.string "in the PokéNav.$"

RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 870 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: By the way, {PLAYER}, I walked\n"
	.string "by Mr. Briney in Petalburg Woods.\p"
	.string "I bet he was on his way home to his\n"
	.string "cottage by the sea.\p"
	.string "{PLAYER}, how's your Pokédex?\n"
	.string "Have you filled in any pages yet?\p"
	.string "Mine rules.\p"
	.string "Want to have a battle to test how\n"
	.string "far you've progressed?$"

RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 882 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: What's the matter? Don't have\n"
	.string "any confidence in your Pokémon?$"

RustboroCity_Text_BrendanWantToBattle:
# 887 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: What's up?\n"
	.string "Want to have a battle with me?$"

RustboroCity_Text_BrendanIWontGoEasy:
# 892 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: I know you just became\n"
	.string "a Trainer, but I won't go easy!$"

RustboroCity_Text_BrendanDefeat:
# 897 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
	.string "You're pretty good.$"

RustboroCity_Text_BrendanMrBrineyHint:
# 902 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: By the way, you know\n"
	.string "Mr. Briney? The guy I just passed?\p"
	.string "I bet you didn't know this, since you\n"
	.string "just moved here, {PLAYER}, but\l"
	.string "Mr. Briney was once a great sailor.$"

RustboroCity_Text_TunnelNearingCompletion:
# 910 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
	.string "completion!”\p"
	.string "…Is what it says on the sign, but\n"
	.string "there's also a big “X” splashed\l"
	.string "across it in red paint…$"

ustboroCity_Text_DevonCorpSign:
# 918 "data/maps/RustboroCity/scripts.pory"
	.string "Devon Corporation\p"
	.string "“For all your living needs, we make\n"
	.string "it all.”$"

RustboroCity_Text_GymSign:
# 924 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro City Pokémon Gym\n"
	.string "Leader: Roxanne\p"
	.string "“The Rock-loving honors student!”$"

RustboroCity_Text_DevonCorpBranchOfficeSign:
# 930 "data/maps/RustboroCity/scripts.pory"
	.string "Devon Corp. Branch Office\p"
	.string "“Access limited to Devon employees\n"
	.string "and authorized personnel.”$"

RustboroCity_Text_CitySign:
# 936 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro City\p"
	.string "“The city probing the integration of\n"
	.string "nature and science.”$"

RustboroCity_Text_TrainersSchoolSign:
# 942 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School\p"
	.string "“We'll teach you anything about\n"
	.string "Pokémon!”$"

RustboroCity_Text_CuttersHouse:
# 948 "data/maps/RustboroCity/scripts.pory"
	.string "Cutter's House$"

RustboroCity_Text_DevelopedNewPokenavFeature:
# 952 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
	.string "for the PokéNav…\p"
	.string "And it turned out great!\p"
	.string "{PLAYER}, may I see that PokéNav?\n"
	.string "The one our President gave you?$"

RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 960 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
	.string "I added a new feature named\n"
	.string "Match Call to your PokéNav.\p"
	.string "Using the Match Call feature,\n"
	.string "you can chat with people who have\l"
	.string "been registered in your PokéNav.\p"
	.string "{PLAYER}, our President Stone should\n"
	.string "be registered in your PokéNav.\p"
	.string "Test it out.\n"
	.string "Please give our President a call.$"

RustboroCity_Text_PleaseSelectPokenav:
# 973 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the PokéNav.$"

RustboroCity_Text_IdBetterGetBackToWork:
# 977 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
	.string "Please take care, {PLAYER}!$"

RustboroCity_Text_YouCanHave2On2Battle:
# 982 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
	.string "You can have a 2-on-2 battle even\n"
	.string "if you're not with another Trainer.\p"
	.string "If you catch the eyes of two Trainers\n"
	.string "when you have two or more Pokémon,\l"
	.string "they'll both challenge you.\p"
	.string "Don't you think it'd be cool if you\n"
	.string "could beat two Trainers by yourself?$"
