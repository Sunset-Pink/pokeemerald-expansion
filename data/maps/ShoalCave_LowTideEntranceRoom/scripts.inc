ShoalCave_LowTideEntranceRoom_MapScripts::
# 2 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShoalCave_LowTideEntranceRoom_OnTransition
	.byte 0


# 4 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 5 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_OnTransition:
# 6 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	special UpdateShoalTideFlag
# 7 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_set FLAG_SYS_SHOAL_TIDE, ShoalCave_LowTideEntranceRoom_EventScript_SetHighTide
# 8 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_SetLowTide
# 9 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 10 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_SetHighTide::
# 11 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setmaplayoutindex LAYOUT_SHOAL_CAVE_HIGH_TIDE_ENTRANCE_ROOM
# 12 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 13 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 14 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_SetLowTide::
# 15 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setmaplayoutindex LAYOUT_SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM
# 16 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 17 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 18 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert::
# 19 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	lock
# 20 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	faceplayer
# 21 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	dotimebasedevents
# 22 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	call_if_set FLAG_SYS_SHOAL_ITEM, ShoalCave_LowTideEntranceRoom_EventScript_ResetShoalItems
# 23 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SALT, 4
# 24 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ShoalCave_LowTideEntranceRoom_EventScript_NotEnoughShoalSaltOrShells
# 25 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SHELL, 4
# 26 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ShoalCave_LowTideEntranceRoom_EventScript_NotEnoughShoalSaltOrShells
# 27 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_WouldYouLikeShellBell, MSGBOX_YESNO
# 28 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ShoalCave_LowTideEntranceRoom_EventScript_DeclineShellBell
# 29 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitemspace ITEM_SHELL_BELL
# 30 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreed
# 31 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, ShoalCave_LowTideEntranceRoom_EventScript_NoRoomForShellBell
# 32 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_MakeShellBellRightAway, MSGBOX_DEFAULT
# 33 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	removeitem ITEM_SHOAL_SALT, 4
# 34 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	removeitem ITEM_SHOAL_SHELL, 4
# 35 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	giveitem ITEM_SHELL_BELL
# 36 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull  @ Never FALSE, we already made sure there will be room in the bag.
# 37 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_ExplainShellBell, MSGBOX_DEFAULT
# 38 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setflag FLAG_TEMP_2  @ Not read. Perhaps meant to stop him from re-explaining the Shell Bell if multiple are received in one sitting.
# 39 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
# 40 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 41 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 42 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
@ If the bag is full, check if a slot will be freed when 4 Shoal Salt or Shells are given
# 43 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreed::
# 44 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SALT, 5
# 45 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreedShells
# 46 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	return
# 47 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 48 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreedShells::
# 49 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SHELL, 5
# 50 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ShoalCave_LowTideEntranceRoom_EventScript_NoSpaceWillBeFreed
# 51 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	return
# 52 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 53 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_NoSpaceWillBeFreed::
# 54 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setvar VAR_RESULT, 2
# 55 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	return
# 56 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 57 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_NoRoomForShellBell::
# 58 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_NoSpaceInYourBag, MSGBOX_DEFAULT
# 59 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
# 60 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 61 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 62 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_NotEnoughShoalSaltOrShells::
# 63 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SALT
# 64 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ShoalCave_LowTideEntranceRoom_EventScript_HasSomeShoalSaltOrShell
# 65 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SHELL
# 66 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ShoalCave_LowTideEntranceRoom_EventScript_HasSomeShoalSaltOrShell
# 67 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_AreYouPlanningOnGoingInThere, MSGBOX_DEFAULT
# 68 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
# 69 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 70 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 71 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_HasSomeShoalSaltOrShell::
# 72 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_BringMe4ShoalSaltAndShells, MSGBOX_DEFAULT
# 73 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
# 74 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 75 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 76 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_DeclineShellBell::
# 77 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_WantedToMakeShellBell, MSGBOX_DEFAULT
# 78 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
# 79 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 80 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 81 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_ResetShoalItems::
# 82 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SALT_1
# 83 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SALT_2
# 84 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SALT_3
# 85 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SALT_4
# 86 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SHELL_1
# 87 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SHELL_2
# 88 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SHELL_3
# 89 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SHELL_4
# 90 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_SYS_SHOAL_ITEM
# 91 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	return
