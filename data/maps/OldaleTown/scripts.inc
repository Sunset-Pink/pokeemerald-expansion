OldaleTown_MapScripts::
# 2 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
	.byte 0


OldaleTown_OnTransition:
# 6 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 7 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 8 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_OnTransition_2
OldaleTown_OnTransition_1:
# 11 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_OnTransition_5
OldaleTown_OnTransition_4:
# 14 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_OnTransition_8
OldaleTown_OnTransition_7:
	end

OldaleTown_OnTransition_2:
# 9 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_EventScript_BlockWestEntrance
	goto OldaleTown_OnTransition_1

OldaleTown_OnTransition_5:
# 12 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_EventScript_MoveMartEmployee
	goto OldaleTown_OnTransition_4

OldaleTown_OnTransition_8:
# 15 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_EventScript_SetOldaleState
	goto OldaleTown_OnTransition_7


OldaleTown_EventScript_SetOldaleState::
# 22 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
	return


OldaleTown_EventScript_BlockWestEntrance::
# 26 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
# 27 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
	return


OldaleTown_EventScript_MoveMartEmployee::
# 32 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_OLDALE_MART_EMPLOYEE, 13, 14
# 33 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_OLDALE_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
	return


OldaleTown_EventScript_TownSign::
# 38 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
	end


OldaleTown_EventScript_Girl::
# 43 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
	end


OldaleTown_EventScript_MartEmployee::
# 48 "data/maps/OldaleTown/scripts.pory"
	lock
# 49 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 50 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MartEmployee_2
# 50 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_MartEmployee_2
# 55 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 56 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 57 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart
# 58 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 59 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 60 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_MartEmployee_8
# 61 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_MartEmployee_9
# 62 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_MartEmployee_10
OldaleTown_EventScript_MartEmployee_6:
# 64 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_EventScript_ExplainPokemonMart
# 65 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 66 "data/maps/OldaleTown/scripts.pory"
	release
	end

OldaleTown_EventScript_MartEmployee_2:
# 51 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation
# 52 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end

OldaleTown_EventScript_MartEmployee_8:
# 60 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_EventScript_GoToMartSouth
	goto OldaleTown_EventScript_MartEmployee_6

OldaleTown_EventScript_MartEmployee_9:
# 61 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_EventScript_GoToMartNorth
	goto OldaleTown_EventScript_MartEmployee_6

OldaleTown_EventScript_MartEmployee_10:
# 62 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_EventScript_GoToMartEast
	goto OldaleTown_EventScript_MartEmployee_6


OldaleTown_EventScript_GoToMartSouth::
# 71 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_EventScript_GoToMartSouth_Movement_0
# 78 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_EventScript_GoToMartSouth_Movement_1
# 82 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
	return


OldaleTown_EventScript_GoToMartNorth::
# 87 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_EventScript_GoToMartNorth_Movement_0
# 91 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_EventScript_GoToMartNorth_Movement_1
# 94 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
	return


OldaleTown_EventScript_GoToMartEast::
# 99 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_EventScript_GoToMartEast_Movement_0
# 103 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_EventScript_GoToMartNorth_Movement_0
# 107 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
	return


OldaleTown_EventScript_ExplainPokemonMart::
# 112 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart
# 113 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 114 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleTown_EventScript_ExplainPokemonMart_2
# 118 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation
# 119 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
	return

OldaleTown_EventScript_ExplainPokemonMart_2:
# 115 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull
	return


OldaleTown_EventScript_FootprintsMan::
# 124 "data/maps/OldaleTown/scripts.pory"
	lock
# 125 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 126 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_FootprintsMan_2
# 129 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints
# 130 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 131 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
OldaleTown_EventScript_FootprintsMan_1:
# 133 "data/maps/OldaleTown/scripts.pory"
	release
	end

OldaleTown_EventScript_FootprintsMan_2:
# 127 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints
	goto OldaleTown_EventScript_FootprintsMan_1


OldaleTown_EventScript_BlockedPath::
# 138 "data/maps/OldaleTown/scripts.pory"
	lockall
# 139 "data/maps/OldaleTown/scripts.pory"
	call Movement_OldaleTown_PlayerStepBack
# 140 "data/maps/OldaleTown/scripts.pory"
	call Movement_OldaleTown_FootprintMan_BackUp
# 141 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 142 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere
# 143 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 144 "data/maps/OldaleTown/scripts.pory"
	call Movement_OldaleTown_FootprintMan_ReturnToOrignalPosition
# 145 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 146 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


Movement_OldaleTown_PlayerStepBack:
# 150 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_OldaleTown_PlayerStepBack_Movement_0
	return


Movement_OldaleTown_FootprintMan_BackUp:
# 157 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Movement_OldaleTown_FootprintMan_BackUp_Movement_0
	return


Movement_OldaleTown_FootprintMan_ReturnToOrignalPosition:
# 167 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Movement_OldaleTown_FootprintMan_ReturnToOrignalPosition_Movement_0
	return


OldaleTown_EventScript_Rival::
# 174 "data/maps/OldaleTown/scripts.pory"
	lockall
# 175 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, Common_Movement_FacePlayer
# 176 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 177 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_RivalLetsGoBack
# 178 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_EventScript_RivalFinish
# 179 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleTown_RivalLetsGoBack::
	checkplayergender
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleTown_RivalLetsGoBack_2
# 186 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack
OldaleTown_RivalLetsGoBack_1:
# 188 "data/maps/OldaleTown/scripts.pory"
	closemessage
	return

OldaleTown_RivalLetsGoBack_2:
# 184 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack
	goto OldaleTown_RivalLetsGoBack_1


