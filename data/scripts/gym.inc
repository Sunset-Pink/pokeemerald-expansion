Common_EventScript_SetGymTrainers::
# 2 "data/scripts/gym.pory"
	switch VAR_0x8008
# 3 "data/scripts/gym.pory"
	case 1, Common_EventScript_SetGymTrainers_3
# 4 "data/scripts/gym.pory"
	case 2, Common_EventScript_SetGymTrainers_4
# 5 "data/scripts/gym.pory"
	case 3, Common_EventScript_SetGymTrainers_5
# 6 "data/scripts/gym.pory"
	case 4, Common_EventScript_SetGymTrainers_6
# 7 "data/scripts/gym.pory"
	case 5, Common_EventScript_SetGymTrainers_7
# 8 "data/scripts/gym.pory"
	case 6, Common_EventScript_SetGymTrainers_8
# 9 "data/scripts/gym.pory"
	case 7, Common_EventScript_SetGymTrainers_9
# 10 "data/scripts/gym.pory"
	case 8, Common_EventScript_SetGymTrainers_10
Common_EventScript_SetGymTrainers_1:
	end

Common_EventScript_SetGymTrainers_3:
# 3 "data/scripts/gym.pory"
	call RustboroCity_Gym_SetGymTrainers
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_4:
# 4 "data/scripts/gym.pory"
	call DewfordTown_Gym_SetGymTrainers
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_5:
# 5 "data/scripts/gym.pory"
	call MauvilleCity_Gym_SetGymTrainers
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_6:
# 6 "data/scripts/gym.pory"
	call LavaridgeTown_Gym_SetGymTrainers
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_7:
# 7 "data/scripts/gym.pory"
	call PetalburgCity_Gym_SetGymTrainers
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_8:
# 8 "data/scripts/gym.pory"
	call FortreeCity_Gym_SetGymTrainers
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_9:
# 9 "data/scripts/gym.pory"
	call MossdeepCity_Gym_SetGymTrainers
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_10:
# 10 "data/scripts/gym.pory"
	call SootopolisCity_Gym_SetGymTrainers
	goto Common_EventScript_SetGymTrainers_1


Common_EventScript_SetGymTrainers_Frlg::
# 16 "data/scripts/gym.pory"
	switch VAR_0x8008
# 17 "data/scripts/gym.pory"
	case 1, Common_EventScript_SetGymTrainers_Frlg_3
# 18 "data/scripts/gym.pory"
	case 2, Common_EventScript_SetGymTrainers_Frlg_4
# 19 "data/scripts/gym.pory"
	case 3, Common_EventScript_SetGymTrainers_Frlg_5
# 20 "data/scripts/gym.pory"
	case 4, Common_EventScript_SetGymTrainers_Frlg_6
# 21 "data/scripts/gym.pory"
	case 5, Common_EventScript_SetGymTrainers_Frlg_7
# 22 "data/scripts/gym.pory"
	case 6, Common_EventScript_SetGymTrainers_Frlg_8
# 23 "data/scripts/gym.pory"
	case 7, Common_EventScript_SetGymTrainers_Frlg_9
# 24 "data/scripts/gym.pory"
	case 8, Common_EventScript_SetGymTrainers_Frlg_10
Common_EventScript_SetGymTrainers_Frlg_1:
	end

Common_EventScript_SetGymTrainers_Frlg_3:
# 17 "data/scripts/gym.pory"
	call EventScript_SetPewterGymTrainers
	goto Common_EventScript_SetGymTrainers_Frlg_1

Common_EventScript_SetGymTrainers_Frlg_4:
# 18 "data/scripts/gym.pory"
	call EventScript_SetCeruleanGymTrainers
	goto Common_EventScript_SetGymTrainers_Frlg_1

Common_EventScript_SetGymTrainers_Frlg_5:
# 19 "data/scripts/gym.pory"
	call EventScript_SetVermilionGymTrainers
	goto Common_EventScript_SetGymTrainers_Frlg_1

