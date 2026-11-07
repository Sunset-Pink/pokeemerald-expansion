AbandonedShip_CaptainsOffice_MapScripts::
	.byte 0


AbandonedShip_CaptainsOffice_EventScript_CaptSternAide::
# 4 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	lock
# 5 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	faceplayer
# 6 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_EXCHANGED_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
# 7 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	checkitem ITEM_SCANNER
# 8 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner
# 9 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
# 10 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner
# 11 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
	end


AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner::
# 16 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner
# 17 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
	end


AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus::
# 22 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus
# 23 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
	end


AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner:
# 27 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "I'm investigating this ship on behalf\n"
	.string "of Capt. Stern.\p"
	.string "He also asked me to find a Scanner,\n"
	.string "but I haven't had any success…$"

AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner:
# 34 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Oh! That's a Scanner!\p"
	.string "Listen, can I get you to deliver that\n"
	.string "to Capt. Stern?\p"
	.string "I want to investigate this ship a\n"
	.string "little more.$"

AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus:
# 42 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "This ship is called S.S. Cactus.\n"
	.string "It seems to be from an earlier era.$"
