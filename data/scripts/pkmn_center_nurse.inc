# 1 "data/scripts/pkmn_center_nurse.pory"

# 2 "data/scripts/pkmn_center_nurse.pory"
Common_EventScript_PkmnCenterNurse::
# 3 "data/scripts/pkmn_center_nurse.pory"
	lock
# 4 "data/scripts/pkmn_center_nurse.pory"
	faceplayer
# 5 "data/scripts/pkmn_center_nurse.pory"
	setvar VAR_0x8004, 0
# 6 "data/scripts/pkmn_center_nurse.pory"
.if !IS_FRLG
# 7 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, CountPlayerTrainerStars
# 8 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, 4, EventScript_PkmnCenterNurse_GoldCard
# 9 "data/scripts/pkmn_center_nurse.pory"
.endif
# 10 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
# 11 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_HealPkmn
# 12 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_PkmnCenterNurse_Goodbye
# 13 "data/scripts/pkmn_center_nurse.pory"
	end
# 14 "data/scripts/pkmn_center_nurse.pory"

# 15 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_Goodbye::
# 16 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain
# 17 "data/scripts/pkmn_center_nurse.pory"
	return
# 18 "data/scripts/pkmn_center_nurse.pory"

# 19 "data/scripts/pkmn_center_nurse.pory"
@ VAR_0x8004 is 1 when player has Gold Card; jumps are identical
# 20 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_HealPkmn::
# 21 "data/scripts/pkmn_center_nurse.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 22 "data/scripts/pkmn_center_nurse.pory"
	call_if_eq VAR_0x8004, 0, EventScript_PkmnCenterNurse_IllTakeYourPkmn
# 23 "data/scripts/pkmn_center_nurse.pory"
	call_if_eq VAR_0x8004, 1, EventScript_PkmnCenterNurse_IllTakeYourPkmn2
# 24 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 25 "data/scripts/pkmn_center_nurse.pory"
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
# 26 "data/scripts/pkmn_center_nurse.pory"
	goto_if_unset FLAG_POKERUS_EXPLAINED, EventScript_PkmnCenterNurse_CheckPokerus
# 27 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom
# 28 "data/scripts/pkmn_center_nurse.pory"
	end
# 29 "data/scripts/pkmn_center_nurse.pory"

# 30 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_IllTakeYourPkmn::
# 31 "data/scripts/pkmn_center_nurse.pory"
	message gText_IllTakeYourPkmn
# 32 "data/scripts/pkmn_center_nurse.pory"
	return
# 33 "data/scripts/pkmn_center_nurse.pory"

# 34 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_IllTakeYourPkmn2::
# 35 "data/scripts/pkmn_center_nurse.pory"
	message gText_IllTakeYourPkmn2
# 36 "data/scripts/pkmn_center_nurse.pory"
	return
# 37 "data/scripts/pkmn_center_nurse.pory"

# 38 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_TakeAndHealPkmn::
# 39 "data/scripts/pkmn_center_nurse.pory"
	hidefollower 0
# 40 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Turn
# 41 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 42 "data/scripts/pkmn_center_nurse.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 43 "data/scripts/pkmn_center_nurse.pory"
.if OW_UNION_DISABLE_CHECK == FALSE && OW_FLAG_MOVE_UNION_ROOM_CHECK != 0
# 44 "data/scripts/pkmn_center_nurse.pory"
	setflag OW_FLAG_MOVE_UNION_ROOM_CHECK
# 45 "data/scripts/pkmn_center_nurse.pory"
	call CableClub_OnResume
# 46 "data/scripts/pkmn_center_nurse.pory"
	clearflag OW_FLAG_MOVE_UNION_ROOM_CHECK
# 47 "data/scripts/pkmn_center_nurse.pory"
.endif
# 48 "data/scripts/pkmn_center_nurse.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 49 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_WalkInPlaceFasterDown
# 50 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 51 "data/scripts/pkmn_center_nurse.pory"
	special HealPlayerParty
# 52 "data/scripts/pkmn_center_nurse.pory"
	callnative UpdateFollowingPokemon
# 53 "data/scripts/pkmn_center_nurse.pory"
	return
# 54 "data/scripts/pkmn_center_nurse.pory"

# 55 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom::
# 56 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, PlayerNotAtTrainerHillEntrance
# 57 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, 0, EventScript_PkmnCenterNurse_ReturnPkmn
# 58 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, BufferUnionRoomPlayerName
# 59 "data/scripts/pkmn_center_nurse.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 60 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8008, 0, EventScript_PkmnCenterNurse_ReturnPkmn
# 61 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8008, 1, EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom
# 62 "data/scripts/pkmn_center_nurse.pory"
	end
