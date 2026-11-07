AquaHideout_1F_MapScripts::
	.byte 0


# 3 "data/maps/AquaHideout_1F/script.pory"

# 4 "data/maps/AquaHideout_1F/script.pory"
@ The below two entrance guards give hints about what to do to progress the story
# 5 "data/maps/AquaHideout_1F/script.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt1::
# 6 "data/maps/AquaHideout_1F/script.pory"
	lock
# 7 "data/maps/AquaHideout_1F/script.pory"
	faceplayer
# 8 "data/maps/AquaHideout_1F/script.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint1
# 9 "data/maps/AquaHideout_1F/script.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint1
# 10 "data/maps/AquaHideout_1F/script.pory"
	msgbox AquaHideout_1F_Text_OurBossIsSnatchingSomething, MSGBOX_DEFAULT
# 11 "data/maps/AquaHideout_1F/script.pory"
	release
# 12 "data/maps/AquaHideout_1F/script.pory"
	end
# 13 "data/maps/AquaHideout_1F/script.pory"

# 14 "data/maps/AquaHideout_1F/script.pory"
AquaHideout_1F_EventScript_MagmaHideoutHint1::
# 15 "data/maps/AquaHideout_1F/script.pory"
	msgbox AquaHideout_1F_Text_WhereMightMagmaHideoutBe, MSGBOX_DEFAULT
# 16 "data/maps/AquaHideout_1F/script.pory"
	release
# 17 "data/maps/AquaHideout_1F/script.pory"
	end
# 18 "data/maps/AquaHideout_1F/script.pory"

# 19 "data/maps/AquaHideout_1F/script.pory"
AquaHideout_1F_EventScript_SlateportHint1::
# 20 "data/maps/AquaHideout_1F/script.pory"
	msgbox AquaHideout_1F_Text_BossWentToJackASubmarine, MSGBOX_DEFAULT
# 21 "data/maps/AquaHideout_1F/script.pory"
	release
# 22 "data/maps/AquaHideout_1F/script.pory"
	end
# 23 "data/maps/AquaHideout_1F/script.pory"

# 24 "data/maps/AquaHideout_1F/script.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt2::
# 25 "data/maps/AquaHideout_1F/script.pory"
	lock
# 26 "data/maps/AquaHideout_1F/script.pory"
	faceplayer
# 27 "data/maps/AquaHideout_1F/script.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint2
# 28 "data/maps/AquaHideout_1F/script.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint2
# 29 "data/maps/AquaHideout_1F/script.pory"
	msgbox AquaHideout_1F_Text_BossIsOnRoute122, MSGBOX_DEFAULT
# 30 "data/maps/AquaHideout_1F/script.pory"
	release
# 31 "data/maps/AquaHideout_1F/script.pory"
	end
# 32 "data/maps/AquaHideout_1F/script.pory"

# 33 "data/maps/AquaHideout_1F/script.pory"
AquaHideout_1F_EventScript_MagmaHideoutHint2::
# 34 "data/maps/AquaHideout_1F/script.pory"
	msgbox AquaHideout_1F_Text_TeamMagmaAtMtChimney, MSGBOX_DEFAULT
# 35 "data/maps/AquaHideout_1F/script.pory"
	release
# 36 "data/maps/AquaHideout_1F/script.pory"
	end
# 37 "data/maps/AquaHideout_1F/script.pory"

# 38 "data/maps/AquaHideout_1F/script.pory"
AquaHideout_1F_EventScript_SlateportHint2::
# 39 "data/maps/AquaHideout_1F/script.pory"
	msgbox AquaHideout_1F_Text_BossIsInSlateportCity, MSGBOX_DEFAULT
# 40 "data/maps/AquaHideout_1F/script.pory"
	release
# 41 "data/maps/AquaHideout_1F/script.pory"
	end
# 42 "data/maps/AquaHideout_1F/script.pory"

