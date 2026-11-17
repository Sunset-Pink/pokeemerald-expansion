Route104_MapScripts::
# 5 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_OnTransition
# 2 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route104_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_StartSailToDewford
	.2byte 0


Route104_EventScript_StartSailToDewford::
# 9 "data/maps/Route104/scripts.pory"
	lockall
# 10 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_SailToDewford
# 11 "data/maps/Route104/scripts.pory"
	release
	return


Route104_OnTransition:
# 16 "data/maps/Route104/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 17 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_TrySetRivalPos
# 18 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_ShowOrHideWhiteHerbFlorist
	end


Route104_EventScript_ShowOrHideWhiteHerbFlorist::
# 23 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_EventScript_ShowOrHideWhiteHerbFlorist_2
# 23 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_EventScript_ShowOrHideWhiteHerbFlorist_2
# 26 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
Route104_EventScript_ShowOrHideWhiteHerbFlorist_1:
	return

Route104_EventScript_ShowOrHideWhiteHerbFlorist_2:
# 24 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
	goto Route104_EventScript_ShowOrHideWhiteHerbFlorist_1


Route104_EventScript_TrySetRivalPos::
# 32 "data/maps/Route104/scripts.pory"
	compare VAR_BOARD_BRINEY_BOAT_STATE, 1
	goto_if_ge Route104_EventScript_TrySetRivalPos_2
# 32 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, Route104_EventScript_TrySetRivalPos_2
# 32 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_TrySetRivalPos_2
# 35 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_ROUTE104_RIVAL, 17, 52
	return

Route104_EventScript_TrySetRivalPos_2:
	return


Route104_EventScript_Rival::
# 41 "data/maps/Route104/scripts.pory"
	lockall
# 42 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 43 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_FacePlayer
# 44 "data/maps/Route104/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route104_EventScript_Rival_2
# 48 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_BrendanEncounter
Route104_EventScript_Rival_1:
# 50 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_Rival_2:
# 46 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_MayEncounter
	goto Route104_EventScript_Rival_1


Route104_EventScript_RivalTrigger::
# 55 "data/maps/Route104/scripts.pory"
	lockall
# 56 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 57 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 58 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 59 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 60 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route104/scripts.pory"
	delay 10
# 62 "data/maps/Route104/scripts.pory"
	addobject LOCALID_ROUTE104_RIVAL
# 63 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL
# 64 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_EventScript_RivalTrigger_Movement_0
# 69 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_EventScript_RivalTrigger_Movement_1
# 71 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route104/scripts.pory"
	delay 20
# 73 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 0
	checkplayergender
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route104_EventScript_RivalTrigger_2
# 77 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
Route104_EventScript_RivalTrigger_1:
# 79 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 80 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_ExclamationMark
# 81 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_Delay48
# 83 "data/maps/Route104/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route104_EventScript_RivalTrigger_6
# 87 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_BrendanEncounter
Route104_EventScript_RivalTrigger_5:
# 89 "data/maps/Route104/scripts.pory"
	releaseall
	return

Route104_EventScript_RivalTrigger_2:
# 75 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	goto Route104_EventScript_RivalTrigger_1

Route104_EventScript_RivalTrigger_6:
# 85 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_MayEncounter
	goto Route104_EventScript_RivalTrigger_5


Route104_EventScript_MayEncounter::
# 94 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_MayEncounter_2
# 97 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_MayEncounter_3
# 105 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 106 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayWeShouldRegister
# 107 "data/maps/Route104/scripts.pory"
	closemessage
# 108 "data/maps/Route104/scripts.pory"
	delay 30
# 109 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 110 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredMay
# 111 "data/maps/Route104/scripts.pory"
	waitfanfare
# 112 "data/maps/Route104/scripts.pory"
	closemessage
# 113 "data/maps/Route104/scripts.pory"
	delay 3
# 114 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 115 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerFaceRival
# 116 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_EventScript_MayEncounter_Movement_0
# 117 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHowsYourPokedex
# 118 "data/maps/Route104/scripts.pory"
	closemessage
# 119 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 120 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalApproachPlayer
# 121 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 122 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE104_RIVAL
# 123 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_YESNO
# 124 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route104_EventScript_MayEncounter_10
# 127 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon
Route104_EventScript_MayEncounter_1:
# 130 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 131 "data/maps/Route104/scripts.pory"
	releaseall
	return

