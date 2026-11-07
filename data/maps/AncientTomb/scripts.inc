AncientTomb_MapScripts::
# 2 "data/maps/AncientTomb/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AncientTomb_OnResume
# 3 "data/maps/AncientTomb/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AncientTomb_OnLoad
# 4 "data/maps/AncientTomb/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AncientTomb_OnTransition
	.byte 0


AncientTomb_OnResume:
# 8 "data/maps/AncientTomb/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, AncientTomb_EventScript_TryRemoveRegisteel
	end


AncientTomb_EventScript_TryRemoveRegisteel::
# 13 "data/maps/AncientTomb/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 14 "data/maps/AncientTomb/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 15 "data/maps/AncientTomb/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


AncientTomb_OnTransition:
# 20 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_LANDMARK_ANCIENT_TOMB
# 21 "data/maps/AncientTomb/scripts.pory"
	call_if_unset FLAG_DEFEATED_REGISTEEL, AncientTomb_EventScript_ShowRegisteel
	end


AncientTomb_EventScript_ShowRegisteel::
# 26 "data/maps/AncientTomb/scripts.pory"
	clearflag FLAG_HIDE_REGISTEEL
	return


AncientTomb_OnLoad:
# 31 "data/maps/AncientTomb/scripts.pory"
	call_if_unset FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED, AncientTomb_EventScript_HideRegiEntrance
	end


AncientTomb_EventScript_HideRegiEntrance::
# 36 "data/maps/AncientTomb/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
# 37 "data/maps/AncientTomb/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
# 38 "data/maps/AncientTomb/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
# 39 "data/maps/AncientTomb/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 40 "data/maps/AncientTomb/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 41 "data/maps/AncientTomb/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return


AncientTomb_EventScript_CaveEntranceMiddle::
# 46 "data/maps/AncientTomb/scripts.pory"
	lockall
# 47 "data/maps/AncientTomb/scripts.pory"
	goto_if_set FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED, AncientTomb_EventScript_BigHoleInWall
# 48 "data/maps/AncientTomb/scripts.pory"
	braillemsgbox AncientTomb_Braille_ShineInTheMiddle
# 49 "data/maps/AncientTomb/scripts.pory"
	releaseall
	end


AncientTomb_EventScript_BigHoleInWall::
# 54 "data/maps/AncientTomb/scripts.pory"
	msgbox gText_BigHoleInTheWall
# 55 "data/maps/AncientTomb/scripts.pory"
	releaseall
	end


AncientTomb_EventScript_CaveEntranceSide::
# 60 "data/maps/AncientTomb/scripts.pory"
	lockall
# 61 "data/maps/AncientTomb/scripts.pory"
	braillemsgbox AncientTomb_Braille_ShineInTheMiddle
# 62 "data/maps/AncientTomb/scripts.pory"
	releaseall
	end


AncientTomb_EventScript_Registeel::
# 67 "data/maps/AncientTomb/scripts.pory"
	lock
# 68 "data/maps/AncientTomb/scripts.pory"
	faceplayer
# 69 "data/maps/AncientTomb/scripts.pory"
	waitse
# 70 "data/maps/AncientTomb/scripts.pory"
	playmoncry SPECIES_REGISTEEL, CRY_MODE_ENCOUNTER
# 71 "data/maps/AncientTomb/scripts.pory"
	delay 40
# 72 "data/maps/AncientTomb/scripts.pory"
	waitmoncry
# 73 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_REGISTEEL, 40
# 74 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 75 "data/maps/AncientTomb/scripts.pory"
	special StartRegiBattle
# 76 "data/maps/AncientTomb/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 77 "data/maps/AncientTomb/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 78 "data/maps/AncientTomb/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AncientTomb_EventScript_DefeatedRegisteel
# 79 "data/maps/AncientTomb/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AncientTomb_EventScript_RanFromRegisteel
# 80 "data/maps/AncientTomb/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AncientTomb_EventScript_RanFromRegisteel
# 81 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_DEFEATED_REGISTEEL
# 82 "data/maps/AncientTomb/scripts.pory"
	release
	end


AncientTomb_EventScript_DefeatedRegisteel::
# 87 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_DEFEATED_REGISTEEL
# 88 "data/maps/AncientTomb/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	end


AncientTomb_EventScript_RanFromRegisteel::
# 93 "data/maps/AncientTomb/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGISTEEL
# 94 "data/maps/AncientTomb/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	end

