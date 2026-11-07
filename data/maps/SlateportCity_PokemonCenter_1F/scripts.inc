SlateportCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


# 6 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 8 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_OnTransition:
# 9 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
# 10 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 11 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 12 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_SLATEPORT_NURSE
# 15 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 17 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
# 19 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Sailor::
# 22 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon, MSGBOX_NPC
# 23 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Woman::
# 26 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend, MSGBOX_NPC
# 27 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end

SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon:
# 30 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Want a tip for battling?\p"
	.string "I'd say it's raising different kinds\n"
	.string "of Pokémon in a balanced manner.\p"
	.string "It's no good to make just one\n"
	.string "Pokémon strong.\p"
	.string "If it has a type disadvantage,\n"
	.string "it might not stand a chance.$"

SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend:
# 40 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "I trade Pokémon with my friends.\p"
	.string "If a traded Pokémon is holding an\n"
	.string "item, it makes me twice as happy!$"
