# 1 "data/maps/AquaHideout_B2F/scripts.pory"

# 2 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_MapScripts::
# 3 "data/maps/AquaHideout_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B2F_OnTransition
# 4 "data/maps/AquaHideout_B2F/scripts.pory"
	.byte 0
# 5 "data/maps/AquaHideout_B2F/scripts.pory"

# 6 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_OnTransition:
# 7 "data/maps/AquaHideout_B2F/scripts.pory"
	call_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, AquaHideout_B2F_EventScript_PreventMattNoticing
# 8 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 9 "data/maps/AquaHideout_B2F/scripts.pory"

# 10 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_PreventMattNoticing::
# 11 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 12 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 13 "data/maps/AquaHideout_B2F/scripts.pory"

# 14 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_MattNoticePlayer::
# 15 "data/maps/AquaHideout_B2F/scripts.pory"
	lockall
# 16 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_AQUA_HIDEOUT_MATT
# 17 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_PIN
# 18 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 19 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 20 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 21 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 22 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 23 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
# 24 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 25 "data/maps/AquaHideout_B2F/scripts.pory"

# 26 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Matt::
# 27 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_MATT, AquaHideout_B2F_Text_MattIntro, AquaHideout_B2F_Text_MattDefeat, AquaHideout_B2F_EventScript_SubmarineEscape
# 28 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 29 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 30 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 31 "data/maps/AquaHideout_B2F/scripts.pory"

# 32 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_SubmarineEscape::
# 33 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_AQUA_HIDEOUT_MATT
# 34 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8009, LOCALID_AQUA_HIDEOUT_SUBMARINE
# 35 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 36 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 37 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 38 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 39 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 40 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_OurBossGotThroughHisPreparations, MSGBOX_DEFAULT
# 41 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 42 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 43 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8009, AquaHideout_B2F_Movement_SumbarineDepartLeft
# 44 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 45 "data/maps/AquaHideout_B2F/scripts.pory"
	removeobject VAR_0x8009
# 46 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 47 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 48 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 49 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 50 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 51 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
# 52 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 53 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 54 "data/maps/AquaHideout_B2F/scripts.pory"

# 55 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartLeft:
# 56 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 57 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 58 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 59 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 60 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 61 "data/maps/AquaHideout_B2F/scripts.pory"

# 62 "data/maps/AquaHideout_B2F/scripts.pory"
@ Unused
# 63 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartRight:
# 64 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 65 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 66 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 67 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 68 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 69 "data/maps/AquaHideout_B2F/scripts.pory"

# 70 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4::
# 71 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Intro, AquaHideout_B2F_Text_Grunt4Defeat, AquaHideout_B2F_EventScript_Grunt4Defeated
# 72 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 74 "data/maps/AquaHideout_B2F/scripts.pory"

# 75 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Defeated::
# 76 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
# 77 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 78 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 79 "data/maps/AquaHideout_B2F/scripts.pory"

# 80 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6::
# 81 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Intro, AquaHideout_B2F_Text_Grunt6Defeat
# 82 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 84 "data/maps/AquaHideout_B2F/scripts.pory"

# 85 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt8::
# 86 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Intro, AquaHideout_B2F_Text_Grunt8Defeat
# 87 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 88 "data/maps/AquaHideout_B2F/scripts.pory"
	end

AquaHideout_B2F_Text_MattIntro:
# 91 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\p"
	.string "Got here already, did you?\n"
	.string "We underestimated you!\p"
	.string "But this is it!\p"
	.string "I'm a cut above the Grunts you've seen\n"
	.string "so far.\p"
	.string "I'm not stalling for time.\n"
	.string "I'm going to pulverize you!$"

AquaHideout_B2F_Text_MattDefeat:
# 102 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\n"
	.string "So, I lost, too…$"

AquaHideout_B2F_Text_OurBossGotThroughHisPreparations:
# 107 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
	.string "While I was toying with you, our Boss\n"
	.string "got through his preparations!$"

AquaHideout_B2F_Text_MattPostBattle:
# 113 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
	.string "Our Boss has already gone on his way to\n"
	.string "some cave under the sea!\p"
	.string "If you're going to give chase, you'd\n"
	.string "better search the big, wide sea beyond\l"
	.string "Lilycove.\p"
	.string "But will you find it then?\n"
	.string "Hehehe!$"

AquaHideout_B2F_Text_Grunt4Intro:
# 124 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Wahahah, I grew weary of waiting!\n"
	.string "You owe me a battle, too!$"

AquaHideout_B2F_Text_Grunt4Defeat:
# 129 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tired of waiting…\n"
	.string "Lost and dazed…$"

AquaHideout_B2F_Text_Grunt4PostBattle:
# 134 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Boss…\n"
	.string "Is this good enough?$"

AquaHideout_B2F_Text_Grunt6Intro:
# 139 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Warp panels, the Hideout's pride\n"
	.string "and joy!\p"
	.string "You're clueless about where you are,\n"
	.string "aren't you?\p"
	.string "Fluster and tire out the enemy, then\n"
	.string "lower the boom! That's our plan!$"

AquaHideout_B2F_Text_Grunt6Defeat:
# 148 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "What's wrong with you?\n"
	.string "You're not tired at all!$"

AquaHideout_B2F_Text_Grunt6PostBattle:
# 153 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "That reminds me… I can't remember\n"
	.string "where I put the Master Ball.\p"
	.string "If I fail to guard it, our Boss will\n"
	.string "chew me out…$"

AquaHideout_B2F_Text_Grunt8Intro:
# 160 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "When I joined Team Aqua, the first\n"
	.string "thing I had to learn was how these\l"
	.string "warp panels connected.$"

AquaHideout_B2F_Text_Grunt8Defeat:
# 166 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I was too occupied thinking about\n"
	.string "the warp panels…$"

AquaHideout_B2F_Text_Grunt8PostBattle:
# 171 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'll have to learn about how I can\n"
	.string "battle more effectively…$"
