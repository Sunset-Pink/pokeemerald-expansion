Tree::
# 2 "data/scripts/field_move_scripts.pory"
	lockall
# 3 "data/scripts/field_move_scripts.pory"
	checkfieldmove FIELD_MOVE_CUT, TRUE
# 4 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Tree_2
# 9 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 10 "data/scripts/field_move_scripts.pory"
	buffermovename STR_VAR_2, MOVE_CUT
# 11 "data/scripts/field_move_scripts.pory"
	msgbox Tree_WantToCut_Text, MSGBOX_YESNO
# 12 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Tree_5
# 17 "data/scripts/field_move_scripts.pory"
	msgbox MonUsedFieldMove_Text
# 18 "data/scripts/field_move_scripts.pory"
	closemessage
# 19 "data/scripts/field_move_scripts.pory"
Tree_Common:
# 20 "data/scripts/field_move_scripts.pory"
	isfollowerfieldmoveuser VAR_0x8004
# 21 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 3, VAR_0x8004
# 22 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_CUT_ON_GRASS
# 23 "data/scripts/field_move_scripts.pory"
	waitstate
# 24 "data/scripts/field_move_scripts.pory"
Tree_Cut:
# 25 "data/scripts/field_move_scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 26 "data/scripts/field_move_scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq Tree_8
Tree_7:
# 29 "data/scripts/field_move_scripts.pory"
	applymovement VAR_LAST_TALKED, Tree_Movement_0
# 30 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 31 "data/scripts/field_move_scripts.pory"
	removeobject VAR_LAST_TALKED
# 32 "data/scripts/field_move_scripts.pory"
	releaseall
	end

Tree_2:
# 5 "data/scripts/field_move_scripts.pory"
	msgbox Tree_CantCut_Text
# 6 "data/scripts/field_move_scripts.pory"
	releaseall
	return

Tree_5:
# 13 "data/scripts/field_move_scripts.pory"
	closemessage
# 14 "data/scripts/field_move_scripts.pory"
	releaseall
	return

Tree_8:
# 27 "data/scripts/field_move_scripts.pory"
	call Follower_FieldMove
	goto Tree_7


Follower_FieldMove::
# 52 "data/scripts/field_move_scripts.pory"
	getdirectiontoface VAR_0x8005, OBJ_EVENT_ID_FOLLOWER, OBJ_EVENT_ID_PLAYER
# 53 "data/scripts/field_move_scripts.pory"
	specialvar VAR_0x8006, GetPlayerFacingDirection
# 54 "data/scripts/field_move_scripts.pory"
	compare VAR_0x8005, DIR_NONE
	goto_if_eq Follower_FieldMove_2
Follower_FieldMove_1:
# 57 "data/scripts/field_move_scripts.pory"
	switch VAR_0x8005
# 58 "data/scripts/field_move_scripts.pory"
	case DIR_NORTH, Follower_FieldMove_6
# 59 "data/scripts/field_move_scripts.pory"
	case DIR_EAST, Follower_FieldMove_7
# 60 "data/scripts/field_move_scripts.pory"
	case DIR_SOUTH, Follower_FieldMove_8
# 61 "data/scripts/field_move_scripts.pory"
	case DIR_WEST, Follower_FieldMove_9
Follower_FieldMove_4:
# 63 "data/scripts/field_move_scripts.pory"
Follower_FieldMove_End:
	return

Follower_FieldMove_2:
# 55 "data/scripts/field_move_scripts.pory"
	goto Follower_FieldMove_End
	goto Follower_FieldMove_1

Follower_FieldMove_6:
# 58 "data/scripts/field_move_scripts.pory"
	call Follower_SwapPosition_North
	goto Follower_FieldMove_4

Follower_FieldMove_7:
# 59 "data/scripts/field_move_scripts.pory"
	call Follower_SwapPosition_East
	goto Follower_FieldMove_4

Follower_FieldMove_8:
# 60 "data/scripts/field_move_scripts.pory"
	call Follower_SwapPosition_South
	goto Follower_FieldMove_4

Follower_FieldMove_9:
# 61 "data/scripts/field_move_scripts.pory"
	call Follower_SwapPosition_West
	goto Follower_FieldMove_4


Follower_SwapPosition_North:
# 68 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Follower_SwapPosition_North_Movement_0
# 69 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 70 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 71 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 72 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Follower_SwapPosition_North_Movement_1
# 75 "data/scripts/field_move_scripts.pory"
	waitmovement 0
	return


