BerryTreeScript::
# 2 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryTreeData
# 3 "data/scripts/berry_tree.pory"
	switch VAR_0x8004
# 4 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_SPARKLING, BerryTreeScript_3
# 5 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_NO_BERRY, BerryTreeScript_4
# 6 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_PLANTED, BerryTreeScript_5
# 7 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_SPROUTED, BerryTreeScript_6
# 8 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_TALLER, BerryTreeScript_7
# 9 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_TRUNK, BerryTreeScript_8
# 10 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_BUDDING, BerryTreeScript_9
# 11 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_FLOWERING, BerryTreeScript_10
# 12 "data/scripts/berry_tree.pory"
	case BERRY_STAGE_BERRIES, BerryTreeScript_11
BerryTreeScript_1:
# 14 "data/scripts/berry_tree.pory"
	releaseall
	end

BerryTreeScript_3:
# 4 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_Sparkling
	goto BerryTreeScript_1

BerryTreeScript_4:
# 5 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CheckSoil
	goto BerryTreeScript_1

BerryTreeScript_5:
# 6 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CheckBerryStage1
	goto BerryTreeScript_1

BerryTreeScript_6:
# 7 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CheckBerryStage2
	goto BerryTreeScript_1

BerryTreeScript_7:
# 8 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CheckBerryStage3
	goto BerryTreeScript_1

BerryTreeScript_8:
# 9 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CheckBerryStageTrunk
	goto BerryTreeScript_1

BerryTreeScript_9:
# 10 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CheckBerryStageBudding
	goto BerryTreeScript_1

BerryTreeScript_10:
# 11 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CheckBerryStage4
	goto BerryTreeScript_1

BerryTreeScript_11:
# 12 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CheckBerryFullyGrown
	goto BerryTreeScript_1


BerryTree_EventScript_Sparkling::
# 19 "data/scripts/berry_tree.pory"
	lockall
# 20 "data/scripts/berry_tree.pory"
	message BerryTree_Text_ExclamationPoint
# 21 "data/scripts/berry_tree.pory"
	waitmessage
# 22 "data/scripts/berry_tree.pory"
	waitbuttonpress
	return


BerryTree_EventScript_CheckSoil::
# 27 "data/scripts/berry_tree.pory"
	lock
# 28 "data/scripts/berry_tree.pory"
	faceplayer
# 29 "data/scripts/berry_tree.pory"
	specialvar VAR_RESULT, PlayerHasBerries
# 30 "data/scripts/berry_tree.pory"
	compare VAR_RESULT, 0
	goto_if_ne BerryTree_EventScript_CheckSoil_2
# 34 "data/scripts/berry_tree.pory"
	specialvar VAR_RESULT, PlayerHasMulch
# 35 "data/scripts/berry_tree.pory"
	compare VAR_RESULT, 0
	goto_if_ne BerryTree_EventScript_CheckSoil_5
# 39 "data/scripts/berry_tree.pory"
	message BerryTree_Text_ItsSoftLoamySoil
# 40 "data/scripts/berry_tree.pory"
	waitmessage
# 41 "data/scripts/berry_tree.pory"
	waitbuttonpress
	return

BerryTree_EventScript_CheckSoil_2:
# 31 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_WantToPlant
	return

BerryTree_EventScript_CheckSoil_5:
# 36 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_WantToMulch
	return


BerryTree_EventScript_WantToPlant::
# 46 "data/scripts/berry_tree.pory"
	specialvar VAR_RESULT, PlayerHasMulch
# 47 "data/scripts/berry_tree.pory"
	compare VAR_RESULT, 0
	goto_if_ne BerryTree_EventScript_WantToPlant_2
# 51 "data/scripts/berry_tree.pory"
	msgbox BerryTree_Text_WantToPlant, MSGBOX_YESNO
# 52 "data/scripts/berry_tree.pory"
	compare VAR_RESULT, YES
	goto_if_eq BerryTree_EventScript_WantToPlant_5
BerryTree_EventScript_WantToPlant_4:
	return

