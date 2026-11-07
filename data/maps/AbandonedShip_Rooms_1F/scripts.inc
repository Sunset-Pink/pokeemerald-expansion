AbandonedShip_Rooms_1F_MapScripts::
	.byte 0


# 3 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 4 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Gentleman::
# 5 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_TakingALookAround, MSGBOX_NPC
# 6 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 7 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 8 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Demetrius::
# 9 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	trainerbattle_single TRAINER_DEMETRIUS, AbandonedShip_Rooms_1F_Text_DemetriusIntro, AbandonedShip_Rooms_1F_Text_DemetriusDefeat
# 10 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_DemetriusPostBattle, MSGBOX_AUTOCLOSE
# 11 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 12 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 13 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Thalia::
# 14 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	trainerbattle_single TRAINER_THALIA_1, AbandonedShip_Rooms_1F_Text_ThaliaIntro, AbandonedShip_Rooms_1F_Text_ThaliaDefeat, AbandonedShip_Rooms_1F_EventScript_RegisterThalia
# 15 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 16 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms_1F_EventScript_ThaliaRematch
# 17 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaPostBattle, MSGBOX_DEFAULT
# 18 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	release
# 19 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 20 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 21 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_RegisterThalia::
# 22 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 23 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	waitmovement 0
# 24 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaRegister, MSGBOX_DEFAULT
# 25 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	register_matchcall TRAINER_THALIA_1
# 26 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	release
# 27 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 28 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 29 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_ThaliaRematch::
# 30 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	trainerbattle_rematch TRAINER_THALIA_1, AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro, AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat
# 31 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaPostRematch, MSGBOX_AUTOCLOSE
# 32 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end

AbandonedShip_Rooms_1F_Text_TakingALookAround:
# 35 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Ships of this sort are rare, so I'm\n"
	.string "taking a look around.\p"
	.string "Hmhm…\n"
	.string "There appear to be other cabins…$"

AbandonedShip_Rooms_1F_Text_ThaliaIntro:
# 42 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "What on earth would compel you to\n"
	.string "come here? You must be curious!$"

AbandonedShip_Rooms_1F_Text_ThaliaDefeat:
# 47 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Not just curious, but also strong…$"

AbandonedShip_Rooms_1F_Text_ThaliaPostBattle:
# 51 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "The man next door…\p"
	.string "He says he's just sightseeing,\n"
	.string "but I don't know about that.$"

AbandonedShip_Rooms_1F_Text_ThaliaRegister:
# 57 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "You're such a tough Trainer!\n"
	.string "Let me register you as a memento!$"

AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro:
# 62 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "What on earth would compel you to\n"
	.string "come back? You must really be curious!$"

AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat:
# 67 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Aren't you too strong?$"

AbandonedShip_Rooms_1F_Text_ThaliaPostRematch:
# 71 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "I'm sure that man's up to something!\n"
	.string "He just acts so suspiciously!$"

AbandonedShip_Rooms_1F_Text_DemetriusIntro:
# 76 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Waaah!\n"
	.string "I've been found! …Huh?$"

AbandonedShip_Rooms_1F_Text_DemetriusDefeat:
# 81 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Oh, you're not my mom.$"

AbandonedShip_Rooms_1F_Text_DemetriusPostBattle:
# 85 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "I'm in trouble with my mom, so I ran.\n"
	.string "Keep it a secret where I am!$"
