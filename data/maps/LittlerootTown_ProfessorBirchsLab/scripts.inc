LittlerootTown_ProfessorBirchsLab_MapScripts::
# 2 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Script_LittlerootTown_ProfessorBirchsLab_OnTransition
# 3 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_QUEST_INTRO_STATE, 8, Script_BirchLab_PokedexEvent
	.2byte 0


Script_LittlerootTown_ProfessorBirchsLab_OnTransition::
# 9 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 7
	goto_if_lt Script_LittlerootTown_ProfessorBirchsLab_OnTransition_2
Script_LittlerootTown_ProfessorBirchsLab_OnTransition_1:
# 14 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 8
	goto_if_eq Script_LittlerootTown_ProfessorBirchsLab_OnTransition_4
	return

Script_LittlerootTown_ProfessorBirchsLab_OnTransition_2:
# 11 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_F, 0
	goto Script_LittlerootTown_ProfessorBirchsLab_OnTransition_1

Script_LittlerootTown_ProfessorBirchsLab_OnTransition_4:
# 15 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_BIRCHS_LAB_BIRCH, 6, 4
# 16 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_BIRCHS_LAB_BIRCH, MOVEMENT_TYPE_FACE_DOWN
# 17 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_RIVAL
# 18 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
	return


LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 23 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 24 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
	checkplayergender
# 0 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Rival_2
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext, MSGBOX_NPC
LittlerootTown_ProfessorBirchsLab_EventScript_Rival_1:
# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Rival_2:
# 26 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext, MSGBOX_NPC
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Rival_1


Script_LittlerootTown_ProfessorBirchsLab_Interact_Books::
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Books, MSGBOX_SIGN
	end


Script_LittlerootTown_ProfessorBirchsLab_Interact_Machine::
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Machine, MSGBOX_SIGN
	end


Script_LittlerootTown_ProfessorBirchsLab_Interact_PC::
# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_PC, MSGBOX_SIGN
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
	end


Script_LittlerootTown_ProfessorBirchsLab_Interact_Bookshelf::
# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Bookshelf
	end


Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left::
# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 79 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 5
	goto_if_le Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_2
# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_3
# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_3
Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_1:
# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_2:
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Pokeballs_BeforeSelection
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_3:
# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferstarterinfo STR_VAR_1, 0
# 83 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic VAR_0x8006, 10, 3
# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_0, MSGBOX_YESNO
# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_8
# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_GiveStarter
# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_2
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_LEFT_BALL
# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_8:
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_1
# 88 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle::
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 5
	goto_if_le Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_2
# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_3
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_3
Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_1:
# 130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_2:
# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Pokeballs_BeforeSelection
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_3:
# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferstarterinfo STR_VAR_1, 1
# 112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic VAR_0x8006, 10, 3
# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_0, MSGBOX_YESNO
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_8
# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_GiveStarter
# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_2
# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_MIDDLE_BALL
# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Middle_8:
# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_1
# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right::
# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 5
	goto_if_le Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_2
# 139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_3
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_3
Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_1:
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_2:
# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Pokeballs_BeforeSelection
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_3:
# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferstarterinfo STR_VAR_1, 2
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic VAR_0x8006, 10, 3
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_0, MSGBOX_YESNO
# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_8
# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_GiveStarter
# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_2
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_RIGHT_BALL
# 155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Right_8:
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_1
# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return


Script_LittlerootTown_ProfessorBirchsLab_GiveStarter::
# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, Script_LittlerootTown_ProfessorBirchsLab_GiveStarter_1
# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon VAR_0x8006, 5
	return

Script_LittlerootTown_ProfessorBirchsLab_GiveStarter_1:
# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon VAR_0x8006, 5, shinyMode = TRUE
	return


Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose::
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_QUEST_INTRO_STATE, 7
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_2
Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_1:
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Rival_MoveTo_Rout103
# 187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_STARTER_MON
# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_5
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_6
# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_7
	return

Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_2:
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_1

Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_5:
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Birch_Starter_RivalsChoice_Torchic
	return

Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_6:
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Birch_Starter_RivalsChoice_Mudkip
	return

