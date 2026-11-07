VerdanturfTown_MapScripts::
# 2 "data/maps/VerdanturfTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
	.byte 0


# 6 "data/maps/VerdanturfTown/scripts.pory"

# 7 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_OnTransition:
# 8 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 9 "data/maps/VerdanturfTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 10 "data/maps/VerdanturfTown/scripts.pory"
	end
# 11 "data/maps/VerdanturfTown/scripts.pory"

# 12 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Twin::
# 13 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 14 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 15 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_TwinTunnelOpen
# 16 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
# 17 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_VERDANTURF_TWIN, Common_Movement_FaceOriginalDirection
# 18 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 19 "data/maps/VerdanturfTown/scripts.pory"
	release
# 20 "data/maps/VerdanturfTown/scripts.pory"
	end
# 21 "data/maps/VerdanturfTown/scripts.pory"

# 22 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TwinTunnelOpen::
# 23 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
# 24 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_VERDANTURF_TWIN, Common_Movement_FaceOriginalDirection
# 25 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 26 "data/maps/VerdanturfTown/scripts.pory"
	release
# 27 "data/maps/VerdanturfTown/scripts.pory"
	end
# 28 "data/maps/VerdanturfTown/scripts.pory"

# 29 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Man::
# 30 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_AirCleanHere, MSGBOX_NPC
# 31 "data/maps/VerdanturfTown/scripts.pory"
	end
# 32 "data/maps/VerdanturfTown/scripts.pory"

# 33 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Camper::
# 34 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
# 35 "data/maps/VerdanturfTown/scripts.pory"
	end
# 36 "data/maps/VerdanturfTown/scripts.pory"

# 37 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Boy::
# 38 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 39 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 40 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_BoyTunnelOpen
# 41 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
# 42 "data/maps/VerdanturfTown/scripts.pory"
	release
# 43 "data/maps/VerdanturfTown/scripts.pory"
	end
# 44 "data/maps/VerdanturfTown/scripts.pory"

# 45 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BoyTunnelOpen::
# 46 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
# 47 "data/maps/VerdanturfTown/scripts.pory"
	release
# 48 "data/maps/VerdanturfTown/scripts.pory"
	end
# 49 "data/maps/VerdanturfTown/scripts.pory"

# 50 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TownSign::
# 51 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
# 52 "data/maps/VerdanturfTown/scripts.pory"
	end
# 53 "data/maps/VerdanturfTown/scripts.pory"

# 54 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_WandasHouseSign::
# 55 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_WandasHouse, MSGBOX_SIGN
# 56 "data/maps/VerdanturfTown/scripts.pory"
	end
# 57 "data/maps/VerdanturfTown/scripts.pory"

# 58 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BattleTentSign::
# 59 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
# 60 "data/maps/VerdanturfTown/scripts.pory"
	end
# 61 "data/maps/VerdanturfTown/scripts.pory"

# 62 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_RusturfTunnelSign::
# 63 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
# 64 "data/maps/VerdanturfTown/scripts.pory"
	end

VerdanturfTown_Text_ManTryingToDigTunnel:
# 67 "data/maps/VerdanturfTown/scripts.pory"
	.string "My papa told me.\p"
	.string "He says this tunnel is full of\n"
	.string "timid Pokémon.\p"
	.string "They get all scared of loud noise and\n"
	.string "make a big uproar.\p"
	.string "So they had to stop the big tunnel\n"
	.string "project.\p"
	.string "But there's one man. He's trying to dig\n"
	.string "the tunnel by himself!$"

VerdanturfTown_Text_ManDugTunnelForLove:
# 79 "data/maps/VerdanturfTown/scripts.pory"
	.string "There was a man who dug a tunnel for\n"
	.string "a lady he loved.\p"
	.string "I don't really get it, but hey!$"

VerdanturfTown_Text_AirCleanHere:
# 85 "data/maps/VerdanturfTown/scripts.pory"
	.string "The way the winds blow, volcanic ash\n"
	.string "is never blown in this direction.\p"
	.string "The air is clean and delicious here.\n"
	.string "Living here should do wonders for even\l"
	.string "frail and sickly people.$"

VerdanturfTown_Text_MakeBattleTentDebut:
# 93 "data/maps/VerdanturfTown/scripts.pory"
	.string "My Pokémon and I, we've been riding\n"
	.string "a hot winning streak.\p"
	.string "So I decided to make my Battle Tent\n"
	.string "debut in this town.$"

VerdanturfTown_Text_GuyTryingToBustThroughCave:
# 100 "data/maps/VerdanturfTown/scripts.pory"
	.string "Did you see the cave next to the\n"
	.string "Pokémon Mart?\p"
	.string "There's a guy in there who's trying to\n"
	.string "bust up boulders so he can bust out\l"
	.string "through to the other side.\p"
	.string "It'd be great if we could go through…\n"
	.string "It'll make it easy to visit Rustboro.$"

VerdanturfTown_Text_EasyToGetToRustboroNow:
# 110 "data/maps/VerdanturfTown/scripts.pory"
	.string "That cave next to the Pokémon Mart\n"
	.string "is now a tunnel to the other side.\p"
	.string "It's great--it's easy to go shop for\n"
	.string "new Devon products in Rustboro now.$"

VerdanturfTown_Text_TownSign:
# 117 "data/maps/VerdanturfTown/scripts.pory"
	.string "Verdanturf Town\p"
	.string "“The windswept highlands with the\n"
	.string "sweet fragrance of grass.”$"

VerdanturfTown_Text_WandasHouse:
# 123 "data/maps/VerdanturfTown/scripts.pory"
	.string "Wanda's House$"

VerdanturfTown_Text_BattleTentSign:
# 127 "data/maps/VerdanturfTown/scripts.pory"
	.string "Battle Tent Verandturf Site\n"
	.string "“Feast Your Eyes on Battles!”$"

VerdanturfTown_Text_RusturfTunnelSign:
# 132 "data/maps/VerdanturfTown/scripts.pory"
	.string "Rusturf Tunnel\n"
	.string "“Linking Rustboro and Verdanturf\p"
	.string "“The tunnel project has been\n"
	.string "canceled.”$"
