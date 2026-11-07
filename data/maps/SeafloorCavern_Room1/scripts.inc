SeafloorCavern_Room1_MapScripts::
	.byte 0


# 2 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 3 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_EventScript_Grunt1::
# 4 "data/maps/SeafloorCavern_Room1/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, SeafloorCavern_Room1_Text_Grunt1Intro, SeafloorCavern_Room1_Text_Grunt1Defeat
# 5 "data/maps/SeafloorCavern_Room1/scripts.pory"
	msgbox SeafloorCavern_Room1_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 6 "data/maps/SeafloorCavern_Room1/scripts.pory"
	end
# 7 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 8 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_EventScript_Grunt2::
# 9 "data/maps/SeafloorCavern_Room1/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, SeafloorCavern_Room1_Text_Grunt2Intro, SeafloorCavern_Room1_Text_Grunt2Defeat
# 10 "data/maps/SeafloorCavern_Room1/scripts.pory"
	msgbox SeafloorCavern_Room1_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 11 "data/maps/SeafloorCavern_Room1/scripts.pory"
	end

SeafloorCavern_Room1_Text_Grunt1Intro:
# 14 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "We don't need a kid around!\n"
	.string "Go on home already!$"

SeafloorCavern_Room1_Text_Grunt1Defeat:
# 19 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "I want to go home…$"

SeafloorCavern_Room1_Text_Grunt1PostBattle:
# 23 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "I want to get a promotion so I can\n"
	.string "boss around the Grunts…$"

SeafloorCavern_Room1_Text_Grunt2Intro:
# 28 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "That submarine… It's tiny inside.\n"
	.string "I'm sore all over!$"

SeafloorCavern_Room1_Text_Grunt2Defeat:
# 33 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Losing makes me sore!$"

SeafloorCavern_Room1_Text_Grunt2PostBattle:
# 37 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "That submarine we jacked, man,\n"
	.string "it's brutal as a ride.\l"
	.string "It's way too tight in there!$"
