InsideOfTruck_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, MapScript_InsideOfTruck_OnLoad
	map_script MAP_SCRIPT_ON_RESUME, MapScript_InsideOfTruck_OnResume
	.byte 0


MapScript_InsideOfTruck_OnLoad:
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
	end


MapScript_InsideOfTruck_OnResume:
	setstepcallback STEP_CB_TRUCK
	end


Script_InsideOfTruck_GameInit::
	lockall
	setflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Script_InsideOfTruck_GameInit_2
	call Script_InsideOfTruck_GameInit_FemaleStart
Script_InsideOfTruck_GameInit_1:
	call Script_InsideOfTruck_GameInit_ConfigSettings
	return

Script_InsideOfTruck_GameInit_2:
	call Script_InsideOfTruck_GameInit_MaleStart
	goto Script_InsideOfTruck_GameInit_1


Script_InsideOfTruck_GameInit_MaleStart::
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
	setdynamicwarp MAP_LITTLEROOT_TOWN, 3, 10
	return


Script_InsideOfTruck_GameInit_FemaleStart::
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 1
	setdynamicwarp MAP_LITTLEROOT_TOWN, 12, 10
	return


Script_InsideOfTruck_GameInit_ConfigSettings::
	message Text_InsideOfTruck_GameInit_ConfigSettings_ReadCarefully
	waitmessage
	delay 60
	delay 60
	msgbox Text_insideOfTruck_GameInit_ConfigSettings_ChangeDefaultSettings, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_2
	call Script_InsideOfTruck_GameInit_ConfigSettings_SetDefault
Script_InsideOfTruck_GameInit_ConfigSettings_1:
	setvar VAR_QUEST_INTRO_STATE, 1
	end

Script_InsideOfTruck_GameInit_ConfigSettings_2:
	call Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu
	goto Script_InsideOfTruck_GameInit_ConfigSettings_1


Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu::
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_WhichOption
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_Text_0, 0
	goto_if_set FLAG_IS_MIN_GRINDING_MODE, Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_2
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_Text_2, 1
Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_1:
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_Text_3, 2
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, NULL
	compare VAR_RESULT, 0
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_5
	compare VAR_RESULT, 1
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_6
	compare VAR_RESULT, 2
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_7
	return

Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_2:
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_Text_1, 1
	goto Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_1

Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_5:
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu
	return

Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_6:
	goto Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu
	return

Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_7:
	goto Script_InsideOfTruck_GameInit_ConfigSettings_SaveSettings
	return


Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu::
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_WhichDifficulty
	compare VAR_DIFFICULTY, DIFFICULTY_VANILLA
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_2
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_1, DIFFICULTY_VANILLA
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_1:
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_6
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_3, DIFFICULTY_EASY
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_5:
	compare VAR_DIFFICULTY, DIFFICULTY_NORMAL
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_10
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_5, DIFFICULTY_NORMAL
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_9:
	compare VAR_DIFFICULTY, DIFFICULTY_HARD
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_14
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_7, DIFFICULTY_HARD
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_13:
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_Text_3, MULTI_B_PRESSED
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_18
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_17:
	compare VAR_RESULT, DIFFICULTY_VANILLA
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_21
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_20:
	compare VAR_RESULT, DIFFICULTY_EASY
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_24
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_23:
	compare VAR_RESULT, DIFFICULTY_NORMAL
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_31
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_30:
	compare VAR_RESULT, DIFFICULTY_HARD
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_39
	return

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_2:
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_0, DIFFICULTY_VANILLA
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_1

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_6:
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_2, DIFFICULTY_EASY
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_5

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_10:
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_4, DIFFICULTY_NORMAL
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_9

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_14:
	dynmultipush Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_6, DIFFICULTY_HARD
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_13

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_18:
	goto Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_17

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_21:
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Vanilla_Description
	compare VAR_DIFFICULTY, DIFFICULTY_VANILLA
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_27
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Vanilla_TurnOn, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_37
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_26:
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_20

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_24:
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Easy_Description
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_34
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Easy_TurnOn, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_45
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_33:
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_23

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_27:
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Vanilla_AlreadySelected
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_26

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_31:
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Normal_Description
	compare VAR_DIFFICULTY, DIFFICULTY_NORMAL
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_42
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Normal_TurnOn, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_51
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_41:
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_30

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_34:
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Easy_AlreadySelected
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_33

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_37:
	setdifficulty DIFFICULTY_VANILLA
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Vanilla_Enabled
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_26

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_39:
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Hard_Description
	compare VAR_DIFFICULTY, DIFFICULTY_HARD
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_48
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Hard_TurnOn, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_53
Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_47:
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu
	return

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_42:
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Normal_AlreadySelected
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_41

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_45:
	setdifficulty DIFFICULTY_EASY
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Easy_Enabled
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_33

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_48:
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Hard_AlreadySelected
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_47

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_51:
	setdifficulty DIFFICULTY_NORMAL
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Normal_Enabled
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_41

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_53:
	setdifficulty DIFFICULTY_HARD
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Hard_Enabled
	goto Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_47


Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu::
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_MinGrinding_Description
	compare FLAG_IS_MIN_GRINDING_MODE, 0
	goto_if_ne Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu_2
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_MinGrinding_TurnOn, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu_7
Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu_1:
	goto Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu
	return

Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu_2:
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_MinGrinding_TurnOff, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu_5
	goto Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu_1

Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu_5:
	clearflag FLAG_IS_MIN_GRINDING_MODE
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_MinGrinding_Disabled
	goto Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu_1

Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu_7:
	clearflag FLAG_IS_MIN_GRINDING_MODE
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_MinGrinding_Enabled
	goto Script_InsideOfTruck_GameInit_ConfigSettings_MinGrindingMenu_1


