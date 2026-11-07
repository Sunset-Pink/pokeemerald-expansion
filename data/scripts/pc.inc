# 1 "data/scripts/pc.pory"

# 2 "data/scripts/pc.pory"

# 3 "data/scripts/pc.pory"
EventScript_PC::
# 4 "data/scripts/pc.pory"
	lockall
# 5 "data/scripts/pc.pory"
	setvar VAR_0x8004, PC_LOCATION_OTHER
# 6 "data/scripts/pc.pory"
	special DoPCTurnOnEffect
# 7 "data/scripts/pc.pory"
	playse SE_PC_ON
# 8 "data/scripts/pc.pory"
	msgbox Text_BootUpPC, MSGBOX_DEFAULT
# 9 "data/scripts/pc.pory"
	goto EventScript_PCMainMenu
# 10 "data/scripts/pc.pory"
	end
# 11 "data/scripts/pc.pory"

# 12 "data/scripts/pc.pory"
EventScript_PCMainMenu::
# 13 "data/scripts/pc.pory"
	message gText_WhichPCShouldBeAccessed
# 14 "data/scripts/pc.pory"
	waitmessage
# 15 "data/scripts/pc.pory"
	special ScriptMenu_CreatePCMultichoice
# 16 "data/scripts/pc.pory"
	goto EventScript_AccessPC
# 17 "data/scripts/pc.pory"
	end
# 18 "data/scripts/pc.pory"

# 19 "data/scripts/pc.pory"
EventScript_AccessPC::
# 20 "data/scripts/pc.pory"
	switch VAR_RESULT
# 21 "data/scripts/pc.pory"
	case 0, EventScript_AccessPokemonStorage
# 22 "data/scripts/pc.pory"
	case 1, EventScript_AccessPlayersPC
# 23 "data/scripts/pc.pory"
	case 2, EventScript_AccessHallOfFame
# 24 "data/scripts/pc.pory"
	case 3, EventScript_TurnOffPC
# 25 "data/scripts/pc.pory"
	case MULTI_B_PRESSED, EventScript_TurnOffPC
# 26 "data/scripts/pc.pory"
	end
# 27 "data/scripts/pc.pory"

# 28 "data/scripts/pc.pory"
EventScript_AccessPlayersPC::
# 29 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 30 "data/scripts/pc.pory"
	msgbox gText_AccessedPlayersPC, MSGBOX_DEFAULT
# 31 "data/scripts/pc.pory"
	special PlayerPC
# 32 "data/scripts/pc.pory"
	goto EventScript_PCMainMenu
# 33 "data/scripts/pc.pory"
	end
# 34 "data/scripts/pc.pory"

# 35 "data/scripts/pc.pory"
EventScript_AccessPokemonStorage::
# 36 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 37 "data/scripts/pc.pory"
	call_if_unset FLAG_SYS_PC_LANETTE, EventScript_AccessSomeonesPC
# 38 "data/scripts/pc.pory"
	call_if_set FLAG_SYS_PC_LANETTE, EventScript_AccessLanettesPC
# 39 "data/scripts/pc.pory"
	msgbox gText_StorageSystemOpened, MSGBOX_DEFAULT
# 40 "data/scripts/pc.pory"
	special ShowPokemonStorageSystemPC
# 41 "data/scripts/pc.pory"
	goto EventScript_PCMainMenu
# 42 "data/scripts/pc.pory"
	end
# 43 "data/scripts/pc.pory"

# 44 "data/scripts/pc.pory"
EventScript_AccessSomeonesPC::
# 45 "data/scripts/pc.pory"
	msgbox gText_AccessedSomeonesPC, MSGBOX_DEFAULT
# 46 "data/scripts/pc.pory"
	return
# 47 "data/scripts/pc.pory"

# 48 "data/scripts/pc.pory"
EventScript_AccessLanettesPC::
# 49 "data/scripts/pc.pory"
	msgbox gText_AccessedLanettesPC, MSGBOX_DEFAULT
# 50 "data/scripts/pc.pory"
	return
# 51 "data/scripts/pc.pory"

# 52 "data/scripts/pc.pory"
EventScript_TurnOffPC::
# 53 "data/scripts/pc.pory"
	setvar VAR_0x8004, PC_LOCATION_OTHER
# 54 "data/scripts/pc.pory"
	playse SE_PC_OFF
# 55 "data/scripts/pc.pory"
	special DoPCTurnOffEffect
# 56 "data/scripts/pc.pory"
	releaseall
# 57 "data/scripts/pc.pory"
	end
# 58 "data/scripts/pc.pory"

# 59 "data/scripts/pc.pory"
EventScript_AccessHallOfFame::
# 60 "data/scripts/pc.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, EventScript_TurnOffPC
# 61 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 62 "data/scripts/pc.pory"
	special AccessHallOfFamePC
# 63 "data/scripts/pc.pory"
	goto EventScript_AccessPC
# 64 "data/scripts/pc.pory"
	end
# 65 "data/scripts/pc.pory"

# 66 "data/scripts/pc.pory"
EventScript_AccessPokemonBoxLink::
# 67 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 68 "data/scripts/pc.pory"
	msgbox gText_StorageSystemOpened, MSGBOX_DEFAULT
# 69 "data/scripts/pc.pory"
	special ShowPokemonStorageSystemPC
# 70 "data/scripts/pc.pory"
	goto EventScript_TurnOffPC
# 71 "data/scripts/pc.pory"
	end
