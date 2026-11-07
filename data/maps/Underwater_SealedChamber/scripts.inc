Underwater_SealedChamber_MapScripts::
# 2 "data/maps/Underwater_SealedChamber/scripts.pory"
	map_script MAP_SCRIPT_ON_DIVE_WARP, Underwater_SealedChamber_OnDive
	.byte 0


Underwater_SealedChamber_OnDive:
# 6 "data/maps/Underwater_SealedChamber/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 7 "data/maps/Underwater_SealedChamber/scripts.pory"
	goto_if_ne VAR_0x8004, 12, Underwater_SealedChamber_EventScript_SurfaceRoute134
# 8 "data/maps/Underwater_SealedChamber/scripts.pory"
	goto_if_ne VAR_0x8005, 44, Underwater_SealedChamber_EventScript_SurfaceRoute134
# 9 "data/maps/Underwater_SealedChamber/scripts.pory"
	goto Underwater_SealedChamber_EventScript_SurfaceSealedChamber
	return


Underwater_SealedChamber_EventScript_SurfaceRoute134::
# 13 "data/maps/Underwater_SealedChamber/scripts.pory"
	setdivewarp MAP_ROUTE134, 60, 31
	end


Underwater_SealedChamber_EventScript_SurfaceSealedChamber::
# 18 "data/maps/Underwater_SealedChamber/scripts.pory"
	setdivewarp MAP_SEALED_CHAMBER_OUTER_ROOM, 10, 19
	end


Underwater_SealedChamber_EventScript_Braille::
# 23 "data/maps/Underwater_SealedChamber/scripts.pory"
	lockall
# 24 "data/maps/Underwater_SealedChamber/scripts.pory"
	braillemsgbox Underwater_SealedChamber_Braille_GoUpHere
# 25 "data/maps/Underwater_SealedChamber/scripts.pory"
	releaseall
	end