BerryTree_EventScript_WantToPlant_2:
# 48 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_WantToPlantMulch
	return

BerryTree_EventScript_WantToPlant_5:
# 53 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_ChooseBerryToPlant
	goto BerryTree_EventScript_WantToPlant_4


BerryTree_EventScript_WantToMulch::
# 59 "data/scripts/berry_tree.pory"
	msgbox BerryTree_Text_WantToMulch, MSGBOX_YESNO
# 60 "data/scripts/berry_tree.pory"
	compare VAR_RESULT, YES
	goto_if_eq BerryTree_EventScript_WantToMulch_2
BerryTree_EventScript_WantToMulch_1:
	return

BerryTree_EventScript_WantToMulch_2:
# 61 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_ChooseMulchToUse
	goto BerryTree_EventScript_WantToMulch_1


BerryTree_EventScript_WantToPlantMulch::
# 67 "data/scripts/berry_tree.pory"
	message BerryTree_Text_ItsSoftLoamySoil
# 68 "data/scripts/berry_tree.pory"
	waitmessage
# 69 "data/scripts/berry_tree.pory"
	multichoice 0, 0, MULTI_BERRY_PLOT, FALSE
# 70 "data/scripts/berry_tree.pory"
	switch VAR_RESULT
# 71 "data/scripts/berry_tree.pory"
	case 0, BerryTree_EventScript_WantToPlantMulch_3
# 72 "data/scripts/berry_tree.pory"
	case 1, BerryTree_EventScript_WantToPlantMulch_4
# 73 "data/scripts/berry_tree.pory"
	case 2, BerryTree_EventScript_WantToPlantMulch_5
# 74 "data/scripts/berry_tree.pory"
	case MULTI_B_PRESSED, BerryTree_EventScript_WantToPlantMulch_6
BerryTree_EventScript_WantToPlantMulch_1:
	return

BerryTree_EventScript_WantToPlantMulch_3:
# 71 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_ChooseMulchToUse
	goto BerryTree_EventScript_WantToPlantMulch_1

BerryTree_EventScript_WantToPlantMulch_4:
# 72 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_ChooseBerryToPlant
	goto BerryTree_EventScript_WantToPlantMulch_1

BerryTree_EventScript_WantToPlantMulch_5:
	return

BerryTree_EventScript_WantToPlantMulch_6:
	return


BerryTree_EventScript_ChooseMulchToUse::
# 80 "data/scripts/berry_tree.pory"
	fadescreen FADE_TO_BLACK
# 81 "data/scripts/berry_tree.pory"
	closemessage
# 82 "data/scripts/berry_tree.pory"
	special Bag_ChooseMulch
# 83 "data/scripts/berry_tree.pory"
	waitstate
# 84 "data/scripts/berry_tree.pory"
	compare VAR_ITEM_ID, 0
	goto_if_ne BerryTree_EventScript_ChooseMulchToUse_2
BerryTree_EventScript_ChooseMulchToUse_1:
	return

BerryTree_EventScript_ChooseMulchToUse_2:
# 85 "data/scripts/berry_tree.pory"
	removeitem VAR_ITEM_ID
# 86 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_UseMulch
	goto BerryTree_EventScript_ChooseMulchToUse_1


BerryTree_EventScript_ChooseBerryToPlant::
# 92 "data/scripts/berry_tree.pory"
	fadescreen FADE_TO_BLACK
# 93 "data/scripts/berry_tree.pory"
	closemessage
# 94 "data/scripts/berry_tree.pory"
	special Bag_ChooseBerry
# 95 "data/scripts/berry_tree.pory"
	compare VAR_ITEM_ID, 0
	goto_if_ne BerryTree_EventScript_ChooseBerryToPlant_2
BerryTree_EventScript_ChooseBerryToPlant_1:
	return

BerryTree_EventScript_ChooseBerryToPlant_2:
# 96 "data/scripts/berry_tree.pory"
	removeitem VAR_ITEM_ID
# 97 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_PlantBerry
	goto BerryTree_EventScript_ChooseBerryToPlant_1


