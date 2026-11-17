Route104_MrBrineysHouse_MapScripts::
# 2 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_MrBrineysHouse_OnTransition
	.byte 0


Route104_MrBrineysHouse_OnTransition:
# 6 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_LANDMARK_MR_BRINEY_HOUSE
# 7 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	compare VAR_BRINEY_HOUSE_STATE, 1
	goto_if_eq Route104_MrBrineysHouse_OnTransition_2
Route104_MrBrineysHouse_OnTransition_1:
# 10 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, Route104_MrBrineysHouse_OnTransition_4
	return

Route104_MrBrineysHouse_OnTransition_2:
# 8 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call Route104_MrBrineysHouse_EventScript_SetBrineyPeekoPos
	goto Route104_MrBrineysHouse_OnTransition_1

Route104_MrBrineysHouse_OnTransition_4:
# 11 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
	return


Route104_MrBrineysHouse_EventScript_SetBrineyPeekoPos::
# 16 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectxyperm LOCALID_BRINEYS_HOUSE_BRINEY, 9, 3
# 17 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectmovementtype LOCALID_BRINEYS_HOUSE_BRINEY, MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_UP_RIGHT
# 18 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectxyperm LOCALID_BRINEYS_HOUSE_PEEKO, 9, 6
# 19 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectmovementtype LOCALID_BRINEYS_HOUSE_PEEKO, MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_RIGHT_DOWN
	return


Route104_MrBrineysHouse_EventScript_Briney::
# 24 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	lock
# 25 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	faceplayer
# 26 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_unset FLAG_MR_BRINEY_SAILING_INTRO, Route104_MrBrineysHouse_EventScript_Briney_2
# 30 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_MrBrineysHouse_EventScript_Briney_3
# 32 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route104_MrBrineysHouse_EventScript_Briney_4
# 35 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_WhereAreWeBound, MSGBOX_YESNO
Route104_MrBrineysHouse_EventScript_Briney_1:
# 37 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route104_MrBrineysHouse_EventScript_Briney_10
# 40 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_set FLAG_DELIVERED_DEVON_GOODS, Route104_MrBrineysHouse_EventScript_Briney_15
Route104_MrBrineysHouse_EventScript_Briney_14:
# 43 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_DeclineDeliverySail
Route104_MrBrineysHouse_EventScript_Briney_9:
# 46 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
	return

Route104_MrBrineysHouse_EventScript_Briney_2:
# 27 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_MR_BRINEY_SAILING_INTRO
# 28 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_WaitUpPeeko
# 29 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford, MSGBOX_YESNO
	goto Route104_MrBrineysHouse_EventScript_Briney_1

Route104_MrBrineysHouse_EventScript_Briney_3:
# 31 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford, MSGBOX_YESNO
	goto Route104_MrBrineysHouse_EventScript_Briney_1

Route104_MrBrineysHouse_EventScript_Briney_4:
# 33 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford, MSGBOX_YESNO
	goto Route104_MrBrineysHouse_EventScript_Briney_1

Route104_MrBrineysHouse_EventScript_Briney_10:
# 38 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call Route104_MrBrineysHouse_EventScript_SailToDewford
	goto Route104_MrBrineysHouse_EventScript_Briney_9

Route104_MrBrineysHouse_EventScript_Briney_13:
# 41 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail
	goto Route104_MrBrineysHouse_EventScript_Briney_9

Route104_MrBrineysHouse_EventScript_Briney_15:
# 40 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_MrBrineysHouse_EventScript_Briney_13
	goto Route104_MrBrineysHouse_EventScript_Briney_14


Route104_MrBrineysHouse_EventScript_SailToDewford::
# 51 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_SetSailForDewford
# 52 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 53 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 1
# 54 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY
# 55 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 56 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 57 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 58 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 59 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 60 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_RIVAL
# 61 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	warp MAP_ROUTE104, 13, 51
# 62 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitstate
# 63 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	releaseall
	end


Route104_MrBrineysHouse_EventScript_Peeko::
# 68 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	lock
# 69 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	faceplayer
# 70 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitse
# 71 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 72 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_Peeko
# 73 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitmoncry
# 74 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
	end


Route104_MrBrineysHouse_Text_WaitUpPeeko:
# 78 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Hold on, lass!\n"
	.string "Wait up, Peeko!$"

Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford:
# 83 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Hm? You're {PLAYER}{KUN}!\n"
	.string "You saved my darling Peeko!\l"
	.string "We owe so much to you!\p"
	.string "What's that?\n"
	.string "You want to sail with me?\p"
	.string "Hmhm…\p"
	.string "You have a Letter bound for Dewford\n"
	.string "and a package for Slateport, then?\p"
	.string "Quite the busy life you must lead!\p"
	.string "But, certainly, what you're asking is\n"
	.string "no problem at all.\p"
	.string "You've come to the right man!\n"
	.string "We'll set sail for Dewford.$"

Route104_MrBrineysHouse_Text_SetSailForDewford:
# 99 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Dewford it is, then!\p"
	.string "Anchors aweigh!\n"
	.string "Peeko, we're setting sail, my darling!$"

Route104_MrBrineysHouse_Text_DeclineDeliverySail:
# 105 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Is that so?\n"
	.string "Your deliveries can wait?\p"
	.string "You just go on and tell me whenever\n"
	.string "you want to set sail!$"

Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford:
# 112 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Ahoy!\n"
	.string "I know exactly what you want to say!\p"
	.string "You're to deliver a Letter to Dewford\n"
	.string "and a package to Slateport.\p"
	.string "What you need me to do is no problem\n"
	.string "at all--I'm the man for the job!\p"
	.string "First, we'll set sail for Dewford.$"

Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford:
# 122 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Ahoy!\n"
	.string "I know exactly what you want to say!\p"
	.string "You're to deliver a package to\n"
	.string "Capt. Stern in Slateport.\p"
	.string "What you need me to do is no problem\n"
	.string "at all--I'm the man for the job!\p"
	.string "First, we'll set sail for Dewford.$"

Route104_MrBrineysHouse_Text_WhereAreWeBound:
# 132 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Ahoy!\n"
	.string "For you, I'll go out to sea anytime!\p"
	.string "Now, my friend, are we off to Dewford?$"

Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail:
# 138 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Is that so?\n"
	.string "Well, Peeko owes her life to you.\p"
	.string "You just go on and tell me whenever\n"
	.string "you want to set sail!$"

Route104_MrBrineysHouse_Text_Peeko:
# 145 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Peeko: Pii piihyoro!$"
