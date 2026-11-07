# 2 "data/maps/VictoryRoad_B1F/scripts.pory"

# 3 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_MapScripts::
# 4 "data/maps/VictoryRoad_B1F/scripts.pory"
	.byte 0
# 5 "data/maps/VictoryRoad_B1F/scripts.pory"

# 6 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Samuel::
# 7 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_SAMUEL, VictoryRoad_B1F_Text_SamuelIntro, VictoryRoad_B1F_Text_SamuelDefeat
# 8 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
# 9 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 10 "data/maps/VictoryRoad_B1F/scripts.pory"

# 11 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Shannon::
# 12 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_SHANNON, VictoryRoad_B1F_Text_ShannonIntro, VictoryRoad_B1F_Text_ShannonDefeat
# 13 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_ShannonPostBattle, MSGBOX_AUTOCLOSE
# 14 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 15 "data/maps/VictoryRoad_B1F/scripts.pory"

# 16 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Michelle::
# 17 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_MICHELLE, VictoryRoad_B1F_Text_MichelleIntro, VictoryRoad_B1F_Text_MichelleDefeat
# 18 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_MichellePostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 20 "data/maps/VictoryRoad_B1F/scripts.pory"

# 21 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Mitchell::
# 22 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_MITCHELL, VictoryRoad_B1F_Text_MitchellIntro, VictoryRoad_B1F_Text_MitchellDefeat
# 23 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_MitchellPostBattle, MSGBOX_AUTOCLOSE
# 24 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 25 "data/maps/VictoryRoad_B1F/scripts.pory"

# 26 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Halle::
# 27 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_HALLE, VictoryRoad_B1F_Text_HalleIntro, VictoryRoad_B1F_Text_HalleDefeat
# 28 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_HallePostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/VictoryRoad_B1F/scripts.pory"
	end

VictoryRoad_B1F_Text_SamuelIntro:
# 32 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "The thought that I'm getting closer to\n"
	.string "the Pokémon League…\p"
	.string "I'm getting stage fright…$"

VictoryRoad_B1F_Text_SamuelDefeat:
# 38 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "I couldn't do a thing…$"

VictoryRoad_B1F_Text_SamuelPostBattle:
# 42 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "The Pokémon League became distant\n"
	.string "again… What a letdown…$"

VictoryRoad_B1F_Text_ShannonIntro:
# 47 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "To win your way through the Pokémon\n"
	.string "League, you need the trust of your\l"
	.string "Pokémon.$"

VictoryRoad_B1F_Text_ShannonDefeat:
# 53 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Your relationship is based on\n"
	.string "solid trust.$"

VictoryRoad_B1F_Text_ShannonPostBattle:
# 58 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "By being together all the time, trust\n"
	.string "grows between Pokémon and Trainers.$"

VictoryRoad_B1F_Text_MichelleIntro:
# 63 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "This isn't the goal. It's only a place\n"
	.string "on the way to the Pokémon League.$"

VictoryRoad_B1F_Text_MichelleDefeat:
# 68 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "That's the way!$"

VictoryRoad_B1F_Text_MichellePostBattle:
# 72 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "You'll do fine, for sure!\n"
	.string "Your Pokémon are all eager to go!$"

VictoryRoad_B1F_Text_MitchellIntro:
# 77 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "My Pokémon are cosmically\n"
	.string "awe inspiring!$"

VictoryRoad_B1F_Text_MitchellDefeat:
# 82 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "I've never met anyone like you before.$"

VictoryRoad_B1F_Text_MitchellPostBattle:
# 86 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Even outside of battle, I sense\n"
	.string "incredible power emanating from you\l"
	.string "and your Pokémon.$"

VictoryRoad_B1F_Text_HalleIntro:
# 92 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Okay, no need to get your back up!\n"
	.string "Relax, let's take it easy!$"

VictoryRoad_B1F_Text_HalleDefeat:
# 97 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Whoa!\n"
	.string "Wonderful!$"

VictoryRoad_B1F_Text_HallePostBattle:
# 102 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Sure, this is Vicotry Road.\p"
	.string "But it's not all that different from\n"
	.string "the path you've taken so far.\p"
	.string "Try to enjoy things the rest of\n"
	.string "the way!$"
