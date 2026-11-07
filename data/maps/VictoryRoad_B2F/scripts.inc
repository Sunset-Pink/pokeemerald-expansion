VictoryRoad_B2F_MapScripts::
	.byte 0


# 3 "data/maps/VictoryRoad_B2F/scripts.pory"

# 4 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Vito::
# 5 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_VITO, VictoryRoad_B2F_Text_VitoIntro, VictoryRoad_B2F_Text_VitoDefeat
# 6 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_VitoPostBattle, MSGBOX_AUTOCLOSE
# 7 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 8 "data/maps/VictoryRoad_B2F/scripts.pory"

# 9 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Owen::
# 10 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_OWEN, VictoryRoad_B2F_Text_OwenIntro, VictoryRoad_B2F_Text_OwenDefeat
# 11 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_OwenPostBattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 13 "data/maps/VictoryRoad_B2F/scripts.pory"

# 14 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Caroline::
# 15 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_CAROLINE, VictoryRoad_B2F_Text_CarolineIntro, VictoryRoad_B2F_Text_CarolineDefeat
# 16 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_CarolinePostBattle, MSGBOX_AUTOCLOSE
# 17 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 18 "data/maps/VictoryRoad_B2F/scripts.pory"

# 19 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Julie::
# 20 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_JULIE, VictoryRoad_B2F_Text_JulieIntro, VictoryRoad_B2F_Text_JulieDefeat
# 21 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_JuliePostBattle, MSGBOX_AUTOCLOSE
# 22 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 23 "data/maps/VictoryRoad_B2F/scripts.pory"

# 24 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Felix::
# 25 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_FELIX, VictoryRoad_B2F_Text_FelixIntro, VictoryRoad_B2F_Text_FelixDefeat
# 26 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_FelixPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 28 "data/maps/VictoryRoad_B2F/scripts.pory"

# 29 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Dianne::
# 30 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_DIANNE, VictoryRoad_B2F_Text_DianneIntro, VictoryRoad_B2F_Text_DianneDefeat
# 31 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_DiannePostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/VictoryRoad_B2F/scripts.pory"
	end

VictoryRoad_B2F_Text_VitoIntro:
# 35 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I trained together with my whole family,\n"
	.string "every one of us!\l"
	.string "I'm not losing to anyone!$"

VictoryRoad_B2F_Text_VitoDefeat:
# 41 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Better than my family?!\n"
	.string "Is that possible?!$"

VictoryRoad_B2F_Text_VitoPostBattle:
# 46 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I was better than everyone in my\n"
	.string "family. I've never lost before…\p"
	.string "I've lost my confidence…\n"
	.string "Maybe I'll go home…$"

VictoryRoad_B2F_Text_OwenIntro:
# 53 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I'd heard that there was a tough\n"
	.string "little kid around. Do they mean you?$"

VictoryRoad_B2F_Text_OwenDefeat:
# 58 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "The little shrimp is tough!$"

VictoryRoad_B2F_Text_OwenPostBattle:
# 62 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "The rumors I heard, that tough little\n"
	.string "kid is from Petalburg City.$"

VictoryRoad_B2F_Text_CarolineIntro:
# 67 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "You must be getting a little tired.$"

VictoryRoad_B2F_Text_CarolineDefeat:
# 71 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "No signs of tiring at all!$"

VictoryRoad_B2F_Text_CarolinePostBattle:
# 75 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Victory Road and the Pokémon League\n"
	.string "are long and grueling challenges.\l"
	.string "Beware of fatigue!$"

VictoryRoad_B2F_Text_JulieIntro:
# 81 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "You shouldn't get complacent just\n"
	.string "because you have a lot of Gym Badge.\p"
	.string "There's always going to be someone\n"
	.string "who's better than you!$"

VictoryRoad_B2F_Text_JulieDefeat:
# 88 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "You're better than me!$"

VictoryRoad_B2F_Text_JuliePostBattle:
# 92 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Gaze on your collected Badges and\n"
	.string "remember the Trainers you've faced.$"

VictoryRoad_B2F_Text_FelixIntro:
# 97 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I've come this far, but the tension's\n"
	.string "giving me awful stomach pain…$"

VictoryRoad_B2F_Text_FelixDefeat:
# 102 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Ooh…\n"
	.string "It hurts…$"

VictoryRoad_B2F_Text_FelixPostBattle:
# 107 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I can't help getting all tense knowing\n"
	.string "that I'm nearing the Pokémon League.\p"
	.string "It's all I can do to feign calm.$"

VictoryRoad_B2F_Text_DianneIntro:
# 113 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "The elite among the elite gather in\n"
	.string "this cave.\p"
	.string "How are you finding it?$"

VictoryRoad_B2F_Text_DianneDefeat:
# 119 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Not rattled in the least bit!$"

VictoryRoad_B2F_Text_DiannePostBattle:
# 123 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "You do have guts! I like that!\n"
	.string "Keep it going!$"