BerryTree_EventScript_CheckBerryStage1::
# 103 "data/scripts/berry_tree.pory"
	lockall
# 104 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryCountString
# 105 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryGrowthStage1
# 106 "data/scripts/berry_tree.pory"
	waitmessage
# 107 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 108 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_WantToWater
	end


BerryTree_EventScript_CheckBerryStage2::
# 113 "data/scripts/berry_tree.pory"
	lockall
# 114 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryName
# 115 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryGrowthStage2
# 116 "data/scripts/berry_tree.pory"
	waitmessage
# 117 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 118 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_WantToWater
	end


BerryTree_EventScript_CheckBerryStage3::
# 123 "data/scripts/berry_tree.pory"
	lockall
# 124 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryName
# 125 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryGrowthStage3
# 126 "data/scripts/berry_tree.pory"
	waitmessage
# 127 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 128 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_WantToWater
	end


BerryTree_EventScript_CheckBerryStageTrunk::
# 133 "data/scripts/berry_tree.pory"
	lockall
# 134 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryName
# 135 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryGrowthStageTrunk
# 136 "data/scripts/berry_tree.pory"
	waitmessage
# 137 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 138 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_WantToWater
	end


BerryTree_EventScript_CheckBerryStageBudding::
# 143 "data/scripts/berry_tree.pory"
	lockall
# 144 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryName
# 145 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryGrowthStageBudding
# 146 "data/scripts/berry_tree.pory"
	waitmessage
# 147 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 148 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_WantToWater
	end


BerryTree_EventScript_CheckBerryStage4::
# 153 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_GetCareAdverb
# 154 "data/scripts/berry_tree.pory"
	lockall
# 155 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryName
# 156 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryGrowthStage4
# 157 "data/scripts/berry_tree.pory"
	waitmessage
# 158 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 159 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_WantToWater
	end


BerryTree_EventScript_GetCareAdverb::
# 166 "data/scripts/berry_tree.pory"
	switch VAR_0x8005
# 167 "data/scripts/berry_tree.pory"
	case 0, BerryTree_EventScript_GetCareAdverb_3
# 168 "data/scripts/berry_tree.pory"
	case 4, BerryTree_EventScript_GetCareAdverb_4
# 169 "data/scripts/berry_tree.pory"
	bufferstring STR_VAR_2, BerryTree_Text_CareAdverbGood
BerryTree_EventScript_GetCareAdverb_1:
	return

BerryTree_EventScript_GetCareAdverb_3:
# 167 "data/scripts/berry_tree.pory"
	bufferstring STR_VAR_2, BerryTree_Text_CareAdverbPoor
	goto BerryTree_EventScript_GetCareAdverb_1

BerryTree_EventScript_GetCareAdverb_4:
# 168 "data/scripts/berry_tree.pory"
	bufferstring STR_VAR_2, BerryTree_Text_CareAdverbGreat
	goto BerryTree_EventScript_GetCareAdverb_1


BerryTree_EventScript_CheckBerryFullyGrown::
# 176 "data/scripts/berry_tree.pory"
	buffernumberstring STR_VAR_2, VAR_0x8006
# 177 "data/scripts/berry_tree.pory"
	lock
# 178 "data/scripts/berry_tree.pory"
	faceplayer
# 179 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryCountString
# 180 "data/scripts/berry_tree.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BerryTree_EventScript_CheckBerryFullyGrown_2
BerryTree_EventScript_CheckBerryFullyGrown_1:
# 183 "data/scripts/berry_tree.pory"
	msgbox BerryTree_Text_WantToPick, MSGBOX_YESNO
# 184 "data/scripts/berry_tree.pory"
	compare VAR_RESULT, YES
	goto_if_eq BerryTree_EventScript_CheckBerryFullyGrown_5
# 187 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CancelPickingBerry
BerryTree_EventScript_CheckBerryFullyGrown_4:
	return

BerryTree_EventScript_CheckBerryFullyGrown_2:
# 181 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CheckBerryFullyGrown_Mutation
	goto BerryTree_EventScript_CheckBerryFullyGrown_1