Common_EventScript_SetGymTrainers_Frlg_6:
# 20 "data/scripts/gym.pory"
	call EventScript_SetCeladonGymTrainers
	goto Common_EventScript_SetGymTrainers_Frlg_1

Common_EventScript_SetGymTrainers_Frlg_7:
# 21 "data/scripts/gym.pory"
	call EventScript_SetFuchsiaGymTrainers
	goto Common_EventScript_SetGymTrainers_Frlg_1

Common_EventScript_SetGymTrainers_Frlg_8:
# 22 "data/scripts/gym.pory"
	call EventScript_SetSaffronGymTrainers
	goto Common_EventScript_SetGymTrainers_Frlg_1

Common_EventScript_SetGymTrainers_Frlg_9:
# 23 "data/scripts/gym.pory"
	call EventScript_SetCinnabarGymTrainers
	goto Common_EventScript_SetGymTrainers_Frlg_1

Common_EventScript_SetGymTrainers_Frlg_10:
# 24 "data/scripts/gym.pory"
	call EventScript_SetViridianGymTrainers
	goto Common_EventScript_SetGymTrainers_Frlg_1


RustboroCity_Gym_SetGymTrainers::
# 30 "data/scripts/gym.pory"
	settrainerflag TRAINER_JOSH
# 31 "data/scripts/gym.pory"
	settrainerflag TRAINER_TOMMY
# 32 "data/scripts/gym.pory"
	settrainerflag TRAINER_MARC
	return


DewfordTown_Gym_SetGymTrainers::
# 37 "data/scripts/gym.pory"
	settrainerflag TRAINER_TAKAO
# 38 "data/scripts/gym.pory"
	settrainerflag TRAINER_JOCELYN
# 39 "data/scripts/gym.pory"
	settrainerflag TRAINER_LAURA
# 40 "data/scripts/gym.pory"
	settrainerflag TRAINER_BRENDEN
# 41 "data/scripts/gym.pory"
	settrainerflag TRAINER_CRISTIAN
# 42 "data/scripts/gym.pory"
	settrainerflag TRAINER_LILITH
	return


MauvilleCity_Gym_SetGymTrainers::
# 47 "data/scripts/gym.pory"
	settrainerflag TRAINER_KIRK
# 48 "data/scripts/gym.pory"
	settrainerflag TRAINER_SHAWN
# 49 "data/scripts/gym.pory"
	settrainerflag TRAINER_BEN
# 50 "data/scripts/gym.pory"
	settrainerflag TRAINER_VIVIAN
# 51 "data/scripts/gym.pory"
	settrainerflag TRAINER_ANGELO
	return


LavaridgeTown_Gym_SetGymTrainers::
# 56 "data/scripts/gym.pory"
	settrainerflag TRAINER_COLE
# 57 "data/scripts/gym.pory"
	settrainerflag TRAINER_AXLE
# 58 "data/scripts/gym.pory"
	settrainerflag TRAINER_KEEGAN
# 59 "data/scripts/gym.pory"
	settrainerflag TRAINER_GERALD
# 60 "data/scripts/gym.pory"
	settrainerflag TRAINER_DANIELLE
# 61 "data/scripts/gym.pory"
	settrainerflag TRAINER_JACE
# 62 "data/scripts/gym.pory"
	settrainerflag TRAINER_JEFF
# 63 "data/scripts/gym.pory"
	settrainerflag TRAINER_ELI
	return


PetalburgCity_Gym_SetGymTrainers::
# 68 "data/scripts/gym.pory"
	settrainerflag TRAINER_RANDALL
# 69 "data/scripts/gym.pory"
	settrainerflag TRAINER_PARKER
# 70 "data/scripts/gym.pory"
	settrainerflag TRAINER_GEORGE
# 71 "data/scripts/gym.pory"
	settrainerflag TRAINER_BERKE
# 72 "data/scripts/gym.pory"
	settrainerflag TRAINER_MARY
# 73 "data/scripts/gym.pory"
	settrainerflag TRAINER_ALEXIA
# 74 "data/scripts/gym.pory"
	settrainerflag TRAINER_JODY
	return


