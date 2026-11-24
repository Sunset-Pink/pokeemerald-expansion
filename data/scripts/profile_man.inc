ProfileMan_EventScript_Man::
# 2 "data/scripts/profile_man.pory"
	lock
# 3 "data/scripts/profile_man.pory"
	faceplayer
# 4 "data/scripts/profile_man.pory"
	goto_if_set FLAG_SYS_CHAT_USED, ProfileMan_EventScript_Man_2
# 7 "data/scripts/profile_man.pory"
	msgbox ProfileMan_Text_CollectTrainerProfiles
# 8 "data/scripts/profile_man.pory"
	call ProfileMan_EventScript_AskToSeeProfile
ProfileMan_EventScript_Man_1:
	end

ProfileMan_EventScript_Man_2:
# 5 "data/scripts/profile_man.pory"
	call ProfileMan_EventScript_GivenProfileBefore
	goto ProfileMan_EventScript_Man_1


ProfileMan_EventScript_AskToSeeProfile::
# 14 "data/scripts/profile_man.pory"
	msgbox ProfileMan_Text_MayISeeYourProfile, MSGBOX_DEFAULT
# 15 "data/scripts/profile_man.pory"
	multichoice 17, 6, MULTI_YESNOINFO_2, FALSE
# 16 "data/scripts/profile_man.pory"
	switch VAR_RESULT
# 17 "data/scripts/profile_man.pory"
	case 0, ProfileMan_EventScript_AskToSeeProfile_3
# 18 "data/scripts/profile_man.pory"
	case 2, ProfileMan_EventScript_AskToSeeProfile_4
# 19 "data/scripts/profile_man.pory"
	call ProfileMan_EventScript_DeclineShowProfile
ProfileMan_EventScript_AskToSeeProfile_1:
	end

ProfileMan_EventScript_AskToSeeProfile_3:
# 17 "data/scripts/profile_man.pory"
	call ProfileMan_EventScript_CreateProfile
	goto ProfileMan_EventScript_AskToSeeProfile_1

ProfileMan_EventScript_AskToSeeProfile_4:
# 18 "data/scripts/profile_man.pory"
	call ProfileMan_EventScript_Info
	goto ProfileMan_EventScript_AskToSeeProfile_1


ProfileMan_EventScript_Info::
# 25 "data/scripts/profile_man.pory"
	msgbox ProfileMan_Text_EasyChatExplanation
# 26 "data/scripts/profile_man.pory"
	goto ProfileMan_EventScript_AskToSeeProfile
	end


ProfileMan_EventScript_CreateProfile::
# 31 "data/scripts/profile_man.pory"
	msgbox ProfileMan_Text_LetsSeeItThen
# 32 "data/scripts/profile_man.pory"
	closemessage
# 33 "data/scripts/profile_man.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_PROFILE
# 34 "data/scripts/profile_man.pory"
	call Common_ShowEasyChatScreen
# 35 "data/scripts/profile_man.pory"
	lock
# 36 "data/scripts/profile_man.pory"
	faceplayer
# 37 "data/scripts/profile_man.pory"
	compare VAR_RESULT, 0
	goto_if_eq ProfileMan_EventScript_CreateProfile_2
# 40 "data/scripts/profile_man.pory"
	goto ProfileMan_EventScript_ShowProfile
ProfileMan_EventScript_CreateProfile_1:
	end

ProfileMan_EventScript_CreateProfile_2:
# 38 "data/scripts/profile_man.pory"
	goto ProfileMan_EventScript_CancelShowProfile
	goto ProfileMan_EventScript_CreateProfile_1


ProfileMan_EventScript_CancelShowProfile::
# 46 "data/scripts/profile_man.pory"
	msgbox ProfileMan_Text_NotIntoItRightNow
# 47 "data/scripts/profile_man.pory"
	release
	end


ProfileMan_EventScript_ShowProfile::
# 52 "data/scripts/profile_man.pory"
	setvar VAR_0x8004, 0
# 53 "data/scripts/profile_man.pory"
	special ShowEasyChatProfile
# 54 "data/scripts/profile_man.pory"
	waitmessage
# 55 "data/scripts/profile_man.pory"
	delay 80
# 56 "data/scripts/profile_man.pory"
	msgbox ProfileMan_Text_FantasticProfile
# 57 "data/scripts/profile_man.pory"
	release
	end


ProfileMan_EventScript_DeclineShowProfile::
# 62 "data/scripts/profile_man.pory"
	msgbox ProfileMan_Text_ImagineYouWouldHaveWonderfulProfile
# 63 "data/scripts/profile_man.pory"
	release
	end


ProfileMan_EventScript_GivenProfileBefore::
# 68 "data/scripts/profile_man.pory"
	msgbox ProfileMan_Text_YouHaveWonderfulSmile
# 69 "data/scripts/profile_man.pory"
	goto ProfileMan_EventScript_AskToSeeNewProfile
	end


ProfileMan_EventScript_AskToSeeNewProfile::
# 74 "data/scripts/profile_man.pory"
	msgbox ProfileMan_Text_MayISeeYourNewProfile
# 75 "data/scripts/profile_man.pory"
	multichoice 17, 6, MULTI_YESNOINFO_2, FALSE
# 76 "data/scripts/profile_man.pory"
	switch VAR_RESULT
# 77 "data/scripts/profile_man.pory"
	case 0, ProfileMan_EventScript_AskToSeeNewProfile_3
# 78 "data/scripts/profile_man.pory"
	case 2, ProfileMan_EventScript_AskToSeeNewProfile_4