Follower_SwapPosition_South:
# 80 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Follower_SwapPosition_South_Movement_0
# 81 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 82 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 83 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 84 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Follower_SwapPosition_South_Movement_1
# 85 "data/scripts/field_move_scripts.pory"
	waitmovement 0
	return


Follower_SwapPosition_East:
# 90 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Follower_SwapPosition_East_Movement_0
# 91 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 92 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 93 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 94 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Follower_SwapPosition_East_Movement_1
# 95 "data/scripts/field_move_scripts.pory"
	waitmovement 0
	return


Follower_SwapPosition_West:
# 100 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Follower_SwapPosition_West_Movement_0
# 101 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 102 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 103 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 104 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Follower_SwapPosition_West_Movement_1
	return


Cut::
# 108 "data/scripts/field_move_scripts.pory"
	lockall
# 109 "data/scripts/field_move_scripts.pory"
	goto Tree_Common
	return


Rock::
# 113 "data/scripts/field_move_scripts.pory"
	lockall
# 114 "data/scripts/field_move_scripts.pory"
	checkfieldmove FIELD_MOVE_ROCK_SMASH, TRUE
# 115 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Rock_2
# 120 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 121 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 122 "data/scripts/field_move_scripts.pory"
	buffermovename STR_VAR_2, MOVE_ROCK_SMASH
# 123 "data/scripts/field_move_scripts.pory"
	msgbox Rock_WantToSmash_Text, MSGBOX_YESNO
# 124 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rock_5
# 129 "data/scripts/field_move_scripts.pory"
	closemessage
# 130 "data/scripts/field_move_scripts.pory"
Rock_SmashCommon:
# 131 "data/scripts/field_move_scripts.pory"
	isfollowerfieldmoveuser VAR_0x8004
# 132 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 4, VAR_0x8004
# 133 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_ROCK_SMASH
# 134 "data/scripts/field_move_scripts.pory"
	waitstate
# 135 "data/scripts/field_move_scripts.pory"
Rock_Smash:
# 136 "data/scripts/field_move_scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 137 "data/scripts/field_move_scripts.pory"
	call Follower_FieldMove
# 138 "data/scripts/field_move_scripts.pory"
	applymovement VAR_LAST_TALKED, Rock_Movement_0
# 139 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 140 "data/scripts/field_move_scripts.pory"
	removeobject VAR_LAST_TALKED
# 141 "data/scripts/field_move_scripts.pory"
	specialvar VAR_RESULT, TryUpdateRusturfTunnelState
# 142 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Rock_8
# 146 "data/scripts/field_move_scripts.pory"
	special RockSmashWildEncounter
# 147 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Rock_11
# 151 "data/scripts/field_move_scripts.pory"
	waitstate
# 152 "data/scripts/field_move_scripts.pory"
	releaseall
	end

Rock_2:
# 116 "data/scripts/field_move_scripts.pory"
	msgbox Rock_CantSmash_Text
# 117 "data/scripts/field_move_scripts.pory"
	releaseall
	return

Rock_5:
# 125 "data/scripts/field_move_scripts.pory"
	closemessage
# 126 "data/scripts/field_move_scripts.pory"
	releaseall
	end

Rock_8:
# 143 "data/scripts/field_move_scripts.pory"
	releaseall
	end

Rock_11:
# 148 "data/scripts/field_move_scripts.pory"
	releaseall
	end


RockSmash::
# 167 "data/scripts/field_move_scripts.pory"
	lockall
# 168 "data/scripts/field_move_scripts.pory"
	goto Rock_SmashCommon
	return


Boulder::
# 172 "data/scripts/field_move_scripts.pory"
	lockall
# 173 "data/scripts/field_move_scripts.pory"
	goto_if_set FLAG_SYS_USE_STRENGTH, Boulder_2
# 178 "data/scripts/field_move_scripts.pory"
	checkfieldmove FIELD_MOVE_STRENGTH, TRUE
# 179 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Boulder_5
# 184 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 185 "data/scripts/field_move_scripts.pory"
	msgbox Boulder_WantToStrength_Text, MSGBOX_YESNO
# 186 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Boulder_8
# 191 "data/scripts/field_move_scripts.pory"
	closemessage
# 192 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 193 "data/scripts/field_move_scripts.pory"
	waitstate
# 194 "data/scripts/field_move_scripts.pory"
StrengthActivate:
# 195 "data/scripts/field_move_scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 196 "data/scripts/field_move_scripts.pory"
	msgbox MonUsedStrength_Text
# 197 "data/scripts/field_move_scripts.pory"
	releaseall
	end

