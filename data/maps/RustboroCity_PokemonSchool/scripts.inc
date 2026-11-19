RustboroCity_PokemonSchool_MapScripts::
	.byte 0


RustboroCity_PokemonSchool_EventScript_Blackboard::
# 4 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lockall
# 5 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges
RustboroCity_PokemonSchool_EventScript_Blackboard_3:
# 7 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
# 8 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 9 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
# 10 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 11 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 0, RustboroCity_PokemonSchool_EventScript_Blackboard_6
# 12 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 1, RustboroCity_PokemonSchool_EventScript_Blackboard_7
# 13 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 2, RustboroCity_PokemonSchool_EventScript_Blackboard_8
# 14 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 3, RustboroCity_PokemonSchool_EventScript_Blackboard_9
# 15 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 4, RustboroCity_PokemonSchool_EventScript_Blackboard_10
RustboroCity_PokemonSchool_EventScript_Blackboard_2:
# 17 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne RustboroCity_PokemonSchool_EventScript_Blackboard_3
# 18 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	releaseall
	end

RustboroCity_PokemonSchool_EventScript_Blackboard_6:
# 11 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainPoison
	goto RustboroCity_PokemonSchool_EventScript_Blackboard_2

RustboroCity_PokemonSchool_EventScript_Blackboard_7:
# 12 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainParalysis
	goto RustboroCity_PokemonSchool_EventScript_Blackboard_2

RustboroCity_PokemonSchool_EventScript_Blackboard_8:
# 13 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainSleep
	goto RustboroCity_PokemonSchool_EventScript_Blackboard_2

RustboroCity_PokemonSchool_EventScript_Blackboard_9:
# 14 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainBurn
	goto RustboroCity_PokemonSchool_EventScript_Blackboard_2

RustboroCity_PokemonSchool_EventScript_Blackboard_10:
# 15 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainFreeze
	goto RustboroCity_PokemonSchool_EventScript_Blackboard_2


RustboroCity_PokemonSchool_EventScript_GameboyKid1::
# 23 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_TradingRightNow, MSGBOX_NPC
	end


RustboroCity_PokemonSchool_EventScript_GameboyKid2::
# 28 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot, MSGBOX_NPC
	end


RustboroCity_PokemonSchool_EventScript_RichBoy::
# 33 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
	end


RustboroCity_PokemonSchool_EventScript_Lass::
# 38 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
	end


RustboroCity_PokemonSchool_EventScript_SchoolKidM::
# 43 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
	end


RustboroCity_PokemonSchool_EventScript_StudentNotebook::
# 48 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
	end


RustboroCity_PokemonSchool_EventScript_Teacher::
# 53 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 54 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 55 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_Teacher_2
# 63 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RustboroCity_PokemonSchool_EventScript_Teacher_5
RustboroCity_PokemonSchool_EventScript_Teacher_4:
# 83 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq RustboroCity_PokemonSchool_EventScript_Teacher_8
RustboroCity_PokemonSchool_EventScript_Teacher_7:
# 103 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw
# 104 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 105 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_PokemonSchool_EventScript_Teacher_11
RustboroCity_PokemonSchool_EventScript_Teacher_10:
# 108 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 109 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 110 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 111 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_RECEIVED_QUICK_CLAW
# 112 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end

RustboroCity_PokemonSchool_EventScript_Teacher_2:
# 56 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainQuickClaw, MSGBOX_DEFAULT
# 57 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 58 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 59 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 60 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end

RustboroCity_PokemonSchool_EventScript_Teacher_5:
# 64 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_EventScript_Teacher_Movement_0
# 81 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
	goto RustboroCity_PokemonSchool_EventScript_Teacher_4

RustboroCity_PokemonSchool_EventScript_Teacher_8:
# 84 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_EventScript_Teacher_Movement_1
# 101 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
	goto RustboroCity_PokemonSchool_EventScript_Teacher_7

