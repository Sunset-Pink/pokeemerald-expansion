PetalburgCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


PetalburgCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 8 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
	end


PetalburgCity_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_PETALBURG_NURSE
# 14 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	end


PetalburgCity_PokemonCenter_1F_EventScript_FatMan::
# 22 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem, MSGBOX_NPC
	return


PetalburgCity_PokemonCenter_1F_EventScript_Youngster::
# 27 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP, MSGBOX_NPC
	return


PetalburgCity_PokemonCenter_1F_EventScript_Woman::
# 33 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 34 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 35 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon
# 36 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsStarterInParty
# 37 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PetalburgCity_PokemonCenter_1F_EventScript_Woman_2
PetalburgCity_PokemonCenter_1F_EventScript_Woman_1:
# 44 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
	return

PetalburgCity_PokemonCenter_1F_EventScript_Woman_2:
# 38 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	switch VAR_STARTER_MON
# 39 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 0, PetalburgCity_PokemonCenter_1F_EventScript_Woman_5
# 40 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 1, PetalburgCity_PokemonCenter_1F_EventScript_Woman_6
# 41 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 2, PetalburgCity_PokemonCenter_1F_EventScript_Woman_7
	goto PetalburgCity_PokemonCenter_1F_EventScript_Woman_1

PetalburgCity_PokemonCenter_1F_EventScript_Woman_5:
# 39 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType
	goto PetalburgCity_PokemonCenter_1F_EventScript_Woman_1

PetalburgCity_PokemonCenter_1F_EventScript_Woman_6:
# 40 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType
	goto PetalburgCity_PokemonCenter_1F_EventScript_Woman_1

PetalburgCity_PokemonCenter_1F_EventScript_Woman_7:
# 41 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType
	goto PetalburgCity_PokemonCenter_1F_EventScript_Woman_1


PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem:
# 48 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "That PC-based Pokémon Storage\n"
	.string "System…\p"
	.string "Whoever made it must be some kind\n"
	.string "of a scientific wizard!$"

PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP:
# 55 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "When my Pokémon ate an\n"
	.string "Oran Berry, it regained HP!$"

PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon:
# 60 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "There are many types of Pokémon.\p"
	.string "All types have their strengths and\n"
	.string "weaknesses against other types.\p"
	.string "Depending on the types of Pokémon,\n"
	.string "a battle could be easy or hard.$"

PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType:
# 68 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your Treecko\n"
	.string "is a Grass type.\p"
	.string "It's strong against the Water and\n"
	.string "Ground types.\p"
	.string "But, it's weak against Fire-type\n"
	.string "Poke♂on.$"

PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType:
# 77 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your Torchic\n"
	.string "is a FireRE type.\p"
	.string "It's strong against the Grass and\n"
	.string "Bug types.\p"
	.string "But, it's weak against Water-type\n"
	.string "Pokémon.$"

PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType:
# 86 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your Mudkip\n"
	.string "is a Water type.\p"
	.string "It's strong against the Fire type.\p"
	.string "But, it's weak against Grass-type\n"
	.string "and Electric-type Pokémon.$"