Boulder_2:
# 174 "data/scripts/field_move_scripts.pory"
	msgbox Boulder_StrengthActivated_Text
# 175 "data/scripts/field_move_scripts.pory"
	releaseall
	end

Boulder_5:
# 180 "data/scripts/field_move_scripts.pory"
	msgbox Boulder_CantStrength_Text
# 181 "data/scripts/field_move_scripts.pory"
	releaseall
	end

Boulder_8:
# 187 "data/scripts/field_move_scripts.pory"
	closemessage
# 188 "data/scripts/field_move_scripts.pory"
	releaseall
	end


Strength::
# 224 "data/scripts/field_move_scripts.pory"
	lockall
# 225 "data/scripts/field_move_scripts.pory"
	dofieldeffect FIELD_MOVE_STRENGTH
# 226 "data/scripts/field_move_scripts.pory"
	waitstate
# 227 "data/scripts/field_move_scripts.pory"
	goto StrengthActivate
	end


Waterfall::
# 232 "data/scripts/field_move_scripts.pory"
	lockall
# 233 "data/scripts/field_move_scripts.pory"
	checkfieldmove FIELD_MOVE_WATERFALL
# 234 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Waterfall_2
# 240 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 241 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 242 "data/scripts/field_move_scripts.pory"
	msgbox Waterfall_WantTo_Text, MSGBOX_YESNO
# 243 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Waterfall_5
# 247 "data/scripts/field_move_scripts.pory"
	msgbox MonUsedWaterfall_Text
# 248 "data/scripts/field_move_scripts.pory"
	hidefollowernpc
# 249 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_WATERFALL
# 250 "data/scripts/field_move_scripts.pory"
	callnative FollowerNPC_WarpSetEnd
# 251 "data/scripts/field_move_scripts.pory"
	releaseall
	end

Waterfall_2:
# 235 "data/scripts/field_move_scripts.pory"
Waterfall_CannotUse:
# 236 "data/scripts/field_move_scripts.pory"
	msgbox Waterfall_CantUse_Text
# 237 "data/scripts/field_move_scripts.pory"
	releaseall
	end

Waterfall_5:
# 244 "data/scripts/field_move_scripts.pory"
	releaseall
	end


Waterfall_CantUse::
# 256 "data/scripts/field_move_scripts.pory"
	lockall
# 257 "data/scripts/field_move_scripts.pory"
	goto Waterfall_CannotUse
	return


Dive::
# 275 "data/scripts/field_move_scripts.pory"
	lockall
# 276 "data/scripts/field_move_scripts.pory"
	checkfieldmove FIELD_MOVE_DIVE
# 277 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Dive_2
# 282 "data/scripts/field_move_scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 283 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 284 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 285 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 1, 1
# 286 "data/scripts/field_move_scripts.pory"
	msgbox Dive_Cant_Text, MSGBOX_YESNO
# 287 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Dive_5
# 291 "data/scripts/field_move_scripts.pory"
	msgbox MonUsedDive_Text
# 292 "data/scripts/field_move_scripts.pory"
	hidefollowernpc
# 293 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_0x8004
# 294 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 1, 1
# 295 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_DIVE
# 296 "data/scripts/field_move_scripts.pory"
	releaseall
	end

Dive_2:
# 278 "data/scripts/field_move_scripts.pory"
	msgbox Dive_Cant_Text
# 279 "data/scripts/field_move_scripts.pory"
	releaseall
	end

Dive_5:
# 288 "data/scripts/field_move_scripts.pory"
	releaseall
	end


Dive_Underwater::
# 301 "data/scripts/field_move_scripts.pory"
	lockall
# 302 "data/scripts/field_move_scripts.pory"
	checkfieldmove FIELD_MOVE_DIVE
# 303 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Dive_Underwater_2
# 308 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 309 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 310 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 1, 1
# 311 "data/scripts/field_move_scripts.pory"
	msgbox Dive_WantToSurface_Text, MSGBOX_YESNO
# 312 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Dive_Underwater_5
# 316 "data/scripts/field_move_scripts.pory"
	msgbox MonUsedDive_Text
# 317 "data/scripts/field_move_scripts.pory"
	hidefollowernpc
# 318 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_DIVE
# 319 "data/scripts/field_move_scripts.pory"
	callnative SetFollowerNPCSurfSpriteAfterDive
# 320 "data/scripts/field_move_scripts.pory"
	releaseall
	end

Dive_Underwater_2:
# 304 "data/scripts/field_move_scripts.pory"
	msgbox Dive_CantSurface_Text
