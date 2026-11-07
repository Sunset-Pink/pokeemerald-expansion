SootopolisCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


# 6 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_OnTransition:
# 8 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SOOTOPOLIS_CITY
# 9 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_SOOTOPOLIS_NURSE
# 13 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 17 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Gentleman::
# 20 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	lock
# 21 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 22 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries
# 23 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries
# 24 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge, MSGBOX_DEFAULT
# 25 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 26 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries::
# 29 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn, MSGBOX_DEFAULT
# 30 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 31 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 32 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 33 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Woman::
# 34 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	lock
# 35 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 36 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries
# 37 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries
# 38 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends, MSGBOX_DEFAULT
# 39 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 40 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 41 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 42 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries::
# 43 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon, MSGBOX_DEFAULT
# 44 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 45 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end

SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn:
# 48 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Wallace is rumored to be the toughest\n"
	.string "Trainer in the whole Hoenn region.\p"
	.string "This town's Gym is led by the Trainer\n"
	.string "who taught Wallace.\p"
	.string "But the Elite Four… They're said to be\n"
	.string "even stronger than Wallace's mentor.\p"
	.string "How strong could they be?$"

SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge:
# 58 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Everyone in town has taken refuge\n"
	.string "and won't come out of their homes.\p"
	.string "Even I would rather not venture\n"
	.string "outside.$"

SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon:
# 65 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Whenever, wherever, and whatever\n"
	.string "happens, I will always be friends with\l"
	.string "Pokémon.\p"
	.string "Because it's fun to be with Pokémon!$"

SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends:
# 72 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Aren't Pokémon our friends?\p"
	.string "Why are they going wild this way?$"
