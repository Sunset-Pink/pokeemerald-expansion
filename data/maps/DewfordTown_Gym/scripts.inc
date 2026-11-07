DewfordTown_Gym_MapScripts::
# 2 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
	.byte 0


DewfordTown_Gym_EventScript_SetFlashLevel::
# 7 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_KNUCKLE_BADGE_LEVEL, 0
	goto_if_gt DewfordTown_Gym_EventScript_SetFlashLevel_2
DewfordTown_Gym_EventScript_SetFlashLevel_1:
# 10 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 11 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 12 "data/maps/DewfordTown_Gym/scripts.pory"
	switch VAR_0x8001
# 13 "data/maps/DewfordTown_Gym/scripts.pory"
	case 0, DewfordTown_Gym_EventScript_SetFlashLevel_5
# 14 "data/maps/DewfordTown_Gym/scripts.pory"
	case 1, DewfordTown_Gym_EventScript_SetFlashLevel_6
# 15 "data/maps/DewfordTown_Gym/scripts.pory"
	case 2, DewfordTown_Gym_EventScript_SetFlashLevel_7
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	case 3, DewfordTown_Gym_EventScript_SetFlashLevel_8
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
	case 4, DewfordTown_Gym_EventScript_SetFlashLevel_9
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	case 5, DewfordTown_Gym_EventScript_SetFlashLevel_10
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel1
	return

DewfordTown_Gym_EventScript_SetFlashLevel_2:
# 8 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetLightsOn
	goto DewfordTown_Gym_EventScript_SetFlashLevel_1

DewfordTown_Gym_EventScript_SetFlashLevel_5:
# 13 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel7
	return

DewfordTown_Gym_EventScript_SetFlashLevel_6:
# 14 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel6
	return

DewfordTown_Gym_EventScript_SetFlashLevel_7:
# 15 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel5
	return

DewfordTown_Gym_EventScript_SetFlashLevel_8:
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel4
	return

DewfordTown_Gym_EventScript_SetFlashLevel_9:
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel3
	return

DewfordTown_Gym_EventScript_SetFlashLevel_10:
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel2
	return


DewfordTown_Gym_EventScript_Brawly::
# 24 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_NORMAL, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 31 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DewfordTown_Gym_EventScript_Brawly_2
DewfordTown_Gym_EventScript_Brawly_1:
# 35 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_Brawly_5
DewfordTown_Gym_EventScript_Brawly_4:
# 38 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle
# 39 "data/maps/DewfordTown_Gym/scripts.pory"
	release
	end

DewfordTown_Gym_EventScript_Brawly_2:
# 33 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrawlyRematch
	goto DewfordTown_Gym_EventScript_Brawly_1

DewfordTown_Gym_EventScript_Brawly_5:
# 36 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GiveBulkUp2
	goto DewfordTown_Gym_EventScript_Brawly_4


# 43 "data/maps/DewfordTown_Gym/scripts.pory"

# 44 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition:
# 45 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 46 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 47 "data/maps/DewfordTown_Gym/scripts.pory"

# 48 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 49 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 50 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 51 "data/maps/DewfordTown_Gym/scripts.pory"

# 52 "data/maps/DewfordTown_Gym/scripts.pory"
@ Brightest
# 53 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel1::
# 54 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
# 55 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 56 "data/maps/DewfordTown_Gym/scripts.pory"

# 57 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel2::
# 58 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
# 59 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 60 "data/maps/DewfordTown_Gym/scripts.pory"

# 61 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel3::
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
# 63 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 64 "data/maps/DewfordTown_Gym/scripts.pory"

# 65 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel4::
# 66 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
# 67 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 68 "data/maps/DewfordTown_Gym/scripts.pory"

# 69 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel5::
# 70 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 72 "data/maps/DewfordTown_Gym/scripts.pory"

# 73 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel6::
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 76 "data/maps/DewfordTown_Gym/scripts.pory"

# 77 "data/maps/DewfordTown_Gym/scripts.pory"
@ Darkest
# 78 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel7::
# 79 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 7
# 80 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 81 "data/maps/DewfordTown_Gym/scripts.pory"

# 82 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom::
# 83 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 84 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
# 86 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 89 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 90 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 92 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 93 "data/maps/DewfordTown_Gym/scripts.pory"

# 94 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange::
# 95 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 96 "data/maps/DewfordTown_Gym/scripts.pory"

# 97 "data/maps/DewfordTown_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 100 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 101 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 102 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 103 "data/maps/DewfordTown_Gym/scripts.pory"

