RustboroCity_DevonCorp_2F_MapScripts::
# 2 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_2F_OnTransition
	.byte 0


RustboroCity_DevonCorp_2F_OnTransition:
# 6 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq RustboroCity_DevonCorp_2F_OnTransition_2
RustboroCity_DevonCorp_2F_OnTransition_1:
	end

RustboroCity_DevonCorp_2F_OnTransition_2:
# 7 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 2
	goto RustboroCity_DevonCorp_2F_OnTransition_1


RustboroCity_DevonCorp_2F_EventScript_TryAdvanceFossileReady::
# 13 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_TryAdvanceFossileReady_2
RustboroCity_DevonCorp_2F_EventScript_TryAdvanceFossileReady_1:
	return

RustboroCity_DevonCorp_2F_EventScript_TryAdvanceFossileReady_2:
# 14 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 2
	goto RustboroCity_DevonCorp_2F_EventScript_TryAdvanceFossileReady_1


RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist::
# 20 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 21 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 22 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_TryAdvanceFossileReady
# 23 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon
# 24 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end


RustboroCity_DevonCorp_2F_EventScript_BallScientist::
# 29 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 30 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 31 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_TryAdvanceFossileReady
# 32 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_DevonCorp_2F_EventScript_BallScientist_2
# 35 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls
RustboroCity_DevonCorp_2F_EventScript_BallScientist_1:
# 37 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_BallScientist_2:
# 33 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls
	goto RustboroCity_DevonCorp_2F_EventScript_BallScientist_1


RustboroCity_DevonCorp_2F_EventScript_PokenavScientist::
# 42 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 43 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 44 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_TryAdvanceFossileReady
# 45 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_DevonCorp_2F_EventScript_PokenavScientist_2
# 48 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_IMadePokenav
RustboroCity_DevonCorp_2F_EventScript_PokenavScientist_1:
# 50 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_PokenavScientist_2:
# 46 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav
	goto RustboroCity_DevonCorp_2F_EventScript_PokenavScientist_1


RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist::
# 55 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 56 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 57 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_TryAdvanceFossileReady
# 58 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams
# 59 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end


RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
# 64 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 65 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 66 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 2
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_2
# 68 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_3
# 71 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils
# 72 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_CheckForFossils
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_1:
# 74 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_2:
# 67 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_FossilMonReady
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_1

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_3:
# 69 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_1


RustboroCity_DevonCorp_2F_EventScript_CheckForFossils::
	checkitem ITEM_HELIX_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_CheckForFossils_2
	checkitem ITEM_DOME_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_CheckForFossils_2
	checkitem ITEM_OLD_AMBER
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_CheckForFossils_2
	checkitem ITEM_ROOT_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_CheckForFossils_2
	checkitem ITEM_CLAW_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_CheckForFossils_2
	checkitem ITEM_SKULL_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_CheckForFossils_2
	checkitem ITEM_ARMOR_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_CheckForFossils_2
	checkitem ITEM_COVER_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_CheckForFossils_2
	checkitem ITEM_PLUME_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_CheckForFossils_2
	checkitem ITEM_JAW_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_CheckForFossils_2
	checkitem ITEM_SAIL_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_CheckForFossils_2
	checkitem ITEM_FOSSILIZED_FISH
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_CheckForFossils_2
	checkitem ITEM_FOSSILIZED_BIRD
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_CheckForFossils_2
	checkitem ITEM_FOSSILIZED_DRAKE
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_CheckForFossils_2
	checkitem ITEM_FOSSILIZED_DINO
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_CheckForFossils_2
RustboroCity_DevonCorp_2F_EventScript_CheckForFossils_1:
# 98 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_CheckForFossils_2:
# 96 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_NoticeFossil
	goto RustboroCity_DevonCorp_2F_EventScript_CheckForFossils_1


RustboroCity_DevonCorp_2F_EventScript_NoticeFossil::
# 103 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 104 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 105 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 106 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 107 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 108 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 109 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 110 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_2
# 114 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WhichFossil
# 115 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_FossilSelector
# 116 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_5
# 120 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
	return

RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_2:
# 111 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo
	return

RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_5:
# 117 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo
	return


RustboroCity_DevonCorp_2F_EventScript_FossilSelector::
	checkitem ITEM_HELIX_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilSelector_2
RustboroCity_DevonCorp_2F_EventScript_FossilSelector_1:
	checkitem ITEM_DOME_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilSelector_5
