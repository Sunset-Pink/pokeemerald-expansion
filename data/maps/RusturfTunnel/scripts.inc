RusturfTunnel_MapScripts::
# 2 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_OnTransition
# 3 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RusturfTunnel_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 4, RusturfTunnel_EventScript_ClearTunnelScene
# 5 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 5, RusturfTunnel_EventScript_ClearTunnelScene
	.2byte 0


RusturfTunnel_OnTransition:
# 10 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_RUSTURF_TUNNEL_STATE, 2
	goto_if_eq RusturfTunnel_OnTransition_2
RusturfTunnel_OnTransition_1:
	end

RusturfTunnel_OnTransition_2:
# 11 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_RUSTURF_TUNNEL_PEEKO, 13, 4
# 12 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_RUSTURF_TUNNEL_GRUNT, 13, 5
	goto RusturfTunnel_OnTransition_1


RusturfTunnel_EventScript_Wanda::
# 18 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 19 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 20 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock
# 21 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 22 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 23 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 24 "data/maps/RusturfTunnel/scripts.pory"
	release
	end


RusturfTunnel_EventScript_WandasBoyfriend::
# 29 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 30 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 31 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_set FLAG_TEMP_1, RusturfTunnel_EventScript_WandasBoyfriend_2
# 34 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_1
# 35 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging
RusturfTunnel_EventScript_WandasBoyfriend_1:
# 37 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 38 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 39 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 40 "data/maps/RusturfTunnel/scripts.pory"
	release
	end

RusturfTunnel_EventScript_WandasBoyfriend_2:
# 32 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ToGetToVerdanturf
	goto RusturfTunnel_EventScript_WandasBoyfriend_1


RusturfTunnel_EventScript_ClearTunnelScene::
# 45 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 46 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_2
# 51 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_3
RusturfTunnel_EventScript_ClearTunnelScene_1:
# 60 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 61 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_ExclamationMark
# 62 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 63 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_Delay48
# 64 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 66 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeHM
# 67 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_7
# 67 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_7
RusturfTunnel_EventScript_ClearTunnelScene_6:
# 73 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 74 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 75 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ExplainStrength
# 76 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 79 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_12
# 91 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_ClearTunnelScene_Movement_4
# 95 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_EventScript_ClearTunnelScene_Movement_5
# 100 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 101 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, Common_Movement_WalkInPlaceFasterDown
# 102 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
RusturfTunnel_EventScript_ClearTunnelScene_11:
# 104 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WandaReunion
# 105 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 106 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_ne RusturfTunnel_EventScript_ClearTunnelScene_16
RusturfTunnel_EventScript_ClearTunnelScene_15:
# 114 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, RusturfTunnel_EventScript_ClearTunnelScene_Movement_7
# 118 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_19
# 124 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_EventScript_ClearTunnelScene_Movement_9
RusturfTunnel_EventScript_ClearTunnelScene_18:
# 131 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 132 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
# 133 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	end

RusturfTunnel_EventScript_ClearTunnelScene_2:
# 47 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_WalkInPlaceFasterUp
# 48 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 49 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 50 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
	goto RusturfTunnel_EventScript_ClearTunnelScene_1

RusturfTunnel_EventScript_ClearTunnelScene_3:
# 52 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_EventScript_ClearTunnelScene_Movement_0
# 56 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
	goto RusturfTunnel_EventScript_ClearTunnelScene_1

RusturfTunnel_EventScript_ClearTunnelScene_7:
# 68 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 69 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_EventScript_ClearTunnelScene_Movement_1
# 70 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
	goto RusturfTunnel_EventScript_ClearTunnelScene_6

RusturfTunnel_EventScript_ClearTunnelScene_12:
# 80 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_ClearTunnelScene_Movement_2
# 84 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_EventScript_ClearTunnelScene_Movement_3
# 89 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
	goto RusturfTunnel_EventScript_ClearTunnelScene_11

RusturfTunnel_EventScript_ClearTunnelScene_16:
# 107 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_ClearTunnelScene_Movement_6
	goto RusturfTunnel_EventScript_ClearTunnelScene_15

RusturfTunnel_EventScript_ClearTunnelScene_19:
# 119 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_EventScript_ClearTunnelScene_Movement_8
	goto RusturfTunnel_EventScript_ClearTunnelScene_18


RusturfTunnel_EventScript_TunnelBlockagePos1::
# 138 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 1
	end


RusturfTunnel_EventScript_TunnelBlockagePos2::
# 143 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 2
	end


RusturfTunnel_EventScript_TunnelBlockagePos3::
# 148 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 3
	end