# 63 "data/scripts/pkmn_center_nurse.pory"

# 64 "data/scripts/pkmn_center_nurse.pory"
@ VAR_0x8004 is 1 when player has Gold Card
# 65 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_ReturnPkmn::
# 66 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8004, 1, EventScript_PkmnCenterNurse_ReturnPkmn2
# 67 "data/scripts/pkmn_center_nurse.pory"
	message gText_RestoredPkmnToFullHealth
# 68 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 69 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
# 70 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 71 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain
# 72 "data/scripts/pkmn_center_nurse.pory"
	return
# 73 "data/scripts/pkmn_center_nurse.pory"

# 74 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_ReturnPkmn2::
# 75 "data/scripts/pkmn_center_nurse.pory"
	message gText_ThankYouForWaiting
# 76 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 77 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
# 78 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 79 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain2
# 80 "data/scripts/pkmn_center_nurse.pory"
	return
# 81 "data/scripts/pkmn_center_nurse.pory"

# 82 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom::
# 83 "data/scripts/pkmn_center_nurse.pory"
	goto_if_set FLAG_NURSE_UNION_ROOM_REMINDER, EventScript_PkmnCenterNurse_ReturnPkmn
# 84 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_RestoredPkmnToFullHealth, MSGBOX_DEFAULT
# 85 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_NURSE_UNION_ROOM_REMINDER
# 86 "data/scripts/pkmn_center_nurse.pory"
	message CableClub_Text_PlayerIsWaiting
# 87 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 88 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
# 89 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 90 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain
# 91 "data/scripts/pkmn_center_nurse.pory"
	return
# 92 "data/scripts/pkmn_center_nurse.pory"

# 93 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_CheckPokerus::
# 94 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, IsPokerusInParty
# 95 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_PkmnCenterNurse_ExplainPokerus
# 96 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom
# 97 "data/scripts/pkmn_center_nurse.pory"
	end
# 98 "data/scripts/pkmn_center_nurse.pory"

# 99 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_ExplainPokerus::
# 100 "data/scripts/pkmn_center_nurse.pory"
	message gText_PokerusExplanation
# 101 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_POKERUS_EXPLAINED
# 102 "data/scripts/pkmn_center_nurse.pory"
	return
# 103 "data/scripts/pkmn_center_nurse.pory"

# 104 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_GoldCard::
# 105 "data/scripts/pkmn_center_nurse.pory"
	goto_if_set FLAG_NURSE_MENTIONS_GOLD_CARD, EventScript_PkmnCenterNurse_AskForUsual
# 106 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_NURSE_MENTIONS_GOLD_CARD
# 107 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_WelcomeCutShort, MSGBOX_DEFAULT
# 108 "data/scripts/pkmn_center_nurse.pory"
	playse SE_PIN
# 109 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_ExclamationMark
# 110 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 111 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_Delay48
# 112 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 113 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_NoticesGoldCard, MSGBOX_YESNO
# 114 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
# 115 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain2
# 116 "data/scripts/pkmn_center_nurse.pory"
	return
# 117 "data/scripts/pkmn_center_nurse.pory"

# 118 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_AskForUsual::
# 119 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_YouWantTheUsual, MSGBOX_YESNO
# 120 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
# 121 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain2
# 122 "data/scripts/pkmn_center_nurse.pory"
	return
# 123 "data/scripts/pkmn_center_nurse.pory"

# 124 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_GoldCardHealPkmn::
# 125 "data/scripts/pkmn_center_nurse.pory"
	setvar VAR_0x8004, 1
# 126 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_HealPkmn
# 127 "data/scripts/pkmn_center_nurse.pory"
	end
# 128 "data/scripts/pkmn_center_nurse.pory"

# 129 "data/scripts/pkmn_center_nurse.pory"
Movement_PkmnCenterNurse_Bow:
# 130 "data/scripts/pkmn_center_nurse.pory"
	nurse_joy_bow
# 131 "data/scripts/pkmn_center_nurse.pory"
	delay_4
# 132 "data/scripts/pkmn_center_nurse.pory"
	step_end
# 133 "data/scripts/pkmn_center_nurse.pory"

# 134 "data/scripts/pkmn_center_nurse.pory"
Movement_PkmnCenterNurse_Turn:
# 135 "data/scripts/pkmn_center_nurse.pory"
	walk_in_place_faster_left
# 136 "data/scripts/pkmn_center_nurse.pory"
	step_end
