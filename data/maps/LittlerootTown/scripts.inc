# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 3 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 4 "data/maps/LittlerootTown/scripts.pory"
	return
# 5 "data/maps/LittlerootTown/scripts.pory"

# 6 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 7 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 8 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 9 "data/maps/LittlerootTown/scripts.pory"
	return
# 10 "data/maps/LittlerootTown/scripts.pory"

# 11 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 12 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 13 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 14 "data/maps/LittlerootTown/scripts.pory"
	return
# 15 "data/maps/LittlerootTown/scripts.pory"

# 16 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 17 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 18 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 10, 1
# 19 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_UP
# 20 "data/maps/LittlerootTown/scripts.pory"
	return
# 21 "data/maps/LittlerootTown/scripts.pory"

# 22 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 23 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 7, 2
# 24 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 25 "data/maps/LittlerootTown/scripts.pory"
	return
# 26 "data/maps/LittlerootTown/scripts.pory"

# 27 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 28 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 29 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_MOM, MOVEMENT_TYPE_FACE_DOWN
# 30 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 31 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 32 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 33 "data/maps/LittlerootTown/scripts.pory"
	return
# 34 "data/maps/LittlerootTown/scripts.pory"

# 35 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 36 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 5, 9
# 37 "data/maps/LittlerootTown/scripts.pory"
	return
# 38 "data/maps/LittlerootTown/scripts.pory"

# 39 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 40 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 9
# 41 "data/maps/LittlerootTown/scripts.pory"
	return
# 42 "data/maps/LittlerootTown/scripts.pory"

# 43 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 44 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 45 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 46 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 47 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 48 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 49 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 50 "data/maps/LittlerootTown/scripts.pory"
	release
# 51 "data/maps/LittlerootTown/scripts.pory"
	end
# 52 "data/maps/LittlerootTown/scripts.pory"

# 53 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 54 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 55 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 56 "data/maps/LittlerootTown/scripts.pory"
	release
# 57 "data/maps/LittlerootTown/scripts.pory"
	end
# 58 "data/maps/LittlerootTown/scripts.pory"

# 59 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 60 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 61 "data/maps/LittlerootTown/scripts.pory"
	release
# 62 "data/maps/LittlerootTown/scripts.pory"
	end
# 63 "data/maps/LittlerootTown/scripts.pory"

# 64 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 65 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 66 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 67 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 68 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 69 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 70 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 71 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 72 "data/maps/LittlerootTown/scripts.pory"
	end
# 73 "data/maps/LittlerootTown/scripts.pory"

# 74 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 75 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_Twin_PokemonWillJumpOut, MSGBOX_DEFAULT
# 76 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 77 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 78 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 79 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 80 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 81 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 82 "data/maps/LittlerootTown/scripts.pory"
	return
# 83 "data/maps/LittlerootTown/scripts.pory"

# 84 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 85 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 86 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 87 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 88 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 89 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 90 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 91 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 92 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 93 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 94 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 95 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 96 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 97 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 98 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 99 "data/maps/LittlerootTown/scripts.pory"

# 100 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 101 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 102 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 103 "data/maps/LittlerootTown/scripts.pory"

# 104 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 105 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 106 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 107 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 108 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 109 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 110 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 111 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 112 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 113 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 114 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 115 "data/maps/LittlerootTown/scripts.pory"

# 116 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 117 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 118 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 119 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 120 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 121 "data/maps/LittlerootTown/scripts.pory"

# 122 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 123 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 124 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 125 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 126 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 127 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnRight
# 128 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 129 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 130 "data/maps/LittlerootTown/scripts.pory"
	end
# 131 "data/maps/LittlerootTown/scripts.pory"

# 132 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 133 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 134 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 135 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 136 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 137 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 138 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 139 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 140 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 141 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 142 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 143 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 144 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 145 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 146 "data/maps/LittlerootTown/scripts.pory"

# 147 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 148 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 149 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 150 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 151 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 152 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 153 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 154 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 155 "data/maps/LittlerootTown/scripts.pory"

# 156 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 157 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 158 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_WalkInPlaceFasterRight
# 159 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 160 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 161 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 162 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 163 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 164 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 165 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 166 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 167 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 168 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 169 "data/maps/LittlerootTown/scripts.pory"
	end
# 170 "data/maps/LittlerootTown/scripts.pory"

# 171 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 172 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 173 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 174 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 10, 9
# 175 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 176 "data/maps/LittlerootTown/scripts.pory"
	end
# 177 "data/maps/LittlerootTown/scripts.pory"