BerryTree_EventScript_CheckBerryFullyGrown_5:
# 185 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_PickBerry
	goto BerryTree_EventScript_CheckBerryFullyGrown_4


# 192 "data/scripts/berry_tree.pory"

# 193 "data/scripts/berry_tree.pory"
.set BERRY_NORMAL_BAG_FULL, 0
# 194 "data/scripts/berry_tree.pory"
.set BERRY_NORMAL_SPACE_IN_BAG, 1
# 195 "data/scripts/berry_tree.pory"
.set BERRY_MUTATION_BAG_FULL, 2
# 196 "data/scripts/berry_tree.pory"
.set BERRY_MUTATION_SPACE_IN_BAG, 3

BerryTree_EventScript_PickBerry::
# 200 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionPickBerryTree
# 201 "data/scripts/berry_tree.pory"
	compare VAR_0x8004, BERRY_NORMAL_BAG_FULL
	goto_if_eq BerryTree_EventScript_PickBerry_2
# 203 "data/scripts/berry_tree.pory"
	compare VAR_0x8004, BERRY_MUTATION_BAG_FULL
	goto_if_eq BerryTree_EventScript_PickBerry_3
# 205 "data/scripts/berry_tree.pory"
	compare VAR_0x8004, BERRY_MUTATION_SPACE_IN_BAG
	goto_if_eq BerryTree_EventScript_PickBerry_4
# 208 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionRemoveBerryTree
# 209 "data/scripts/berry_tree.pory"
	message BerryTree_Text_PickedTheBerry
# 210 "data/scripts/berry_tree.pory"
	delay 10
# 211 "data/scripts/berry_tree.pory"
	showberrydescription
# 212 "data/scripts/berry_tree.pory"
	playfanfare MUS_OBTAIN_BERRY
# 213 "data/scripts/berry_tree.pory"
	waitmessage
# 214 "data/scripts/berry_tree.pory"
	waitfanfare
# 215 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 216 "data/scripts/berry_tree.pory"
	message BerryTree_Text_PutAwayBerry
# 217 "data/scripts/berry_tree.pory"
	waitmessage
# 218 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 219 "data/scripts/berry_tree.pory"
	hideitemdescription
BerryTree_EventScript_PickBerry_1:
# 221 "data/scripts/berry_tree.pory"
	release
	return

BerryTree_EventScript_PickBerry_2:
# 202 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_BerryPocketFull
	goto BerryTree_EventScript_PickBerry_1

BerryTree_EventScript_PickBerry_3:
# 204 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_BerryPocketFull_Mutation
	goto BerryTree_EventScript_PickBerry_1

BerryTree_EventScript_PickBerry_4:
# 206 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_PickBerry_Mutation
	goto BerryTree_EventScript_PickBerry_1


BerryTree_EventScript_BerryPocketFull::
# 226 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryPocketFull
# 227 "data/scripts/berry_tree.pory"
	waitmessage
# 228 "data/scripts/berry_tree.pory"
	waitbuttonpress
	return


BerryTree_EventScript_CancelPickingBerry::
# 233 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryLeftUnpicked
# 234 "data/scripts/berry_tree.pory"
	waitmessage
# 235 "data/scripts/berry_tree.pory"
	waitbuttonpress
	return


BerryTree_EventScript_ItemUsePlantBerry::
# 240 "data/scripts/berry_tree.pory"
	lockall
# 241 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryTreeData
# 242 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_PlantBerry
# 243 "data/scripts/berry_tree.pory"
	releaseall
	end


# 247 "data/scripts/berry_tree.pory"

# 248 "data/scripts/berry_tree.pory"
BerryTree_EventScript_WantToWater::
# 249 "data/scripts/berry_tree.pory"
.if OW_BERRY_PESTS == TRUE
# 250 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CheckForPests
# 251 "data/scripts/berry_tree.pory"
.endif
# 252 "data/scripts/berry_tree.pory"
.if OW_BERRY_WEEDS == TRUE
# 253 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CheckForWeed
# 254 "data/scripts/berry_tree.pory"
.endif
# 255 "data/scripts/berry_tree.pory"
	checkitem ITEM_WAILMER_PAIL
