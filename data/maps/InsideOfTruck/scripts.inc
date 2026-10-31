InsideOfTruck_MapScripts::
# 2 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MapScript_InsideOfTruck_OnLoad
# 3 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MapScript_InsideOfTruck_OnResume
	.byte 0


MapScript_InsideOfTruck_OnLoad:
# 7 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
# 8 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
# 9 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
	end


MapScript_InsideOfTruck_OnResume:
# 14 "data/maps/InsideOfTruck/scripts.pory"
	setstepcallback STEP_CB_TRUCK
	end


Script_InsideOfTruck_GameInit::
# 19 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 20 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
# 0 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_InsideOfTruck_GameInit_2
# 24 "data/maps/InsideOfTruck/scripts.pory"
	call Script_InsideOfTruck_GameInit_FemaleStart
Script_InsideOfTruck_GameInit_1:
# 26 "data/maps/InsideOfTruck/scripts.pory"
	call Script_InsideOfTruck_GameInit_ConfigSettings
	return

Script_InsideOfTruck_GameInit_2:
# 22 "data/maps/InsideOfTruck/scripts.pory"
	call Script_InsideOfTruck_GameInit_MaleStart
	goto Script_InsideOfTruck_GameInit_1


Script_InsideOfTruck_GameInit_MaleStart::
# 30 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 31 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
# 32 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 33 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_MOMS_GIFT_MAYS_HOUSE
# 34 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
# 35 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
# 36 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 37 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
# 38 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 3, 10
	return


Script_InsideOfTruck_GameInit_FemaleStart::
# 43 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
# 44 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
# 45 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 46 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_MOMS_GIFT_BRENDANS_HOUSE
# 47 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
# 48 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
# 49 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 50 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 1
# 51 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 12, 10
	return


Script_InsideOfTruck_GameInit_ConfigSettings::
# 56 "data/maps/InsideOfTruck/scripts.pory"
	message Text_InsideOfTruck_GameInit_ConfigSettings_ReadCarefully
# 57 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 58 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 59 "data/maps/InsideOfTruck/scripts.pory"
	delay 60
# 60 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_insideOfTruck_GameInit_ConfigSettings_ChangeDefaultSettings, MSGBOX_YESNO
# 61 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_2
# 64 "data/maps/InsideOfTruck/scripts.pory"
	call Script_InsideOfTruck_GameInit_ConfigSettings_SetDefault
Script_InsideOfTruck_GameInit_ConfigSettings_1:
# 66 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_QUEST_INTRO_STATE, 1
	end

Script_InsideOfTruck_GameInit_ConfigSettings_2:
# 62 "data/maps/InsideOfTruck/scripts.pory"
	call Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu
	goto Script_InsideOfTruck_GameInit_ConfigSettings_1


Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu::
# 90 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_WhichOption
# 91 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_Text_0, 0
# 92 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_IS_MIN_GRINDING_MODE, Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_2
# 95 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_Text_2, 1
Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_1:
# 97 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_Text_3, 2
# 99 "data/maps/InsideOfTruck/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, NULL
# 101 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_5
# 103 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_6
# 105 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_7
	return

Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_2:
# 93 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_Text_1, 1
	goto Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_1

Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_5:
# 102 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu
	return

Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_6:
# 104 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu
	return

Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_7:
# 106 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_InsideOfTruck_GameInit_ConfigSettings_SaveSettings
	return


Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu::
# 115 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_WhichDifficulty
# 116 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_VANILLA
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_2
# 119 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_1, DIFFICULTY_VANILLA
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_1:
# 122 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_6
# 125 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_3, DIFFICULTY_EASY
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_5:
# 128 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_NORMAL
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_10
# 131 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_5, DIFFICULTY_NORMAL
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_9:
# 134 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_HARD
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_14
# 137 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_7, DIFFICULTY_HARD
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_13:
# 140 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_Text_3, MULTI_B_PRESSED
# 141 "data/maps/InsideOfTruck/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 143 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_18
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_17:
# 147 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, DIFFICULTY_VANILLA
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_21
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_20:
# 161 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, DIFFICULTY_EASY
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_24
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_23:
# 175 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, DIFFICULTY_NORMAL
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_31
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_30:
# 189 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, DIFFICULTY_HARD
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_39
	return

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_2:
# 117 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_0, DIFFICULTY_VANILLA
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_1

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_6:
# 123 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_2, DIFFICULTY_EASY
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_5

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_10:
# 129 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_4, DIFFICULTY_NORMAL
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_9

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_14:
# 135 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_6, DIFFICULTY_HARD
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_13

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_18:
# 144 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_17

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_21:
# 148 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Vanilla_Description
# 149 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_VANILLA
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_27
# 152 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Vanilla_TurnOn, MSGBOX_YESNO
# 153 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_37
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_26:
# 158 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_20

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_24:
# 162 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Easy_Description
# 163 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_34
# 166 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Easy_TurnOn, MSGBOX_YESNO
# 167 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_45
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_33:
# 172 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_23

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_27:
# 150 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Vanilla_AlreadySelected
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_26

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_31:
# 176 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Normal_Description
# 177 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_NORMAL
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_42
# 180 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Normal_TurnOn, MSGBOX_YESNO
# 181 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_51
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_41:
# 186 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_30

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_34:
# 164 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Easy_AlreadySelected
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_33

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_37:
# 154 "data/maps/InsideOfTruck/scripts.pory"
	setdifficulty DIFFICULTY_VANILLA