# 178 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 179 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 180 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 181 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 11, 9
# 182 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 183 "data/maps/LittlerootTown/scripts.pory"
	end
# 184 "data/maps/LittlerootTown/scripts.pory"

# 185 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 186 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 187 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 188 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 189 "data/maps/LittlerootTown/scripts.pory"
	end
# 190 "data/maps/LittlerootTown/scripts.pory"

# 191 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 192 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 193 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 194 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 195 "data/maps/LittlerootTown/scripts.pory"
	end
# 196 "data/maps/LittlerootTown/scripts.pory"

# 197 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 198 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 199 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 200 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 201 "data/maps/LittlerootTown/scripts.pory"
	end
# 202 "data/maps/LittlerootTown/scripts.pory"

# 203 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 204 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 205 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 206 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 207 "data/maps/LittlerootTown/scripts.pory"
	end
# 208 "data/maps/LittlerootTown/scripts.pory"

# 209 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 210 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 211 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 212 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 213 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 214 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 215 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 216 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 217 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 218 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 219 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 220 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 221 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 222 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 223 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 224 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 225 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 226 "data/maps/LittlerootTown/scripts.pory"
	end
# 227 "data/maps/LittlerootTown/scripts.pory"

# 228 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 229 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 230 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 231 "data/maps/LittlerootTown/scripts.pory"
	return
# 232 "data/maps/LittlerootTown/scripts.pory"

# 233 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 234 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 235 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 236 "data/maps/LittlerootTown/scripts.pory"
	return
# 237 "data/maps/LittlerootTown/scripts.pory"

# 238 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 239 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterRight
# 240 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 241 "data/maps/LittlerootTown/scripts.pory"
	return
# 242 "data/maps/LittlerootTown/scripts.pory"

# 243 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 244 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterLeft
# 245 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 246 "data/maps/LittlerootTown/scripts.pory"
	return
# 247 "data/maps/LittlerootTown/scripts.pory"

# 248 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 249 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 250 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 251 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 252 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 253 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 254 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 255 "data/maps/LittlerootTown/scripts.pory"
	return
# 256 "data/maps/LittlerootTown/scripts.pory"

# 257 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 258 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 259 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 260 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 261 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 262 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 263 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 264 "data/maps/LittlerootTown/scripts.pory"
	return
# 265 "data/maps/LittlerootTown/scripts.pory"

# 266 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 267 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 268 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 269 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 270 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 271 "data/maps/LittlerootTown/scripts.pory"
	return
# 272 "data/maps/LittlerootTown/scripts.pory"

# 273 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 274 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 275 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 276 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 277 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 278 "data/maps/LittlerootTown/scripts.pory"
	return
# 279 "data/maps/LittlerootTown/scripts.pory"

# 280 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 281 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 282 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 283 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 284 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 285 "data/maps/LittlerootTown/scripts.pory"
	return
# 286 "data/maps/LittlerootTown/scripts.pory"

# 287 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 288 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 289 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 290 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 291 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 292 "data/maps/LittlerootTown/scripts.pory"
	return
# 293 "data/maps/LittlerootTown/scripts.pory"

# 294 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 295 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 296 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 297 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 298 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 299 "data/maps/LittlerootTown/scripts.pory"
	return
# 300 "data/maps/LittlerootTown/scripts.pory"

# 301 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 302 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 303 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 304 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 305 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 306 "data/maps/LittlerootTown/scripts.pory"
	return
# 307 "data/maps/LittlerootTown/scripts.pory"

# 308 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 309 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 310 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 311 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 312 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 313 "data/maps/LittlerootTown/scripts.pory"
	return
# 314 "data/maps/LittlerootTown/scripts.pory"

# 315 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 316 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 317 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 318 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 319 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 320 "data/maps/LittlerootTown/scripts.pory"
	return
# 321 "data/maps/LittlerootTown/scripts.pory"

# 322 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 323 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 324 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 325 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 326 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 327 "data/maps/LittlerootTown/scripts.pory"
	return
# 328 "data/maps/LittlerootTown/scripts.pory"

# 329 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 330 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 331 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 332 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 333 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 334 "data/maps/LittlerootTown/scripts.pory"
	return
# 335 "data/maps/LittlerootTown/scripts.pory"

# 336 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 337 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 338 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 339 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 340 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 341 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 342 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 343 "data/maps/LittlerootTown/scripts.pory"
	return
# 344 "data/maps/LittlerootTown/scripts.pory"

