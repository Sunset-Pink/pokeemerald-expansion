Route104_PrettyPetalFlowerShop_MapScripts::
# 2 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_PrettyPetalFlowerShop_OnTransition
	.byte 0


Route104_PrettyPetalFlowerShop_OnTransition:
# 6 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_LANDMARK_FLOWER_SHOP
# 7 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_PrettyPetalFlowerShop_OnTransition_2
# 7 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_PrettyPetalFlowerShop_OnTransition_2
# 10 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_TEMP_1
Route104_PrettyPetalFlowerShop_OnTransition_1:
	return

Route104_PrettyPetalFlowerShop_OnTransition_2:
# 8 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setobjectxyperm LOCALID_FLOWER_SHOP_OWNER, 4, 6
	goto Route104_PrettyPetalFlowerShop_OnTransition_1


Route104_PrettyPetalFlowerShop_EventScript_ShopOwner::
# 16 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 17 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 18 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_2
# 24 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop
# 25 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_6
# 29 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries, MSGBOX_YESNO
Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_5:
# 31 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_9
# 34 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness
Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_1:
# 37 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
	return

Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_2:
# 19 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	message gText_PlayerWhatCanIDoForYou
# 20 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	waitmessage
# 21 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	pokemartdecoration2 Route104_PrettyPetalFlowerShop_Pokemart_Plants
# 22 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox gText_PleaseComeAgain
	goto Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_1

Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_6:
# 26 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_MET_PRETTY_PETAL_SHOP_OWNER
# 27 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries, MSGBOX_YESNO
	goto Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_5

Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_9:
# 32 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_BerriesExplanation
	goto Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_1


	.align 2
# 41 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_Pokemart_Plants:
# 42 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_RED_PLANT
# 43 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_TROPICAL_PLANT
# 44 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_PRETTY_FLOWERS
# 45 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_COLORFUL_PLANT
# 46 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_BIG_PLANT
# 47 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_GORGEOUS_PLANT
	.2byte ITEM_NONE

Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl::
# 52 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 53 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 54 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_2
Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_1:
# 62 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation
# 63 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
	end

Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_2:
# 55 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis
# 56 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 57 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_5
Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_4:
# 60 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
	goto Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_1

Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_5:
# 58 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_4


Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl::
# 68 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 69 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 70 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	dotimebasedevents
# 71 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_set FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY, Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_2
# 74 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers
# 75 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	giverandomberry BERRY_ID_CHERI, BERRY_ID_PERSIM
# 76 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_6
Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_5:
# 79 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY
# 80 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries
Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_1:
# 82 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
	return

Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_2:
# 72 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries
	goto Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_1

Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_6:
# 77 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_5

