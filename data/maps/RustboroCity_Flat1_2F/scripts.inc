RustboroCity_Flat1_2F_MapScripts::
	.byte 0


RustboroCity_Flat1_2F_EventScript_WaldasDad::
# 4 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	lock
# 5 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	faceplayer
# 6 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	specialvar VAR_RESULT, TryBufferWaldaPhrase
# 7 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_Flat1_2F_EventScript_WaldasDad_2
# 10 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase
RustboroCity_Flat1_2F_EventScript_WaldasDad_1:
# 12 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
	end

RustboroCity_Flat1_2F_EventScript_WaldasDad_2:
# 8 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase
	goto RustboroCity_Flat1_2F_EventScript_WaldasDad_1


RustboroCity_Flat1_2F_EventScript_GivePhrase::
# 17 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	special DoWaldaNamingScreen
# 18 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	compare VAR_0x8004, 1
	goto_if_eq RustboroCity_Flat1_2F_EventScript_GivePhrase_2
# 20 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	compare VAR_0x8004, 2
	goto_if_eq RustboroCity_Flat1_2F_EventScript_GivePhrase_3
# 25 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	specialvar VAR_RESULT, TryGetWallpaperWithWaldaPhrase
# 26 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_Flat1_2F_EventScript_GivePhrase_7
# 34 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry
# 35 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	turnobject LOCALID_WALDAS_DAD, DIR_EAST
# 36 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll
RustboroCity_Flat1_2F_EventScript_GivePhrase_1:
	end

RustboroCity_Flat1_2F_EventScript_GivePhrase_2:
# 19 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhYouDontKnowAny
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase_1

RustboroCity_Flat1_2F_EventScript_GivePhrase_3:
# 21 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase
# 22 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	turnobject LOCALID_WALDAS_DAD, DIR_EAST
# 23 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase_1

RustboroCity_Flat1_2F_EventScript_GivePhrase_7:
# 27 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry2
# 28 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	turnobject LOCALID_WALDAS_DAD, DIR_EAST
# 29 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhShesLaughing
# 30 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	applymovement LOCALID_WALDAS_DAD, Common_Movement_FacePlayer
# 31 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	waitmovement 0
# 32 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase_1


RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase::
# 43 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase, MSGBOX_YESNO
# 44 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase_2
# 47 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion
# 48 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_GivePhrase
RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase_1:
	return

RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase_2:
# 45 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhIsThatRight
	goto RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase_1


RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase::
# 54 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase, MSGBOX_YESNO
# 55 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase_2
# 58 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion
# 59 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_GivePhrase
RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase_1:
	return

RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase_2:
# 56 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhIsThatRight
	goto RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase_1


RustboroCity_Flat1_2F_EventScript_WaldasMom::
# 65 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard, MSGBOX_NPC
	end


RustboroCity_Flat1_2F_EventScript_PokeDoll::
# 70 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll, MSGBOX_SIGN
	end


RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard:
# 74 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, it's so hard every day…\p"
	.string "What's hard?\n"
	.string "You need to ask?\p"
	.string "It's trying to figure out what to\n"
	.string "make for meals every day.\p"
	.string "It really isn't easy coming up with\n"
	.string "meals every day.$"

RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase:
# 84 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, hello!\n"
	.string "Welcome to the Pepper household.\p"
	.string "I have a question for you.\n"
	.string "Have you ever baby-sat?\p"
	.string "You see, I'm a new father, so raising\n"
	.string "a child is all new to me.\p"
	.string "And I have a problem. My daughter\n"
	.string "Walda doesn't laugh enough.\p"
	.string "I think she'd laugh for me if I told\n"
	.string "her something funny.\p"
	.string "Do you know of a funny word or\n"
	.string "phrase you can tell me?$"

RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase:
# 99 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "I've been saying “{STR_VAR_1}”\n"
	.string "to amuse her lately.\p"
	.string "Do you know of a better word or\n"
	.string "a phrase that might work?$"

RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion:
# 106 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, that's wonderful.\n"
	.string "So, let's hear it, your suggestion.$"

RustboroCity_Flat1_2F_Text_OhIsThatRight:
# 111 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, is that right?\p"
	.string "Well, if you come up with a good\n"
	.string "suggestion, I'm all ears.$"

RustboroCity_Flat1_2F_Text_LetsGiveItATry2:
# 117 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ah, I see.\n"
	.string "Well, let's give it a try, shall we?$"

RustboroCity_Flat1_2F_Text_OhShesLaughing:
# 122 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\n"
	.string "{STR_VAR_1}.\p"
	.string "Oh, yes! She's laughing!\n"
	.string "Oh, I am as delighted as she!$"

RustboroCity_Flat1_2F_Text_LetsGiveItATry:
# 129 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ah, I see.\n"
	.string "Well, let's give it a try, shall we?$"

RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll:
# 134 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\n"
	.string "{STR_VAR_1}.\p"
	.string "Hmmm… She's not smiling at all.\n"
	.string "Maybe Walda is one serious child…$"

RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase:
# 141 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, so you don't know any good words.\n"
	.string "I'd better think for myself, then.\p"
	.string "Hmm…\n"
	.string "How about “{STR_VAR_1}”?\l"
	.string "Let's see if that will work.$"

RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2:
# 149 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\n"
	.string "{STR_VAR_1}.\p"
	.string "Hmmm… She's not smiling at all.\n"
	.string "Maybe Walda is one serious child…$"

RustboroCity_Flat1_2F_Text_OhYouDontKnowAny:
# 156 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, so you don't know any good words.\n"
	.string "I guess I'll try to amuse her with\l"
	.string "the saying I used before.\p"
	.string "Anyways, if you have a good suggestion,\n"
	.string "don't hesitate in telling me, okay?$"

RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper:
# 164 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Thank you!\p"
	.string "Thanks to you, my darling Walda\n"
	.string "laughed for me!\p"
	.string "Actually, I may not look all that\n"
	.string "special, but I'm one of Devon\l"
	.string "Corporation's top researchers.\p"
	.string "So, how about I do something in return\n"
	.string "for you?\p"
	.string "I know, I'll add some new wallpaper\n"
	.string "patterns for the Boxes in the PC\l"
	.string "Pokémon Storage System.\p"
	.string "In the wallpaper pattern menu,\n"
	.string "select “Friends.”\p"
	.string "That will give you access to the new\n"
	.string "wallpaper patterns.$"

RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll:
# 182 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "It's a Pokémon plush Doll!$"
