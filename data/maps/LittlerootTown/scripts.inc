# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 3 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 4 "data/maps/LittlerootTown/scripts.pory"
	return
# 5 "data/maps/LittlerootTown/scripts.pory"

# 6 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 7 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 8 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 9 "data/maps/LittlerootTown/scripts.pory"
	return
# 10 "data/maps/LittlerootTown/scripts.pory"

# 11 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 12 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_RIVAL_HOUSE_STATE, 5
# 13 "data/maps/LittlerootTown/scripts.pory"
	return
# 14 "data/maps/LittlerootTown/scripts.pory"

# 15 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 16 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 17 "data/maps/LittlerootTown/scripts.pory"
	release
# 18 "data/maps/LittlerootTown/scripts.pory"
	end
# 19 "data/maps/LittlerootTown/scripts.pory"

# 20 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 21 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 22 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"

LittlerootTown_MapScripts::
# 26 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Script_LittlerootTown_OnTransition
# 27 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 28 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_QUEST_INTRO_STATE, 1, Script_LittlerootTown_Intro_StepOffTruck
	.2byte 0


Script_LittlerootTown_OnTransition:
# 42 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 43 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Script_LittlerootTown_OnTransition_2
Script_LittlerootTown_OnTransition_1:
# 47 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 6
	goto_if_lt Script_LittlerootTown_OnTransition_5
# 49 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 6
	goto_if_eq Script_LittlerootTown_OnTransition_6
Script_LittlerootTown_OnTransition_4:
	end

Script_LittlerootTown_OnTransition_2:
# 45 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 8
	goto Script_LittlerootTown_OnTransition_1

Script_LittlerootTown_OnTransition_5:
# 48 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_Twin_Reposition_ByRoute
	goto Script_LittlerootTown_OnTransition_4

Script_LittlerootTown_OnTransition_6:
# 50 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_Twin_Reposition_Default
	goto Script_LittlerootTown_OnTransition_4


Script_LittlerootTown_Intro_StepOffTruck::
# 56 "data/maps/LittlerootTown/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_Intro_StepOffTruck_2
# 61 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 62 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
Script_LittlerootTown_Intro_StepOffTruck_1:
# 64 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Intro_GoInsideWithMom
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_Intro_StepOffTruck_6
# 69 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 70 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
Script_LittlerootTown_Intro_StepOffTruck_5:
# 72 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 73 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

Script_LittlerootTown_Intro_StepOffTruck_2:
# 58 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 59 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
	goto Script_LittlerootTown_Intro_StepOffTruck_1

Script_LittlerootTown_Intro_StepOffTruck_6:
# 66 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 67 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
	goto Script_LittlerootTown_Intro_StepOffTruck_5


Script_LittlerootTown_Intro_OpenDoor::
# 78 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 79 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
	return


Script_LittlerootTown_Intro_CloseDoor::
# 84 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 85 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
	return


Script_LittlerootTown_Intro_GoInsideWithMom::
# 90 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 91 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 92 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_0
# 96 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 97 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Intro_OpenDoor
# 98 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_MOM
# 99 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_1
# 102 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 103 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Intro_CloseDoor
# 104 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 105 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_2
# 109 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 110 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Mom_OurNewHome_Text
# 111 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 112 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_3
# 117 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_4
# 123 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 124 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Intro_OpenDoor
# 125 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_5
# 129 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_6
# 132 "data/maps/LittlerootTown/scripts.pory"
	waitmovement
# 133 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 134 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_QUEST_INTRO_STATE, 1
# 135 "data/maps/LittlerootTown/scripts.pory"
	hideplayer
# 136 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Intro_CloseDoor
# 137 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 138 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	return


LittlerootTown_FatMan::
# 143 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_FatMan_UsePCToStoreItems_Text, MSGBOX_NPC
	end


LittlerootTown_Boy::
# 154 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Boy_ProfBitch_Text, MSGBOX_NPC
	end


LittlerootTown_Sign_Town::
# 183 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_Sign_Town_Text, MSGBOX_SIGN
	end


LittlerootTown_Sign_Lab::
# 193 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_LabSign_Text, MSGBOX_SIGN
	end


LittlerootTown_Sign_BrendansHouse::
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_Sign_BrendansHouse_1
# 205 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_HouseSign_Rival_Text, MSGBOX_SIGN
	return