Route104_EventScript_MayEncounter_2:
# 95 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle
	goto Route104_EventScript_MayEncounter_1

Route104_EventScript_MayEncounter_3:
# 98 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_YESNO
# 99 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route104_EventScript_MayEncounter_7
# 102 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon
	goto Route104_EventScript_MayEncounter_1

Route104_EventScript_MayEncounter_7:
# 100 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_BattleMay
	goto Route104_EventScript_MayEncounter_1

Route104_EventScript_MayEncounter_10:
# 125 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_BattleMay
	goto Route104_EventScript_MayEncounter_1


# 135 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalApproachPlayer:
# 136 "data/maps/Route104/scripts.pory"
	walk_down
# 137 "data/maps/Route104/scripts.pory"
	face_right
	step_end

# 140 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerFaceRival:
# 141 "data/maps/Route104/scripts.pory"
	delay_4
# 142 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
	step_end

Route104_EventScript_MayAskToBattle::
# 147 "data/maps/Route104/scripts.pory"
	releaseall
	end


Route104_EventScript_BattleMay::
# 152 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayIntro
# 153 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 154 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleMay_3
# 155 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleMay_4
# 156 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleMay_5
Route104_EventScript_BattleMay_1:
# 158 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 159 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle
	return

Route104_EventScript_BattleMay_3:
# 154 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
	goto Route104_EventScript_BattleMay_1

Route104_EventScript_BattleMay_4:
# 155 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, Route104_Text_MayDefeat
	goto Route104_EventScript_BattleMay_1

Route104_EventScript_BattleMay_5:
# 156 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, Route104_Text_MayDefeat
	goto Route104_EventScript_BattleMay_1


Route104_EventScript_RestoreMusic::
# 164 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 165 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
	return


Route104_EventScript_BrendanEncounter::
# 170 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_BrendanEncounter_2
# 173 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_BrendanEncounter_3
# 181 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 182 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanWeShouldRegister
# 183 "data/maps/Route104/scripts.pory"
	closemessage
# 184 "data/maps/Route104/scripts.pory"
	delay 30
# 185 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 186 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredBrendan
# 187 "data/maps/Route104/scripts.pory"
	waitfanfare
# 188 "data/maps/Route104/scripts.pory"
	closemessage
# 189 "data/maps/Route104/scripts.pory"
	delay 3
# 190 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 191 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerFaceRival
# 192 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_EventScript_MayEncounter_Movement_0
# 193 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanHowsYourPokedex
# 194 "data/maps/Route104/scripts.pory"
	closemessage
# 195 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 196 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalApproachPlayer
# 197 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 198 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE104_RIVAL
# 199 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanDoingGreatLetsBattle, MSGBOX_YESNO
# 200 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route104_EventScript_BrendanEncounter_10
# 203 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence
Route104_EventScript_BrendanEncounter_1:
# 206 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 207 "data/maps/Route104/scripts.pory"
	releaseall
	return

Route104_EventScript_BrendanEncounter_2:
# 171 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle
	goto Route104_EventScript_BrendanEncounter_1

Route104_EventScript_BrendanEncounter_3:
# 174 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanLetsBattle, MSGBOX_YESNO
# 175 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route104_EventScript_BrendanEncounter_7
# 178 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence
	goto Route104_EventScript_BrendanEncounter_1

Route104_EventScript_BrendanEncounter_7:
# 176 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_BattleBrendan
	goto Route104_EventScript_BrendanEncounter_1

Route104_EventScript_BrendanEncounter_10:
# 201 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_BattleBrendan
	goto Route104_EventScript_BrendanEncounter_1


Route104_EventScript_BattleBrendan::
# 212 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanIntro
# 213 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 214 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleBrendan_3
# 215 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleBrendan_4
# 216 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleBrendan_5
Route104_EventScript_BattleBrendan_1:
# 218 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 219 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanPostBattle
	return

Route104_EventScript_BattleBrendan_3:
# 214 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
	goto Route104_EventScript_BattleBrendan_1

Route104_EventScript_BattleBrendan_4:
# 215 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
	goto Route104_EventScript_BattleBrendan_1