# 256 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, FALSE, BerryTree_EventScript_DontWater
# 257 "data/scripts/berry_tree.pory"
	specialvar VAR_RESULT, CanWaterBerryPlot
# 258 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, FALSE, BerryTree_EventScript_DontWater
# 259 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryName
# 260 "data/scripts/berry_tree.pory"
	msgbox BerryTree_Text_WantToWater, MSGBOX_YESNO
# 261 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_WaterBerry
# 262 "data/scripts/berry_tree.pory"
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_DontWater
# 263 "data/scripts/berry_tree.pory"

# 264 "data/scripts/berry_tree.pory"
BerryTree_EventScript_DontWater::
# 265 "data/scripts/berry_tree.pory"
	releaseall
# 266 "data/scripts/berry_tree.pory"
	end

BerryTree_EventScript_ItemUseWailmerPail::
# 270 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryTreeData
# 271 "data/scripts/berry_tree.pory"
	lockall
# 272 "data/scripts/berry_tree.pory"
BerryTree_EventScript_WaterBerry:
# 273 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryName
# 274 "data/scripts/berry_tree.pory"
	message BerryTree_Text_WateredTheBerry
# 275 "data/scripts/berry_tree.pory"
	waitmessage
# 276 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionWaterBerryTree
# 277 "data/scripts/berry_tree.pory"
	special DoWateringBerryTreeAnim
# 278 "data/scripts/berry_tree.pory"
	message BerryTree_Text_PlantIsDelighted
# 279 "data/scripts/berry_tree.pory"
	waitmessage
# 280 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 281 "data/scripts/berry_tree.pory"
	releaseall
	end


BerryTree_EventScript_PlantBerry::
# 286 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionPlantBerryTree
# 287 "data/scripts/berry_tree.pory"
	incrementgamestat GAME_STAT_PLANTED_BERRIES
# 288 "data/scripts/berry_tree.pory"
	special IncrementDailyPlantedBerries
# 289 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionGetBerryCountString
# 290 "data/scripts/berry_tree.pory"
	message BerryTree_Text_PlantedOneBerry
# 291 "data/scripts/berry_tree.pory"
	waitmessage
# 292 "data/scripts/berry_tree.pory"
	waitbuttonpress
	return


# 310 "data/scripts/berry_tree.pory"

# 311 "data/scripts/berry_tree.pory"
BerryTree_Text_BerryGrowthStage1:
# 312 "data/scripts/berry_tree.pory"
.if OW_BERRY_SIX_STAGES == TRUE
# 313 "data/scripts/berry_tree.pory"
	.string "This is where you planted the\n{STR_VAR_1}!$"
# 314 "data/scripts/berry_tree.pory"
.else
# 315 "data/scripts/berry_tree.pory"
	.string "One {STR_VAR_1} was planted here.$"
# 316 "data/scripts/berry_tree.pory"
.endif
# 317 "data/scripts/berry_tree.pory"

# 318 "data/scripts/berry_tree.pory"
BerryTree_Text_BerryGrowthStage2:
# 319 "data/scripts/berry_tree.pory"
.if OW_BERRY_SIX_STAGES == TRUE
# 320 "data/scripts/berry_tree.pory"
	.string "The {STR_VAR_1} is sprouting!$"
# 321 "data/scripts/berry_tree.pory"
.else
# 322 "data/scripts/berry_tree.pory"
	.string "{STR_VAR_1} has sprouted.$"
# 323 "data/scripts/berry_tree.pory"
.endif
# 324 "data/scripts/berry_tree.pory"

# 325 "data/scripts/berry_tree.pory"
BerryTree_Text_BerryGrowthStage3:
# 326 "data/scripts/berry_tree.pory"
.if OW_BERRY_SIX_STAGES == TRUE
# 327 "data/scripts/berry_tree.pory"
	.string "The {STR_VAR_1}'s seedling is growing well!$"