# 104 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 106 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 107 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 108 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 109 "data/maps/DewfordTown_Gym/scripts.pory"

# 110 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 112 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 113 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 114 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 115 "data/maps/DewfordTown_Gym/scripts.pory"

# 116 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 121 "data/maps/DewfordTown_Gym/scripts.pory"

# 122 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 126 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 127 "data/maps/DewfordTown_Gym/scripts.pory"

# 128 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 133 "data/maps/DewfordTown_Gym/scripts.pory"

# 134 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
# 135 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 139 "data/maps/DewfordTown_Gym/scripts.pory"

# 140 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 143 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 144 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn::
# 145 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 146 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura::
# 148 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckBrenden::
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
# 152 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian::
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
# 155 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLilith::
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers::
# 160 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 161 "data/maps/DewfordTown_Gym/scripts.pory"

# 162 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 164 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 171 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 172 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 174 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 177 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 178 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 179 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 183 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 184 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 185 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 186 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 187 "data/maps/DewfordTown_Gym/scripts.pory"

# 188 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 189 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 190 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 194 "data/maps/DewfordTown_Gym/scripts.pory"

# 195 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 196 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 197 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 200 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 201 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 202 "data/maps/DewfordTown_Gym/scripts.pory"

# 203 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 204 "data/maps/DewfordTown_Gym/scripts.pory"
	@trainerbattle_rematch_double TRAINER_BRAWLY_NORMAL, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 205 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 206 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 207 "data/maps/DewfordTown_Gym/scripts.pory"

# 208 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 210 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 211 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 212 "data/maps/DewfordTown_Gym/scripts.pory"

# 213 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 214 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 215 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 216 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 217 "data/maps/DewfordTown_Gym/scripts.pory"

# 218 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 220 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 221 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 222 "data/maps/DewfordTown_Gym/scripts.pory"

# 223 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 224 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 225 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 226 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 227 "data/maps/DewfordTown_Gym/scripts.pory"

# 228 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 229 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 230 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 231 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 232 "data/maps/DewfordTown_Gym/scripts.pory"

# 233 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 235 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 236 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 237 "data/maps/DewfordTown_Gym/scripts.pory"

# 238 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
# 240 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 241 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 242 "data/maps/DewfordTown_Gym/scripts.pory"

# 243 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 244 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 245 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 246 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 247 "data/maps/DewfordTown_Gym/scripts.pory"

# 248 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 250 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 251 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 252 "data/maps/DewfordTown_Gym/scripts.pory"

# 253 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 254 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 255 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 257 "data/maps/DewfordTown_Gym/scripts.pory"

# 258 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 259 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
# 260 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 262 "data/maps/DewfordTown_Gym/scripts.pory"

# 263 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 264 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 266 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 267 "data/maps/DewfordTown_Gym/scripts.pory"

# 268 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 270 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 272 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 273 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 274 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 275 "data/maps/DewfordTown_Gym/scripts.pory"

# 276 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 279 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 280 "data/maps/DewfordTown_Gym/scripts.pory"

# 281 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 283 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 284 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 285 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 286 "data/maps/DewfordTown_Gym/scripts.pory"

# 287 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 288 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 289 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 290 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 291 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 292 "data/maps/DewfordTown_Gym/scripts.pory"

# 293 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 294 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 295 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 296 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 297 "data/maps/DewfordTown_Gym/scripts.pory"

# 298 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 299 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 301 "data/maps/DewfordTown_Gym/scripts.pory"
	end

DewfordTown_Gym_Text_GymGuideAdvice:
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, Champion-\n"
	.string "bound {PLAYER}?\p"
	.string "Dewford's Gym Leader Brawly commands\n"
	.string "Fighting-type Pokémon.\p"
	.string "Going against him with Normal-type\n"
	.string "Pokémon is asking for trouble.\p"
	.string "Fighting Pokémon will lay a serious\n"
	.string "smack down on Normal Pokémon,\l"
	.string "so be careful!\p"
	.string "What's worse, the Gym is as dark as\n"
	.string "the ocean floor.\p"
	.string "But it will get brighter after defeating\n"
	.string "the Trainers in your way.\p"
	.string "Hey, okay, go for it!$"

DewfordTown_Gym_Text_GymGuidePostVictory:
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
	.string "Your future is bright, too!$"

DewfordTown_Gym_Text_TakaoIntro:
# 326 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
	.string "Come on!$"

DewfordTown_Gym_Text_TakaoDefeat:
# 331 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"

DewfordTown_Gym_Text_TakaoPostBattle:
# 335 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
	.string "Your technique is commendable!$"