# 155 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Vanilla_Enabled
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_26

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_39:
# 190 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Hard_Description
# 191 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_HARD
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_48
# 194 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Hard_TurnOn, MSGBOX_YESNO
# 195 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_53
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_47:
# 200 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu
	return

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_42:
# 178 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Normal_AlreadySelected
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_41

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_45:
# 168 "data/maps/InsideOfTruck/scripts.pory"
	setdifficulty DIFFICULTY_EASY
# 169 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Easy_Enabled
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_33

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_48:
# 192 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Hard_AlreadySelected
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_47

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_51:
# 182 "data/maps/InsideOfTruck/scripts.pory"
	setdifficulty DIFFICULTY_NORMAL
# 183 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Normal_Enabled
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_41

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_53:
# 196 "data/maps/InsideOfTruck/scripts.pory"
	setdifficulty DIFFICULTY_HARD
# 197 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Hard_Enabled
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_47


Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu::
# 327 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_MinGrinding_Description
# 328 "data/maps/InsideOfTruck/scripts.pory"
	compare FLAG_IS_MIN_GRINDING_MODE, 0
	goto_if_ne Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu_2
# 335 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_MinGrinding_TurnOn, MSGBOX_YESNO
# 336 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu_7
Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu_1:
# 341 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu
	return

Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu_2:
# 329 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_MinGrinding_TurnOff, MSGBOX_YESNO
# 330 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu_5
	goto Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu_1

Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu_5:
# 331 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_IS_MIN_GRINDING_MODE
# 332 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_MinGrinding_Disabled
	goto Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu_1

Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu_7:
# 337 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_IS_MIN_GRINDING_MODE
# 338 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_MinGrinding_Enabled
	goto Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu_1


Script_InsideOfTruck_GameInit_ConfigSettings_SetDefault::
# 376 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_DefaultSettingsSaved
# 377 "data/maps/InsideOfTruck/scripts.pory"
	setdifficulty DIFFICULTY_NORMAL
# 378 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_IS_MIN_GRINDING_MODE
# 379 "data/maps/InsideOfTruck/scripts.pory"
	special ForceBattleStyleSet
# 380 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
	return


Script_InsideOfTruck_GameInit_ConfigSettings_SaveSettings::
# 389 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_CustomSettingsSaved
# 390 "data/maps/InsideOfTruck/scripts.pory"
	special ForceBattleStyleSet
# 391 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
	return