# 43 "data/maps/AquaHideout_1F/script.pory"
AquaHideout_1F_EventScript_Grunt1::
# 44 "data/maps/AquaHideout_1F/script.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, AquaHideout_1F_Text_Grunt1Intro, AquaHideout_1F_Text_Grunt1Defeat, AquaHideout_1F_EventScript_Grunt1Defeated
# 45 "data/maps/AquaHideout_1F/script.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/AquaHideout_1F/script.pory"
	end
# 47 "data/maps/AquaHideout_1F/script.pory"

# 48 "data/maps/AquaHideout_1F/script.pory"
AquaHideout_1F_EventScript_Grunt1Defeated::
# 49 "data/maps/AquaHideout_1F/script.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_DEFAULT
# 50 "data/maps/AquaHideout_1F/script.pory"
	release
# 51 "data/maps/AquaHideout_1F/script.pory"
	end

AquaHideout_1F_Text_OurBossIsSnatchingSomething:
# 54 "data/maps/AquaHideout_1F/script.pory"
	.string "What? What? What do you want with \n"
	.string "Team Aqua?\p"
	.string "Our Boss isn't here! He's gone off to\n"
	.string "snatch something important!\p"
	.string "… …\n"
	.string "Where did he go?\p"
	.string "Wahaha! Do you really think I'd tell\n"
	.string "you something that crucial?$"

AquaHideout_1F_Text_WhereMightMagmaHideoutBe:
# 65 "data/maps/AquaHideout_1F/script.pory"
	.string "What? What?\n"
	.string "Are you a Team Magma grunt?\p"
	.string "I hear that Team Magma is trying to\n"
	.string "awaken an awesome Pokémon at their\l"
	.string "Hideout.\p"
	.string "But where might their Hideout be?$"

AquaHideout_1F_Text_BossWentToJackASubmarine:
# 74 "data/maps/AquaHideout_1F/script.pory"
	.string "What? What? What do you want with \n"
	.string "Team Aqua?\p"
	.string "Our Boss isn't here!\n"
	.string "He's gone off to jack a submarine!\p"
	.string "… …\n"
	.string "Where did he go?\p"
	.string "Wahaha! Do you really think I'd tell\n"
	.string "you something that crucial?$"

AquaHideout_1F_Text_BossIsOnRoute122:
# 85 "data/maps/AquaHideout_1F/script.pory"
	.string "What? What? What do you want with \n"
	.string "Team Aqua?\p"
	.string "Our Boss isn't here! He's on his way to\n"
	.string "Mt. Pyre on Route 122!\p"
	.string "… …\n"
	.string "Why did he go?\p"
	.string "Wahaha! Do you really think I'd tell\n"
	.string "you something that crucial?$"

AquaHideout_1F_Text_TeamMagmaAtMtChimney:
# 96 "data/maps/AquaHideout_1F/script.pory"
	.string "What? What?\n"
	.string "Are you a Team Magma grunt?\p"
	.string "I hear that Team Magma is after\n"
	.string "an awesome Pokémon at Mt. Chimney.\p"
	.string "But what is that Pokémon like?$"

AquaHideout_1F_Text_BossIsInSlateportCity:
# 104 "data/maps/AquaHideout_1F/script.pory"
	.string "What? What? What do you want with\n"
	.string "Team Aqua?\p"
	.string "Our Boss isn't here!\n"
	.string "He's on his way to Slateport City!\p"
	.string "… …\n"
	.string "Why did he go?\p"
	.string "Wahaha! Do you really think I'd tell\n"
	.string "you something that crucial?$"

AquaHideout_1F_Text_Grunt1Intro:
# 115 "data/maps/AquaHideout_1F/script.pory"
	.string "Ayiyiyi!\n"
	.string "Suspicious character spotted!$"

AquaHideout_1F_Text_Grunt1Defeat:
# 120 "data/maps/AquaHideout_1F/script.pory"
	.string "Grrrrr…\n"
	.string "I lost it!$"

AquaHideout_1F_Text_Grunt1PostBattle:
# 125 "data/maps/AquaHideout_1F/script.pory"
	.string "I took the loss for the Team,\n"
	.string "but I did my job…$"
