Route116_TunnelersRestHouse_MapScripts::
# 2 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_TunnelersRestHouse_OnTransition
	.byte 0


Route116_TunnelersRestHouse_OnTransition:
# 6 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setflag FLAG_LANDMARK_TUNNELERS_REST_HOUSE
	end


Route116_TunnelersRestHouse_EventScript_Tunneler1::
# 11 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_WeHadToStopBoring, MSGBOX_NPC
	end


Route116_TunnelersRestHouse_EventScript_Tunneler2::
# 16 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf, MSGBOX_NPC
	end


Route116_TunnelersRestHouse_EventScript_Tunneler3::
# 21 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 22 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	faceplayer
# 23 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, Route116_TunnelersRestHouse_EventScript_Tunneler3_2
# 26 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel
Route116_TunnelersRestHouse_EventScript_Tunneler3_1:
# 28 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
	end

Route116_TunnelersRestHouse_EventScript_Tunneler3_2:
# 24 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough
	goto Route116_TunnelersRestHouse_EventScript_Tunneler3_1


Route116_TunnelersRestHouse_Text_WeHadToStopBoring:
# 32 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "That Rusturf Tunnel there…\p"
	.string "At first, we had a huge work crew boring\n"
	.string "through rock with the latest machinery.\l"
	.string "But, we had to stop.\p"
	.string "It turns out that we would have had\n"
	.string "a negative effect on wild Pokémon in\l"
	.string "the area.\p"
	.string "So, we've got nothing to do but loll\n"
	.string "around here doing nothing.$"

Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf:
# 44 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "There's a man digging his way to\n"
	.string "Verdanturf all by his lonesome.\l"
	.string "He's desperate to get through.\p"
	.string "He says that if he digs little by little\n"
	.string "without using machines, he won't\l"
	.string "disturb Pokémon, and he'll avoid\l"
	.string "harming the natural environment.\p"
	.string "I wonder if he made it through yet.$"

Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel:
# 55 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "To get to Verdanturf without using\n"
	.string "this Tunnel, you'd have to cross the\l"
	.string "sea to Dewford, sail on to Slateport,\l"
	.string "then travel through Mauville.$"

Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough:
# 62 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Did you hear? The Tunnel to Verdanturf\n"
	.string "has gone through!\p"
	.string "Sometimes, if you hope strongly enough,\n"
	.string "dreams do come true.$"
