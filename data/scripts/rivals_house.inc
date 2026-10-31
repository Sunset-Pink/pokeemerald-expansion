Script_RivalsHouse_1F_Interact_RivalMom::
# 17 "data/scripts/rivals_house.pory"
	lock
# 18 "data/scripts/rivals_house.pory"
	faceplayer
# 19 "data/scripts/rivals_house.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, Script_RivalsHouse_1F_Interact_RivalMom_2
# 21 "data/scripts/rivals_house.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Script_RivalsHouse_1F_Interact_RivalMom_3
# 23 "data/scripts/rivals_house.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
	goto_if_eq Script_RivalsHouse_1F_Interact_RivalMom_4
# 26 "data/scripts/rivals_house.pory"
	special GetRivalSonDaughterString
# 27 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_1F_RivalsMom_LikeChildLikeFather
Script_RivalsHouse_1F_Interact_RivalMom_1:
# 29 "data/scripts/rivals_house.pory"
	release
	end

Script_RivalsHouse_1F_Interact_RivalMom_2:
# 20 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_1F_RivalsMom_ShouldGoHome
	goto Script_RivalsHouse_1F_Interact_RivalMom_1

Script_RivalsHouse_1F_Interact_RivalMom_3:
# 22 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_1F_RivalsMom_WentOutToRoute103
	goto Script_RivalsHouse_1F_Interact_RivalMom_1

Script_RivalsHouse_1F_Interact_RivalMom_4:
# 24 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_1F_RivalsMom_TooBusyToNoticeVisit
	goto Script_RivalsHouse_1F_Interact_RivalMom_1


Script_RivalsHouse_1F_Interact_RivalSibling::
# 111 "data/scripts/rivals_house.pory"
	lockall
# 112 "data/scripts/rivals_house.pory"
	faceplayer
# 113 "data/scripts/rivals_house.pory"
	special GetPlayerBigGuyGirlString
# 114 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_1F_RivalSibling_DoYouHavePokemon
# 115 "data/scripts/rivals_house.pory"
	release
	end


Script_RivalsHouse_2F_Interact_GameCube::
# 126 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_2F_GameCube, MSGBOX_SIGN
	return


Script_RivalsHouse_2F_Interact_Notebook::
# 137 "data/scripts/rivals_house.pory"
	msgbox Text_RivalsHouse_2F_Notebook, MSGBOX_SIGN
	return


Text_RivalsHouse_1F_RivalsMom_OhYoureTheNewNeighbor:
# 2 "data/scripts/rivals_house.pory"
	.string "Oh, hello. And you are?\p"
	.string "… … … … … … … … …\n"
	.string "… … … … … … … … …\p"
	.string "Oh, you're {PLAYER}{KUN}, our new next-door\n"
	.string "neighbor! Hi!\p"
	.string "We have a {STR_VAR_1} about the same\n"
	.string "age as you.\p"
	.string "Our {STR_VAR_1} was excited about making\n"
	.string "Our {STR_VAR_1} was excited about making\n"
	.string "a new friend.\p"
	.string "Our {STR_VAR_1} is upstairs, I think.$"

Text_RivalsHouse_1F_RivalsMom_LikeChildLikeFather:
# 33 "data/scripts/rivals_house.pory"
	.string "Like child, like father.\p"
	.string "My husband is as wild about Pokémon\n"
	.string "as our child.\p"
	.string "If he's not at his Lab, he's likely\n"
	.string "scrabbling about in grassy places.$"

Text_RivalsHouse_1F_RivalsMom_TooBusyToNoticeVisit:
# 41 "data/scripts/rivals_house.pory"
	.string "That {RIVAL}!\p"
	.string "I guess our child is too busy with\n"
	.string "Pokémon to notice that you came\l"
	.string "to visit, {PLAYER}{KUN}.$"

Text_RivalsHouse_1F_RivalsMom_WentOutToRoute103:
# 48 "data/scripts/rivals_house.pory"
	.string "Oh, {RIVAL} went out to Route 103\n"
	.string "just a little while ago.\p"
	.string "Like farther, like child.\n"
	.string "{RIVAL} can't stay quietly at home.$"

Text_RivalsHouse_1F_RivalsMom_ShouldGoHome:
# 55 "data/scripts/rivals_house.pory"
	.string "I think it's wonderful for people to \n"
	.string "travel with Pokémon.\p"
	.string "But you should go home every so often\n"
	.string "to let your mother know you're okay.\p"
	.string "She might not say it, but I'm sure she\n"
	.string "worries about you, {PLAYER}{KUN}.$"

Text_RivalsHouse_2F_May_WhoAreYou:
# 64 "data/scripts/rivals_house.pory"
	.string "Huh?\n"
	.string "Who… Who are you?\p"
	.string "… … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "Oh, you're {PLAYER}{KUN}.\n"
	.string "So your move was today.\p"
	.string "Um… I'm MAY.\n"
	.string "Glad to meet you!\p"
	.string "I…\n"
	.string "I have this dream of becoming friends\l"
	.string "with Pokémon all over the world.\p"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
	.string "my dad, Prof. Birch.\p"
	.string "I was hoping that you would be nice,\n"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
	.string "Oh, this is silly, isn't it?\n"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
	.string "Eheheh…\p"
	.string "Oh, no! I forgot!\p"
	.string "I was supposed to go help Dad catch\n"
	.string "some wild Pokémon!\p"
	.string "{PLAYER}{KUN}, I'll catch you later!$"

Text_RivalsHouse_2F_Brendan_WhoAreYou:
# 89 "data/scripts/rivals_house.pory"
	.string "Hey!\n"
	.string "You…\p"
	.string "Who are you?\p"
	.string "Oh, you're {PLAYER}, aren't you?\n"
	.string "Moved in next door, right?\p"
	.string "I didn't know that you're a girl.\p"
	.string "Dad, Prof. Birch, said that our new\n"
	.string "next-door neighbor is a Gym Leader's\l"
	.string "kid, so I assumed you'd be a guy.\p"
	.string "My name's Brendan.\n"
	.string "So, hi, neighbor!\p"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
	.string "a Pokémon?\p"
	.string "Do you want me to go catch you one?\p"
	.string "Aw, darn, I forgot…\p"
	.string "I'm supposed to go help my dad catch\n"
	.string "some wild Pokémon.\p"
	.string "Some other time, okay?$"

Text_RivalsHouse_1F_RivalSibling_DoYouHavePokemon:
# 119 "data/scripts/rivals_house.pory"
	.string "Hi, neighbor!\p"
	.string "Do you already have your\n"
	.string "own Pokémon?$"

Text_RivalsHouse_2F_GameCube:
# 130 "data/scripts/rivals_house.pory"
	.string "It's a Nintendo GameCube.\p"
	.string "A Game Boy Advance is connected to\n"
	.string "serve as the Controller.$"

Text_RivalsHouse_2F_Notebook:
# 141 "data/scripts/rivals_house.pory"
	.string "{PLAYER} flipped open the notebook.\p"
	.string "Adventure Rule No. 1\n"
	.string "Open the Menu with Start.\p"
	.string "Adventure Rule No. 2\n"
	.string "Record your progress with Save.\p"
	.string "The remaining pages are blank…$"
