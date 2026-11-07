Underwater_SeafloorCavern_MapScripts::
# 2 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Underwater_SeafloorCavern_OnResume
# 3 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Underwater_SeafloorCavern_OnTransition
# 4 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Underwater_SeafloorCavern_OnLoad
	.byte 0


Underwater_SeafloorCavern_OnTransition:
# 8 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setflag FLAG_LANDMARK_SEAFLOOR_CAVERN
# 9 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, Underwater_SeafloorCavern_EventScript_HideSubmarine
	end


Underwater_SeafloorCavern_EventScript_HideSubmarine::
# 14 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setflag FLAG_HIDE_UNDERWATER_SEA_FLOOR_CAVERN_STOLEN_SUBMARINE
	end


Underwater_SeafloorCavern_OnLoad:
# 19 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	call_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, Underwater_SeafloorCavern_EventScript_SetSubmarineGoneMetatiles
	end


Underwater_SeafloorCavern_EventScript_SetSubmarineGoneMetatiles::
# 24 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 5, 3, METATILE_Underwater_RockWall, TRUE
# 25 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 6, 3, METATILE_Underwater_RockWall, TRUE
# 26 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 7, 3, METATILE_Underwater_RockWall, TRUE
# 27 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 8, 3, METATILE_Underwater_RockWall, TRUE
# 28 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 5, 4, METATILE_Underwater_FloorShadow, FALSE
# 29 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 6, 4, METATILE_Underwater_FloorShadow, FALSE
# 30 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 7, 4, METATILE_Underwater_FloorShadow, FALSE
# 31 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 8, 4, METATILE_Underwater_FloorShadow, FALSE
# 32 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 5, 5, METATILE_Underwater_FloorShadow, FALSE
# 33 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 6, 5, METATILE_Underwater_FloorShadow, FALSE
# 34 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 7, 5, METATILE_Underwater_FloorShadow, FALSE
# 35 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 8, 5, METATILE_Underwater_FloorShadow, FALSE
	return


Underwater_SeafloorCavern_OnResume:
# 40 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setdivewarp MAP_SEAFLOOR_CAVERN_ENTRANCE, 10, 17
	end


Underwater_SeafloorCavern_EventScript_CheckStolenSub::
# 45 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	msgbox Underwater_SeafloorCavern_Text_SubExplorer1, MSGBOX_SIGN
	end


Underwater_SeafloorCavern_Text_SubExplorer1:
# 49 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	.string "“Submarine Explorer 1” is painted\n"
	.string "on the hull.\p"
	.string "This is the submarine Team Aqua\n"
	.string "stole in Slateport!\p"
	.string "Team Aqua must have gone\n"
	.string "ashore here.$"
