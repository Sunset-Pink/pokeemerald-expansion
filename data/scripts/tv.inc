Script_Common_TV_TurnOff::
# 2 "data/scripts/tv.pory"
	special TurnOffTVScreen
# 3 "data/scripts/tv.pory"
	setflag FLAG_SYS_TV_WATCH
# 4 "data/scripts/tv.pory"
	releaseall
	end


Script_Common_TV_MomDadMightLikeThis::
# 9 "data/scripts/tv.pory"
	special GetMomOrDadStringForTVMessage
# 10 "data/scripts/tv.pory"
	msgbox gText_MomOrDadMightLikeThisProgram
# 11 "data/scripts/tv.pory"
	goto Script_Common_TV_TurnOff
	end


Script_Interact_TV::
# 16 "data/scripts/tv.pory"
	lockall
# 17 "data/scripts/tv.pory"
	incrementgamestat GAME_STAT_WATCHED_TV
# 18 "data/scripts/tv.pory"
	special ResetTVShowState
# 19 "data/scripts/tv.pory"
	specialvar VAR_RESULT, CheckForPlayersHouseNews
# 20 "data/scripts/tv.pory"
	compare VAR_RESULT, PLAYERS_HOUSE_TV_MOVIE
	goto_if_eq Script_Interact_TV_2
# 22 "data/scripts/tv.pory"
	compare VAR_RESULT, PLAYERS_HOUSE_TV_LATI
	goto_if_eq Script_Interact_TV_3
# 24 "data/scripts/tv.pory"
	goto_if_unset FLAG_SYS_TV_START, Script_Interact_TV_4
# 24 "data/scripts/tv.pory"
	goto_if_set FLAG_SYS_TV_WATCH, Script_Interact_TV_4
Script_Interact_TV_1:
# 28 "data/scripts/tv.pory"
	specialvar VAR_RESULT, IsGabbyAndTyShowOnTheAir
# 29 "data/scripts/tv.pory"
	compare VAR_RESULT, 0
	goto_if_ne Script_Interact_TV_11
# 32 "data/scripts/tv.pory"
	goto Script_TV_TryPokeNews
Script_Interact_TV_10:
	end

Script_Interact_TV_2:
# 21 "data/scripts/tv.pory"
	goto Script_PlayersHouse_1F_TV_Moive
	goto Script_Interact_TV_1

Script_Interact_TV_3:
# 23 "data/scripts/tv.pory"
	goto Script_PlayersHouse_1F_TV_LatiNewsFlash
	goto Script_Interact_TV_1

Script_Interact_TV_4:
# 25 "data/scripts/tv.pory"
	goto Script_Common_TV_MomDadMightLikeThis
	goto Script_Interact_TV_1

Script_Interact_TV_11:
# 30 "data/scripts/tv.pory"
	goto Script_TV_DoInSearchOfTrainers
	goto Script_Interact_TV_10


Script_TV_TryPokeNews::
# 39 "data/scripts/tv.pory"
	special DoPokeNews
# 40 "data/scripts/tv.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TV_TryPokeNews_2
Script_TV_TryPokeNews_1:
# 43 "data/scripts/tv.pory"
	waitmessage
# 44 "data/scripts/tv.pory"
	waitbuttonpress
# 45 "data/scripts/tv.pory"
	goto Script_Common_TV_TurnOff
	end

Script_TV_TryPokeNews_2:
# 41 "data/scripts/tv.pory"
	goto Script_TV_TryToDoShow
	goto Script_TV_TryPokeNews_1


Script_TV_TryToDoShow::
# 50 "data/scripts/tv.pory"
	specialvar VAR_0x8004, GetRandomActiveShowIdx
# 51 "data/scripts/tv.pory"
	compare VAR_0x8004, 255
	goto_if_eq Script_TV_TryToDoShow_2
Script_TV_TryToDoShow_1:
# 54 "data/scripts/tv.pory"
	specialvar VAR_0x8004, GetSelectedTVShow
# 55 "data/scripts/tv.pory"
	compare VAR_0x8004, 0
	goto_if_ne Script_TV_TryToDoShow_5
Script_TV_TryToDoShow_4:
	end

Script_TV_TryToDoShow_2:
# 52 "data/scripts/tv.pory"
	goto Script_Common_TV_MomDadMightLikeThis
	goto Script_TV_TryToDoShow_1

Script_TV_TryToDoShow_5:
# 56 "data/scripts/tv.pory"
	goto Script_TV_DoShow
	goto Script_TV_TryToDoShow_4


Script_TV_DoShow::
# 62 "data/scripts/tv.pory"
	special DoTVShow
# 63 "data/scripts/tv.pory"
	waitmessage
# 64 "data/scripts/tv.pory"
	waitbuttonpress
# 65 "data/scripts/tv.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne Script_TV_DoShow_2
# 68 "data/scripts/tv.pory"
	goto Script_Common_TV_TurnOff
Script_TV_DoShow_1:
	end

Script_TV_DoShow_2:
# 66 "data/scripts/tv.pory"
	goto Script_TV_DoShow
	goto Script_TV_DoShow_1


Script_TV_DoInSearchOfTrainers::
# 74 "data/scripts/tv.pory"
	special DoTVShowInSearchOfTrainers
# 75 "data/scripts/tv.pory"
	waitmessage
# 76 "data/scripts/tv.pory"
	waitbuttonpress
# 77 "data/scripts/tv.pory"
	compare VAR_RESULT, 0
	goto_if_eq Script_TV_DoInSearchOfTrainers_2
# 80 "data/scripts/tv.pory"
	call Script_Common_TV_TurnOff
Script_TV_DoInSearchOfTrainers_1:
	end

Script_TV_DoInSearchOfTrainers_2:
# 78 "data/scripts/tv.pory"
	call Script_TV_DoInSearchOfTrainers
	goto Script_TV_DoInSearchOfTrainers_1


Script_PlayersHouse_1F_TV_Moive::
# 87 "data/scripts/tv.pory"
	msgbox Text_PlayersHouse_1F_TV_TheresAMovieOn
	return


Script_PlayersHouse_1F_TV_LatiNewsFlash::
# 98 "data/scripts/tv.pory"
	msgbox Text_PlayersHouse_1F_TV_LatiNews
# 99 "data/scripts/tv.pory"
	clearflag FLAG_SYS_TV_LATIAS_LATIOS
# 100 "data/scripts/tv.pory"
	setflag FLAG_LATIOS_OR_LATIAS_ROAMING
# 101 "data/scripts/tv.pory"
	special TurnOffTVScreen
# 102 "data/scripts/tv.pory"
	releaseall
	end


Text_PlayersHouse_1F_TV_TheresAMovieOn::
# 90 "data/scripts/tv.pory"
	.string "There is a movie on TV.\p"
	.string "Two men are dancing on a big piano\n"
	.string "keyboard.\p"
	.string "Better get going!$"

Text_PlayersHouse_1F_TV_LatiNews:
# 106 "data/scripts/tv.pory"
	.string "We bring you this emergency\n"
	.string "news flash!\p"
	.string "In various Hoenn locales, there have\n"
	.string "been reports of a Bzzt…colored\l"
	.string "Pokémon in flight.\p"
	.string "The identity of this Pokémon is\n"
	.string "currently unknown.\p"
	.string "We now return you to the regular\n"
	.string "movie program.$"