FortreeCity_Gym_SetGymTrainers::
# 79 "data/scripts/gym.pory"
	settrainerflag TRAINER_JARED
# 80 "data/scripts/gym.pory"
	settrainerflag TRAINER_FLINT
# 81 "data/scripts/gym.pory"
	settrainerflag TRAINER_ASHLEY
# 82 "data/scripts/gym.pory"
	settrainerflag TRAINER_EDWARDO
# 83 "data/scripts/gym.pory"
	settrainerflag TRAINER_HUMBERTO
# 84 "data/scripts/gym.pory"
	settrainerflag TRAINER_DARIUS
	return


MossdeepCity_Gym_SetGymTrainers::
# 89 "data/scripts/gym.pory"
	settrainerflag TRAINER_PRESTON
# 90 "data/scripts/gym.pory"
	settrainerflag TRAINER_VIRGIL
# 91 "data/scripts/gym.pory"
	settrainerflag TRAINER_BLAKE
# 92 "data/scripts/gym.pory"
	settrainerflag TRAINER_HANNAH
# 93 "data/scripts/gym.pory"
	settrainerflag TRAINER_SAMANTHA
# 94 "data/scripts/gym.pory"
	settrainerflag TRAINER_MAURA
# 95 "data/scripts/gym.pory"
	settrainerflag TRAINER_SYLVIA
# 96 "data/scripts/gym.pory"
	settrainerflag TRAINER_NATE
# 97 "data/scripts/gym.pory"
	settrainerflag TRAINER_KATHLEEN
# 98 "data/scripts/gym.pory"
	settrainerflag TRAINER_CLIFFORD
# 99 "data/scripts/gym.pory"
	settrainerflag TRAINER_MACEY
# 100 "data/scripts/gym.pory"
	settrainerflag TRAINER_NICHOLAS
	return


SootopolisCity_Gym_SetGymTrainers::
# 105 "data/scripts/gym.pory"
	settrainerflag TRAINER_ANDREA
# 106 "data/scripts/gym.pory"
	settrainerflag TRAINER_CRISSY
# 107 "data/scripts/gym.pory"
	settrainerflag TRAINER_BRIANNA
# 108 "data/scripts/gym.pory"
	settrainerflag TRAINER_CONNIE
# 109 "data/scripts/gym.pory"
	settrainerflag TRAINER_BRIDGET
# 110 "data/scripts/gym.pory"
	settrainerflag TRAINER_OLIVIA
# 111 "data/scripts/gym.pory"
	settrainerflag TRAINER_TIFFANY
# 112 "data/scripts/gym.pory"
	settrainerflag TRAINER_BETHANY
# 113 "data/scripts/gym.pory"
	settrainerflag TRAINER_ANNIKA
# 114 "data/scripts/gym.pory"
	settrainerflag TRAINER_DAPHNE
	return


EventScript_SetPewterGymTrainers::
# 119 "data/scripts/gym.pory"
	settrainerflag TRAINER_CAMPER_LIAM
	return


EventScript_SetCeruleanGymTrainers::
# 124 "data/scripts/gym.pory"
	settrainerflag TRAINER_PICNICKER_DIANA
# 125 "data/scripts/gym.pory"
	settrainerflag TRAINER_SWIMMER_MALE_LUIS
	return


EventScript_SetVermilionGymTrainers::
# 130 "data/scripts/gym.pory"
	settrainerflag TRAINER_SAILOR_DWAYNE
# 131 "data/scripts/gym.pory"
	settrainerflag TRAINER_ENGINEER_BAILY
# 132 "data/scripts/gym.pory"
	settrainerflag TRAINER_GENTLEMAN_TUCKER
	return


EventScript_SetCeladonGymTrainers::
# 137 "data/scripts/gym.pory"
	settrainerflag TRAINER_LASS_KAY
# 138 "data/scripts/gym.pory"
	settrainerflag TRAINER_LASS_LISA
# 139 "data/scripts/gym.pory"
	settrainerflag TRAINER_PICNICKER_TINA
# 140 "data/scripts/gym.pory"
	settrainerflag TRAINER_BEAUTY_BRIDGET