# 345 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 346 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 347 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 348 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 349 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 350 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 351 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 352 "data/maps/LittlerootTown/scripts.pory"
	return
# 353 "data/maps/LittlerootTown/scripts.pory"

# 354 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 355 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome0
# 356 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 357 "data/maps/LittlerootTown/scripts.pory"
	return
# 358 "data/maps/LittlerootTown/scripts.pory"

# 359 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 360 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome1
# 361 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 362 "data/maps/LittlerootTown/scripts.pory"
	return
# 363 "data/maps/LittlerootTown/scripts.pory"

# 364 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 365 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 366 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 367 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 368 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 369 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 370 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 371 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 372 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 373 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 374 "data/maps/LittlerootTown/scripts.pory"
	return
# 375 "data/maps/LittlerootTown/scripts.pory"

# 376 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 377 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 378 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 379 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 380 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 381 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 382 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 383 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 384 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 385 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 386 "data/maps/LittlerootTown/scripts.pory"
	return
# 387 "data/maps/LittlerootTown/scripts.pory"

# 388 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 389 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 390 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 391 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 392 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 393 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 394 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 395 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 396 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 397 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 398 "data/maps/LittlerootTown/scripts.pory"
	return
# 399 "data/maps/LittlerootTown/scripts.pory"

# 400 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 401 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 402 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 403 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 404 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 405 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 406 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 407 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 408 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 409 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 410 "data/maps/LittlerootTown/scripts.pory"
	return
# 411 "data/maps/LittlerootTown/scripts.pory"

# 412 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 413 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 414 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 415 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 416 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 417 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 418 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 419 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 420 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 421 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 422 "data/maps/LittlerootTown/scripts.pory"
	return
# 423 "data/maps/LittlerootTown/scripts.pory"

# 424 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 425 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 426 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 427 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 428 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 429 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 430 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 431 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 432 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 433 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 434 "data/maps/LittlerootTown/scripts.pory"
	return
# 435 "data/maps/LittlerootTown/scripts.pory"

# 436 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 437 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 438 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 439 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 440 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 441 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 442 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 443 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 444 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 445 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 446 "data/maps/LittlerootTown/scripts.pory"
	return
# 447 "data/maps/LittlerootTown/scripts.pory"

# 448 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 449 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 450 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 451 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 452 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 453 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 454 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 455 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 456 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 457 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 458 "data/maps/LittlerootTown/scripts.pory"
	return
# 459 "data/maps/LittlerootTown/scripts.pory"

# 460 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 461 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 462 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 463 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 464 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 465 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 466 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 467 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 468 "data/maps/LittlerootTown/scripts.pory"

# 469 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 470 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 471 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 472 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 473 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 474 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 475 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 476 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 477 "data/maps/LittlerootTown/scripts.pory"

# 478 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 479 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 480 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 481 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 482 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 483 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 484 "data/maps/LittlerootTown/scripts.pory"

# 485 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 486 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 487 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 488 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 489 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 490 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 491 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 492 "data/maps/LittlerootTown/scripts.pory"

# 493 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 494 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 495 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 496 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 497 "data/maps/LittlerootTown/scripts.pory"

# 498 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 499 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 500 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 501 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 502 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 503 "data/maps/LittlerootTown/scripts.pory"

# 504 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 505 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 506 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 507 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 508 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 509 "data/maps/LittlerootTown/scripts.pory"

# 510 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 511 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 512 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 513 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 514 "data/maps/LittlerootTown/scripts.pory"

# 515 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 516 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 517 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 518 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 519 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 520 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 521 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 522 "data/maps/LittlerootTown/scripts.pory"

# 523 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 524 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 525 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 526 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 527 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 528 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 529 "data/maps/LittlerootTown/scripts.pory"

# 530 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 531 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 532 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 533 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 534 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 535 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 536 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 537 "data/maps/LittlerootTown/scripts.pory"

# 538 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 539 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 540 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 541 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 542 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 543 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 544 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 545 "data/maps/LittlerootTown/scripts.pory"

# 546 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 547 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 548 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 549 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 550 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 551 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 552 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 553 "data/maps/LittlerootTown/scripts.pory"

# 554 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 555 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 556 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 557 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 558 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 559 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 560 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 561 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 562 "data/maps/LittlerootTown/scripts.pory"

# 563 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 564 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 565 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 566 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 567 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 568 "data/maps/LittlerootTown/scripts.pory"

# 569 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 570 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 571 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 572 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 573 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 574 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 575 "data/maps/LittlerootTown/scripts.pory"

