SootopolisCity_House2_MapScripts::
	.byte 0


SootopolisCity_House2_EventScript_ExpertF::
# 4 "data/maps/SootopolisCity_House2/scripts.pory"
	lock
# 5 "data/maps/SootopolisCity_House2/scripts.pory"
	faceplayer
# 6 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs, MSGBOX_YESNO
# 7 "data/maps/SootopolisCity_House2/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_House2_EventScript_KnowAboutOrbs
# 8 "data/maps/SootopolisCity_House2/scripts.pory"
	call_if_eq VAR_RESULT, NO, SootopolisCity_House2_EventScript_DontKnowAboutOrbs
# 9 "data/maps/SootopolisCity_House2/scripts.pory"
	release
	end


SootopolisCity_House2_EventScript_KnowAboutOrbs::
# 14 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_Text_YesTwoOrbsSideBySide
	return


SootopolisCity_House2_EventScript_DontKnowAboutOrbs::
# 19 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_Text_OughtToVisitAndSee
	return


SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs:
# 23 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Mt. Pyre…\p"
	.string "At its peak are two orbs placed side\n"
	.string "by side. Did you know?$"

SootopolisCity_House2_Text_YesTwoOrbsSideBySide:
# 29 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Yes, two orbs side by side…\p"
	.string "The sight of them together…\n"
	.string "It is somehow soothing…$"

SootopolisCity_House2_Text_OughtToVisitAndSee:
# 35 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Is that so?\n"
	.string "Perhaps you ought to visit and see…$"