DewfordTown_Gym_Text_JocelynIntro:
# 340 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for Brawly to be\n"
	.string "involved!\p"
	.string "I'll crush you!$"

DewfordTown_Gym_Text_JocelynDefeat:
# 346 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
	.string "How could I lose so easily?$"

DewfordTown_Gym_Text_JocelynPostBattle:
# 351 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
	.string "I'll use it to motivate me to train!\p"
	.string "One day I'll become a Gym Leader…\p"
	.string "No, I'll become the Pokémon League\n"
	.string "Champion!$"

DewfordTown_Gym_Text_LauraIntro:
# 359 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
	.string "It's not my fault if you cry!$"

DewfordTown_Gym_Text_LauraDefeat:
# 364 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
	.string "I lost!$"

DewfordTown_Gym_Text_LauraPostBattle:
# 369 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
	.string "stronger.\p"
	.string "But because it's so dark, I can never\n"
	.string "see Brawly's face…$"

DewfordTown_Gym_Text_LilithIntro:
# 376 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
	.string "Are you stumbling around in the dark?$"

DewfordTown_Gym_Text_LilithDefeat:
# 381 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
	.string "I don't want to know you!$"

DewfordTown_Gym_Text_LilithPostBattle:
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
	.string "back at the entrance again!$"

DewfordTown_Gym_Text_BrendenIntro:
# 391 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
	.string "a sailing man!$"

DewfordTown_Gym_Text_BrendenDefeat:
# 396 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
	.string "It's not like me to lose this way!$"

DewfordTown_Gym_Text_BrendenPostBattle:
# 401 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
	.string "our Gym Leader.$"

DewfordTown_Gym_Text_CristianIntro:
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
	.string "through me!$"

DewfordTown_Gym_Text_CristianDefeat:
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
	.string "Vastly overpowered!$"

DewfordTown_Gym_Text_CristianPostBattle:
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
	.string "Go after that Badge!$"

DewfordTown_Gym_Text_BrawlyIntro:
# 421 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm Brawly!\n"
	.string "Dewford's Gym Leader!\p"
	.string "I've been churned in the rough waves\n"
	.string "of these parts, and I've grown tough\l"
	.string "in the pitch-black cave!\p"
	.string "So you wanted to challenge me?\n"
	.string "Let me see what you're made of!$"

DewfordTown_Gym_Text_BrawlyDefeat:
# 431 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah, wow! You made a much bigger\n"
	.string "splash than I expected!\p"
	.string "You swamped me!\p"
	.string "Okay, you've got me.\n"
	.string "Take this Gym Badge!$"

DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 439 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the Knuckle Badge\n"
	.string "from Brawly.$"

DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 444 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The Knukcle Badge makes all Pokémon\n"
	.string "up to Level 30, even those you get in\l"
	.string "trades, obey without question.\p"
	.string "And, you'll be able to use the HM move\n"
	.string "FLASH outside of battle.\p"
	.string "If you'd like, use this Techinical\n"
	.string "Machine, too.$"

DewfordTown_Gym_Text_ExplainBulkUp:
# 454 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains Bulk Up.\p"
	.string "It's a move that raises both Attack\n"
	.string "and Defense stats.\p"
	.string "… … … … … …$"

DewfordTown_Gym_Text_RegisteredBrawly:
# 461 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered Gym Leader Brawly\n"
	.string "in the PokéNav.$"

DewfordTown_Gym_Text_BrawlyPostBattle:
# 466 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a giant\n"
	.string "wave to cause a storm of astonishment\l"
	.string "among Trainers one day!$"

DewfordTown_Gym_Text_GymStatue:
# 472 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Dewford Town Pokémon Gym$"

DewfordTown_Gym_Text_GymStatueCertified:
# 476 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Dewford Town Pokémon Gym\p"
	.string "Brawly's Certified Trainers:\n"
	.string "{PLAYER}$"

DewfordTown_Gym_Text_BrawlyPreRematch:
# 482 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Show me how much higher\n"
	.string "you've gone!$"

DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 491 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
	.string "Swamped again!$"

DewfordTown_Gym_Text_BrawlyPostRematch:
# 496 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly Battling is vast and it's deep.\n"
	.string "You can't see the bottom.\l"
	.string "It's just like the sea of Hoenn!$"

DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 502 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Oh? You only have one Pokémon\n"
	.string "that can battle.\p"
	.string "I'm sorry, but I'd like you to come back\n"
	.string "with at least two Pokémon.$"
