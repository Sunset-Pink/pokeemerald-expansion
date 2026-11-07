SootopolisCity_House3_MapScripts::
	.byte 0


SootopolisCity_House3_EventScript_Woman::
# 4 "data/maps/SootopolisCity_House3/scripts.pory"
	lock
# 5 "data/maps/SootopolisCity_House3/scripts.pory"
	faceplayer
# 6 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_JuanHasManyFansDoYou, MSGBOX_YESNO
# 7 "data/maps/SootopolisCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SootopolisCity_House3_EventScript_HaveFans
# 8 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_LonesomeTryWorkingHarder
# 9 "data/maps/SootopolisCity_House3/scripts.pory"
	release
	end


SootopolisCity_House3_EventScript_HaveFans::
# 14 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_YouMustBePrettyStrong
# 15 "data/maps/SootopolisCity_House3/scripts.pory"
	release
	end


SootopolisCity_House3_EventScript_Girl::
# 20 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_TrainerFanClubWasWild, MSGBOX_NPC
	end


SootopolisCity_House3_Text_JuanHasManyFansDoYou:
# 24 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "You're a Pokémon Trainer, aren't you?\p"
	.string "Sootopolis's Juna has many fans.\n"
	.string "Even more than his student Wallace!\p"
	.string "Do you have any?$"

SootopolisCity_House3_Text_YouMustBePrettyStrong:
# 31 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Oh, then you must be pretty strong.$"

SootopolisCity_House3_Text_LonesomeTryWorkingHarder:
# 35 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Oh, dear…\n"
	.string "That's a little lonesome.\p"
	.string "Try working a little harder to get\n"
	.string "a fan following.$"

SootopolisCity_House3_Text_TrainerFanClubWasWild:
# 42 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Dedicated fans come over from even\n"
	.string "outside of Hoenn.\p"
	.string "It was really wild when I went to the\n"
	.string "Trainer Fan Club in Lilycove.$"
