LittlerootTown_MapScripts::
# 2 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Script_LittlerootTown_OnTransition
# 3 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_QUEST_INTRO_STATE, 1, Script_LittlerootTown_Intro_StepOffTruck
	.2byte 0


Script_LittlerootTown_OnTransition:
# 17 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 18 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Script_LittlerootTown_OnTransition_2
Script_LittlerootTown_OnTransition_1:
# 22 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 6
	goto_if_lt Script_LittlerootTown_OnTransition_5
# 24 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 6
	goto_if_eq Script_LittlerootTown_OnTransition_6
Script_LittlerootTown_OnTransition_4:
	end

Script_LittlerootTown_OnTransition_2:
# 20 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 8
	goto Script_LittlerootTown_OnTransition_1

Script_LittlerootTown_OnTransition_5:
# 23 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_Twin_Reposition_ByRoute
	goto Script_LittlerootTown_OnTransition_4

Script_LittlerootTown_OnTransition_6:
# 25 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_Twin_Reposition_Default
	goto Script_LittlerootTown_OnTransition_4


Script_LittlerootTown_Intro_StepOffTruck::
# 31 "data/maps/LittlerootTown/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_Intro_StepOffTruck_2
# 36 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 37 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
Script_LittlerootTown_Intro_StepOffTruck_1:
# 39 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Intro_GoInsideWithMom
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_Intro_StepOffTruck_6
# 44 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 45 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
Script_LittlerootTown_Intro_StepOffTruck_5:
# 47 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 48 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

Script_LittlerootTown_Intro_StepOffTruck_2:
# 33 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 34 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
	goto Script_LittlerootTown_Intro_StepOffTruck_1

Script_LittlerootTown_Intro_StepOffTruck_6:
# 41 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 42 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
	goto Script_LittlerootTown_Intro_StepOffTruck_5


Script_LittlerootTown_Intro_OpenDoor::
# 53 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 54 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
	return


Script_LittlerootTown_Intro_CloseDoor::
# 59 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 60 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
	return


Script_LittlerootTown_Intro_GoInsideWithMom::
# 65 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 66 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 67 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_0
# 71 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 72 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Intro_OpenDoor
# 73 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_MOM
# 74 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_1
# 77 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 78 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Intro_CloseDoor
# 79 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 80 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_2
# 84 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 85 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Mom_OurNewHome_Text
# 86 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 87 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_3
# 92 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_4
# 98 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 99 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Intro_OpenDoor
# 100 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_5
# 104 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_6
# 107 "data/maps/LittlerootTown/scripts.pory"
	waitmovement
# 108 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 109 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_QUEST_INTRO_STATE, 1
# 110 "data/maps/LittlerootTown/scripts.pory"
	hideplayer
# 111 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Intro_CloseDoor
# 112 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 113 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	return


LittlerootTown_FatMan::
# 118 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_FatMan_UsePCToStoreItems_Text, MSGBOX_NPC
	end


LittlerootTown_Boy::
# 129 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Boy_ProfBitch_Text, MSGBOX_NPC
	end


LittlerootTown_Sign_Town::
# 158 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_Sign_Town_Text, MSGBOX_SIGN
	end


LittlerootTown_Sign_Lab::
# 168 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_LabSign_Text, MSGBOX_SIGN
	end


LittlerootTown_Sign_BrendansHouse::
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_Sign_BrendansHouse_1
# 180 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_HouseSign_Rival_Text, MSGBOX_SIGN
	return

LittlerootTown_Sign_BrendansHouse_1:
# 178 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_HouseSign_Player_Text, MSGBOX_SIGN
	return


LittlerootTown_Sign_MaysHouse::
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_Sign_MaysHouse_1
# 188 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_HouseSign_Rival_Text, MSGBOX_SIGN
	return

LittlerootTown_Sign_MaysHouse_1:
# 186 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_HouseSign_Player_Text, MSGBOX_SIGN
	return


