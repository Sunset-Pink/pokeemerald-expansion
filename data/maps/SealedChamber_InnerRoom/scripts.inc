SealedChamber_InnerRoom_MapScripts::
	.byte 0


# 3 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 4 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleBackWall::
# 5 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 6 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_FirstWailordLastRelicanth
# 7 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_set FLAG_REGI_DOORS_OPENED, SealedChamber_InnerRoom_EventScript_NoEffect
# 8 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	specialvar VAR_RESULT, CheckRelicanthWailord
# 9 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SealedChamber_InnerRoom_EventScript_NoEffect
# 10 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadeoutbgm 0
# 11 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_TRUCK_MOVE
# 12 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Long
# 13 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 14 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 15 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 16 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 17 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 18 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 19 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 20 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 21 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 22 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 23 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox gText_DoorOpenedFarAway, MSGBOX_DEFAULT
# 24 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	closemessage
# 25 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadeinbgm 0
# 26 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setflag FLAG_REGI_DOORS_OPENED
# 27 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 28 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 29 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 30 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_NoEffect::
# 31 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 32 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 33 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 34 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart1::
# 35 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 36 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_InThisCaveWeHaveLived
# 37 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 38 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 39 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 40 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart2::
# 41 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 42 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_WeOweAllToThePokemon
# 43 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 44 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 45 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 46 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart3::
# 47 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 48 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_ButWeSealedThePokemonAway
# 49 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 50 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 51 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 52 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart4::
# 53 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 54 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_WeFearedIt
# 55 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 56 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 57 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 58 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart5::
# 59 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 60 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_ThoseWithCourageHope
# 61 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 62 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 63 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 64 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart6::
# 65 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 66 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_OpenDoorEternalPokemonWaits
# 67 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 68 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