Route104_EventScript_BattleBrendan_5:
# 216 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
	goto Route104_EventScript_BattleBrendan_1


Route104_EventScript_ExpertF::
# 224 "data/maps/Route104/scripts.pory"
	lock
# 225 "data/maps/Route104/scripts.pory"
	faceplayer
# 226 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ExpertF_2
Route104_EventScript_ExpertF_1:
# 234 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries
# 235 "data/maps/Route104/scripts.pory"
	release
	end

Route104_EventScript_ExpertF_2:
# 227 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis
# 228 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 229 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route104_EventScript_ExpertF_5
Route104_EventScript_ExpertF_4:
# 232 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
	goto Route104_EventScript_ExpertF_1

Route104_EventScript_ExpertF_5:
# 230 "data/maps/Route104/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route104_EventScript_ExpertF_4


Route104_EventScript_WhiteHerbFlorist::
# 240 "data/maps/Route104/scripts.pory"
	lock
# 241 "data/maps/Route104/scripts.pory"
	faceplayer
# 242 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_WhiteHerbFlorist_2
# 250 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings
Route104_EventScript_WhiteHerbFlorist_1:
# 252 "data/maps/Route104/scripts.pory"
	release
	end

Route104_EventScript_WhiteHerbFlorist_2:
# 243 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt
# 244 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 245 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route104_EventScript_WhiteHerbFlorist_6
Route104_EventScript_WhiteHerbFlorist_5:
# 248 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
	goto Route104_EventScript_WhiteHerbFlorist_1

Route104_EventScript_WhiteHerbFlorist_6:
# 246 "data/maps/Route104/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route104_EventScript_WhiteHerbFlorist_5


Route104_EventScript_Girl1::
# 257 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
	end


Route104_EventScript_BugCatcher::
# 262 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
	end


Route104_EventScript_BrineysCottageSign::
# 267 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
	end


Route104_EventScript_RouteSignPetalburg::
# 272 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
	end


Route104_EventScript_RouteSignRustboro::
# 277 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
	end


Route104_EventScript_FlowerShopSign::
# 282 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
	end


Route104_EventScript_TrainerTipsDoubleBattles::
# 287 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
	end


Route104_EventScript_Boy1::
# 292 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
	end


Route104_EventScript_Woman::
# 297 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
	end


Route104_EventScript_Boy2::
# 302 "data/maps/Route104/scripts.pory"
	lock
# 303 "data/maps/Route104/scripts.pory"
	faceplayer
# 304 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_Boy2_2
# 312 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse
Route104_EventScript_Boy2_1:
# 314 "data/maps/Route104/scripts.pory"
	release
	end

Route104_EventScript_Boy2_2:
# 305 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis
# 306 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 307 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route104_EventScript_Boy2_6
Route104_EventScript_Boy2_5:
# 310 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
	goto Route104_EventScript_Boy2_1

Route104_EventScript_Boy2_6:
# 308 "data/maps/Route104/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route104_EventScript_Boy2_5


Route104_EventScript_Girl2::
# 319 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
	end


Route104_EventScript_SailToDewford::
# 324 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE104_BRINEY, MAP_ROUTE104, 0
# 325 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_ROUTE104, 0
# 326 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BRINEY, Route104_EventScript_SailToDewford_Movement_0
# 329 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 330 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_ROUTE104_BRINEY
# 331 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_EventScript_SailToDewford_Movement_1
# 335 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 336 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_ROUTE104
# 337 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 338 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewford_2
# 341 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_SailToDewfordDadCalls
Route104_EventScript_SailToDewford_1:
# 343 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_ArriveInDewford
	return

Route104_EventScript_SailToDewford_2:
# 339 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_SailToDewfordNoCall
	goto Route104_EventScript_SailToDewford_1


Route104_EventScript_SailToDewfordNoCall::
# 348 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewford
# 349 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewford
# 350 "data/maps/Route104/scripts.pory"
	waitmovement 0
	return


Route104_EventScript_SailToDewfordDadCalls::
# 355 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewfordBeforeDadCalls
# 356 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 357 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 358 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 359 "data/maps/Route104/scripts.pory"
	waitmessage
# 360 "data/maps/Route104/scripts.pory"
	delay 30
