SeafloorCavern_Room9_MapScripts::
	.byte 0


# 2 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 3 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre::
# 4 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 5 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
# 6 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
# 7 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
# 8 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
# 9 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 10 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 11 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, SeafloorCavern_Room9_Movement_Delay32
# 12 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 13 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 14 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieHoldItRightThere, MSGBOX_DEFAULT
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 16 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8004
# 17 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 18 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 19 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieApproachPlayer
# 20 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 21 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieSoItWasYou, MSGBOX_DEFAULT
# 22 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 23 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 24 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieBeholdKyogre, MSGBOX_DEFAULT
# 25 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_FacePlayer
# 26 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 27 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieYouMustDisappear, MSGBOX_DEFAULT
# 28 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE, SeafloorCavern_Room9_Text_ArchieDefeat
# 29 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWithThisRedOrb, MSGBOX_DEFAULT
# 30 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setweather WEATHER_NONE
# 31 "data/maps/SeafloorCavern_Room9/scripts.pory"
	doweather
# 32 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special Script_FadeOutMapMusic
# 33 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_RedOrbShinesByItself, MSGBOX_DEFAULT
# 34 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special WaitWeather
# 35 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 36 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_M_DETECT
# 37 "data/maps/SeafloorCavern_Room9/scripts.pory"
	dofieldeffectsparkle 16, 42, 0
# 38 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 39 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 40 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 0
# 41 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 42 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_ORB
# 43 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special DoOrbEffect
# 44 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 45 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 46 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 47 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 150
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE_SLEEPING
# 49 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 50 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 51 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 52 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
# 53 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 54 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special FadeOutOrbEffect
# 55 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 56 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 58 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 59 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 60 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 61 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 62 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 63 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 64 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 4
# 65 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 66 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 67 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 68 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 70 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo, MSGBOX_DEFAULT
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieListenMessage
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterDown
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8005
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8006
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8007
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieArrive
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_ExclamationMark
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_Delay48
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieExit
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieExit
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieComeOnPlayer, MSGBOX_DEFAULT
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
# 143 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 144 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 145 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused1:
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 155 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 156 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage:
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 161 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 162 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieExit:
# 167 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 168 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 169 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 170 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 171 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_faster_right
# 172 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 173 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 174 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreApproach:
# 175 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 176 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 181 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieArrive:
# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieExit:
# 201 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 202 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MagmaGruntArrive:
# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 211 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Delay32:
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end

SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Hold it right there.$"

SeafloorCavern_Room9_Text_ArchieSoItWasYou:
# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Fufufu…\n"
	.string "So it was you, after all.$"

SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Behold!\p"
	.string "See how beautiful it is, the sleeping\n"
	.string "form of the ancient Pokémon Kyogre!\p"
	.string "I have waited so long for this day to\n"
	.string "come…$"

SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
# 235 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: It surprises me, how you've\n"
	.string "managed to chase me here.\p"
	.string "But that's all over now.\p"
	.string "For the realization of my dream,\n"
	.string "you must disappear now!$"

SeafloorCavern_Room9_Text_ArchieDefeat:
# 243 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\n"
	.string "I lost to a mere child like you?!$"

SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
# 248 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Fufufu…\p"
	.string "I commend you. I must recognize that\n"
	.string "you are truly gifted.\p"
	.string "But!\n"
	.string "I have this in my possession!\p"
	.string "With this Red Orb, I can make Kyogre…$"

SeafloorCavern_Room9_Text_RedOrbShinesByItself:
# 257 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The Red Orb suddenly began shining\n"
	.string "by itself!$"

SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
# 262 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: What?!\p"
	.string "I didn't do anything.\n"
	.string "Why did the Red Orb…\p"
	.string "Where did Kyogre go?$"

SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
# 269 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Hm? It's a message from our\n"
	.string "members outside…$"

SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
# 274 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Yes, what is it?\p"
	.string "Hm…\n"
	.string "It's raining heavily?\p"
	.string "Good… That should have happened.\n"
	.string "That is why we awakened Kyogre,\l"
	.string "to realize Team Aqua's vision of\l"
	.string "expanding the sea.\p"
	.string "What?!\p"
	.string "It's raining far harder than we\n"
	.string "envisioned? You're in danger?\p"
	.string "That can't be…\n"
	.string "That's just not possible…\p"
	.string "Hold your position and monitor\n"
	.string "the situation!$"

SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
# 291 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: There's something wrong…\p"
	.string "The Red Orb is supposed to awaken\n"
	.string "and control Kyogre…\p"
	.string "But… Why?\n"
	.string "Why did Kyogre disappear?\p"
	.string "Why?!$"

SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
# 300 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: What have you wrought?\p"
	.string "Archie… You've finally awoken Kyogre,\n"
	.string "haven't you?\p"
	.string "What will happen to the world if this\n"
	.string "downpour continues for all eternity?\p"
	.string "The world's landmass will drown in\n"
	.string "the deepening sea…$"

SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
# 310 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: W-what?!\n"
	.string "Don't get all high and mighty with me!\p"
	.string "Wasn't it you, Team Magma, that\n"
	.string "infuriated Groudon?\p"
	.string "So long as I have this Red Orb,\n"
	.string "I should be able to control Kyogre…\p"
	.string "I should be able to control it…$"

SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
# 320 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: We don't have the time to\n"
	.string "argue about it here!\p"
	.string "Get outside and see for yourself!\p"
	.string "See if what you've wrought is the\n"
	.string "world that we desired!$"

SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
# 328 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: {PLAYER}, come on, you have\n"
	.string "to get out of here, too!$"
