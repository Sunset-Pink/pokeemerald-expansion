RustboroCity_DevonCorp_1F_MapScripts::
# 2 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_1F_OnTransition
	.byte 0


RustboroCity_DevonCorp_1F_OnTransition:
# 6 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_unset FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_OnTransition_2
RustboroCity_DevonCorp_1F_OnTransition_1:
	end

RustboroCity_DevonCorp_1F_OnTransition_2:
# 7 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setobjectxyperm LOCALID_DEVON_CORP_STAIR_GUARD, 14, 2
# 8 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_CORP_STAIR_GUARD, MOVEMENT_TYPE_FACE_DOWN
	goto RustboroCity_DevonCorp_1F_OnTransition_1


RustboroCity_DevonCorp_1F_EventScript_Employee::
# 14 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 15 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 16 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_Employee_2
# 18 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_Employee_3
# 21 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct
RustboroCity_DevonCorp_1F_EventScript_Employee_1:
# 23 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_1F_EventScript_Employee_2:
# 17 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered
	goto RustboroCity_DevonCorp_1F_EventScript_Employee_1

RustboroCity_DevonCorp_1F_EventScript_Employee_3:
# 19 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright
	goto RustboroCity_DevonCorp_1F_EventScript_Employee_1


RustboroCity_DevonCorp_1F_EventScript_StairGuard::
# 28 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 29 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 30 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_StairGuard_2
# 32 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_StairGuard_3
# 32 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_StairGuard_3
# 35 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter
RustboroCity_DevonCorp_1F_EventScript_StairGuard_1:
# 37 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_1F_EventScript_StairGuard_2:
# 31 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere
	goto RustboroCity_DevonCorp_1F_EventScript_StairGuard_1

RustboroCity_DevonCorp_1F_EventScript_StairGuard_3:
# 33 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed
	goto RustboroCity_DevonCorp_1F_EventScript_StairGuard_1


RustboroCity_DevonCorp_1F_EventScript_Greeter::
# 42 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 43 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 44 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_Greeter_2
# 44 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_Greeter_2
# 47 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp
RustboroCity_DevonCorp_1F_EventScript_Greeter_1:
# 49 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_1F_EventScript_Greeter_2:
# 45 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_StaffGotRobbed
	goto RustboroCity_DevonCorp_1F_EventScript_Greeter_1


RustboroCity_DevonCorp_1F_EventScript_RocksMetalDisplay::
# 54 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay, MSGBOX_SIGN
	end


RustboroCity_DevonCorp_1F_EventScript_ProductsDisplay::
# 59 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ProductDisplay, MSGBOX_SIGN
	end


RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp:
# 63 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hello and welcome to the Devon\n"
	.string "Corporation.\p"
	.string "We're proud producers of items and\n"
	.string "medicine that enhance your life.$"

RustboroCity_DevonCorp_1F_Text_StaffGotRobbed:
# 70 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "One of our research staff stupidly\n"
	.string "got robbed of an important parcel.$"

RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct:
# 75 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hey, those Running Shoes!\n"
	.string "They're one of our products!\p"
	.string "It makes me happy when I see someone\n"
	.string "using something we made.$"

RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright:
# 82 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "That stolen parcel…\p"
	.string "Well, sure it's important, but it's not\n"
	.string "anything that anyone can use.\p"
	.string "In my estimation, that robber must not\n"
	.string "have been very bright.$"

RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered:
# 90 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It sounds like they've recovered\n"
	.string "the ripped-off Devon Goods.$"

RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter:
# 95 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I'm sorry, only authorized people\n"
	.string "are allowed to enter here.$"

RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed:
# 100 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It's beyond stupid.\n"
	.string "How could we get robbed?$"

RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere:
# 105 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hi, there!\n"
	.string "You're always welcome here!$"

RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay:
# 110 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Samples of rocks and metal are\n"
	.string "displayed in the glass case.\p"
	.string "There's a panel with some writing\n"
	.string "on it…\p"
	.string "“Devon Corporation got its start as\n"
	.string "a producer of stones from quarries.\p"
	.string "“The company also produced iron from\n"
	.string "filings in the sand.\p"
	.string "“From that humble start as a producer\n"
	.string "of raw materials, Devon developed.\p"
	.string "“Devon is now a manufacturer of a wide\n"
	.string "range of industrial products.”$"

RustboroCity_DevonCorp_1F_Text_ProductDisplay:
# 125 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Prototypes and test products fill\n"
	.string "the glass display case.\p"
	.string "There's a panel with a description…\p"
	.string "“In addition to industrial products,\n"
	.string "Devon now markets sundries and\l"
	.string "pharmaceuticals for better lifestyles.\p"
	.string "“Recently, Devon has begun marketing\n"
	.string "tools for Pokémon Trainers, including\l"
	.string "Poké Balls and PokéNav systems.”$"