# 361 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 362 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav
# 363 "data/maps/Route104/scripts.pory"
	waitfanfare
# 364 "data/maps/Route104/scripts.pory"
	closemessage
# 365 "data/maps/Route104/scripts.pory"
	delay 30
# 366 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 367 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 368 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 369 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_ROUTE104_BOAT, MAP_ROUTE104
# 370 "data/maps/Route104/scripts.pory"
	waitmovement 0
	return


Route104_EventScript_ArriveInDewford::
# 375 "data/maps/Route104/scripts.pory"
	delay 50
# 376 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_EventScript_RivalTrigger_Movement_1
# 377 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 378 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 379 "data/maps/Route104/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 380 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_EventScript_ArriveInDewford_Movement_0
# 385 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 386 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_DEWFORD_BRINEY, 12, 8
# 387 "data/maps/Route104/scripts.pory"
	addobject LOCALID_DEWFORD_BRINEY
# 388 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 389 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 390 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, Route104_EventScript_ArriveInDewford_Movement_1
# 394 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 395 "data/maps/Route104/scripts.pory"
	addobject LOCALID_DEWFORD_BOAT
# 396 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 397 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 398 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 399 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_ROUTE104_BOAT, MAP_ROUTE104
# 400 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 401 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_ROUTE104
# 402 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN
# 403 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_DEWFORD_BRINEY
# 404 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 405 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_ArriveInDewford_2
# 408 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford
Route104_EventScript_ArriveInDewford_1:
# 410 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_ArriveInDewford_2:
# 406 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter
	goto Route104_EventScript_ArriveInDewford_1


# 414 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 415 "data/maps/Route104/scripts.pory"
	walk_down
# 415 "data/maps/Route104/scripts.pory"
	walk_down
# 415 "data/maps/Route104/scripts.pory"
	walk_down
# 415 "data/maps/Route104/scripts.pory"
	walk_down
# 416 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 416 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 416 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 416 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 417 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 417 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 417 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 417 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 417 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 417 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 417 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 417 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 417 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 417 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 417 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 417 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 418 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 418 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 418 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 418 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 419 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 419 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 420 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 420 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 420 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 420 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 420 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 420 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 421 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 421 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 422 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 422 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 422 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 422 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 423 "data/maps/Route104/scripts.pory"
	walk_faster_down
	step_end

# 426 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 428 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 428 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 428 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 428 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 429 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 429 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 429 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 429 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 431 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 431 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 431 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 431 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 432 "data/maps/Route104/scripts.pory"
	walk_right
# 432 "data/maps/Route104/scripts.pory"
	walk_right
# 433 "data/maps/Route104/scripts.pory"
	walk_down
# 433 "data/maps/Route104/scripts.pory"
	walk_down
# 434 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 434 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 434 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 434 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 434 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 434 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 434 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 434 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 434 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 434 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 434 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 434 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 434 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 434 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 434 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 435 "data/maps/Route104/scripts.pory"
	walk_down
# 435 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 438 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 439 "data/maps/Route104/scripts.pory"
	walk_down
# 439 "data/maps/Route104/scripts.pory"
	walk_down
# 439 "data/maps/Route104/scripts.pory"
	walk_down
# 439 "data/maps/Route104/scripts.pory"
	walk_down
# 440 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 440 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 440 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 440 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 441 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 441 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 441 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 441 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 441 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 441 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 441 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 441 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 441 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 441 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 441 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 441 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 442 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 442 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 442 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 442 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 443 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 443 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 444 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 444 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 444 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 444 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 444 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 444 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 445 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 445 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 446 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 446 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 446 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 446 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 448 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 448 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 448 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 448 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 449 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 449 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 449 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 449 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 451 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 451 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 451 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 451 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 452 "data/maps/Route104/scripts.pory"
	walk_right
# 452 "data/maps/Route104/scripts.pory"
	walk_right
# 453 "data/maps/Route104/scripts.pory"
	walk_down
# 453 "data/maps/Route104/scripts.pory"
	walk_down
# 454 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 454 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 454 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 454 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 454 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 454 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 454 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 454 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 454 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 454 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 454 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 454 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 454 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 454 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 454 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 455 "data/maps/Route104/scripts.pory"
	walk_down
# 455 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

Route104_EventScript_Ivan::
# 459 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 460 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
	end