# 576 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 577 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 578 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 579 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 580 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 581 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 582 "data/maps/LittlerootTown/scripts.pory"

# 583 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 584 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 585 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 586 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 587 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 588 "data/maps/LittlerootTown/scripts.pory"

# 589 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 590 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 591 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 592 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 593 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 594 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 595 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 596 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 597 "data/maps/LittlerootTown/scripts.pory"

# 598 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 599 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 600 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 601 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 602 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 603 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 604 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 605 "data/maps/LittlerootTown/scripts.pory"

# 606 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 607 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 608 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 609 "data/maps/LittlerootTown/scripts.pory"

# 610 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 611 "data/maps/LittlerootTown/scripts.pory"
	lock
# 612 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 613 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 614 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 615 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 616 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 617 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterUp
# 618 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 619 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 620 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 621 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 622 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 623 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 624 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 625 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 626 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 627 "data/maps/LittlerootTown/scripts.pory"
	end
# 628 "data/maps/LittlerootTown/scripts.pory"

# 629 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 630 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_LITTLEROOT_MOM
# 631 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 632 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 633 "data/maps/LittlerootTown/scripts.pory"
	release
# 634 "data/maps/LittlerootTown/scripts.pory"
	end
# 635 "data/maps/LittlerootTown/scripts.pory"

# 636 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 637 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 638 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 639 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 640 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 641 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 642 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 643 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 644 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 645 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 646 "data/maps/LittlerootTown/scripts.pory"
	return
# 647 "data/maps/LittlerootTown/scripts.pory"

# 648 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 649 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 650 "data/maps/LittlerootTown/scripts.pory"

# 651 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 652 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 653 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 654 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 655 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 656 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 657 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 658 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 659 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these RUNNING SHOES.\p"
# 660 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 661 "data/maps/LittlerootTown/scripts.pory"

# 662 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 663 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 664 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 665 "data/maps/LittlerootTown/scripts.pory"

# 666 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 667 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 668 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 669 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 670 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 671 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these RUNNING SHOES and race\n"
# 672 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”$"
# 673 "data/maps/LittlerootTown/scripts.pory"

# 674 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 675 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 676 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 677 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 678 "data/maps/LittlerootTown/scripts.pory"
	.string "POKéMON now…\l"
# 679 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 680 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 681 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 682 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 683 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 684 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 685 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 686 "data/maps/LittlerootTown/scripts.pory"

# 687 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 688 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 689 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 690 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 691 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 692 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 693 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 694 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 695 "data/maps/LittlerootTown/scripts.pory"

# 696 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 697 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 698 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 699 "data/maps/LittlerootTown/scripts.pory"

# 700 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 701 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 702 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"

LittlerootTown_MapScripts::
# 706 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Script_LittlerootTown_OnTransition
# 707 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 708 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_QUEST_INTRO_STATE, 1, Script_LittlerootTown_Intro_StepOffTruck
	.2byte 0


Script_LittlerootTown_OnTransition:
# 724 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 725 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Script_LittlerootTown_OnTransition_2
Script_LittlerootTown_OnTransition_1:
	end

Script_LittlerootTown_OnTransition_2:
# 727 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 8
	goto Script_LittlerootTown_OnTransition_1


Script_LittlerootTown_Intro_StepOffTruck::
# 733 "data/maps/LittlerootTown/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_Intro_StepOffTruck_2
# 738 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 739 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
Script_LittlerootTown_Intro_StepOffTruck_1:
# 741 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Intro_GoInsideWithMom
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_Intro_StepOffTruck_6
# 746 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 747 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
Script_LittlerootTown_Intro_StepOffTruck_5:
# 749 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 750 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

Script_LittlerootTown_Intro_StepOffTruck_2:
# 735 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 736 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
	goto Script_LittlerootTown_Intro_StepOffTruck_1

Script_LittlerootTown_Intro_StepOffTruck_6:
# 743 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 744 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
	goto Script_LittlerootTown_Intro_StepOffTruck_5


Script_LittlerootTown_Intro_OpenDoor::
# 755 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 756 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
	return


Script_LittlerootTown_Intro_CloseDoor::
# 761 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 762 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
	return


Script_LittlerootTown_Intro_GoInsideWithMom::
# 767 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 768 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 769 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_0
# 773 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 774 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Intro_OpenDoor
# 775 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_MOM
# 776 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_1
# 779 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 780 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Intro_CloseDoor
# 781 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 782 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_2
# 786 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 787 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_Mom_OurNewHome
# 788 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 789 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_3
# 794 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_4
# 800 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 801 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Intro_OpenDoor
# 802 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_5
# 806 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_Intro_GoInsideWithMom_Movement_6
# 809 "data/maps/LittlerootTown/scripts.pory"
	waitmovement