# 141 "data/scripts/gym.pory"
	settrainerflag TRAINER_BEAUTY_TAMIA
# 142 "data/scripts/gym.pory"
	settrainerflag TRAINER_BEAUTY_LORI
# 143 "data/scripts/gym.pory"
	settrainerflag TRAINER_COOLTRAINER_MARY
	return


EventScript_SetFuchsiaGymTrainers::
# 148 "data/scripts/gym.pory"
	settrainerflag TRAINER_TAMER_PHIL
# 149 "data/scripts/gym.pory"
	settrainerflag TRAINER_TAMER_EDGAR
# 150 "data/scripts/gym.pory"
	settrainerflag TRAINER_JUGGLER_KIRK
# 151 "data/scripts/gym.pory"
	settrainerflag TRAINER_JUGGLER_SHAWN
# 152 "data/scripts/gym.pory"
	settrainerflag TRAINER_JUGGLER_KAYDEN
# 153 "data/scripts/gym.pory"
	settrainerflag TRAINER_JUGGLER_NATE
	return


EventScript_SetSaffronGymTrainers::
# 158 "data/scripts/gym.pory"
	settrainerflag TRAINER_PSYCHIC_JOHAN
# 159 "data/scripts/gym.pory"
	settrainerflag TRAINER_PSYCHIC_TYRON
# 160 "data/scripts/gym.pory"
	settrainerflag TRAINER_PSYCHIC_CAMERON
# 161 "data/scripts/gym.pory"
	settrainerflag TRAINER_PSYCHIC_PRESTON
# 162 "data/scripts/gym.pory"
	settrainerflag TRAINER_CHANNELER_AMANDA
# 163 "data/scripts/gym.pory"
	settrainerflag TRAINER_CHANNELER_STACY
# 164 "data/scripts/gym.pory"
	settrainerflag TRAINER_CHANNELER_TASHA
	return


EventScript_SetCinnabarGymTrainers::
# 169 "data/scripts/gym.pory"
	settrainerflag TRAINER_SUPER_NERD_ERIK
# 170 "data/scripts/gym.pory"
	settrainerflag TRAINER_SUPER_NERD_AVERY
# 171 "data/scripts/gym.pory"
	settrainerflag TRAINER_SUPER_NERD_DEREK
# 172 "data/scripts/gym.pory"
	settrainerflag TRAINER_SUPER_NERD_ZAC
# 173 "data/scripts/gym.pory"
	settrainerflag TRAINER_BURGLAR_QUINN
# 174 "data/scripts/gym.pory"
	settrainerflag TRAINER_BURGLAR_RAMON
# 175 "data/scripts/gym.pory"
	settrainerflag TRAINER_BURGLAR_DUSTY
	return


EventScript_SetViridianGymTrainers::
# 180 "data/scripts/gym.pory"
	settrainerflag TRAINER_TAMER_JASON
# 181 "data/scripts/gym.pory"
	settrainerflag TRAINER_TAMER_COLE
# 182 "data/scripts/gym.pory"
	settrainerflag TRAINER_BLACK_BELT_ATSUSHI
# 183 "data/scripts/gym.pory"
	settrainerflag TRAINER_BLACK_BELT_KIYO
# 184 "data/scripts/gym.pory"
	settrainerflag TRAINER_BLACK_BELT_TAKASHI
# 185 "data/scripts/gym.pory"
	settrainerflag TRAINER_COOLTRAINER_SAMUEL
# 186 "data/scripts/gym.pory"
	settrainerflag TRAINER_COOLTRAINER_YUJI
# 187 "data/scripts/gym.pory"
	settrainerflag TRAINER_COOLTRAINER_WARREN
	return


	.align 2
# 191 "data/scripts/gym.pory"
Basic_Gym_Mart:
# 192 "data/scripts/gym.pory"
	.2byte ITEM_FRESH_WATER
# 193 "data/scripts/gym.pory"
	.2byte ITEM_SODA_POP
# 194 "data/scripts/gym.pory"
	.2byte ITEM_LEMONADE
	.2byte ITEM_NONE