Route104_EventScript_Billy::
# 465 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 466 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
	end


Route104_EventScript_Haley::
# 471 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
# 472 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 473 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route104_EventScript_Haley_2
# 477 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 478 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 479 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route104_EventScript_Haley_5
# 482 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle
Route104_EventScript_Haley_1:
# 485 "data/maps/Route104/scripts.pory"
	release
	end

Route104_EventScript_Haley_2:
# 474 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 475 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
	goto Route104_EventScript_Haley_1

Route104_EventScript_Haley_5:
# 480 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_TryRegisterHaley
	goto Route104_EventScript_Haley_1


Route104_EventScript_TryRegisterHaleyAfterBattle::
# 490 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 491 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 492 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_TryRegisterHaleyAfterBattle_2
Route104_EventScript_TryRegisterHaleyAfterBattle_1:
# 496 "data/maps/Route104/scripts.pory"
	return
	end

Route104_EventScript_TryRegisterHaleyAfterBattle_2:
# 493 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2
# 494 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
	goto Route104_EventScript_TryRegisterHaleyAfterBattle_1


Route104_EventScript_TryRegisterHaley::
# 501 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_TryRegisterHaley_2
# 505 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle
Route104_EventScript_TryRegisterHaley_1:
	return

Route104_EventScript_TryRegisterHaley_2:
# 502 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1
# 503 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
	goto Route104_EventScript_TryRegisterHaley_1


Route104_EventScript_Winston::
# 511 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
# 517 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 518 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route104_EventScript_Winston_2
# 522 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 523 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 524 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route104_EventScript_Winston_7
Route104_EventScript_Winston_6:
# 528 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle
Route104_EventScript_Winston_1:
# 531 "data/maps/Route104/scripts.pory"
	release
	end

Route104_EventScript_Winston_2:
# 519 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 520 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch
	goto Route104_EventScript_Winston_1

Route104_EventScript_Winston_5:
# 525 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1
# 526 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
	goto Route104_EventScript_Winston_1

Route104_EventScript_Winston_7:
# 524 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_Winston_5
	goto Route104_EventScript_Winston_6


Route104_EventScript_TryRegisterWinstonAfterBattle::
# 536 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 537 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 538 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_TryRegisterWinstonAfterBattle_2
Route104_EventScript_TryRegisterWinstonAfterBattle_1:
	return

Route104_EventScript_TryRegisterWinstonAfterBattle_2:
# 539 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2
# 540 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
	goto Route104_EventScript_TryRegisterWinstonAfterBattle_1


Route104_EventScript_Cindy::
# 546 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
# 552 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 553 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route104_EventScript_Cindy_2
# 557 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 558 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 559 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route104_EventScript_Cindy_7
Route104_EventScript_Cindy_6:
# 563 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle
Route104_EventScript_Cindy_1:
# 566 "data/maps/Route104/scripts.pory"
	release
	return

Route104_EventScript_Cindy_2:
# 554 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 555 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
	goto Route104_EventScript_Cindy_1

Route104_EventScript_Cindy_5:
# 560 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1
# 561 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
	goto Route104_EventScript_Cindy_1

Route104_EventScript_Cindy_7:
# 559 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_Cindy_5
	goto Route104_EventScript_Cindy_6


Route104_EventScript_TryRegisterCindyAfterBattle::
# 571 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 572 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 573 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_TryRegisterCindyAfterBattle_2
Route104_EventScript_TryRegisterCindyAfterBattle_1:
	return

Route104_EventScript_TryRegisterCindyAfterBattle_2:
# 574 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2
# 575 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
	goto Route104_EventScript_TryRegisterCindyAfterBattle_1


Route104_EventScript_Gina::
# 581 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 582 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 583 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle
# 584 "data/maps/Route104/scripts.pory"
	release
	return


Route104_EventScript_Mia::
# 589 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 590 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 591 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle
# 592 "data/maps/Route104/scripts.pory"
	release
	return


Route104_EventScript_Darian::
# 597 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 598 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
	end


# 64 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger_Movement_0:
# 65 "data/maps/Route104/scripts.pory"
	lock_facing_direction
# 66 "data/maps/Route104/scripts.pory"
	walk_down