Script_InsideOfTruck_GameInit_ConfigSettings_SetDefault::
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_DefaultSettingsSaved
	setdifficulty DIFFICULTY_NORMAL
	setflag FLAG_IS_MIN_GRINDING_MODE
	special ForceBattleStyleSet
	releaseall
	return


Script_InsideOfTruck_GameInit_ConfigSettings_SaveSettings::
	msgbox Text_InsideOfTruck_GameInit_ConfigSettings_CustomSettingsSaved
	special ForceBattleStyleSet
	releaseall
	return


Script_InsideOfTruck_Interact_MovingBox::
	msgbox Text_InsideOfTruck_BoxPrintedWithMonLogo, MSGBOX_SIGN
	end


Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_Text_0:
	.string "Difficulty Options$"

Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_Text_1:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Grinding Mode$"

Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_Text_2:
	.string "{COLOR RED}{SHADOW LIGHT_RED}Minimal Griding Mode$"

Script_InsideOfTruck_GameInit_ConfigSettings_SettingsMenu_Text_3:
	.string "Done$"

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_0:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Vanilla$"

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_1:
	.string "Vanilla$"

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_2:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Easy$"

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_3:
	.string "Easy$"

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_4:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal$"

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_5:
	.string "Normal$"

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_6:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Hard$"

Script_InsideOfTruck_GameInit_ConfigSettings_DifficultyMenu_Text_7:
	.string "Hard$"

Text_InsideOfTruck_GameInit_ConfigSettings_ReadCarefully:
	.string "{COLOR RED}{SHADOW LIGHT_RED}Please take a moment to read the\n"
	.string "following carefully.$"

Text_insideOfTruck_GameInit_ConfigSettings_ChangeDefaultSettings:
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
	.string "Which option would you like to customize?\n$"

Text_InsideOfTruck_GameInit_ConfigSettings_WhichDifficulty::
	.string "Which difficulty mode would you like\n"
	.string "to play on?$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Vanilla_Description::
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
	.string "You currently have {COLOR GREEN}{SHADOW LIGHT_GREEN}Vanilla Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.\n"
	.string "Please selected a different difficulty\l"
	.string "mode if you wish to change it.$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Vanilla_TurnOn::
	.string "Do you want to turn on {COLOR GREEN}{SHADOW LIGHT_GREEN}Vanilla Mode?$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Vanilla_Enabled::
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Vanilla Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Easy_Description::
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
	.string "You currently have {COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.\n"
	.string "Please selected a different difficulty\l"
	.string "mode if you wish to change it.$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Easy_TurnOn::
	.string "Do you want to turn on {COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode?$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Easy_Enabled::
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Normal_Description::
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
	.string "You currently have {COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.\n"
	.string "Please selected a different difficulty\l"
	.string "mode if you wish to change it.$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Normal_TurnOn::
	.string "Do you want to turn on {COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode?\n$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Normal_Enabled::
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Hard_Description::
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
	.string "You currently have {COLOR GREEN}{SHADOW LIGHT_GREEN}Hard Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.\n"
	.string "Please selected a different difficulty\l"
	.string "mode if you wish to change it.$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Hard_TurnOn::
	.string "Do you want to turn on {COLOR GREEN}{SHADOW LIGHT_GREEN}Hard Mode?\n$"

Text_InsideOfTruck_GameInit_ConfigSettings_Difficulty_Hard_Enabled::
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Hard Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.$"

Text_InsideOfTruck_GameInit_ConfigSettings_MinGrinding_Description::
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
	.string "Do you want to turn\n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Minimal Grinding Mode off?$"

Text_InsideOfTruck_GameInit_ConfigSettings_MinGrinding_TurnOn::
	.string "Do you want to turn\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Grinding Mode on?$"

Text_InsideOfTruck_GameInit_ConfigSettings_MinGrinding_Enabled::
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Grinding Mode enabled.$"

Text_InsideOfTruck_GameInit_ConfigSettings_MinGrinding_Disabled::
	.string "{COLOR RED}{SHADOW LIGHT_RED}Minimal Griding Mode disabled.$"

Text_InsideOfTruck_GameInit_ConfigSettings_DefaultSettingsSaved:
	.string "Default settings saved.\n"
	.string "Good luck!$"

Text_InsideOfTruck_GameInit_ConfigSettings_CustomSettingsSaved:
	.string "Custom settings saved.\n"
	.string "Good luck!$"

Text_InsideOfTruck_BoxPrintedWithMonLogo:
	.string "The box is printed with a Pokémon logo.\p"
	.string "It's a Pokémon brand moving and\n"
	.string "delivery service.$"