RustboroCity_DevonCorp_2F_EventScript_FossilSelector_4:
	checkitem ITEM_OLD_AMBER
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilSelector_8
RustboroCity_DevonCorp_2F_EventScript_FossilSelector_7:
	checkitem ITEM_ROOT_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilSelector_11
RustboroCity_DevonCorp_2F_EventScript_FossilSelector_10:
	checkitem ITEM_CLAW_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilSelector_14
RustboroCity_DevonCorp_2F_EventScript_FossilSelector_13:
	checkitem ITEM_SKULL_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilSelector_17
RustboroCity_DevonCorp_2F_EventScript_FossilSelector_16:
	checkitem ITEM_ARMOR_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilSelector_20
RustboroCity_DevonCorp_2F_EventScript_FossilSelector_19:
	checkitem ITEM_COVER_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilSelector_23
RustboroCity_DevonCorp_2F_EventScript_FossilSelector_22:
	checkitem ITEM_PLUME_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilSelector_26
RustboroCity_DevonCorp_2F_EventScript_FossilSelector_25:
	checkitem ITEM_JAW_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilSelector_29
RustboroCity_DevonCorp_2F_EventScript_FossilSelector_28:
	checkitem ITEM_SAIL_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilSelector_32
RustboroCity_DevonCorp_2F_EventScript_FossilSelector_31:
	checkitem ITEM_FOSSILIZED_FISH
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilSelector_35
RustboroCity_DevonCorp_2F_EventScript_FossilSelector_34:
	checkitem ITEM_FOSSILIZED_BIRD
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilSelector_38
RustboroCity_DevonCorp_2F_EventScript_FossilSelector_37:
	checkitem ITEM_FOSSILIZED_DRAKE
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilSelector_41
RustboroCity_DevonCorp_2F_EventScript_FossilSelector_40:
	checkitem ITEM_FOSSILIZED_DINO
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilSelector_44
RustboroCity_DevonCorp_2F_EventScript_FossilSelector_43:
# 169 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_15, MULTI_B_PRESSED
# 170 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, NULL
	return

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_2:
# 125 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_0, 1
	goto RustboroCity_DevonCorp_2F_EventScript_FossilSelector_1

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_5:
# 128 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_1, 2
	goto RustboroCity_DevonCorp_2F_EventScript_FossilSelector_4

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_8:
# 131 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_2, 3
	goto RustboroCity_DevonCorp_2F_EventScript_FossilSelector_7

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_11:
# 134 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_3, 4
	goto RustboroCity_DevonCorp_2F_EventScript_FossilSelector_10

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_14:
# 137 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_4, 5
	goto RustboroCity_DevonCorp_2F_EventScript_FossilSelector_13

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_17:
# 140 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_5, 6
	goto RustboroCity_DevonCorp_2F_EventScript_FossilSelector_16

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_20:
# 143 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_6, 7
	goto RustboroCity_DevonCorp_2F_EventScript_FossilSelector_19

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_23:
# 146 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_7, 8
	goto RustboroCity_DevonCorp_2F_EventScript_FossilSelector_22

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_26:
# 149 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_8, 9
	goto RustboroCity_DevonCorp_2F_EventScript_FossilSelector_25

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_29:
# 152 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_9, 10
	goto RustboroCity_DevonCorp_2F_EventScript_FossilSelector_28

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_32:
# 155 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_10, 11
	goto RustboroCity_DevonCorp_2F_EventScript_FossilSelector_31

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_35:
# 158 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_11, 12
	goto RustboroCity_DevonCorp_2F_EventScript_FossilSelector_34

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_38:
# 161 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_12, 13
	goto RustboroCity_DevonCorp_2F_EventScript_FossilSelector_37

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_41:
# 164 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_13, 14
	goto RustboroCity_DevonCorp_2F_EventScript_FossilSelector_40

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_44:
# 167 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_14, 15
	goto RustboroCity_DevonCorp_2F_EventScript_FossilSelector_43