RustboroCity_PokemonSchool_EventScript_Teacher_11:
# 106 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto RustboroCity_PokemonSchool_EventScript_Teacher_10


RustboroCity_PokemonSchool_EventScript_Scott::
# 117 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 118 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 119 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, RustboroCity_PokemonSchool_EventScript_Scott_2
# 121 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_Scott_3
# 128 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_Scott_4
# 133 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut
# 134 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 135 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_RUSTBORO
RustboroCity_PokemonSchool_EventScript_Scott_1:
# 137 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end

RustboroCity_PokemonSchool_EventScript_Scott_2:
# 120 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown
	goto RustboroCity_PokemonSchool_EventScript_Scott_1

RustboroCity_PokemonSchool_EventScript_Scott_3:
# 122 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_Scott_10
RustboroCity_PokemonSchool_EventScript_Scott_9:
# 127 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown
	goto RustboroCity_PokemonSchool_EventScript_Scott_1

RustboroCity_PokemonSchool_EventScript_Scott_4:
# 129 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge
# 130 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 131 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
	goto RustboroCity_PokemonSchool_EventScript_Scott_1

RustboroCity_PokemonSchool_EventScript_Scott_10:
# 123 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottStoneBadge
# 124 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 125 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
	goto RustboroCity_PokemonSchool_EventScript_Scott_9


# 64 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher_Movement_0:
# 65 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 65 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 66 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 66 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 67 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 67 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 68 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 70 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 71 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 72 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 72 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 73 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 74 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 74 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 75 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 76 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 77 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 78 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 78 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 79 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 79 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
	step_end

# 84 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher_Movement_1:
# 85 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 86 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 86 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 87 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 88 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 89 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 89 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 89 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 90 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 91 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 92 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 92 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 93 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 94 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 94 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 95 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 96 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 97 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 97 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 98 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 98 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 99 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
	step_end

RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges:
# 141 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The blackboard lists status changes\n"
	.string "that may affect Pokémon in battle.$"

RustboroCity_PokemonSchool_Text_ReadWhichTopic:
# 146 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Which topic do you want to read?$"

RustboroCity_PokemonSchool_Text_ExplainPoison:
# 150 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon is poisoned, it will\n"
	.string "steadily lose HP.\p"
	.string "The effects of poison remain after\n"
	.string "a battle.\p"
	.string "A poisoned Pokémon's HP will drop\n"
	.string "while it is traveling.\p"
	.string "Heal a poisoning using an Antidote.$"

RustboroCity_PokemonSchool_Text_ExplainParalysis:
# 160 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon becomes paralyzed,\n"
	.string "its Speed drops.\p"
	.string "It may also not be able to move while\n"
	.string "it is in battle.\p"
	.string "Paralysis remains after battle.\n"
	.string "Cure it using a Parlyz Heal.$"

RustboroCity_PokemonSchool_Text_ExplainSleep:
# 169 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon falls asleep, it will be\n"
	.string "unable to attack.\p"
	.string "A Pokémon may wake up on its own,\n"
	.string "but if a battle ends while it is\l"
	.string "sleeping, it will stay asleep.\p"
	.string "Wake it up using an Awakening.$"

RustboroCity_PokemonSchool_Text_ExplainBurn:
# 178 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A burn reduces Attack power, and it\n"
	.string "steadily reduces the victim's HP.\p"
	.string "A burn lingers after battle.\n"
	.string "Cure a burn using a Burn Heal.$"

RustboroCity_PokemonSchool_Text_ExplainFreeze:
# 185 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon is frozen, it becomes\n"
	.string "completely helpless.\p"
	.string "It will remain frozen after battle.\n"
	.string "Thaw it out using an Ice Heal.$"

RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw:
# 192 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Students who don't study get a little\n"
	.string "taste of my Quick Claw.\p"
	.string "Whether or not you are a good student \n"
	.string "will be evident from the way you use\l"
	.string "this item.$"

