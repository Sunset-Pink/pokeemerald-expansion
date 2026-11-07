AbandonedShip_HiddenFloorRooms_MapScripts::
# 2 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AbandonedShip_HiddenFloorRooms_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AbandonedShip_HiddenFloorRooms_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle
	.2byte 0


# 7 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 8 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ After the below calculation, VAR_TEMP_4 is the room number of the door the player entered
# 9 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Bottom row, left column   (Rm 1)
# 10 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Bottom row, middle column (Rm 2)
# 11 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Bottom row, right column	(Rm 3)
# 12 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Upper row,  left column   (Rm 4)
# 13 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Upper row,  middle column (Rm 5)
# 14 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Upper row,  right column  (Rm 6)
# 15 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle::
# 16 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setvar VAR_TEMP_1, 1
# 17 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 18 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setvar VAR_TEMP_4, 1
# 19 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq VAR_TEMP_2, 21, AbandonedShip_HiddenFloorRooms_EventScript_InMiddleRoomColumn
# 20 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq VAR_TEMP_2, 36, AbandonedShip_HiddenFloorRooms_EventScript_InRightRoomColumn
# 21 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq VAR_TEMP_3, 2, AbandonedShip_HiddenFloorRooms_EventScript_InUpperRoomRow
# 22 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	switch VAR_TEMP_4
# 23 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 1, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1
# 24 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 2, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm2
# 25 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 3, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3
# 26 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 4, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4
# 27 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 5, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5
# 28 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 6, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm6
# 29 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 30 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 31 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_InMiddleRoomColumn::
# 32 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	addvar VAR_TEMP_4, 1
# 33 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 34 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 35 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_InRightRoomColumn::
# 36 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	addvar VAR_TEMP_4, 2
# 37 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 38 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 39 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_InUpperRoomRow::
# 40 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	addvar VAR_TEMP_4, 3
# 41 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 42 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 43 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1::
# 44 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 45 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 10, 10, 0
# 46 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom4Key
# 47 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, AbandonedShip_HiddenFloorRooms_EventScript_Rm4KeySparkle
# 48 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 49 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
# 50 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 51 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 52 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm2::
# 53 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 54 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 55 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3::
# 56 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom1Key
# 57 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_HiddenFloorRooms_EventScript_Rm3NoSparkle
# 58 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 59 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, AbandonedShip_HiddenFloorRooms_EventScript_Rm1KeySparkle
# 60 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 61 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
# 62 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 63 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 64 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm3NoSparkle::
# 65 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 66 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 67 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4::
# 68 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 69 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 8, 5, 0
# 70 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 11, 3, 0
# 71 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom6Key
# 72 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, AbandonedShip_HiddenFloorRooms_EventScript_Rm6KeySparkle
# 73 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 74 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
# 75 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 76 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 77 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5::
# 78 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 79 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 16, 3, 0
# 80 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 25, 2, 0
# 81 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 24, 6, 0
# 82 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom2Key
# 83 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, AbandonedShip_HiddenFloorRooms_EventScript_Rm2KeySparkle
# 84 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 85 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
# 86 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 87 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 88 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm6::
# 89 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 90 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 91 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm1KeySparkle::
# 92 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 42, 10, 0
# 93 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 94 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 95 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm2KeySparkle::
# 96 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 20, 5, 0
# 97 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 98 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 99 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm4KeySparkle::
# 100 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 1, 12, 0
# 101 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 102 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 103 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm6KeySparkle::
# 104 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 1, 2, 0
# 105 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 106 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 107 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Trash::
# 108 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	lockall
# 109 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_HiddenFloorRooms_Text_BrightShinyTrash, MSGBOX_DEFAULT
# 110 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	releaseall
# 111 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end

AbandonedShip_HiddenFloorRooms_Text_BrightShinyTrash:
# 114 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.string "It's bright and shiny!\n"
	.string "But it's just trash…$"