# 328 "data/scripts/berry_tree.pory"
.else
# 329 "data/scripts/berry_tree.pory"
	.string "This {STR_VAR_1} plant is growing taller.$"
# 330 "data/scripts/berry_tree.pory"
.endif

# 341 "data/scripts/berry_tree.pory"

# 342 "data/scripts/berry_tree.pory"
BerryTree_Text_BerryGrowthStage4:
# 343 "data/scripts/berry_tree.pory"
.if OW_BERRY_SIX_STAGES == TRUE
# 344 "data/scripts/berry_tree.pory"
	.string "The {STR_VAR_1} tree is in bloom!$"
# 345 "data/scripts/berry_tree.pory"
.else
# 346 "data/scripts/berry_tree.pory"
	.string "These {STR_VAR_1} flowers are blooming\n"
# 347 "data/scripts/berry_tree.pory"
	.string "{STR_VAR_2}.$"
# 348 "data/scripts/berry_tree.pory"
.endif

# 407 "data/scripts/berry_tree.pory"
.if OW_BERRY_MUTATIONS == TRUE

BerryTree_EventScript_CheckBerryFullyGrown_Mutation:
# 409 "data/scripts/berry_tree.pory"
	msgbox BerryTree_Text_WantToPick_Mutation, MSGBOX_YESNO
# 410 "data/scripts/berry_tree.pory"
	compare VAR_RESULT, YES
	goto_if_eq BerryTree_EventScript_CheckBerryFullyGrown_Mutation_2
# 413 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_CancelPickingBerry_Mutation
BerryTree_EventScript_CheckBerryFullyGrown_Mutation_1:
	return

BerryTree_EventScript_CheckBerryFullyGrown_Mutation_2:
# 411 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_PickBerry
	goto BerryTree_EventScript_CheckBerryFullyGrown_Mutation_1


BerryTree_EventScript_CancelPickingBerry_Mutation::
# 419 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryLeftUnpicked_Mutation
# 420 "data/scripts/berry_tree.pory"
	waitmessage
# 421 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 422 "data/scripts/berry_tree.pory"
	release
	return


BerryTree_EventScript_BerryPocketFull_Mutation::
# 427 "data/scripts/berry_tree.pory"
	message BerryTree_Text_BerryPocketFull_Mutation
# 428 "data/scripts/berry_tree.pory"
	waitmessage
# 429 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 430 "data/scripts/berry_tree.pory"
	release
	return


BerryTree_EventScript_PickBerry_Mutation::
# 435 "data/scripts/berry_tree.pory"
	special IncrementDailyPickedBerries
# 436 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionRemoveBerryTree
# 437 "data/scripts/berry_tree.pory"
	message BerryTree_Text_PickedTheBerry_Mutation
# 438 "data/scripts/berry_tree.pory"
	playfanfare MUS_OBTAIN_BERRY
# 439 "data/scripts/berry_tree.pory"
	waitmessage
# 440 "data/scripts/berry_tree.pory"
	waitfanfare
# 441 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 442 "data/scripts/berry_tree.pory"
	message BerryTree_Text_PutAwayBerry_Mutation
# 443 "data/scripts/berry_tree.pory"
	waitmessage
# 444 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 445 "data/scripts/berry_tree.pory"
	release
	return


# 478 "data/scripts/berry_tree.pory"
.endif

# 480 "data/scripts/berry_tree.pory"
.if OW_BERRY_MULCH_USAGE == TRUE

BerryTree_EventScript_UseMulch::
# 482 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionApplyMulch
# 483 "data/scripts/berry_tree.pory"
	message BerryTree_Text_ScatteredMulch
# 484 "data/scripts/berry_tree.pory"
	waitmessage
# 485 "data/scripts/berry_tree.pory"
	waitbuttonpress
	return


# 498 "data/scripts/berry_tree.pory"
.endif

# 500 "data/scripts/berry_tree.pory"
.if OW_BERRY_WEEDS == TRUE

BerryTree_EventScript_CheckForWeed::
# 502 "data/scripts/berry_tree.pory"
	specialvar VAR_RESULT, ObjectEventInteractionBerryHasWeed