# 305 "data/scripts/field_move_scripts.pory"
	releaseall
	end

Dive_Underwater_5:
# 313 "data/scripts/field_move_scripts.pory"
	releaseall
	end


Dig::
# 349 "data/scripts/field_move_scripts.pory"
	lockall
# 350 "data/scripts/field_move_scripts.pory"
	isfollowerfieldmoveuser VAR_0x8004
# 351 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 3, VAR_0x8004
# 352 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_DIG
# 353 "data/scripts/field_move_scripts.pory"
	waitstate
# 354 "data/scripts/field_move_scripts.pory"
SealedChamber:
# 355 "data/scripts/field_move_scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 356 "data/scripts/field_move_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_ne Dig_2
Dig_1:
# 359 "data/scripts/field_move_scripts.pory"
	callnative DoBrailleDigEffect
# 360 "data/scripts/field_move_scripts.pory"
	releaseall
	end

Dig_2:
# 357 "data/scripts/field_move_scripts.pory"
	call Follower_FieldMove
	goto Dig_1


Grass::
# 365 "data/scripts/field_move_scripts.pory"
	lockall
# 366 "data/scripts/field_move_scripts.pory"
	isfollowerfieldmoveuser VAR_0x8004
# 367 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 3, VAR_0x8004
# 368 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_CUT_ON_GRASS
# 369 "data/scripts/field_move_scripts.pory"
	waitstate
	return


SweetScent_Fail::
# 373 "data/scripts/field_move_scripts.pory"
	msgbox SweetScent_Fail_Text, MSGBOX_SIGN
	end


Fog::
# 382 "data/scripts/field_move_scripts.pory"
	lockall
# 383 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 384 "data/scripts/field_move_scripts.pory"
	buffermovename STR_VAR_2, MOVE_DEFOG
# 385 "data/scripts/field_move_scripts.pory"
	msgbox MonUsedFieldMove_Text
# 386 "data/scripts/field_move_scripts.pory"
	closemessage
# 387 "data/scripts/field_move_scripts.pory"
	isfollowerfieldmoveuser VAR_0x8004
# 388 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 3, VAR_0x8004
# 389 "data/scripts/field_move_scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 390 "data/scripts/field_move_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_ne Fog_2
Fog_1:
# 393 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 394 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 395 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_DEFOG
# 396 "data/scripts/field_move_scripts.pory"
	waitstate
# 397 "data/scripts/field_move_scripts.pory"
	releaseall
	end

Fog_2:
# 391 "data/scripts/field_move_scripts.pory"
	call Follower_FieldMove
	goto Fog_1


Cliff::
# 402 "data/scripts/field_move_scripts.pory"
	lockall
# 403 "data/scripts/field_move_scripts.pory"
	checkfieldmove FIELD_MOVE_ROCK_CLIMB
# 404 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Cliff_2
# 408 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 409 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 410 "data/scripts/field_move_scripts.pory"
	msgbox Cliff_WantToClimb_Text, MSGBOX_YESNO
# 411 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Cliff_5
# 415 "data/scripts/field_move_scripts.pory"
	msgbox MonUsedRockClimb_Text
# 416 "data/scripts/field_move_scripts.pory"
	closemessage
# 417 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_ROCK_CLIMB
# 418 "data/scripts/field_move_scripts.pory"
	waitstate
# 419 "data/scripts/field_move_scripts.pory"
	releaseall
	end

Cliff_2:
# 405 "data/scripts/field_move_scripts.pory"
	releaseall
	end

Cliff_5:
# 412 "data/scripts/field_move_scripts.pory"
	releaseall
	end


# 29 "data/scripts/field_move_scripts.pory"
Tree_Movement_0:
# 29 "data/scripts/field_move_scripts.pory"
	cut_tree
	step_end

# 68 "data/scripts/field_move_scripts.pory"
Follower_SwapPosition_North_Movement_0:
# 68 "data/scripts/field_move_scripts.pory"
	walk_down
	step_end

# 72 "data/scripts/field_move_scripts.pory"
Follower_SwapPosition_North_Movement_1:
# 73 "data/scripts/field_move_scripts.pory"
	jump_in_place_up
	step_end

# 80 "data/scripts/field_move_scripts.pory"
Follower_SwapPosition_South_Movement_0:
# 80 "data/scripts/field_move_scripts.pory"
	walk_up
	step_end

# 84 "data/scripts/field_move_scripts.pory"
Follower_SwapPosition_South_Movement_1:
# 84 "data/scripts/field_move_scripts.pory"
	jump_in_place_down
	step_end