Script_InsideOfTruck_Interact_MovingBox::
# 400 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_BoxPrintedWithMonLogo, MSGBOX_SIGN
	end


Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_Text_0:
# 91 "data/maps/InsideOfTruck/scripts.pory"
	.string "Difficulty Options$"

Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_Text_1:
# 93 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Grinding Mode$"

Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_Text_2:
# 95 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Minimal Griding Mode$"

Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_Text_3:
# 97 "data/maps/InsideOfTruck/scripts.pory"
	.string "Done$"

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_0:
# 117 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Vanilla$"

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_1:
# 119 "data/maps/InsideOfTruck/scripts.pory"
	.string "Vanilla$"

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_2:
# 123 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Easy$"

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_3:
# 125 "data/maps/InsideOfTruck/scripts.pory"
	.string "Easy$"

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_4:
# 129 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal$"

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_5:
# 131 "data/maps/InsideOfTruck/scripts.pory"
	.string "Normal$"

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_6:
# 135 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Hard$"

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_7:
# 137 "data/maps/InsideOfTruck/scripts.pory"
	.string "Hard$"

Text_InsideOfTruck_GameInit_ConfigSettings_ReadCarefully:
# 70 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Please take a moment to read the\n"
	.string "following carefully.$"

Text_insideOfTruck_GameInit_ConfigSettings_ChangeDefaultSettings:
# 75 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Would you like to change the default\n"
	.string "settings?\p"
	.string "The default settings are as follows:\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Difficulty{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} - more challenging\n"
	.string "trainer battles with hard level caps.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Grinding Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} - this\n"
	.string "guarantees all Pokémon will have \l"
	.string "perfect IVs and EVs are removed\l"
	.string "from the game.\p"
	.string "With this information in mind:\n"
	.string "Would you like to change the settings?$"

Text_InsideOfTruck_GameInit_ConfigSettings_WhichOption::
# 110 "data/maps/InsideOfTruck/scripts.pory"
	.string "Which option would you like to customize?\n$"

Text_InsideOfTruck_GameInit_ConfigSettings_WhichDifficulty::
# 204 "data/maps/InsideOfTruck/scripts.pory"
	.string "Which difficulty mode would you like\n"
	.string "to play on?$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Vanilla_Description::
# 209 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Vanilla Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} has vanilla trainer\n"
	.string "teams, with minor changes to movests.\l"
	.string "There have been updates to Pokémon,\l"
	.string "Abilities, Item, and Moves.\p"
	.string "There is a no level cap, and Boss teams\n"
	.string "will not scale with the Player's team.\p"
	.string "The player is allowed to access the\n"
	.string "the Bag during any battle.\p"
	.string "Additionally, the player can change the\n"
	.string "battle style from Set to Shift.\p"
	.string "This mode is meant to feel closer to a\n"
	.string "regular Pokémon game, and is considered\l"
	.string "to be the easiest.\p$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Vanilla_AlreadySelected::
# 225 "data/maps/InsideOfTruck/scripts.pory"
	.string "You currently have {COLOR GREEN}{SHADOW LIGHT_GREEN}Vanilla Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.\n"
	.string "Please selected a different difficulty\l"
	.string "mode if you wish to change it.$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Vanilla_TurnOn::
# 231 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn on {COLOR GREEN}{SHADOW LIGHT_GREEN}Vanilla Mode?$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Vanilla_Enabled::
# 235 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Vanilla Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Easy_Description::
# 239 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} has more challenging\n"
	.string "trainer battles with updated teams.\p"
	.string "There have been updates to Pokémon,\n"
	.string "Abilities, Items, and Moves.\p"
	.string "There is a hard level cap, and Boss teams\n"
	.string "will scale with the Player's team.\p"
	.string "However, they will be 2 levels lower\n"
	.string "than normal.\p"
	.string "The player is allowed to access the\n"
	.string "the Bag during any battle.\p"
	.string "Additionally, the player can change the\n"
	.string "battle style from Set to Shift.\p"
	.string "This mode is more challenging than\n"
	.string "a regular Pokémon game.\p$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Easy_AlreadySelected::
# 256 "data/maps/InsideOfTruck/scripts.pory"
	.string "You currently have {COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.\n"
	.string "Please selected a different difficulty\l"
	.string "mode if you wish to change it.$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Easy_TurnOn::