Script_LittlerootTown_ProfessorBirchsLab_Starter_PostChose_7:
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Birch_Starter_RivalsChoice_Treecko
	return


Rival_MoveTo_Rout103:
	checkplayergender
# 0 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Rival_MoveTo_Rout103_2
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
Rival_MoveTo_Rout103_1:
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RIVAL_STATE, 2
	return

Rival_MoveTo_Rout103_2:
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	goto Rival_MoveTo_Rout103_1


Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide::
# 211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 5
	goto_if_lt Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_2
# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_QUEST_INTRO_STATE, 6
	goto_if_eq Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_3
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_FieldWork
Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_1:
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	end

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_2:
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_Early, MSGBOX_NPC
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_3:
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_MONOTYPE_STARTERS, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_7
# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_7:
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_1


Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono::
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_TEMP_F
# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_2
# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_3
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_4
# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_5
# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_6
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_7
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_8
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_9
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_10
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 9, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_11
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 10, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_12
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 11, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_13
# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 12, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_14
# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 13, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_15
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 14, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_16
# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_Text_0, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_2:
# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Fighting, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_3:
# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Flying, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_4:
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Poison, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_5:
# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Ground, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_6:
# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Rock, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_7:
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Bug, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_8:
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Ghost, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_9:
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Steel, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_10:
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Electric, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_11:
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Psychic, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_12:
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Ice, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_13:
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Dragon, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_14:
# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Dark, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_15:
# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Normal, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_16:
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Mono_Fairy, MSGBOX_NPC
	return


Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen::
# 385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_TEMP_F
# 386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_2
# 388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_3
# 390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_4
# 392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_5
# 394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_6
# 396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_7
# 398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_8
# 400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_9
# 402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_10
# 405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_Text_0, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_2:
# 387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen1, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_3:
# 389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen2, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_4:
# 391 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen3, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_5:
# 393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen4, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_6:
# 395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen5, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_7:
# 397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen6, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_8:
# 399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen7, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_9:
# 401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen8, MSGBOX_NPC
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformGen_10:
# 403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_Aide_Gen9, MSGBOX_NPC
	return


Script_BirchLab_PokedexEvent:
# 604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call BirchLab_PokedexEvent_InitialMovements
# 606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call BirchLab_PokedexEvent_EmphasisBirchBeforeTalking
# 607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex
# 608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call BirchLab_PokedexEvent_GivePokedex
# 609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex
# 610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call BirchLab_PokedexEvent_GiveStarterItems
# 611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox BirchLab_PokedexEvent_GoodLuckOnYourAdventure
# 614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_QUEST_INTRO_STATE, 9
# 615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RIVAL_STATE, 5
# 616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end


BirchLab_PokedexEvent_InitialMovements:
# 623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_PLAYER, BirchLab_PokedexEvent_InitialMovements_Movement_0
# 626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_RIVAL, BirchLab_PokedexEvent_InitialMovements_Movement_1
# 632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
	return


BirchLab_PokedexEvent_EmphasisBirchBeforeTalking:
# 637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, BirchLab_PokedexEvent_EmphasisBirchBeforeTalking_Movement_0
# 638 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
	return


BirchLab_PokedexEvent_GivePokedex:
# 645 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox BirchLab_PokedexEvent_ReceivedPokedex_Text
# 647 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 648 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 651 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 652 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	return


BirchLab_PokedexEvent_GiveStarterItems:
# 663 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitemfast ITEM_POKE_BALL, 99
# 664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitemfast ITEM_QUICK_BALL, 99
# 665 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitemfast ITEM_ORAN_BERRY, 10
# 668 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox BirchLab_PokedexEvent_BirchBall_Text
# 669 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 670 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox BirchLab_PokedexEvent_RecievedBalls_Text
# 671 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_PLAYER, BirchLab_PokedexEvent_GiveStarterItems_Movement_0
# 676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox BirchLab_PokedexEvent_RivalBerry_BeforeText
# 680 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 681 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 682 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox BirchLab_PokedexEvent_RecievedBerries_Text
# 683 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 684 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 686 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox BirchLab_PokedexEvent_RivalBerry_AfterText
# 687 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
	return


LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 727 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 728 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	pokenavcall LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall
# 729 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 730 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end


# 623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
BirchLab_PokedexEvent_InitialMovements_Movement_0:
# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
	step_end

# 626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
BirchLab_PokedexEvent_InitialMovements_Movement_1:
# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_8
# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_8
# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_8
# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_8
# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_8
# 628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
	step_end

# 637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
BirchLab_PokedexEvent_EmphasisBirchBeforeTalking_Movement_0:
# 637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
	step_end

# 675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
BirchLab_PokedexEvent_GiveStarterItems_Movement_0:
# 675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_left
	step_end

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_0:
# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_1:
# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You did not choose this Pokémon$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_2:
# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_Left_Text_3:
# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better not get greedy!$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Aide_InformMono_Text_0:
# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "WTF did you do to see this message!?$"

Text_LittlerootTown_ProfessorBirchsLab_Books:
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a book that's too hard to read.$"

Text_LittlerootTown_ProfessorBirchsLab_Machine:
# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a serious-looking machine.\n"
	.string "The Prof. must use this for research.$"

Text_LittlerootTown_ProfessorBirchsLab_PC:
# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a PC used for research.\n"
	.string "Better not mess around with it.$"

Text_LittlerootTown_ProfessorBirchsLab_Bookshelf:
# 69 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's crammed with books on Pokémon.$"

Text_LittlerootTown_ProfessorBirchsLab_Pokeballs_BeforeSelection:
# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better talk to Prof. Birch\n"
	.string "before messing with his stuff.$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_Early:
# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Unfortunatley preperations\n"
	.string "aren't done yet.\l"
	.string "We probably would be done already\l"
	.string "but the Prof. had to run off to\l"
	.string "Route 101 this morning.\p"
	.string "He appearently got overwhelmed\n"
	.string "by some Zigzagoons and raced back here.$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_FieldWork:
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hunh? Prof. Birch?\p"
	.string "The Prof's away on fieldwork.\n"
	.string "Ergo, he isn't here.\p"
	.string "Oh, let me explain what fieldwork is.\p"
	.string "It is to study things in the natural\n"
	.string "environment, like fields and mountains,\l"
	.string "instead of a laboratory.\p"
	.string "The Prof. isn't one for doing desk work.\n"
	.string "He's the type of person who would\l"
	.string "rather go outside and experience\l"
	.string "things than read about them here.$"

Text_Aide_Mono_Fighting::
# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Primeape will evolve into Annihilape\n"
	.string "when it knows Shadow Punch.\p"
	.string "Machamp can Mega Evolve.$"

Text_Aide_Mono_Flying::
# 281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Hoppip's evolution line has\n"
	.string "been buffed.$"

Text_Aide_Mono_Poison::
# 288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Roserade can Mega Evolve.\p"
	.string "Scolipede can Mega Evolve.$"

Text_Aide_Mono_Ground::
# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Geodude's evolution line has\n"
	.string "been buffed.$"

Text_Aide_Mono_Rock::
# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Coalossal can Mega Evolve.\n"
	.string "Geodude's evolution line has\n"
	.string "been buffed.$"

Text_Aide_Mono_Bug::
# 310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Blipbug's evolution line has\n"
	.string "been buffed.\l"
	.string "Orbeetle can Mega Evolve.$"

Text_Aide_Mono_Ghost::
# 318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Chandelure can Mega Evolve.\p"
	.string "Dusknoir can Mega Evolve.$"

Text_Aide_Mono_Steel::
# 325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Klink's evolution line has\n"
	.string "been slightly buffed.$"

Text_Aide_Mono_Electric::
# 332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Raichu is Electric/Normal type.\p"
	.string "Shinx's evolution line is\n"
	.string "Electric/Dark type.\l"
	.string "Luxray can Mega Evolve.\p"
	.string "Ampharos is Electric/Dragon type.$"