# 67 "data/maps/Route104/scripts.pory"
	unlock_facing_direction
	step_end

# 70 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger_Movement_1:
# 70 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 116 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayEncounter_Movement_0:
# 116 "data/maps/Route104/scripts.pory"
	walk_slow_left
	step_end

# 326 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford_Movement_0:
# 327 "data/maps/Route104/scripts.pory"
	walk_down
# 327 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 331 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford_Movement_1:
# 332 "data/maps/Route104/scripts.pory"
	walk_left
# 333 "data/maps/Route104/scripts.pory"
	walk_down
# 333 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 380 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford_Movement_0:
# 381 "data/maps/Route104/scripts.pory"
	walk_down
# 382 "data/maps/Route104/scripts.pory"
	walk_left
# 383 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
	step_end

# 390 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford_Movement_1:
# 391 "data/maps/Route104/scripts.pory"
	walk_down
# 392 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
	step_end

Route104_Text_BrineyLivesInSeasideCottage:
# 602 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
	.string "Mr. Briney lives.\p"
	.string "He was once a mighty sailor who never\n"
	.string "feared the sea, however stormy.$"

Route104_Text_WhatsItLikeAtBottomOfSea:
# 609 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
	.string "I wonder what it's like at the bottom\n"
	.string "of the sea?$"

Route104_Text_ThrowBallAtWeakenedPokemon:
# 615 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a Poké Ball,\n"
	.string "weaken the wild Pokémon first.\p"
	.string "It will be easier to catch if it's been\n"
	.string "poisoned, burned, or lulled to sleep.$"

Route104_Text_OnlyThrowBallAtWildPokemon:
# 622 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
	.string "someone else's Pokémon.\p"
	.string "You should throw Poké BALLS only at\n"
	.string "wild Pokémon.$"

Route104_Text_ImNotATrainer:
# 629 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a Trainer.\p"
	.string "But that's right, if Trainers lock eyes,\n"
	.string "it's a challenge to battle.\p"
	.string "If you don't want to battle, stay out\n"
	.string "of their sight.$"

Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 637 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
	.string "then spitting them out fast!\p"
	.string "You can have this, so you try it out!\p"
	.string "Use it on a Pokémon, and it will learn\n"
	.string "a move for firing seeds rapidly.$"

Route104_Text_TMsAreOneTimeUse:
# 645 "data/maps/Route104/scripts.pory"
	.string "A word of advice!\p"
	.string "A TM, Technical Machine, is good only\n"
	.string "for one-time use.\p"
	.string "Once you use it, it's gone.\n"
	.string "Think twice before using it!$"

Route104_Text_DontNeedThisTakeIt:
# 653 "data/maps/Route104/scripts.pory"
	.string "This Flower Shop started selling\n"
	.string "saplings recently.\p"
	.string "It made me so happy, I went overboard\n"
	.string "shopping.\p"
	.string "I don't need this White Herb anymore.\n"
	.string "Would you take it, please?$"

Route104_Text_FlowerShopSellingSaplings:
# 662 "data/maps/Route104/scripts.pory"
	.string "This Flower Shop started selling\n"
	.string "saplings recently.\p"
	.string "It made me so happy, I went overboard\n"
	.string "shopping. Where should I put them?$"

Route104_Text_MrBrineysCottage:
# 669 "data/maps/Route104/scripts.pory"
	.string "Mr. Briney's Cottage$"

Route104_Text_RouteSignPetalburg:
# 673 "data/maps/Route104/scripts.pory"
	.string "Route 1O4\n"
	.string "{RIGHT_ARROW} Petalburg City$"

Route104_Text_RouteSignRustboro:
# 678 "data/maps/Route104/scripts.pory"
	.string "Route 1O4\n"
	.string "{UP_ARROW} Rustboro City$"

Route104_Text_PrettyPetalFlowShop:
# 683 "data/maps/Route104/scripts.pory"
	.string "Pretty Petal Flower Shop$"

Route104_Text_TrainerTipsDoubleBattles:
# 687 "data/maps/Route104/scripts.pory"
	.string "Trainer Tips\p"
	.string "In the Hoenn region there are pairs\n"
	.string "of Trainers who challenge others\l"
	.string "for 2-on-2 Pokémon battles called\l"
	.string "Double Battles.\p"
	.string "In a Double Battle, the Trainer must\n"
	.string "send out two Pokémon, the one at the\l"
	.string "left of the list and the top one.\l"
	.string "Watch how Pokémon are lined up.$"