# 810 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 811 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_QUEST_INTRO_STATE, 1
# 812 "data/maps/LittlerootTown/scripts.pory"
	hideplayer
# 813 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Intro_CloseDoor
# 814 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 815 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	return


Script_LittlerootTown_Interact_FatMan::
# 820 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_FatMan_UsePCToStoreItems, MSGBOX_NPC
	end


Script_LittlerootTown_Interact_Boy::
# 831 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_Boy_ProfBitch, MSGBOX_NPC
	end


Script_LittlerootTown_Interact_TownSign::
# 857 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_TownSign, MSGBOX_SIGN
	end


Script_LittlerootTown_Interact_LabSign::
# 867 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_LabSign, MSGBOX_SIGN
	end


Script_LittlerootTown_Interact_BrendansHouseSign::
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_Interact_BrendansHouseSign_1
# 879 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_BirchsSign, MSGBOX_SIGN
	return

Script_LittlerootTown_Interact_BrendansHouseSign_1:
# 877 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_PlayersSign, MSGBOX_SIGN
	return


Script_LittlerootTown_Interact_MaysHouseSign::
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Script_LittlerootTown_Interact_MaysHouseSign_1
# 887 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_BirchsSign, MSGBOX_SIGN
	return

Script_LittlerootTown_Interact_MaysHouseSign_1:
# 885 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_PlayersSign, MSGBOX_SIGN
	return


Script_LittlerootTown_Interact_Twin::
# 900 "data/maps/LittlerootTown/scripts.pory"
	lock
# 901 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 902 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, Script_LittlerootTown_Interact_Twin_2
# 904 "data/maps/LittlerootTown/scripts.pory"
	goto_if_unset FLAG_RESCUED_BIRCH, Script_LittlerootTown_Interact_Twin_3
# 906 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 0
	goto_if_ne Script_LittlerootTown_Interact_Twin_4
# 909 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_Twin_PokemonWillJumpOut
Script_LittlerootTown_Interact_Twin_1:
# 911 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

Script_LittlerootTown_Interact_Twin_2:
# 903 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GoodLuck
	goto Script_LittlerootTown_Interact_Twin_1

Script_LittlerootTown_Interact_Twin_3:
# 905 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GoSaveBirch
	goto Script_LittlerootTown_Interact_Twin_1

Script_LittlerootTown_Interact_Twin_4:
# 907 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GoSaveBirch
	goto Script_LittlerootTown_Interact_Twin_1


# 769 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_0:
# 770 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 771 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 771 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 771 "data/maps/LittlerootTown/scripts.pory"
	delay_16
	step_end

# 776 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_1:
# 777 "data/maps/LittlerootTown/scripts.pory"
	walk_down
	step_end

# 782 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_2:
# 783 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 784 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
	step_end

# 789 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_3:
# 790 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 791 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 792 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

# 794 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_4:
# 795 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 796 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 797 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 798 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 802 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_5:
# 803 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 804 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
	step_end

# 806 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Intro_GoInsideWithMom_Movement_6:
# 807 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 807 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

Text_LittlerootTown_FatMan_UsePCToStoreItems:
# 824 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
	.string "and Pokemon.\p"
	.string "The power of science is staggering!$"

Text_LittlerootTown_Boy_ProfBitch:
# 835 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch tries to spend time\n"
	.string "in the wild. But he is absolutely\l"
	.string "useless in the field.\p"
	.string "One time he got absolutely swarmed\n"
	.string "by some Zigzagoons. Talk about useless,\l"
	.string "might as well call him, Prof. Bitch.$"

Text_LittlerootTown_Mom_OurNewHome:
# 843 "data/maps/LittlerootTown/scripts.pory"
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

Text_LittlerootTown_TownSign::
# 861 "data/maps/LittlerootTown/scripts.pory"
	.string "Littleroot Town\n"
	.string "“A town that can't be shaded any hue.”$"

Text_LittlerootTown_LabSign::
# 871 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's Pokémon Lab.$"

Text_LittlerootTown_PlayersSign::
# 891 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s House.$"

Text_LittlerootTown_BirchsSign::
# 895 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's House.$"

Text_LittlerootTown_Twin_PokemonWillJumpOut:
# 914 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
	.string "If you go outside and go in the grass,\n"
	.string "wild Pokémon will jump out!$"