# 503 "data/scripts/berry_tree.pory"
	compare VAR_RESULT, 0
	goto_if_ne BerryTree_EventScript_CheckForWeed_2
BerryTree_EventScript_CheckForWeed_1:
	return

BerryTree_EventScript_CheckForWeed_2:
# 504 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_WeedIsGrowing
	goto BerryTree_EventScript_CheckForWeed_1


BerryTree_EventScript_WeedIsGrowing::
# 510 "data/scripts/berry_tree.pory"
	msgbox BerryTree_Text_WeedIsGrowing, MSGBOX_YESNO
# 511 "data/scripts/berry_tree.pory"
	compare VAR_RESULT, YES
	goto_if_eq BerryTree_EventScript_WeedIsGrowing_2
BerryTree_EventScript_WeedIsGrowing_1:
	return

BerryTree_EventScript_WeedIsGrowing_2:
# 512 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_PullOutWeed
	goto BerryTree_EventScript_WeedIsGrowing_1


BerryTree_EventScript_PullOutWeed::
# 518 "data/scripts/berry_tree.pory"
	special ObjectEventInteractionPullBerryWeed
# 519 "data/scripts/berry_tree.pory"
	message BerryTree_Text_PulledOutTheWeed
# 520 "data/scripts/berry_tree.pory"
	waitmessage
# 521 "data/scripts/berry_tree.pory"
	waitbuttonpress
	return


# 533 "data/scripts/berry_tree.pory"
.endif

# 535 "data/scripts/berry_tree.pory"
.if OW_BERRY_PESTS == TRUE

BerryTree_EventScript_CheckForPests::
# 537 "data/scripts/berry_tree.pory"
	specialvar VAR_RESULT, ObjectEventInteractionBerryHasPests
# 538 "data/scripts/berry_tree.pory"
	compare VAR_RESULT, 0
	goto_if_ne BerryTree_EventScript_CheckForPests_2
BerryTree_EventScript_CheckForPests_1:
	return

BerryTree_EventScript_CheckForPests_2:
# 539 "data/scripts/berry_tree.pory"
	call BerryTree_EventScript_EncounterPests
	goto BerryTree_EventScript_CheckForPests_1


BerryTree_EventScript_EncounterPests::
# 545 "data/scripts/berry_tree.pory"
	message BerryTree_Text_APokemonAppeared
# 546 "data/scripts/berry_tree.pory"
	waitmessage
# 547 "data/scripts/berry_tree.pory"
	waitbuttonpress
# 548 "data/scripts/berry_tree.pory"
	dowildbattle
	return


# 555 "data/scripts/berry_tree.pory"
.endif

BerryTree_Text_ItsSoftLoamySoil:
# 296 "data/scripts/berry_tree.pory"
	.string "It's soft, loamy soil.$"

BerryTree_Text_WantToPlant:
# 300 "data/scripts/berry_tree.pory"
	.string "It's soft, loamy soil.\n"
	.string "Want to plant a Berry?$"

BerryTree_Text_PlantedOneBerry:
# 305 "data/scripts/berry_tree.pory"
	.string "{PLAYER} planted one {STR_VAR_1} in\n"
	.string "the soft, loamy soil.$"

BerryTree_Text_BerryGrowthStageTrunk:
# 333 "data/scripts/berry_tree.pory"
	.string "The {STR_VAR_1}'s trunk is getting bigger!$"

BerryTree_Text_BerryGrowthStageBudding:
# 337 "data/scripts/berry_tree.pory"
	.string "The {STR_VAR_1} tree has buds!$"

BerryTree_Text_CareAdverbGreat:
# 351 "data/scripts/berry_tree.pory"
	.string "very beautifully$"

BerryTree_Text_CareAdverbPoor:
# 355 "data/scripts/berry_tree.pory"
	.string "cutely$"

BerryTree_Text_CareAdverbGood:
# 359 "data/scripts/berry_tree.pory"
	.string "prettily$"