Route104_Text_MayWeShouldRegister:
# 699 "data/maps/Route104/scripts.pory"
	.string "May: Oh, hi, {PLAYER}{KUN}!\p"
	.string "Devon upgraded your PokéNav with\n"
	.string "the Match Call system, huh?\p"
	.string "We should register each other so we\n"
	.string "can get in contact anytime.$"

Route104_Text_RegisteredMay:
# 707 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered May\n"
	.string "in the PokéNav.$"

Route104_Text_MayHowsYourPokedex:
# 712 "data/maps/Route104/scripts.pory"
	.string "May: Oh, by the way, {PLAYER}{KUN},\n"
	.string "how's your Pokédex coming along?$"

Route104_Text_MayMinesDecentLetsBattle:
# 717 "data/maps/Route104/scripts.pory"
	.string "Mine's looking pretty decent.\n"
	.string "So…\l"
	.string "How about a little battle?$"

Route104_Text_MayHaventRaisedPokemon:
# 723 "data/maps/Route104/scripts.pory"
	.string "May: Oh, what's the matter?\p"
	.string "Haven't you caught or raised your\n"
	.string "Pokémon very much?\p"
	.string "That's not very good for a Trainer!$"

Route104_Text_MayLetsBattle:
# 730 "data/maps/Route104/scripts.pory"
	.string "May: So, what do you think?\n"
	.string "How about a little battle here?$"

Route104_Text_MayIntro:
# 735 "data/maps/Route104/scripts.pory"
	.string "May: You just became a Trainer,\n"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"

Route104_Text_MayDefeat:
# 740 "data/maps/Route104/scripts.pory"
	.string "Yikes!\n"
	.string "You're better than I expected!$"

Route104_Text_MayPostBattle:
# 745 "data/maps/Route104/scripts.pory"
	.string "May: I can tell you've gotten pretty\n"
	.string "good with the way you handle Pokémon.\p"
	.string "But instead of only making them\n"
	.string "battle, you should be like Mr. Briney.\p"
	.string "It's important to become friends with\n"
	.string "Pokémon, too.$"

Route104_Text_BrendanWeShouldRegister:
# 754 "data/maps/Route104/scripts.pory"
	.string "Brendan: Oh, hey, {PLAYER}!\p"
	.string "Cool, you had Devon install the Match\n"
	.string "Call system on your PokéNav!\p"
	.string "Let's register each other in our\n"
	.string "PokéNavs so we can keep in touch.$"

Route104_Text_RegisteredBrendan:
# 762 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered Brendan\n"
	.string "in the PokéNav.$"

Route104_Text_BrendanHowsYourPokedex:
# 767 "data/maps/Route104/scripts.pory"
	.string "Brendan: {PLAYER}, how's your Pokédex?\n"
	.string "Have you filled in any pages yet?$"

Route104_Text_BrendanDoingGreatLetsBattle:
# 772 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
	.string "Want to check out how good I am with\n"
	.string "a battle?$"

Route104_Text_BrendanNoConfidence:
# 778 "data/maps/Route104/scripts.pory"
	.string "Brendan: What's the matter? Don't have\n"
	.string "any confidence in your Pokémon?$"

Route104_Text_BrendanLetsBattle:
# 783 "data/maps/Route104/scripts.pory"
	.string "Brendan: What's up?\n"
	.string "Want to have a battle with me?$"

Route104_Text_BrendanIntro:
# 788 "data/maps/Route104/scripts.pory"
	.string "Brendan: I know you just became\n"
	.string "a Trainer, but I won't go easy!$"

Route104_Text_BrendanDefeat:
# 793 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
	.string "You're pretty good.$"

Route104_Text_BrendanPostBattle:
# 798 "data/maps/Route104/scripts.pory"
	.string "Brendan: You've gotten pretty decent\n"
	.string "at handling Pokémon.\p"
	.string "But, you know, you shouldn't just be\n"
	.string "making Pokémon battle.\p"
	.string "Like Mr. Briney, it's important to\n"
	.string "become friends with your Pokémon.$"