RustboroCity_DevonCorp_2F_EventScript_ChooseFossil::
	checkitem ITEM_HELIX_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_2
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_1:
	checkitem ITEM_DOME_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_5
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_4:
	checkitem ITEM_OLD_AMBER
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_8
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_7:
	checkitem ITEM_ROOT_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_11
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_10:
	checkitem ITEM_CLAW_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_14
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_13:
	checkitem ITEM_SKULL_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_17
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_16:
	checkitem ITEM_ARMOR_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_20
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_19:
	checkitem ITEM_COVER_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_23
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_22:
	checkitem ITEM_PLUME_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_26
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_25:
	checkitem ITEM_JAW_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_29
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_28:
	checkitem ITEM_SAIL_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_32
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_31:
	checkitem ITEM_FOSSILIZED_FISH
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_35
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_34:
	checkitem ITEM_FOSSILIZED_BIRD
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_38
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_37:
	checkitem ITEM_FOSSILIZED_DRAKE
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_41
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_40:
	checkitem ITEM_FOSSILIZED_DINO
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_44
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_43:
# 249 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 250 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher
	return

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_2:
# 175 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HELIX_FOSSIL
# 176 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 0
# 177 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_HELIX_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_1

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_5:
# 180 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_DOME_FOSSIL
# 181 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 1
# 182 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_DOME_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_4

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_8:
# 185 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_OLD_AMBER
# 186 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 2
# 187 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_OLD_AMBER
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_7

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_11:
# 190 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ROOT_FOSSIL
# 191 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 3
# 192 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_10

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_14:
# 195 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CLAW_FOSSIL
# 196 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 4
# 197 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_13

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_17:
# 200 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SKULL_FOSSIL
# 201 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 5
# 202 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_SKULL_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_16

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_20:
# 205 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ARMOR_FOSSIL
# 206 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 6
# 207 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_ARMOR_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_19

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_23:
# 210 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_COVER_FOSSIL
# 211 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 7
# 212 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_COVER_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_22

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_26:
# 215 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PLUME_FOSSIL
# 216 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 8
# 217 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_PLUME_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_25

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_29:
# 220 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_JAW_FOSSIL
# 221 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 9
# 222 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_JAW_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_28

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_32:
# 225 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SAIL_FOSSIL
# 226 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 10
# 227 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_SAIL_FOSSIL
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_31

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_35:
# 230 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_FOSSILIZED_FISH
# 231 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 12
# 232 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_FOSSILIZED_FISH
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_34

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_38:
# 235 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_FOSSILIZED_BIRD
# 236 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 11
# 237 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_FOSSILIZED_BIRD
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_37

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_41:
# 240 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_FOSSILIZED_DRAKE
# 241 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 13
# 242 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_FOSSILIZED_DRAKE
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_40

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_44:
# 245 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_FOSSILIZED_DINO
# 246 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 14
# 247 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_FOSSILIZED_DINO
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_43


RustboroCity_DevonCorp_2F_EventScript_FossilMonReady::
# 255 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_WHICH_FOSSIL_REVIVED
# 256 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 0, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_3
# 257 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 1, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_4
# 258 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 2, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_5
# 259 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 3, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_6
# 260 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 4, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_7
# 261 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 5, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_8
# 262 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 6, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_9
# 263 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 7, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_10
# 264 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 8, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_11
# 265 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 9, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_12
# 266 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 10, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_13
# 267 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 11, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_14
# 268 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 12, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_15
# 269 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 13, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_16
# 270 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 14, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_17
RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1:
# 272 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife
# 273 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_WHICH_FOSSIL_REVIVED
# 274 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 0, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_20
# 275 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 1, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_21
# 276 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 2, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_22
# 277 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 3, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_23
# 278 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 4, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_24
# 279 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 5, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_25
# 280 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 6, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_26
# 281 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 7, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_27
# 282 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 8, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_28
# 283 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 9, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_29
# 284 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 10, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_30
# 285 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 11, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_31
# 286 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 12, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_32
# 287 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 13, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_33
# 288 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 14, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_34
RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_18:
# 290 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 291 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
	end

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_3:
# 256 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_OMANYTE
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_4:
# 257 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_KABUTO
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_5:
# 258 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_AERODACTYL
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_6:
# 259 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_7:
# 260 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_8:
# 261 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CRANIDOS
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_9:
# 262 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_SHIELDON
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_10:
# 263 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TIRTOUGA
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_11:
# 264 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ARCHEN
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_12:
# 265 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TYRUNT
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_13:
# 266 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_AMAURA
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_14:
# 267 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_DRACOZOLT
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_15:
# 268 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ARCTOVISH
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_16:
# 269 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_DRACOVISH
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_17:
# 270 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ARCTOZOLT
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_20:
# 274 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_18

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_21:
# 275 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_18

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_22:
# 276 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_18

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_23:
# 277 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_18

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_24:
# 278 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_18

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_25:
# 279 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_18

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_26:
# 280 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_18

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_27:
# 281 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_18

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_28:
# 282 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_18

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_29:
# 283 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_18

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_30:
# 284 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_18

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_31:
# 285 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_18

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_32:
# 286 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_18

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_33:
# 287 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_18

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_34:
# 288 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_18


RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte::
# 296 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_OMANYTE
# 297 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 20
# 298 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_2
# 302 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_5
# 305 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PC
RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_4:
# 307 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
# 308 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 309 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 310 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 311 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 312 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 313 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 314 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_14
RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_12:
# 317 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_11
RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_8:
# 320 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_18
RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_17:
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_2:
# 299 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_5:
# 303 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_4

RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_9:
# 315 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 316 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_10:
# 318 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_11:
# 317 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_10
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_14:
# 314 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_9
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_12

RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_18:
# 321 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedOmanyte_17


RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto::
# 327 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_KABUTO
# 328 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 20
# 329 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_2
# 333 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_5
# 336 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PC
RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_4:
# 338 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
# 339 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 340 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 341 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 342 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 343 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 344 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 345 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_14
RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_12:
# 348 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_11
RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_8:
# 351 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_18
RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_17:
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_2:
# 330 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_5:
# 334 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_4

RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_9:
# 346 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 347 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_10:
# 349 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_11:
# 348 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_10
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_14:
# 345 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_9
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_12

RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_18:
# 352 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedKabuto_17


RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl::
# 358 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_AERODACTYL
# 359 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 20
# 360 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_2
# 364 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_5
# 367 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PC
RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_4:
# 369 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
# 370 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 371 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 372 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 373 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 374 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 375 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 376 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_14
RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_12:
# 379 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_11
RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_8:
# 382 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_18
RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_17:
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_2:
# 361 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_5:
# 365 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_4

RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_9:
# 377 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 378 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_10:
# 380 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_11:
# 379 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_10
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_14:
# 376 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_9
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_12

RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_18:
# 383 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedAerodactyl_17


RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep::
# 389 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LILEEP
# 390 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 20
# 391 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_2
# 395 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_5
# 398 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PC
RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_4:
# 400 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
# 401 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 402 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 403 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 404 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 405 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 406 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 407 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_14
RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_12:
# 410 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_11
RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_8:
# 413 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_18
RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_17:
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_2:
# 392 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_5:
# 396 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_4

RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_9:
# 408 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 409 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_10:
# 411 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_11:
# 410 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_10
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_14:
# 407 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_9
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_12

RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_18:
# 414 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedLileep_17


RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith::
# 420 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ANORITH
# 421 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 20
# 422 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_2
# 426 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_5
# 429 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PC
RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_4:
# 431 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
# 432 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 433 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 434 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 435 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 436 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 437 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 438 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_14
RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_12:
# 441 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_11
RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_8:
# 444 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_18
RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_17:
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_2:
# 423 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_5:
# 427 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_4

RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_9:
# 439 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 440 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_10:
# 442 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_11:
# 441 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_10
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_14:
# 438 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_9
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_12

RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_18:
# 445 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorith_17


RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos::
# 451 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CRANIDOS
# 452 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 20
# 453 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_2
# 457 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_5
# 460 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PC
RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_4:
# 462 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
# 463 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 464 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 465 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 466 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 467 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 468 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 469 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_14
RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_12:
# 472 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_11
RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_8:
# 475 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_18
RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_17:
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_2:
# 454 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_5:
# 458 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_4

RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_9:
# 470 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 471 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_10:
# 473 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_11:
# 472 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_10
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_14:
# 469 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_9
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_12

RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_18:
# 476 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedCranidos_17


RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon::
# 482 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SHIELDON
# 483 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 20
# 484 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_2
# 488 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_5
# 491 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PC
RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_4:
# 493 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
# 494 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 495 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 496 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 497 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 498 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 499 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 500 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_14
RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_12:
# 503 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_11
RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_8:
# 506 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_18
RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_17:
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_2:
# 485 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_5:
# 489 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_4

RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_9:
# 501 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 502 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_10:
# 504 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_11:
# 503 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_10
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_14:
# 500 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_9
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_12

RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_18:
# 507 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedShieldon_17


RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga::
# 513 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TIRTOUGA
# 514 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 20
# 515 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_2
# 519 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_5
# 522 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PC
RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_4:
# 524 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
# 525 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 526 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 527 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 528 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 529 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 530 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 531 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_14
RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_12:
# 534 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_11
RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_8:
# 537 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_18
RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_17:
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_2:
# 516 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_5:
# 520 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_4

RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_9:
# 532 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 533 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_10:
# 535 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_11:
# 534 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_10
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_14:
# 531 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_9
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_12

RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_18:
# 538 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedTirtouga_17


RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen::
# 544 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ARCHEN
# 545 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 20
# 546 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_2
# 550 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_5
# 553 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PC
RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_4:
# 555 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
# 556 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 557 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 558 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 559 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 560 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 561 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 562 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_14
RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_12:
# 565 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_11
RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_8:
# 568 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_18
RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_17:
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_2:
# 547 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_5:
# 551 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_4

RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_9:
# 563 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 564 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_10:
# 566 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_11:
# 565 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_10
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_14:
# 562 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_9
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_12

RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_18:
# 569 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedArchen_17


RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt::
# 575 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYRUNT
# 576 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 20
# 577 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_2
# 581 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_5
# 584 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PC
RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_4:
# 586 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
# 587 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 588 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 589 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 590 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 591 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 592 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 593 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_14
RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_12:
# 596 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_11
RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_8:
# 599 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_18
RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_17:
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_2:
# 578 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_5:
# 582 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_4

RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_9:
# 594 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 595 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_10:
# 597 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_11:
# 596 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_10
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_14:
# 593 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_9
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_12

RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_18:
# 600 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedTyrunt_17


RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura::
# 606 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_AMAURA
# 607 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 20
# 608 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_2
# 612 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_5
# 615 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PC
RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_4:
# 617 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
# 618 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 619 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 620 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 621 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 622 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 623 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 624 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_14
RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_12:
# 627 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_11
RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_8:
# 630 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_18
RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_17:
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_2:
# 609 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_5:
# 613 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_4

RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_9:
# 625 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 626 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_10:
# 628 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_11:
# 627 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_10
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_14:
# 624 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_9
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_12

RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_18:
# 631 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedAmaura_17


RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt::
# 637 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DRACOZOLT
# 638 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 20
# 639 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_2
# 643 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_5
# 646 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PC
RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_4:
# 648 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
# 649 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 650 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 651 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 652 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 653 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 654 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 655 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_14
RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_12:
# 658 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_11
RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_8:
# 661 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_18
RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_17:
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_2:
# 640 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_5:
# 644 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_4

RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_9:
# 656 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 657 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_10:
# 659 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_11:
# 658 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_10
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_14:
# 655 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_9
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_12

RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_18:
# 662 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedDracozolt_17


RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish::
# 668 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ARCTOZOLT
# 669 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 20
# 670 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_2
# 674 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_5
# 677 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PC
RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_4:
# 679 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
# 680 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 681 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 682 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 683 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 684 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 685 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 686 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_14
RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_12:
# 689 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_11
RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_8:
# 692 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_18
RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_17:
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_2:
# 671 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_5:
# 675 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_4

RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_9:
# 687 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 688 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_10:
# 690 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_11:
# 689 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_10
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_14:
# 686 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_9
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_12

RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_18:
# 693 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedArctovish_17


RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish::
# 699 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DRACOVISH
# 700 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 20
# 701 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_2
# 705 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_5
# 708 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PC
RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_4:
# 710 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
# 711 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 712 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 713 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 714 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 715 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 716 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 717 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_14
RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_12:
# 720 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_11
RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_8:
# 723 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_18
RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_17:
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_2:
# 702 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_5:
# 706 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_4

RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_9:
# 718 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 719 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_10:
# 721 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_11:
# 720 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_10
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_14:
# 717 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_9
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_12

RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_18:
# 724 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedDracovish_17


RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt::
# 730 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ARCTOZOLT
# 731 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 20
# 732 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_2
# 736 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_5
# 739 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PC
RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_4:
# 741 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
# 742 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 743 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 744 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 745 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 746 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 747 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 748 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_14
RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_12:
# 751 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_11
RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_8:
# 754 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_18
RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_17:
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_2:
# 733 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
	return

RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_5:
# 737 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_4

RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_9:
# 749 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 750 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_10:
# 752 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_11:
# 751 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PC
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_10
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_8

RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_14:
# 748 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_0, MON_GIVEN_TO_PARTY
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_9
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_12

RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_18:
# 755 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto RustboroCity_DevonCorp_2F_EventScript_ReceivedArctozolt_17


RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist::
# 761 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 762 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 763 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_TryAdvanceFossileReady
# 764 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RUSTBORO_CITY_STATE, 6
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist_2
# 767 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature
RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist_1:
# 769 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist_2:
# 765 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext
	goto RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist_1


RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_0:
# 125 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Helix Fossil$"

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_1:
# 128 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Dome Fossil$"

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_2:
# 131 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Old Amber$"

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_3:
# 134 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Root Fossil$"

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_4:
# 137 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Claw Fossil$"

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_5:
# 140 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Skull Fossil$"

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_6:
# 143 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Armor Fossil$"

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_7:
# 146 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Cover Fossil$"

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_8:
# 149 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Plume Fossil$"

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_9:
# 152 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Jaw Fossil$"

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_10:
# 155 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Sail Fossil$"

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_11:
# 158 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Fossilized Fish$"

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_12:
# 161 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Fossilized Bird$"

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_13:
# 164 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Fossilized Drake$"

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_14:
# 167 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Fossilized Dino$"

RustboroCity_DevonCorp_2F_EventScript_FossilSelector_Text_15:
# 169 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Cancel$"

RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon:
# 773 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We're developing a device for talking\n"
	.string "with Pokémon.\p"
	.string "But we haven't had much success…$"

RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls:
# 779 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm developing new kinds of\n"
	.string "Poké Balls…\p"
	.string "But I haven't made much headway…$"

RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls:
# 785 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We finally made new kinds of\n"
	.string "Poké Balls!\p"
	.string "The Repeat Ball makes it easier to\n"
	.string "catch Pokémon you've caught before.\p"
	.string "The Timer Ball gets better at catching\n"
	.string "Pokémon the longer a battle runs.\p"
	.string "Both are proudly developed by\n"
	.string "the Devon Corporation.\p"
	.string "Please give them a try!$"

RustboroCity_DevonCorp_2F_Text_IMadePokenav:
# 797 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I made the PokéNav!\p"
	.string "As an engineer, I feel blessed to have\n"
	.string "made something so great!$"

RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav:
# 803 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, wow!\n"
	.string "That's a PokéNav!\p"
	.string "It came about as a result of our\n"
	.string "President's desire to learn about\l"
	.string "the feelings of Pokémon.\p"
	.string "Would you like me to describe its\n"
	.string "features in detail?\p"
	.string "No, no. I think you'll find out just by\n"
	.string "trying the PokéNav out.$"

RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams:
# 815 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a device that\n"
	.string "visually reproduces the dreams of\l"
	.string "Pokémon…\p"
	.string "But it's not going well.$"

RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils:
# 822 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I've been trying to develop a device\n"
	.string "that resurrects Pokémon from fossils…\p"
	.string "And, it's working!$"

RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife:
# 828 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Wait! That thing you have there…\n"
	.string "Is that a Pokémon fossil?\p"
	.string "Would you like to bring that Pokémon\n"
	.string "back to life?\p"
	.string "I can with my newly developed\n"
	.string "Fossil Regenerator.$"

RustboroCity_DevonCorp_2F_Text_OhIsThatSo:
# 837 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, is that so?\p"
	.string "Devon's technological expertise\n"
	.string "is outstanding, I tell you.$"

RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne:
# 843 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, now that's a surprise!\n"
	.string "You have not one, but two, fossils?\p"
	.string "Unfortunately, my machine can only\n"
	.string "regenerate one Pokémon at a time.\p"
	.string "Would you like to pick one of your\n"
	.string "fossils for regeneration?$"

RustboroCity_DevonCorp_2F_Text_WhichFossil:
# 852 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Which fossil would you like to \n"
	.string "regenerate?$"

RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher:
# 857 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Excellent!\n"
	.string "Let's do this right away.\p"
	.string "{PLAYER} handed the {STR_VAR_1} to\n"
	.string "the Devon Researcher.$"

RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime:
# 864 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The Fossil Regenerator, which I made,\n"
	.string "is incredible.\p"
	.string "But it has one drawback--it takes\n"
	.string "a long time to work.\p"
	.string "So, uh… How about you go for a stroll\n"
	.string "and look around for a while?$"

RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife:
# 873 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Thanks for waiting!\p"
	.string "Your fossilized Pokémon has been\n"
	.string "brought back to life!\p"
	.string "The fossil was an ancient Pokémon.\n"
	.string "{STR_VAR_2}, it was!$"

RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher:
# 881 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} received {STR_VAR_2} from\n"
	.string "the Devon Researcher.$"

RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature:
# 886 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a new feature\n"
	.string "for the PokéNav…\p"
	.string "But it's not going well.$"

RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext:
# 892 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Well, now what shall I work on\n"
	.string "developing next?\p"
	.string "Our company allows us to make our\n"
	.string "inspirations into reality.\p"
	.string "One couldn't ask for a better\n"
	.string "environment as an engineer.$"