LittlerootTown_Sign_BrendansHouse_1:
# 203 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_HouseSign_Player_Text, MSGBOX_SIGN
	return


LittlerootTown_Sign_MaysHouse::
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_Sign_MaysHouse_1
# 213 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_HouseSign_Rival_Text, MSGBOX_SIGN
	return

LittlerootTown_Sign_MaysHouse_1:
# 211 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_HouseSign_Player_Text, MSGBOX_SIGN
	return


LittlerootTown_Twin::
# 226 "data/maps/LittlerootTown/scripts.pory"
	lock
# 227 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 228 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 6
	goto_if_lt LittlerootTown_Twin_2
# 230 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_Twin_3
# 233 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_Twin_PokemonWillJumpOut_Text, MSGBOX_NPC
LittlerootTown_Twin_1:
# 235 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

LittlerootTown_Twin_2:
# 229 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Twin_ZigzagoonHorde_Text, MSGBOX_NPC
	goto LittlerootTown_Twin_1

LittlerootTown_Twin_3:
# 231 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GoodLuck
	goto LittlerootTown_Twin_1


LittlerootTown_Twin_Reposition_ByRoute::
# 255 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN 10, 2
# 256 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_UP
	return


LittlerootTown_Twin_Reposition_Default::
# 260 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 16, 10
# 261 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	return


LittlerootTown_Zigzagoon::
# 265 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Zigzagoon_Text, MSGBOX_NPC
	end


# 92 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_0:
# 93 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 94 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 94 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 94 "data/maps/LittlerootTown/scripts.pory"
	delay_16
	step_end

# 99 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_1:
# 100 "data/maps/LittlerootTown/scripts.pory"
	walk_down
	step_end

# 105 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_2:
# 106 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 107 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
	step_end

# 112 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_3:
# 113 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 114 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 115 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

# 117 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_4:
# 118 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 119 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 120 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 121 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 125 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_5:
# 126 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 127 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
	step_end

# 129 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_6:
# 130 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 130 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

LittlerootTown_FatMan_UsePCToStoreItems_Text:
# 147 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
	.string "and Pokemon.\p"
	.string "The power of science is staggering!$"

LittlerootTown_Boy_ProfBitch_Text:
# 158 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch tries to spend time\n"
	.string "in the wild. But he is absolutely\l"
	.string "useless in the field.\p"
	.string "One time he got absolutely swarmed\n"
	.string "by some Zigzagoons. Talk about\l"
	.string "useless.\p"
	.string "Might as well start calling\n"
	.string "Prof. Bitch.$"

LittlerootTown_Mom_OurNewHome_Text:
# 169 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: {PLAYER}, we're here, honey!\p"
	.string "It must be tiring riding with our things\n"
	.string "in the moving truck.\p"
	.string "Well, this is Littleroot Town.\p"
	.string "How do you like it?\n"
	.string "This is our new home!\p"
	.string "It has a quaint feel, but it seems to be\n"
	.string "an easy place to live, don't you think?\p"
	.string "And, you get your own room, {PLAYER}!\n"
	.string "Let's go inside.$"

Text_LittlerootTown_Sign_Town_Text:
# 187 "data/maps/LittlerootTown/scripts.pory"
	.string "Littleroot Town\n"
	.string "“A town that can't be shaded any hue.”$"

LittlerootTown_LabSign_Text:
# 197 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's Pokémon Lab.$"

LittlerootTown_HouseSign_Player_Text:
# 217 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s House.$"

LittlerootTown_HouseSign_Rival_Text:
# 221 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's House.$"

Text_LittlerootTown_Twin_PokemonWillJumpOut_Text:
# 238 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
	.string "If you go outside and go in the grass,\n"
	.string "wild Pokémon will jump out!$"

LittlerootTown_Twin_ZigzagoonHorde_Text:
# 244 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh wow!\p"
	.string "There are so many Zigzagoons\n"
	.string "out to play today.\l"
	.string "Prof. Birch just ran back to\l"
	.string "to his lab, to escape them.\p"
	.string "Is it just me, or does that one\n"
	.string "in the back look a bit strange?$"

LittlerootTown_Zigzagoon_Text:
# 269 "data/maps/LittlerootTown/scripts.pory"
	.string "Zig… Zag…\n"
	.string "Zigzagoon…$"