# 262 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn on {COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode?$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Easy_Enabled::
# 266 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Normal_Description::
# 270 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} has more challenging\n"
	.string "trainer battles with updated teams.\p"
	.string "There have been updates to Pokémon,\n"
	.string "Abilities, Items, and Moves.\p"
	.string "There is a hard level cap, and Boss teams\n"
	.string "will scale with the Player's team.\p"
	.string "The player is not allowed to access the\n"
	.string "the Bag during trainer battles.\p"
	.string "Additionally, battle style is set to Set.\p"
	.string "This mode is primarily what the game\n"
	.string "has been balanced around.\p$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Normal_AlreadySelected::
# 284 "data/maps/InsideOfTruck/scripts.pory"
	.string "You currently have {COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.\n"
	.string "Please selected a different difficulty\l"
	.string "mode if you wish to change it.$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Normal_TurnOn::
# 290 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn on {COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode?\n$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Normal_Enabled::
# 294 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Hard_Description::
# 298 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Hard Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} has more challenging\n"
	.string "trainer battles with updated teams.\p"
	.string "There have been updates to Pokémon, \n"
	.string "Abilities, Items, and Moves.\p"
	.string "Certain Pokémon, Moves and Abilities\n"
	.string "are not available for the Player.\p"
	.string "There is a hard level cap, and Boss teams\n"
	.string "will scale with the Player's team.\p"
	.string "The player is not allowed to access the\n"
	.string "the Bag during trainer battles.\p"
	.string "Additionally, battle style is set to Set.\p$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Hard_AlreadySelected::
# 312 "data/maps/InsideOfTruck/scripts.pory"
	.string "You currently have {COLOR GREEN}{SHADOW LIGHT_GREEN}Hard Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.\n"
	.string "Please selected a different difficulty\l"
	.string "mode if you wish to change it.$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Hard_TurnOn::
# 318 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn on {COLOR GREEN}{SHADOW LIGHT_GREEN}Hard Mode?\n$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Hard_Enabled::
# 322 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Hard Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.$"

Text_InsideOfTruck_GameInit_ConfigSettings_MinGrinding_Description::
# 344 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Griding Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} guarantees all\n"
	.string "Pokémon to have perfect IVs,\l"
	.string "and EVs cannot be obtained.\l"
	.string "Boss Pokémon will not have EVs either.\p"
	.string "If this mode is disabled, obtainable\n"
	.string "Pokémon will have random IVs and can be\l"
	.string "EV trained.\l"
	.string "Boss Pokémon will be EV trained.\p"
	.string "If you don't know what that all means\n"
	.string "you want this enabled.\p$"

Text_InsideOfTruck_GameInit_ConfigSettings_MinGrinding_TurnOff::
# 357 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn\n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Minimal Grinding Mode off?$"

Text_InsideOfTruck_GameInit_ConfigSettings_MinGrinding_TurnOn::
# 362 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Grinding Mode on?$"

Text_InsideOfTruck_GameInit_ConfigSettings_MinGrinding_Enabled::
# 367 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Grinding Mode enabled.$"

Text_InsideOfTruck_GameInit_ConfigSettings_MinGrinding_Disabled::
# 371 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Minimal Griding Mode disabled.$"

Text_InsideOfTruck_GameInit_ConfigSettings_DefaultSettingsSaved:
# 383 "data/maps/InsideOfTruck/scripts.pory"
	.string "Default settings saved.\n"
	.string "Good luck!$"

Text_InsideOfTruck_GameInit_ConfigSettings_CustomSettingsSaved:
# 394 "data/maps/InsideOfTruck/scripts.pory"
	.string "Custom settings saved.\n"
	.string "Good luck!$"

Text_InsideOfTruck_BoxPrintedWithMonLogo:
# 404 "data/maps/InsideOfTruck/scripts.pory"
	.string "The box is printed with a Pokémon logo.\p"
	.string "It's a Pokémon brand moving and\n"
	.string "delivery service.$"
