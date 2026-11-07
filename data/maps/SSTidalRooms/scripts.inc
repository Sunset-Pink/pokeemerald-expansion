SSTidalRooms_MapScripts::
	.byte 0


# 3 "data/maps/SSTidalRooms/scripts.pory"

# 4 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_SnatchGiver::
# 5 "data/maps/SSTidalRooms/scripts.pory"
	lock
# 6 "data/maps/SSTidalRooms/scripts.pory"
	faceplayer
# 7 "data/maps/SSTidalRooms/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_SNATCH, SSTidalRooms_EventScript_ExplainSnatch
# 8 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_NotSuspiciousTakeThis, MSGBOX_DEFAULT
# 9 "data/maps/SSTidalRooms/scripts.pory"
	giveitem ITEM_TM_SNATCH
# 10 "data/maps/SSTidalRooms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 11 "data/maps/SSTidalRooms/scripts.pory"
	setflag FLAG_RECEIVED_TM_SNATCH
# 12 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ExplainSnatch, MSGBOX_DEFAULT
# 13 "data/maps/SSTidalRooms/scripts.pory"
	release
# 14 "data/maps/SSTidalRooms/scripts.pory"
	end
# 15 "data/maps/SSTidalRooms/scripts.pory"

# 16 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_ExplainSnatch::
# 17 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ExplainSnatch, MSGBOX_DEFAULT
# 18 "data/maps/SSTidalRooms/scripts.pory"
	release
# 19 "data/maps/SSTidalRooms/scripts.pory"
	end
# 20 "data/maps/SSTidalRooms/scripts.pory"

# 21 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Bed::
# 22 "data/maps/SSTidalRooms/scripts.pory"
	lockall
# 23 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_TakeRestOnBed, MSGBOX_DEFAULT
# 24 "data/maps/SSTidalRooms/scripts.pory"
	closemessage
# 25 "data/maps/SSTidalRooms/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 26 "data/maps/SSTidalRooms/scripts.pory"
	call SSTidalRooms_EventScript_ProgessCruiseAfterBed
# 27 "data/maps/SSTidalRooms/scripts.pory"
	releaseall
# 28 "data/maps/SSTidalRooms/scripts.pory"
	end
# 29 "data/maps/SSTidalRooms/scripts.pory"

# 30 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Colton::
# 31 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_COLTON, SSTidalRooms_Text_ColtonIntro, SSTidalRooms_Text_ColtonDefeat
# 32 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ColtonPostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/SSTidalRooms/scripts.pory"
	end
# 34 "data/maps/SSTidalRooms/scripts.pory"

# 35 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Micah::
# 36 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_MICAH, SSTidalRooms_Text_MicahIntro, SSTidalRooms_Text_MicahDefeat
# 37 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_MicahPostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/SSTidalRooms/scripts.pory"
	end
# 39 "data/maps/SSTidalRooms/scripts.pory"

# 40 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Thomas::
# 41 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_THOMAS, SSTidalRooms_Text_ThomasIntro, SSTidalRooms_Text_ThomasDefeat
# 42 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ThomasPostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/SSTidalRooms/scripts.pory"
	end
# 44 "data/maps/SSTidalRooms/scripts.pory"

# 45 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Jed::
# 46 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_JedIntro, SSTidalRooms_Text_JedDefeat, SSTidalRooms_Text_JedNotEnoughMons
# 47 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_JedPostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/SSTidalRooms/scripts.pory"
	end
# 49 "data/maps/SSTidalRooms/scripts.pory"

# 50 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Lea::
# 51 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_LeaIntro, SSTidalRooms_Text_LeaDefeat, SSTidalRooms_Text_LeaNotEnoughMons
# 52 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_LeaPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/SSTidalRooms/scripts.pory"
	end
# 54 "data/maps/SSTidalRooms/scripts.pory"

# 55 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Garret::
# 56 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_GARRET, SSTidalRooms_Text_GarretIntro, SSTidalRooms_Text_GarretDefeat
# 57 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_GarretPostBattle, MSGBOX_AUTOCLOSE
# 58 "data/maps/SSTidalRooms/scripts.pory"
	end
# 59 "data/maps/SSTidalRooms/scripts.pory"

# 60 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Naomi::
# 61 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_NAOMI, SSTidalRooms_Text_NaomiIntro, SSTidalRooms_Text_NaomiDefeat
# 62 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_NaomiPostBattle, MSGBOX_AUTOCLOSE
# 63 "data/maps/SSTidalRooms/scripts.pory"
	end

SSTidalRooms_Text_TakeRestOnBed:
# 66 "data/maps/SSTidalRooms/scripts.pory"
	.string "There's a bed…\n"
	.string "Let's take a rest.$"

SSTidalRooms_Text_ColtonIntro:
# 71 "data/maps/SSTidalRooms/scripts.pory"
	.string "I often sail to Lilycove City.\p"
	.string "I enjoy attending Cotests,\n"
	.string "you see.$"

SSTidalRooms_Text_ColtonDefeat:
# 77 "data/maps/SSTidalRooms/scripts.pory"
	.string "That was an enjoyable match!$"