RusturfTunnel_EventScript_AquaGruntBackUp::
# 153 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 154 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 155 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ComeAndGetSome
# 156 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 157 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_GRUNT, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 158 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_PEEKO, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 159 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 160 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTURF_TUNNEL_GRUNT
# 161 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTURF_TUNNEL_PEEKO
# 162 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
# 163 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	end


# 167 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntAndPeekoBackUp:
# 168 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 169 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 170 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
	step_end

RusturfTunnel_EventScript_Peeko::
# 174 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 175 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 176 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 177 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 178 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_Peeko
# 179 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 180 "data/maps/RusturfTunnel/scripts.pory"
	release
	end


RusturfTunnel_EventScript_Grunt::
# 185 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 186 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 187 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 188 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntIntro
# 189 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
# 190 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntTakePackage
# 191 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 192 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 193 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_Grunt_Movement_0
# 200 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_GRUNT, RusturfTunnel_EventScript_Grunt_Movement_1
# 201 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 202 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_GRUNT
# 203 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 204 "data/maps/RusturfTunnel/scripts.pory"
	addobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 205 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_EventScript_Grunt_Movement_2
# 206 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 207 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_Grunt_Movement_3
# 211 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_EventScript_Grunt_Movement_4
# 215 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 216 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_PeekoGladToSeeYouSafe
# 217 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, Common_Movement_FacePlayer
# 218 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 219 "data/maps/RusturfTunnel/scripts.pory"
	message RusturfTunnel_Text_ThankYouLetsGoHomePeeko
# 220 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 221 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 222 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 223 "data/maps/RusturfTunnel/scripts.pory"
	waitbuttonpress
# 224 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 225 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 226 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_Grunt_Movement_5
# 231 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_EventScript_Grunt_Movement_6
# 232 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_PEEKO, RusturfTunnel_EventScript_Grunt_Movement_7
# 233 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 234 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 235 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_PEEKO
# 236 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_DEVON_GOODS_STOLEN
# 237 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 238 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 4
# 239 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 240 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 241 "data/maps/RusturfTunnel/scripts.pory"
	release
	end


RusturfTunnel_EventScript_Mike::
# 246 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
# 247 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
	end


# 52 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_0:
# 53 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 54 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
	step_end

# 69 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_1:
# 69 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
	step_end

# 80 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_2:
# 81 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 82 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
	step_end

# 84 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_3:
# 85 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 85 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 86 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_up
# 87 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
	step_end

# 91 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_4:
# 92 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 93 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
	step_end

# 95 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_5:
# 96 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 96 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 97 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 98 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
	step_end

# 107 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_6:
# 108 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 109 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 110 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 110 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 111 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
	step_end

# 114 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_7:
# 115 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 115 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 115 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 115 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 116 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 116 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 116 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 116 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 116 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 116 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 116 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
	step_end

# 119 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_8:
# 120 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 120 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 120 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 120 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 120 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 121 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 121 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 121 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 121 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 121 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 121 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 121 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
	step_end

# 124 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_9:
# 125 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 126 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 126 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 126 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 126 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 127 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 127 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 127 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 127 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 127 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 127 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 127 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
	step_end

# 193 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_0:
# 194 "data/maps/RusturfTunnel/scripts.pory"
	face_down
# 195 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 196 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 197 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 198 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
	step_end

# 200 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_1:
# 200 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 200 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 200 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 200 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 200 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 200 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 200 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 200 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 200 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
	step_end

# 205 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_2:
# 205 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 205 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 205 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 205 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 205 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 205 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 205 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
	step_end

# 207 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_3:
# 208 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 209 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
	step_end

# 211 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_4:
# 212 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 213 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
	step_end

# 226 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_5:
# 226 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 227 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 228 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 229 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
	step_end

# 231 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_6:
# 231 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 231 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 231 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 231 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 231 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 231 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 231 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 231 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 231 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 231 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 231 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
	step_end

# 232 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_7:
# 232 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 232 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 232 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 232 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 232 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 232 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 232 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 232 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 232 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
	step_end

RusturfTunnel_Text_ComeAndGetSome:
# 251 "data/maps/RusturfTunnel/scripts.pory"
	.string "What, are you coming?\n"
	.string "Come and get some, then!$"

RusturfTunnel_Text_Peeko:
# 256 "data/maps/RusturfTunnel/scripts.pory"
	.string "Peeko: Pii pihyoh!$"