Text_Aide_Mono_Psychic::
# 342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Actually, most of these Pokémon\n"
	.string "haven't changed much.$"

Text_Aide_Mono_Ice::
# 349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Actually, most of these Pokémon\n"
	.string "haven't been changed much.$"

Text_Aide_Mono_Dragon::
# 356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Dragonite can Mega Evolve.$"

Text_Aide_Mono_Dark::
# 362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Bisharp evolves to Kingambit\n"
	.string "by level up now.$"

Text_Aide_Mono_Normal::
# 369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Whismur's evolution line has\n"
	.string "been buffed slightly.\p"
	.string "Lillipup's evolution line has\n"
	.string "been buffed slightly.$"

Text_Aide_Mono_Fairy::
# 378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Grimmsnarl can Mega Evolve.$"

Text_Aide_Gen1::
# 409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Actually, these Pokémon haven't\n"
	.string "changed significantly.$"

Text_Aide_Gen2::
# 416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Meganium is Grass/Fairy type and\n"
	.string "can Mega Evolve.\p"
	.string "Typhlosion is Fire/Ground type.\p"
	.string "Feraligatr is Water/Dark type and\n"
	.string "can Mega Evolve.$"

Text_Aide_Gen3::
# 426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Sceptile is Grass/Dragon type.$"

Text_Aide_Gen4::
# 432 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Torterra can Mega Evolve.\p"
	.string "Infernape can Mega Evolve.\p"
	.string "Empoleon can Mega Evolve.$"

Text_Aide_Gen5::
# 440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Emboar can Mega Evolve.\p"
	.string "Samurott is Water/Steel type.$"

Text_Aide_Gen6::
# 447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Chesnaught can Mega Evolve.\p"
	.string "Delphox can Mega Evolve.\p"
	.string "Greninja can Mega Evolve.$"

Text_Aide_Gen7::
# 455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Rowlet's evolution line has\n"
	.string "been buffed slightly.$"

Text_Aide_Gen8::
# 462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Actually, these Pokémon haven't\n"
	.string "changed significantly.$"

Text_Aide_Gen9::
# 469 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: Some fine starter choices.\n"
	.string "You might not know this but…\p"
	.string "Actually, these Pokémon haven't\n"
	.string "changed significantly.$"

LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex:
# 477 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Oh, hi, {PLAYER}{KUN}!\p"
	.string "I heard you beat {RIVAL} on\n"
	.string "your first try. That's excellent!\p"
	.string "{RIVAL}'s been helping with my research\n"
	.string "for a long time.\p"
	.string "{RIVAL} has an extensive history as\n"
	.string "a Trainer already.\p"
	.string "Here, {PLAYER}{KUN}, as promised\n"
	.string "here is a PokéDex for you.$"

LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex:
# 489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: The PokéDex is a high-tech\n"
	.string "tool that automatically makes a record\l"
	.string "of any Pokémon you meet or catch.\p"
	.string "My kid, {RIVAL}, goes everywhere\n"
	.string "with it.\p"
	.string "Whenever my kid catches a rare Pokémon\n"
	.string "and records its data in the PokéDex,\l"
	.string "why, {RIVAL} looks for me while I'm out\l"
	.string "doing fieldwork, and shows me.$"

LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese:
# 501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: Oh, wow, {PLAYER}{KUN}!\n"
	.string "You got a PokéDex, too!\p"
	.string "That's great! Just like me!\n"
	.string "I've got something for you, too!$"

LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls:
# 508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: It's fun if you can get a lot of\n"
	.string "Pokémon!\p"
	.string "I'm going to look all over the place\n"
	.string "because I want different Pokémon.\p"
	.string "If I find any cute Pokémon, I'll catch\n"
	.string "them with Poké Balls!$"

LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull:
# 517 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh? Your Bag's full.$"

LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:
# 521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: I wonder where I should go look\n"
	.string "for Pokémon next?$"

LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese:
# 526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: Huh…\n"
	.string "So you got a PokéDex, too.\p"
	.string "Well then, here.\n"
	.string "I'll give you these.$"

LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls:
# 533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: You know it's more fun to\n"
	.string "have a whole bunch of Pokémon.\p"
	.string "I'm going to explore all over the place\n"
	.string "to find different Pokémon.\p"
	.string "If I find any cool Pokémon, you bet\n"
	.string "I'll try to get them with POKé BALLS.$"

LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull:
# 542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hey, your Bag's full.$"

LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext:
# 546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: Where should I look for\n"
	.string "Pokémon next…$"

LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational:
# 551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: No……\p"
	.string "{PLAYER}{KUN} and {RIVAL}, I've had the two\n"
	.string "of you help me study Pokémon.\p"
	.string "Thanks to your help, new facts\n"
	.string "are coming to light.\p"
	.string "It appears that in the Hoenn region,\n"
	.string "there are also Pokémon from other\l"
	.string "regions.\p"
	.string "It goes to show how rich and varied\n"
	.string "the natural environments of Hoenn\l"
	.string "happen to be.\p"
	.string "That's why I think it's necessary for\n"
	.string "me to upgrade your PokéDex to\l"
	.string "the National Mode.\p"
	.string "Here, let me see your PokéDex units.$"

LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon:
# 569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Oh, {PLAYER}{KUN}!\n"
	.string "Let's have a look at your PokéDex.\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Yes, there's no doubt about it.\p"
	.string "You really have completed the Hoenn\n"
	.string "region's PokéDex.\p"
	.string "That's more than just impressive.\p"
	.string "I have a gift for you.\p"
	.string "Consider it my show of appreciation\n"
	.string "for the fantastic work you've done.\p"
	.string "My gift is a rare Pokémon only found\n"
	.string "in another region!\p"
	.string "You can have any one of these\n"
	.string "three Pokémon!$"

LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:
# 587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Listen, {PLAYER}{KUN}.\n"
	.string "You've completed the Hoenn PokéDex,\l"
	.string "but your Pokémon journey isn't over.\p"
	.string "There is no end to the road\n"
	.string "that is Pokémon.\p"
	.string "Somewhere, there is a grassy patch\n"
	.string "that's waiting for you!$"

LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:
# 597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You received the promised Pokémon.\n"
	.string "Better leave the others alone.$"

BirchLab_PokedexEvent_ReceivedPokedex_Text:
# 657 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the PokéDex!$"

BirchLab_PokedexEvent_BirchBall_Text:
# 692 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, also {PLAYER}{KUN},\n"
	.string "these will help get you started\l"
	.string "on completing the PokéDex.$"

BirchLab_PokedexEvent_RecievedBalls_Text:
# 698 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received 99 Poké Balls\n"
	.string "and 99 Quick Balls!$"

BirchLab_PokedexEvent_RivalBerry_BeforeText:
# 703 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL}: Take these as a gift from me.\n"
	.string "They can be suprisingly helpful\l"
	.string "in a battle.$"

BirchLab_PokedexEvent_RivalBerry_AfterText:
# 708 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Remember though, while most held\n"
	.string "items are returned after battle,\l"
	.string "berries are not.\p"
	.string "Thankfully though, they are pretty\n"
	.string "easy to grow more of!$"

BirchLab_PokedexEvent_RecievedBerries_Text:
# 716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received 10 Oran Berries.$"

BirchLab_PokedexEvent_GoodLuckOnYourAdventure:
# 720 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof Birch: Well thats all the gifts\n"
	.string "your Mom and I prepared, and then some.\p"
	.string "Now, good luck on your Pokémon journey.\n$"

LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall:
# 735 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "Scott: Hi, hi, {PLAYER}!\n"
	.string "It's me, Scott.\p"
	.string "I'm aboard the S.S. Tidal now.\n"
	.string "It feels great to be on the sea!\p"
	.string "By the way…\p"
	.string "There's this place that I'd like to\n"
	.string "invite you to for a visit.\p"
	.string "If you're interested, board a ferry\n"
	.string "at either Slateport or Lilycove.\p"
	.string "I'll fill you in on the details when\n"
	.string "we meet. I'll be waiting!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"