RustboroCity_PokemonSchool_Text_ExplainQuickClaw:
# 200 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A Pokémon holding the Quick Claw will\n"
	.string "occasionally speed up and get to move\l"
	.string "before its opponent.\p"
	.string "There are many other items that are\n"
	.string "meant to be held by Pokémon.\p"
	.string "Just those alone will give you many\n"
	.string "topics to study!$"

RustboroCity_PokemonSchool_Text_TradingRightNow:
# 210 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I'm trading Pokémon with my friend\n"
	.string "right now.$"

RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot:
# 215 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I always wanted a Seedot, and\n"
	.string "I'm finally getting one!$"

RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems:
# 220 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Pokémon can hold items, but they\n"
	.string "don't know what to do with man-made\l"
	.string "items like Potion and Antidote.$"

RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself:
# 226 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "You know how some Pokémon moves can\n"
	.string "confuse a Pokémon?\p"
	.string "A confused Pokémon will sometimes\n"
	.string "attack itself without meaning to.\p"
	.string "But once it leaves battle, it will\n"
	.string "return to normal.$"

RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry:
# 235 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A Pokémon holding a Berry will heal\n"
	.string "itself…\p"
	.string "There are many kinds of items that\n"
	.string "Pokémon can hold…\p"
	.string "Boy, it sure is hard taking notes\n"
	.string "down…$"

RustboroCity_PokemonSchool_Text_StudentsNotes:
# 244 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's this student's notebook…\p"
	.string "Pokémon are to be caught using\n"
	.string "Poké Balls.\p"
	.string "Up to six Pokémon can accompany\n"
	.string "a Trainer.\p"
	.string "A Trainer is someone who catches\n"
	.string "Pokémon, raises them, and battles\l"
	.string "with them.\p"
	.string "A Trainer's mission is to defeat\n"
	.string "the strong Trainers who await\l"
	.string "challengers in Pokémon Gyms.$"

RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut:
# 258 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hello? Didn't we meet before?\n"
	.string "I think back in Petalburg City.\p"
	.string "Let me introduce myself.\n"
	.string "My name's Scott.\p"
	.string "I've been traveling everywhere in\n"
	.string "search of outstanding Trainers.\p"
	.string "More specifically, I'm looking for\n"
	.string "Pokémon battle experts.\p"
	.string "So, what brings you to this School?\n"
	.string "Are you a Trainer, too?\p"
	.string "The first thing you should do is to\n"
	.string "have a Pokémon learn the move Cut.\p"
	.string "If I remember correctly, someone in\n"
	.string "this town has Cut.$"

RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown:
# 275 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Scott: Hmm…\p"
	.string "The talent levels of the students here\n"
	.string "are unknown. The potential's there.$"

RustboroCity_PokemonSchool_Text_ScottStoneBadge:
# 281 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Scott: Oh, what's that?\p"
	.string "It's a Stone Badge, isn't it?\n"
	.string "That's pretty impressive, I'd say.\p"
	.string "But, you know, I would've loved to see\n"
	.string "you in battle.\p"
	.string "It's hard to tell what you're like as\n"
	.string "a Trainer from a League Badge.$"

RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge:
# 291 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hello? Didn't we meet before?\n"
	.string "I think back in Petalburg City.\p"
	.string "Let me introduce myself.\n"
	.string "My name's Scott.\p"
	.string "I've been traveling everywhere in\n"
	.string "search of outstanding Trainers.\p"
	.string "More specifically, I'm looking for\n"
	.string "Pokémon battle experts.\p"
	.string "Oh, what's that?\n"
	.string "It's a Stone Badge, isn't it?\p"
	.string "That's pretty impressive, I'd say, for\n"
	.string "a starting Trainer like yourself.\p"
	.string "But, you know, I would've loved to see\n"
	.string "you in battle.\p"
	.string "It's hard to tell what you're like as\n"
	.string "a Trainer from a League Badge.$"