OldaleTown_EventScript_RivalFinish::
# 193 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 194 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_EventScript_DoExitMovement
# 195 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_RIVAL
# 197 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_RIVAL_STATE, 4
# 198 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	return


OldaleTown_EventScript_DoExitMovement::
# 204 "data/maps/OldaleTown/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_ne OldaleTown_EventScript_DoExitMovement_2
OldaleTown_EventScript_DoExitMovement_1:
# 211 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_EventScript_DoExitMovement_Movement_1
# 212 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
	return

OldaleTown_EventScript_DoExitMovement_2:
# 205 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_EventScript_DoExitMovement_Movement_0
	goto OldaleTown_EventScript_DoExitMovement_1


OldaleTown_EventScript_RivalTrigger1::
# 218 "data/maps/OldaleTown/scripts.pory"
	lockall
# 219 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_EventScript_RivalTrigger1_Movement_0
# 220 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 221 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 222 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 223 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_RivalLetsGoBack
# 224 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_EventScript_DoExitMovement
# 225 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_EventScript_RivalFinish
# 226 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


OldaleTown_EventScript_RivalTrigger2::
# 231 "data/maps/OldaleTown/scripts.pory"
	lockall
# 232 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_EventScript_RivalTrigger2_Movement_0
# 233 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 234 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 235 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 236 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_RivalLetsGoBack
# 237 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_EventScript_DoExitMovement
# 238 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_EventScript_RivalFinish
# 239 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


OldaleTown_EventScript_RivalTrigger3::
# 244 "data/maps/OldaleTown/scripts.pory"
	lockall
# 245 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_EventScript_RivalTrigger3_Movement_0
# 246 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 247 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 248 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 249 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_RivalLetsGoBack
# 250 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_EventScript_DoExitMovement
# 251 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_EventScript_RivalFinish
# 252 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


# 71 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth_Movement_0:
# 72 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 73 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 73 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 74 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 75 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 75 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 75 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 75 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 75 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 76 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
	step_end

# 78 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth_Movement_1:
# 79 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 79 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 79 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 79 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 80 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 80 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 80 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 80 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 80 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 87 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth_Movement_0:
# 88 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 88 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 88 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 88 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 88 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 88 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 88 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 89 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
	step_end

# 91 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth_Movement_1:
# 92 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 92 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 92 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 92 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 92 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 92 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 92 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 99 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast_Movement_0:
# 100 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 101 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 101 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 101 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 101 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 101 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 101 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 150 "data/maps/OldaleTown/scripts.pory"
Movement_OldaleTown_PlayerStepBack_Movement_0:
# 151 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 152 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 157 "data/maps/OldaleTown/scripts.pory"
Movement_OldaleTown_FootprintMan_BackUp_Movement_0:
# 158 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 159 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 160 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 161 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 162 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
	step_end

# 167 "data/maps/OldaleTown/scripts.pory"
Movement_OldaleTown_FootprintMan_ReturnToOrignalPosition_Movement_0:
# 168 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 169 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 205 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement_Movement_0:
# 206 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 207 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 208 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
	step_end

# 211 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement_Movement_1:
# 211 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 211 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 211 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 211 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 211 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 211 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 211 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 219 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1_Movement_0:
# 219 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 219 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 232 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2_Movement_0:
# 232 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 245 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3_Movement_0:
# 245 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

OldaleTown_Text_TownSign:
# 256 "data/maps/OldaleTown/scripts.pory"
	.string "Oldale Town\n"
	.string "“Where things start off scarce.”$"

OldaleTown_Text_BrendanLetsGoBack:
# 261 "data/maps/OldaleTown/scripts.pory"
	.string "Brendan: I'm heading back to my dad's\n"
	.string "Lab now.\l"
	.string "{PLAYER}, you should hustle back, too.$"

OldaleTown_Text_MayLetsGoBack:
# 267 "data/maps/OldaleTown/scripts.pory"
	.string "May: {PLAYER}{KUN}!\n"
	.string "Over here!\l"
	.string "Let's hurry home!$"

OldaleTown_Text_FinishedSketchingFootprints:
# 273 "data/maps/OldaleTown/scripts.pory"
	.string "I finished sketching the footprints of\n"
	.string "a rare Pokémon.\p"
	.string "But it turns out they were only my\n"
	.string "own footprints…$"

OldaleTown_Text_DiscoveredFootprints:
# 280 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
	.string "a rare Pokémon!\p"
	.string "Wait until I finish sketching\n"
	.string "them, okay?$"

OldaleTown_Text_WaitDontComeInHere:
# 287 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
	.string "Please don't come in here.\p"
	.string "I just discovered the footprints of\n"
	.string "a rare Pokémon!\p"
	.string "Wait until I finish sketching\n"
	.string "them, okay?$"

OldaleTown_Text_PotionExplanation:
# 296 "data/maps/OldaleTown/scripts.pory"
	.string "A Potion can be used anytime, so it's\n"
	.string "even more useful than a Pokémon Center\l"
	.string "in certain situations.$"

OldaleTown_Text_ThisIsAPokemonMart:
# 302 "data/maps/OldaleTown/scripts.pory"
	.string "This is a Pokémon Mart.\n"
	.string "Just look for our blue roof.\p"
	.string "We sell a variety of goods including\n"
	.string "Poké Balls for catching Pokémon.\p"
	.string "Here, I'd like you to have this as\n"
	.string "a promotional item.$"

OldaleTown_Text_IWorkAtPokemonMart:
# 311 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
	.string "I work at a Pokémon Mart.\p"
	.string "Can I get you to come with me?$"

OldaleTown_Text_SavingMyProgress:
# 317 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
	.string "progress.$"