# 90 "data/scripts/field_move_scripts.pory"
Follower_SwapPosition_East_Movement_0:
# 90 "data/scripts/field_move_scripts.pory"
	walk_left
	step_end

# 94 "data/scripts/field_move_scripts.pory"
Follower_SwapPosition_East_Movement_1:
# 94 "data/scripts/field_move_scripts.pory"
	jump_in_place_right
	step_end

# 100 "data/scripts/field_move_scripts.pory"
Follower_SwapPosition_West_Movement_0:
# 100 "data/scripts/field_move_scripts.pory"
	walk_right
	step_end

# 104 "data/scripts/field_move_scripts.pory"
Follower_SwapPosition_West_Movement_1:
# 104 "data/scripts/field_move_scripts.pory"
	jump_in_place_left
	step_end

# 138 "data/scripts/field_move_scripts.pory"
Rock_Movement_0:
# 138 "data/scripts/field_move_scripts.pory"
	rock_smash_break
	step_end

Tree_CantCut_Text::
# 36 "data/scripts/field_move_scripts.pory"
	.string "This tree looks like it can be\n"
	.string "Cut down!$"

Tree_WantToCut_Text::
# 41 "data/scripts/field_move_scripts.pory"
	.string "This tree looks like it can be \n"
	.string "Cut down!\p"
	.string "Would you like to Cut it?$"

MonUsedFieldMove_Text::
# 47 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} use {STR_VAR_2}!$"

Rock_CantSmash_Text:
# 156 "data/scripts/field_move_scripts.pory"
	.string "It's a rugged rock, but a Pokémon\n"
	.string "may be able to smash it.$"

Rock_WantToSmash_Text:
# 161 "data/scripts/field_move_scripts.pory"
	.string "This rock appears to be breakable.\n"
	.string "Would you like to use Rock Smash?$"

Boulder_StrengthActivated_Text:
# 201 "data/scripts/field_move_scripts.pory"
	.string "Strength made it possible to move\n"
	.string "boulders around.$"

Boulder_CantStrength_Text:
# 206 "data/scripts/field_move_scripts.pory"
	.string "It's a big boulder, but a Pokémon\n"
	.string "may be able to push it aside.$"

Boulder_WantToStrength_Text:
# 211 "data/scripts/field_move_scripts.pory"
	.string "It's a big boulder, but a Pokémon\n"
	.string "may be able to push it aside.\p"
	.string "Would you like to use Strength?$"

MonUsedStrength_Text:
# 217 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} used Strength!\p"
	.string "{STR_VAR_1}'s Strength made it\n"
	.string "possible to move boulders around!$"

Waterfall_CantUse_Text:
# 260 "data/scripts/field_move_scripts.pory"
	.string "A wall of water is crashing down with\n"
	.string "a mighty roar.$"

Waterfall_WantTo_Text:
# 265 "data/scripts/field_move_scripts.pory"
	.string "It's a large waterfall.\n"
	.string "Would you liek to use Waterfall?$"

MonUsedWaterfall_Text:
# 270 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} used Waterfall.$"

Dive_Cant_Text:
# 324 "data/scripts/field_move_scripts.pory"
	.string "The sea is deep here. A Pokémon\n"
	.string "may be able to go underwater.$"

Dive_WantTo_Text:
# 329 "data/scripts/field_move_scripts.pory"
	.string "The sea is deep here.\n"
	.string "Would you like to use Dive?$"

MonUsedDive_Text:
# 334 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} used Dive.$"

Dive_CantSurface_Text:
# 338 "data/scripts/field_move_scripts.pory"
	.string "Light is filtering down from above.\n"
	.string "A Pokémon may be able to surface.$"

Dive_WantToSurface_Text:
# 343 "data/scripts/field_move_scripts.pory"
	.string "Light is filtering down from above.\n"
	.string "Would you like to use Dive?$"

SweetScent_Fail_Text:
# 377 "data/scripts/field_move_scripts.pory"
	.string "Looks like there's nothing here…$"

Cliff_WantToClimb_Text:
# 423 "data/scripts/field_move_scripts.pory"
	.string "The cliff is steep.\n"
	.string "Would you like to use Rock Climb?$"

MonUsedRockClimb_Text:
# 428 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} used Rock Climb!$"

Cliff_CantClimb_Text:
# 432 "data/scripts/field_move_scripts.pory"
	.string "The cliff is steep.\n"
	.string "A Pokémon may be able to climb it.$"
