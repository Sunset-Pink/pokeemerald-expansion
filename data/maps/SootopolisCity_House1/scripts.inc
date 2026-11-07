SootopolisCity_House1_MapScripts::
	.byte 0


SootopolisCity_House1_EventScript_BrickBreakBlackBelt::
# 4 "data/maps/SootopolisCity_House1/scripts.pory"
	lock
# 5 "data/maps/SootopolisCity_House1/scripts.pory"
	faceplayer
# 6 "data/maps/SootopolisCity_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BRICK_BREAK, SootopolisCity_House1_EventScript_ReceivedBrickBreak
# 7 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_DevelopedThisTM
# 8 "data/maps/SootopolisCity_House1/scripts.pory"
	giveitem ITEM_TM_BRICK_BREAK
# 9 "data/maps/SootopolisCity_House1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 10 "data/maps/SootopolisCity_House1/scripts.pory"
	setflag FLAG_RECEIVED_TM_BRICK_BREAK
# 11 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_ExplainBrickBreak
# 12 "data/maps/SootopolisCity_House1/scripts.pory"
	release
	end


SootopolisCity_House1_EventScript_ReceivedBrickBreak::
# 17 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_ExplainBrickBreak
# 18 "data/maps/SootopolisCity_House1/scripts.pory"
	release
	end


SootopolisCity_House1_EventScript_Kecleon::
# 23 "data/maps/SootopolisCity_House1/scripts.pory"
	lock
# 24 "data/maps/SootopolisCity_House1/scripts.pory"
	faceplayer
# 25 "data/maps/SootopolisCity_House1/scripts.pory"
	waitse
# 26 "data/maps/SootopolisCity_House1/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
# 27 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_Kecleon
# 28 "data/maps/SootopolisCity_House1/scripts.pory"
	waitmoncry
# 29 "data/maps/SootopolisCity_House1/scripts.pory"
	release
	end


SootopolisCity_House1_Text_DevelopedThisTM:
# 33 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "For thirty years I've remained in\n"
	.string "Sootopolis honing my skills.\p"
	.string "I developed a shattering TM.\n"
	.string "I bequeath it to you!$"

SootopolisCity_House1_Text_ExplainBrickBreak:
# 40 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "TM31 contains Brick Break! It's a move\n"
	.string "so horrible that I can't describe it.$"

SootopolisCity_House1_Text_Kecleon:
# 45 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "Kecleon: Puu puhyaah.$"