RusturfTunnel_Text_GruntIntro:
# 260 "data/maps/RusturfTunnel/scripts.pory"
	.string "Grah, keelhaul it all!\p"
	.string "That hostage Pokémon turned out to\n"
	.string "be worthless!\p"
	.string "And to think I made a getaway…\n"
	.string "In this tunnel to nowhere!\p"
	.string "Hey! You!\n"
	.string "So you want to battle me?$"

RusturfTunnel_Text_GruntDefeat:
# 270 "data/maps/RusturfTunnel/scripts.pory"
	.string "Urrrggh! My career in crime comes to\n"
	.string "a dead end!$"

RusturfTunnel_Text_GruntTakePackage:
# 275 "data/maps/RusturfTunnel/scripts.pory"
	.string "This is plain not right…\p"
	.string "The Boss told me this would be a\n"
	.string "slick-and-easy job to pull.\p"
	.string "All I had to do was steal some package\n"
	.string "from Devon.\p"
	.string "Tch!\n"
	.string "You want it back that badly, take it!$"

RusturfTunnel_Text_PeekoGladToSeeYouSafe:
# 285 "data/maps/RusturfTunnel/scripts.pory"
	.string "Peeko!\n"
	.string "Am I glad to see you're safe!$"

RusturfTunnel_Text_ThankYouLetsGoHomePeeko:
# 290 "data/maps/RusturfTunnel/scripts.pory"
	.string "Peeko owes her life to you!\p"
	.string "They call me Mr. Briney.\n"
	.string "And, you are?\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "Ah, so you are {PLAYER}{KUN}!\n"
	.string "I sincerely thank you!\p"
	.string "Now, if there's anything that troubles\n"
	.string "you, don't hesitate to tell me!\p"
	.string "You can usually find me in my cottage\n"
	.string "by the sea near Petalburg Woods.\p"
	.string "Come, Peeko, we should make our way\n"
	.string "home.\p"
	.string "Peeko: Pihyoh!$"

RusturfTunnel_Text_WhyCantTheyKeepDigging:
# 307 "data/maps/RusturfTunnel/scripts.pory"
	.string "… …\p"
	.string "Why can't they keep digging?\n"
	.string "Is the bedrock too hard?\p"
	.string "My beloved awaits me in Verdanturf\n"
	.string "Town just beyond here…\p"
	.string "If Rustboro and Verdanturf were\n"
	.string "joined by this tunnel, I could visit\l"
	.string "her every day…\p"
	.string "But this…\n"
	.string "What am I to do?$"

RusturfTunnel_Text_ToGetToVerdanturf:
# 320 "data/maps/RusturfTunnel/scripts.pory"
	.string "To get from Rustboro to Verdanturf,\n"
	.string "you need to go to Dewford, then pass\l"
	.string "through Slateport and Mauville…$"

RusturfTunnel_Text_YouShatteredBoulderTakeHM:
# 326 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wow! You shattered that boulder\n"
	.string "blocking the way.\p"
	.string "To show you how much I appreciate it,\n"
	.string "I'd like you to have this HM.$"

RusturfTunnel_Text_ExplainStrength:
# 333 "data/maps/RusturfTunnel/scripts.pory"
	.string "That HM contains Strength.\p"
	.string "If a muscular Pokémon were to learn\n"
	.string "that, it would be able to move even\l"
	.string "large boulders.$"

RusturfTunnel_Text_WandaReunion:
# 340 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wanda!\n"
	.string "Now I can see you anytime!\p"
	.string "Wanda: That's…wonderful.\p"
	.string "Please, take some rest at my home.$"

RusturfTunnel_Text_BoyfriendOnOtherSideOfRock:
# 347 "data/maps/RusturfTunnel/scripts.pory"
	.string "On the other side of this rock…\n"
	.string "My boyfriend is there.\p"
	.string "He… He's not just digging the tunnel\n"
	.string "to come see me.\p"
	.string "He works his hands raw and rough\n"
	.string "for the benefit of everyone.$"

RusturfTunnel_Text_MikeIntro:
# 356 "data/maps/RusturfTunnel/scripts.pory"
	.string "What do you call a wild man up in the\n"
	.string "mountains? A mountain man, right?\p"
	.string "So why don't they call a Pokémon in\n"
	.string "the mountains a mountain Pokémon?$"

RusturfTunnel_Text_MikeDefeat:
# 363 "data/maps/RusturfTunnel/scripts.pory"
	.string "My Pokémon…\n"
	.string "Ran out of power…$"

RusturfTunnel_Text_MikePostBattle:
# 368 "data/maps/RusturfTunnel/scripts.pory"
	.string "They halted development here to\n"
	.string "protect Pokémon, right?\l"
	.string "There's a feel-good story!$"