BerryTree_Text_WantToPick:
# 363 "data/scripts/berry_tree.pory"
	.string "You found {STR_VAR_2} {STR_VAR_1}!\p"
	.string "Do you want to pick the\n"
	.string "{STR_VAR_1}?$"

BerryTree_Text_PickedTheBerry:
# 369 "data/scripts/berry_tree.pory"
	.string "{PLAYER} picked the {STR_VAR_2} {STR_VAR_1}.$"

BerryTree_Text_PutAwayBerry:
# 373 "data/scripts/berry_tree.pory"
	.string "{PLAYER} put away the {STR_VAR_1}\n"
	.string "in the Bag's Berries Pocket.\p"
	.string "The soil returned to its soft and\n"
	.string "loamy state.$"

BerryTree_Text_BerryPocketFull:
# 380 "data/scripts/berry_tree.pory"
	.string "The Bag's Berries Pocket is full.\p"
	.string "The {STR_VAR_1} couldn't be taken.$"

BerryTree_Text_BerryLeftUnpicked:
# 385 "data/scripts/berry_tree.pory"
	.string "{PLAYER} left the {STR_VAR_1}\n"
	.string "unpicked.$"

BerryTree_Text_WantToWater:
# 390 "data/scripts/berry_tree.pory"
	.string "Want to water the {STR_VAR_1} with the\n"
	.string "Wailmer Pail?$"

BerryTree_Text_WateredTheBerry:
# 395 "data/scripts/berry_tree.pory"
	.string "{PLAYER} watered the {STR_VAR_1}.$"

BerryTree_Text_PlantIsDelighted:
# 399 "data/scripts/berry_tree.pory"
	.string "The plant seems to be delighted.$"

BerryTree_Text_ExclamationPoint:
# 403 "data/scripts/berry_tree.pory"
	.string "!$"

BerryTree_Text_WantToPick_Mutation:
# 449 "data/scripts/berry_tree.pory"
	.string "You found {STR_VAR_2} {STR_VAR_1}\n"
	.string "and 1 {STR_VAR_3}!\p"
	.string "Do you want to pick them?$"

BerryTree_Text_BerryLeftUnpicked_Mutation:
# 455 "data/scripts/berry_tree.pory"
	.string "{PLAYER} left the {STR_VAR_1}\n"
	.string "and the {STR_VAR_3} unpicked.$"

BerryTree_Text_BerryPocketFull_Mutation:
# 460 "data/scripts/berry_tree.pory"
	.string "The Bag's Berries Pocket is full.\p"
	.string "The {STR_VAR_1} and the\n"
	.string "{STR_VAR_3} couldn't be taken.$"

BerryTree_Text_PickedTheBerry_Mutation:
# 466 "data/scripts/berry_tree.pory"
	.string "{PLAYER} picked the {STR_VAR_2} {STR_VAR_1}\n"
	.string "and the {STR_VAR_3}.$"

BerryTree_Text_PutAwayBerry_Mutation:
# 471 "data/scripts/berry_tree.pory"
	.string "{PLAYER} put away the {STR_VAR_1}\n"
	.string "and the {STR_VAR_3} in the Bag's\l"
	.string "Berries Pocket.\p"
	.string "The soil returned to its soft and\n"
	.string "loamy state.$"

BerryTree_Text_WantToMulch:
# 489 "data/scripts/berry_tree.pory"
	.string "It's soft, loamy soil.\n"
	.string "Put down some fertilizer?$"

BerryTree_Text_ScatteredMulch:
# 494 "data/scripts/berry_tree.pory"
	.string "{PLAYER} scattered the {STR_VAR_1}\n"
	.string "on the soft, loamy soil.$"

BerryTree_Text_WeedIsGrowing:
# 525 "data/scripts/berry_tree.pory"
	.string "A weed is growing here.\n"
	.string "Do you want to pull it out?$"

BerryTree_Text_PulledOutTheWeed:
# 530 "data/scripts/berry_tree.pory"
	.string "{PLAYER} pulled out the weed!$"

BerryTree_Text_APokemonAppeared:
# 552 "data/scripts/berry_tree.pory"
	.string "A Pokémon appeared!$"