LittlerootTown_Twin::
# 201 "data/maps/LittlerootTown/scripts.pory"
	lock
# 202 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 203 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 6
	goto_if_lt LittlerootTown_Twin_2
# 205 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_Twin_3
# 208 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_Twin_PokemonWillJumpOut_Text, MSGBOX_NPC
LittlerootTown_Twin_1:
# 210 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

LittlerootTown_Twin_2:
# 204 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Twin_ZigzagoonHorde_Text, MSGBOX_NPC
	goto LittlerootTown_Twin_1

LittlerootTown_Twin_3:
# 206 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GoodLuck
	goto LittlerootTown_Twin_1


LittlerootTown_Twin_Reposition_ByRoute::
# 230 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN 10, 2
# 231 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_UP
	return


LittlerootTown_Twin_Reposition_Default::
# 235 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 16, 10
# 236 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
	return


LittlerootTown_Zigzagoon::
# 240 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Zigzagoon_Text, MSGBOX_NPC
	end


LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 250 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
	return


LittlerootTown_EventScript_MoveRivalFromOldale::
# 255 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 256 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	return


LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 261 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_RIVAL_HOUSE_STATE, 5
	return


LittlerootTown_EventScript_GoodLuck::
# 266 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon
# 267 "data/maps/LittlerootTown/scripts.pory"
	release
	end


# 67 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_0:
# 68 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 69 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 69 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 69 "data/maps/LittlerootTown/scripts.pory"
	delay_16
	step_end

# 74 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_1:
# 75 "data/maps/LittlerootTown/scripts.pory"
	walk_down
	step_end

# 80 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_2:
# 81 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 82 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
	step_end

# 87 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_3:
# 88 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 89 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 90 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

# 92 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_4:
# 93 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 94 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 95 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 96 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 100 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_5:
# 101 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 102 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
	step_end

# 104 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_6:
# 105 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 105 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

LittlerootTown_FatMan_UsePCToStoreItems_Text:
# 122 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
	.string "and Pokemon.\p"
	.string "The power of science is staggering!$"

LittlerootTown_Boy_ProfBitch_Text:
# 133 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch tries to spend time\n"
	.string "in the wild. But he is absolutely\l"
	.string "useless in the field.\p"
	.string "One time he got absolutely swarmed\n"
	.string "by some Zigzagoons. Talk about\l"
	.string "useless.\p"
	.string "Might as well start calling him\n"
	.string "Prof. Bitch.$"

LittlerootTown_Mom_OurNewHome_Text:
# 144 "data/maps/LittlerootTown/scripts.pory"
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
# 162 "data/maps/LittlerootTown/scripts.pory"
	.string "Littleroot Town\n"
	.string "“A town that can't be shaded any hue.”$"

LittlerootTown_LabSign_Text:
# 172 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's Pokémon Lab.$"

LittlerootTown_HouseSign_Player_Text:
# 192 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s House.$"

LittlerootTown_HouseSign_Rival_Text:
# 196 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's House.$"

Text_LittlerootTown_Twin_PokemonWillJumpOut_Text:
# 213 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
	.string "If you go outside and go in the grass,\n"
	.string "wild Pokémon will jump out!$"

LittlerootTown_Twin_ZigzagoonHorde_Text:
# 219 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh wow!\p"
	.string "There are so many Zigzagoons\n"
	.string "out to play today.\l"
	.string "Prof. Birch just ran back to\l"
	.string "to his lab, to escape them.\p"
	.string "Is it just me, or does that one\n"
	.string "in the back look a bit strange?$"

LittlerootTown_Zigzagoon_Text:
# 244 "data/maps/LittlerootTown/scripts.pory"
	.string "Zig… Zag…\n"
	.string "Zigzagoon…$"

LittlerootTown_Text_GoodLuckCatchingPokemon:
# 271 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch Pokémon?\n"
	.string "Good luck!$"