SSTidalRooms_Text_ColtonPostBattle:
# 81 "data/maps/SSTidalRooms/scripts.pory"
	.string "I get so excited imagining what kinds\n"
	.string "of Pokémon I'll get to see in the next\l"
	.string "Contest. The anticipation of it thrills!$"

SSTidalRooms_Text_MicahIntro:
# 87 "data/maps/SSTidalRooms/scripts.pory"
	.string "Are your friends strong?$"

SSTidalRooms_Text_MicahDefeat:
# 91 "data/maps/SSTidalRooms/scripts.pory"
	.string "Your friends are, indeed, strong.$"

SSTidalRooms_Text_MicahPostBattle:
# 95 "data/maps/SSTidalRooms/scripts.pory"
	.string "Friends need not be human.\n"
	.string "For me, Pokémon are treasured friends!$"

SSTidalRooms_Text_ThomasIntro:
# 100 "data/maps/SSTidalRooms/scripts.pory"
	.string "Child…\n"
	.string "Did you knock on the door?$"

SSTidalRooms_Text_ThomasDefeat:
# 105 "data/maps/SSTidalRooms/scripts.pory"
	.string "A loss is to be accepted without haste\n"
	.string "or panic.$"

SSTidalRooms_Text_ThomasPostBattle:
# 110 "data/maps/SSTidalRooms/scripts.pory"
	.string "To be never ruffled in any situation is\n"
	.string "the Gentleman's code of conduct.$"

SSTidalRooms_Text_JedIntro:
# 115 "data/maps/SSTidalRooms/scripts.pory"
	.string "Jed: I feel a little shy about this, but…\n"
	.string "We'll show you our lovey-dovey power!$"

SSTidalRooms_Text_JedDefeat:
# 120 "data/maps/SSTidalRooms/scripts.pory"
	.string "Jed: Sigh…$"

SSTidalRooms_Text_JedPostBattle:
# 124 "data/maps/SSTidalRooms/scripts.pory"
	.string "Jed: It's the first time that our lovey-\n"
	.string "dovey power couldn't prevail!\l"
	.string "You must be an awesome Trainer!$"

SSTidalRooms_Text_JedNotEnoughMons:
# 130 "data/maps/SSTidalRooms/scripts.pory"
	.string "Jed: You only have one Pokémon?\n"
	.string "Isn't that just too lonesome?$"

SSTidalRooms_Text_LeaIntro:
# 135 "data/maps/SSTidalRooms/scripts.pory"
	.string "Lea: I feel a little silly, but…\n"
	.string "We'll show you our lovey-dovey power!$"

SSTidalRooms_Text_LeaDefeat:
# 140 "data/maps/SSTidalRooms/scripts.pory"
	.string "Lea: Oh, boo!$"

SSTidalRooms_Text_LeaPostBattle:
# 144 "data/maps/SSTidalRooms/scripts.pory"
	.string "Lea: I can't believe it!\n"
	.string "Our lovey-dovey power failed…\l"
	.string "You must be an awesome Trainer!$"

SSTidalRooms_Text_LeaNotEnoughMons:
# 150 "data/maps/SSTidalRooms/scripts.pory"
	.string "Lea: I wanted to battle…\n"
	.string "But you don't even have two Pokémon…$"

SSTidalRooms_Text_GarretIntro:
# 155 "data/maps/SSTidalRooms/scripts.pory"
	.string "Ah, you've come just in time.\p"
	.string "I'm bored, you see.\n"
	.string "You may entertain me.$"

SSTidalRooms_Text_GarretDefeat:
# 161 "data/maps/SSTidalRooms/scripts.pory"
	.string "…That will do.$"

SSTidalRooms_Text_GarretPostBattle:
# 165 "data/maps/SSTidalRooms/scripts.pory"
	.string "Perhaps I shall get Father to acquire\n"
	.string "a yacht for me.\l"
	.string "A yacht for me and Pokémon!$"

SSTidalRooms_Text_NaomiIntro:
# 171 "data/maps/SSTidalRooms/scripts.pory"
	.string "Oh, you're such an adorable Trainer.\n"
	.string "Would you like to have tea?\l"
	.string "Or would you rather battle?$"

SSTidalRooms_Text_NaomiDefeat:
# 177 "data/maps/SSTidalRooms/scripts.pory"
	.string "I see.\n"
	.string "You're the active sort.$"

SSTidalRooms_Text_NaomiPostBattle:
# 182 "data/maps/SSTidalRooms/scripts.pory"
	.string "A world cruise on a luxury liner has its\n"
	.string "charms, I must say…\p"
	.string "But, I will admit there is an appealing\n"
	.string "side to touring Hoenn by ferry.$"

SSTidalRooms_Text_NotSuspiciousTakeThis:
# 189 "data/maps/SSTidalRooms/scripts.pory"
	.string "Uh… Hi! I… I'm not acting suspicious!\n"
	.string "Uh… You can have this! For free!\p"
	.string "It… Honestly, I didn't Snatch it from\n"
	.string "someone! I'd never do such a thing!\l"
	.string "It's clean! You can use it!$"

SSTidalRooms_Text_ExplainSnatch:
# 197 "data/maps/SSTidalRooms/scripts.pory"
	.string "Snatch steals the beneficial effects\n"
	.string "of certain moves before they can be\l"
	.string "used by a foe or ally.$"