# 79 "data/scripts/profile_man.pory"
	goto ProfileMan_EventScript_DeclineNewProfile
ProfileMan_EventScript_AskToSeeNewProfile_1:
	end

ProfileMan_EventScript_AskToSeeNewProfile_3:
# 77 "data/scripts/profile_man.pory"
	goto ProfileMan_EventScript_CreateNewProfile
	goto ProfileMan_EventScript_AskToSeeNewProfile_1

ProfileMan_EventScript_AskToSeeNewProfile_4:
# 78 "data/scripts/profile_man.pory"
	goto ProfileMan_EventScript_InfoNewProfile
	goto ProfileMan_EventScript_AskToSeeNewProfile_1


ProfileMan_EventScript_InfoNewProfile::
# 85 "data/scripts/profile_man.pory"
	msgbox ProfileMan_Text_EasyChatExplanation
# 86 "data/scripts/profile_man.pory"
	goto ProfileMan_EventScript_AskToSeeNewProfile
	end


ProfileMan_EventScript_CreateNewProfile::
# 91 "data/scripts/profile_man.pory"
	msgbox ProfileMan_Text_EvenBetterThanLastProfile
# 92 "data/scripts/profile_man.pory"
	closemessage
# 93 "data/scripts/profile_man.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_PROFILE
# 94 "data/scripts/profile_man.pory"
	call Common_ShowEasyChatScreen
# 95 "data/scripts/profile_man.pory"
	lock
# 96 "data/scripts/profile_man.pory"
	faceplayer
# 97 "data/scripts/profile_man.pory"
	compare VAR_RESULT, 0
	goto_if_eq ProfileMan_EventScript_CreateNewProfile_2
# 100 "data/scripts/profile_man.pory"
	goto ProfileMan_EventScript_ShowProfile
ProfileMan_EventScript_CreateNewProfile_1:
	end

ProfileMan_EventScript_CreateNewProfile_2:
# 98 "data/scripts/profile_man.pory"
	goto ProfileMan_EventScript_CancelShowProfile
	goto ProfileMan_EventScript_CreateNewProfile_1


ProfileMan_EventScript_DeclineNewProfile::
# 107 "data/scripts/profile_man.pory"
	msgbox ProfileMan_Text_LikeProfileWayItIs
# 108 "data/scripts/profile_man.pory"
	release
	end


ProfileMan_Text_CollectTrainerProfiles:
# 112 "data/scripts/profile_man.pory"
	.string "Hello there, Trainer!\n"
	.string "You've got a wonderful smile, there.\p"
	.string "I have a hobby--collecting the profiles\n"
	.string "of Pokémon Trainers.$"

ProfileMan_Text_MayISeeYourProfile:
# 119 "data/scripts/profile_man.pory"
	.string "So, how about it?\n"
	.string "May I see your profile?$"

ProfileMan_Text_EasyChatExplanation:
# 124 "data/scripts/profile_man.pory"
	.string "You make your own profile by putting\n"
	.string "together four words or phrases.\p"
	.string "Here, I'll show you an example of a\n"
	.string "profile using four pieces of text.\p"
	.string "You can switch those four pieces with\n"
	.string "other text pieces any which way you\l"
	.string "like to make your own profile.\p"
	.string "There are a lot of text pieces that\n"
	.string "you can use.\p"
	.string "They are arranged in groups like\n"
	.string "Pokémon, lifestyles, and hobbies so\l"
	.string "it is easier to look them up.\p"
	.string "So, first, choose the group of text\n"
	.string "pieces to display a list of choices.\p"
	.string "Then, pick the choice you want.\p"
	.string "Repeat for the remaining text choices,\n"
	.string "and you'll have your very own profile.$"

ProfileMan_Text_LetsSeeItThen:
# 144 "data/scripts/profile_man.pory"
	.string "Yes! Thank you!\n"
	.string "So, let's see it, then.$"

ProfileMan_Text_ImagineYouWouldHaveWonderfulProfile:
# 149 "data/scripts/profile_man.pory"
	.string "Oh, no, really?\p"
	.string "I imagine someone like you would have\n"
	.string "a wonderful profile…$"

ProfileMan_Text_NotIntoItRightNow:
# 155 "data/scripts/profile_man.pory"
	.string "Oh? You're not into it right now?\p"
	.string "Well, anytime is good by me!$"

ProfileMan_Text_YouHaveWonderfulSmile:
# 160 "data/scripts/profile_man.pory"
	.string "Hello there, Trainer!\n"
	.string "You've got a wonderful smile.$"

ProfileMan_Text_MayISeeYourNewProfile:
# 165 "data/scripts/profile_man.pory"
	.string "May I see your new profile?$"

ProfileMan_Text_EvenBetterThanLastProfile:
# 169 "data/scripts/profile_man.pory"
	.string "Yes! Thank you!\p"
	.string "I hope it's even better than the profile\n"
	.string "you showed me before.$"

ProfileMan_Text_LikeProfileWayItIs:
# 175 "data/scripts/profile_man.pory"
	.string "Oh, you like your profile the way it is.\p"
	.string "I don't blame you--it's a wonderful\n"
	.string "profile the way it is now.$"

ProfileMan_Text_FantasticProfile:
# 181 "data/scripts/profile_man.pory"
	.string "F-fantastic!\p"
	.string "Your profile, it's wonderful!\n"
	.string "It really says what you're about.\p"
	.string "Why, anyone hearing this profile would\n"
	.string "be captivated by you!\p"
	.string "Thank you!$"
