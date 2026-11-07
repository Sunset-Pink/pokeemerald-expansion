SeafloorCavern_Room4_MapScripts::
	.byte 0


# 2 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 3 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_EventScript_Grunt3::
# 4 "data/maps/SeafloorCavern_Room4/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, SeafloorCavern_Room4_Text_Grunt3Intro, SeafloorCavern_Room4_Text_Grunt3Defeat
# 5 "data/maps/SeafloorCavern_Room4/scripts.pory"
	msgbox SeafloorCavern_Room4_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 6 "data/maps/SeafloorCavern_Room4/scripts.pory"
	end
# 7 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 8 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_EventScript_Grunt4::
# 9 "data/maps/SeafloorCavern_Room4/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, SeafloorCavern_Room4_Text_Grunt4Intro, SeafloorCavern_Room4_Text_Grunt4Defeat
# 10 "data/maps/SeafloorCavern_Room4/scripts.pory"
	msgbox SeafloorCavern_Room4_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 11 "data/maps/SeafloorCavern_Room4/scripts.pory"
	end

SeafloorCavern_Room4_Text_Grunt3Intro:
# 14 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Who are you?\n"
	.string "Where did you come in from?$"

SeafloorCavern_Room4_Text_Grunt3Defeat:
# 19 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Lost it…$"

SeafloorCavern_Room4_Text_Grunt3PostBattle:
# 23 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "I can't find the way out!\p"
	.string "I'm not afraid. Don't get me wrong!$"

SeafloorCavern_Room4_Text_Grunt4Intro:
# 28 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Who are you?\n"
	.string "Where do you think you're going?$"

SeafloorCavern_Room4_Text_Grunt4Defeat:
# 33 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "I failed to win!$"

SeafloorCavern_Room4_Text_Grunt4PostBattle:
# 37 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "My partner forgot the map in that\n"
	.string "submarine!\p"
	.string "How's that for being useless?$"
