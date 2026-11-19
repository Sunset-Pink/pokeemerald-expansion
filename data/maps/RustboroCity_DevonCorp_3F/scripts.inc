RustboroCity_DevonCorp_3F_MapScripts::
# 2 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_3F_OnTransition
# 3 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 6 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 4 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast
	.2byte 0

RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_MeetPresident
	.2byte 0


RustboroCity_DevonCorp_3F_OnTransition:
# 12 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_DEVON_CORP_3F_STATE, 0
	goto_if_eq RustboroCity_DevonCorp_3F_OnTransition_2
RustboroCity_DevonCorp_3F_OnTransition_1:
	end

RustboroCity_DevonCorp_3F_OnTransition_2:
# 14 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectxyperm LOCALID_DEVON_CORP_3F_EMPLOYEE, 3, 2
# 15 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_CORP_3F_EMPLOYEE, MOVEMENT_TYPE_FACE_LEFT
	goto RustboroCity_DevonCorp_3F_OnTransition_1


RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast::
# 21 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	end


RustboroCity_DevonCorp_3F_EventScript_MeetPresident::
# 26 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lockall
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere
# 28 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 29 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_0
# 34 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay 80
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_1
# 41 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe
# 43 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 44 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 45 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_2
# 51 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_3
# 56 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 57 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_PleaseGoAhead
# 58 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 59 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	fadedefaultbgm
# 60 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_4
# 64 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_5
# 69 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 70 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor
# 71 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_LETTER
# 72 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis
# 73 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 74 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	message RustboroCity_DevonCorp_3F_Text_ReceivedPokenav
# 75 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitfanfare
# 76 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 77 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 78 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
# 79 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp
# 80 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 81 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 82 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare
# 83 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 84 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 85 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 86 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 87 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 88 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 89 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 90 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_DEVON_CORP_3F_STATE, 1
# 91 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 6
# 92 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	releaseall
	end


RustboroCity_DevonCorp_3F_EventScript_MrStone::
# 97 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 98 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 99 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_EXP_SHARE, RustboroCity_DevonCorp_3F_EventScript_MrStone_2
# 101 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, RustboroCity_DevonCorp_3F_EventScript_MrStone_3
# 110 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_CountingOnYou
# 111 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
RustboroCity_DevonCorp_3F_EventScript_MrStone_1:
# 113 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 114 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 115 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 116 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_3F_EventScript_MrStone_2:
# 100 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends
	goto RustboroCity_DevonCorp_3F_EventScript_MrStone_1

RustboroCity_DevonCorp_3F_EventScript_MrStone_3:
# 102 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter
# 103 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 104 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_MrStone_8
RustboroCity_DevonCorp_3F_EventScript_MrStone_7:
# 107 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 108 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ExplainExpShare
	goto RustboroCity_DevonCorp_3F_EventScript_MrStone_1

RustboroCity_DevonCorp_3F_EventScript_MrStone_8:
# 105 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto RustboroCity_DevonCorp_3F_EventScript_MrStone_7


RustboroCity_DevonCorp_3F_EventScript_Employee::
# 121 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 122 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 123 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_REPEAT_BALL, RustboroCity_DevonCorp_3F_EventScript_Employee_2
# 126 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard
RustboroCity_DevonCorp_3F_EventScript_Employee_1:
# 128 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_3F_EventScript_Employee_2:
# 124 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular
	goto RustboroCity_DevonCorp_3F_EventScript_Employee_1


RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay::
# 133 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RareRocksDisplay, MSGBOX_SIGN
	end


# 29 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_0:
# 29 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 31 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
	step_end

# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_1:
# 37 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 37 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 37 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 37 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 38 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
	step_end

# 45 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_2:
# 46 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 46 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 46 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 47 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 49 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
	step_end

# 51 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_3:
# 52 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 52 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 52 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 52 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 53 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
	step_end

# 60 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_4:
# 61 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 62 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_down
	step_end

# 64 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_5:
# 65 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 65 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 66 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 66 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 67 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_right
	step_end

RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor:
# 137 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'm Mr. Stone, the President of\n"
	.string "the Devon Corporation.\p"
	.string "I'd just got word about you!\p"
	.string "You saved our staff not just once,\n"
	.string "but twice!\p"
	.string "I have a favor to ask of an amazing\n"
	.string "person like you.\p"
	.string "I understand that you're delivering\n"
	.string "a package to Slateport's Shipyard.\p"
	.string "Well, on the way, could you stop off in\n"
	.string "Dewford Town?\p"
	.string "I was hoping that you'd deliver a\n"
	.string "Letter to Steven in Dewford.$"

RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis:
# 153 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: Now, you should know that\n"
	.string "I am a great President.\p"
	.string "So, I'd never be so cheap as to ask\n"
	.string "a favor for nothing in return.\p"
	.string "That's why I want you to have this!$"

RustboroCity_DevonCorp_3F_Text_ReceivedPokenav:
# 161 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{PLAYER} received a PokéNav.$"

RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp:
# 165 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: That device…\p"
	.string "It's a Pokémon Navigator, or PokéNav\n"
	.string "for short.\p"
	.string "It's an indispensable tool for any\n"
	.string "Trainer on an adventure.\p"
	.string "It has a map of the Hoenn region.\p"
	.string "You can check the locations of\n"
	.string "Dewford and Slateport easily!\p"
	.string "By the way, I've heard that sinister\n"
	.string "criminals--Magma and Aqua, I believe--\l"
	.string "have been making trouble far and wide.\p"
	.string "I think it would be best if you rested\n"
	.string "up before you go on your way.$"

RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare:
# 181 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: Well, then, {PLAYER}{KUN},\n"
	.string "go with caution and care!$"

RustboroCity_DevonCorp_3F_Text_CountingOnYou:
# 186 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: I'm counting on you!$"

RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter:
# 190 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: You delivered my Letter?\n"
	.string "Thank you kindly!\p"
	.string "This is my way of thanking you.\n"
	.string "It should help you, a Trainer.$"

RustboroCity_DevonCorp_3F_Text_ExplainExpShare:
# 197 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: A Pokémon holding that\n"
	.string "Exp. Share will be given some of the\l"
	.string "Exp Points from battle.\p"
	.string "It will get Exp Points even if it didn't\n"
	.string "actually battle.\p"
	.string "I would say Exp. Share is quite useful\n"
	.string "for raising weak Pokémon.$"

RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends:
# 207 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: Since my youth, I've immersed\n"
	.string "myself in work.\p"
	.string "Consequently, I'm not familiar with\n"
	.string "trends and that sort of thing.\p"
	.string "But do young people all want to be\n"
	.string "Trainers in the Pokémon League?$"

RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere:
# 216 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "This is the Devon Corporation's\n"
	.string "third floor.\p"
	.string "Our President's Office is on\n"
	.string "this floor.\p"
	.string "Anyway, I can't tell you how much I'm\n"
	.string "grateful for what you've done.\p"
	.string "Um… By the way, that parcel\n"
	.string "you got back for us…\p"
	.string "Could I get you to deliver that to\n"
	.string "the Shipyard in Slateport?\p"
	.string "It would be awful if those robbers\n"
	.string "tried to take it again.\p"
	.string "Uh… Hehehe, so, uh, could I count\n"
	.string "on you to do that for me?\p"
	.string "Oh, that's right.\n"
	.string "Could you wait here a second?$"

RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe:
# 235 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Our President would like to have\n"
	.string "a word with you.\p"
	.string "Please come with me.$"

RustboroCity_DevonCorp_3F_Text_PleaseGoAhead:
# 241 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please, go ahead.$"

RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard:
# 245 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "If you visit the Shipyard in Slateport,\n"
	.string "you should go see Capt. Stern.$"

RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular:
# 250 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Devon's new products, the Repeat Ball\n"
	.string "and Timer Ball, have become hugely\l"
	.string "popular among Trainers.$"

RustboroCity_DevonCorp_3F_Text_RareRocksDisplay:
# 256 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's a collection of rare rocks and\n"
	.string "stones assembled by the President.$"
