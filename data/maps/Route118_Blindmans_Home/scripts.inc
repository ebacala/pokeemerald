Route118_Blindmans_Home_MapScripts::
# 4 "data/maps/Route118_Blindmans_Home/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route118_Blindmans_Home_OnResume
# 5 "data/maps/Route118_Blindmans_Home/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route118_Blindmans_Home_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route118_Blindmans_Home_MapScripts_MAP_SCRIPT_ON_LOAD:
# 6 "data/maps/Route118_Blindmans_Home/scripts.pory"
	goto_if_unset FLAG_VISITED_BLIND_MANS_HOME, Route118_Blindmans_Home_MapScripts_MAP_SCRIPT_ON_LOAD_2
	return

Route118_Blindmans_Home_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/Route118_Blindmans_Home/scripts.pory"
	setobjectxyperm 1, 4, 4
# 8 "data/maps/Route118_Blindmans_Home/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	return

Route118_Blindmans_Home_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 6 "data/maps/Route118_Blindmans_Home/scripts.pory"
	checktrainerflag TRAINER_BLIND_MAN
	goto_if 0, Route118_Blindmans_Home_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return


Route118_Blindmans_Home_OnResume::
# 14 "data/maps/Route118_Blindmans_Home/scripts.pory"
	goto_if_unset FLAG_VISITED_BLIND_MANS_HOME, Route118_Blindmans_Home_OnResume_2
	return

Route118_Blindmans_Home_OnResume_1:
# 15 "data/maps/Route118_Blindmans_Home/scripts.pory"
	setflag FLAG_VISITED_BLIND_MANS_HOME
# 17 "data/maps/Route118_Blindmans_Home/scripts.pory"
	lock
# 19 "data/maps/Route118_Blindmans_Home/scripts.pory"
	call Route118_Blindmans_Home_First_Visit
# 20 "data/maps/Route118_Blindmans_Home/scripts.pory"
	call Route118_Blindmans_Home_Talk_To_Blind_Man_Before_Battle
# 22 "data/maps/Route118_Blindmans_Home/scripts.pory"
	release
	return

Route118_Blindmans_Home_OnResume_2:
# 14 "data/maps/Route118_Blindmans_Home/scripts.pory"
	checktrainerflag TRAINER_BLIND_MAN
	goto_if 0, Route118_Blindmans_Home_OnResume_1
	return


Route118_Blindmans_Home_First_Visit::
# 27 "data/maps/Route118_Blindmans_Home/scripts.pory"
	playse SE_PIN
# 28 "data/maps/Route118_Blindmans_Home/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 29 "data/maps/Route118_Blindmans_Home/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route118_Blindmans_Home/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 31 "data/maps/Route118_Blindmans_Home/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route118_Blindmans_Home/scripts.pory"
	msgbox Route118_Blindmans_Home_First_Visit_Text_0
# 34 "data/maps/Route118_Blindmans_Home/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Walk_To_Blind_Man
# 35 "data/maps/Route118_Blindmans_Home/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route118_Blindmans_Home/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 37 "data/maps/Route118_Blindmans_Home/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 38 "data/maps/Route118_Blindmans_Home/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route118_Blindmans_Home/scripts.pory"
	msgbox Route118_Blindmans_Home_First_Visit_Text_1, MSGBOX_NPC
# 41 "data/maps/Route118_Blindmans_Home/scripts.pory"
	msgbox Route118_Blindmans_Home_First_Visit_Text_2
	return


Route118_Blindmans_Home_Talk_To_Blind_Man_Before_Battle::
# 45 "data/maps/Route118_Blindmans_Home/scripts.pory"
	msgbox Route118_Blindmans_Home_Talk_To_Blind_Man_Before_Battle_Text_0, MSGBOX_YESNO
# 47 "data/maps/Route118_Blindmans_Home/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route118_Blindmans_Home_Talk_To_Blind_Man_Before_Battle_1
# 50 "data/maps/Route118_Blindmans_Home/scripts.pory"
	msgbox Route118_Blindmans_Home_Talk_To_Blind_Man_Before_Battle_Text_1
	return

Route118_Blindmans_Home_Talk_To_Blind_Man_Before_Battle_1:
# 48 "data/maps/Route118_Blindmans_Home/scripts.pory"
	trainerbattle_single TRAINER_BLIND_MAN, Route118_Blindmans_Home_Text_Blind_Man_Battle_Intro, Route118_Blindmans_Home_Text_Blind_Man_Battle_Defeat, Route118_Blindmans_Home_Talk_To_Defeated_Blind_Man
	return


Route118_Blindmans_Home_Talk_To_Defeated_Blind_Man::
# 55 "data/maps/Route118_Blindmans_Home/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 56 "data/maps/Route118_Blindmans_Home/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route118_Blindmans_Home/scripts.pory"
	msgbox Route118_Blindmans_Home_Talk_To_Defeated_Blind_Man_Text_0
# 59 "data/maps/Route118_Blindmans_Home/scripts.pory"
	applymovement 1, Blind_Man_Go_To_Library
# 60 "data/maps/Route118_Blindmans_Home/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route118_Blindmans_Home/scripts.pory"
	msgbox Route118_Blindmans_Home_Talk_To_Defeated_Blind_Man_Text_1
# 63 "data/maps/Route118_Blindmans_Home/scripts.pory"
	msgbox Route118_Blindmans_Home_Talk_To_Defeated_Blind_Man_Text_2
# 65 "data/maps/Route118_Blindmans_Home/scripts.pory"
	applymovement 1, Blind_Man_Go_From_Library_To_Player
# 66 "data/maps/Route118_Blindmans_Home/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route118_Blindmans_Home/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 68 "data/maps/Route118_Blindmans_Home/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 69 "data/maps/Route118_Blindmans_Home/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route118_Blindmans_Home/scripts.pory"
	msgbox Route118_Blindmans_Home_Talk_To_Defeated_Blind_Man_Text_3
# 72 "data/maps/Route118_Blindmans_Home/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 73 "data/maps/Route118_Blindmans_Home/scripts.pory"
	message Route118_Blindmans_Home_Talk_To_Defeated_Blind_Man_Text_4
# 74 "data/maps/Route118_Blindmans_Home/scripts.pory"
	waitmessage
# 75 "data/maps/Route118_Blindmans_Home/scripts.pory"
	waitfanfare
# 76 "data/maps/Route118_Blindmans_Home/scripts.pory"
	msgbox Route118_Blindmans_Home_Talk_To_Defeated_Blind_Man_Text_5
	return


Route118_Blindmans_Home_Talk_To_Blind_Man::
# 80 "data/maps/Route118_Blindmans_Home/scripts.pory"
	lock
# 82 "data/maps/Route118_Blindmans_Home/scripts.pory"
	checktrainerflag TRAINER_BLIND_MAN
	goto_if 1, Route118_Blindmans_Home_Talk_To_Blind_Man_2
# 85 "data/maps/Route118_Blindmans_Home/scripts.pory"
	call Route118_Blindmans_Home_Talk_To_Blind_Man_Before_Battle
Route118_Blindmans_Home_Talk_To_Blind_Man_1:
# 88 "data/maps/Route118_Blindmans_Home/scripts.pory"
	release
	end

Route118_Blindmans_Home_Talk_To_Blind_Man_2:
# 83 "data/maps/Route118_Blindmans_Home/scripts.pory"
	msgbox Route118_Blindmans_Home_Talk_To_Blind_Man_Text_0
	goto Route118_Blindmans_Home_Talk_To_Blind_Man_1


# 100 "data/maps/Route118_Blindmans_Home/scripts.pory"
Player_Walk_To_Blind_Man:
# 101 "data/maps/Route118_Blindmans_Home/scripts.pory"
	walk_up
# 101 "data/maps/Route118_Blindmans_Home/scripts.pory"
	walk_up
# 102 "data/maps/Route118_Blindmans_Home/scripts.pory"
	walk_left
	step_end

# 105 "data/maps/Route118_Blindmans_Home/scripts.pory"
Blind_Man_Go_To_Library:
# 106 "data/maps/Route118_Blindmans_Home/scripts.pory"
	walk_right
# 106 "data/maps/Route118_Blindmans_Home/scripts.pory"
	walk_right
# 106 "data/maps/Route118_Blindmans_Home/scripts.pory"
	walk_right
# 107 "data/maps/Route118_Blindmans_Home/scripts.pory"
	walk_up
# 107 "data/maps/Route118_Blindmans_Home/scripts.pory"
	walk_up
# 108 "data/maps/Route118_Blindmans_Home/scripts.pory"
	face_up
	step_end

# 111 "data/maps/Route118_Blindmans_Home/scripts.pory"
Blind_Man_Go_From_Library_To_Player:
# 112 "data/maps/Route118_Blindmans_Home/scripts.pory"
	walk_down
# 112 "data/maps/Route118_Blindmans_Home/scripts.pory"
	walk_down
# 112 "data/maps/Route118_Blindmans_Home/scripts.pory"
	walk_down
# 113 "data/maps/Route118_Blindmans_Home/scripts.pory"
	walk_left
# 113 "data/maps/Route118_Blindmans_Home/scripts.pory"
	walk_left
	step_end

Route118_Blindmans_Home_First_Visit_Text_0:
# 32 "data/maps/Route118_Blindmans_Home/scripts.pory"
	.string "Who is it? It has been a long time since\n"
	.string "someone visited me. Please come in.$"

Route118_Blindmans_Home_First_Visit_Text_1:
# 40 "data/maps/Route118_Blindmans_Home/scripts.pory"
	.string "Who are you?$"

Route118_Blindmans_Home_First_Visit_Text_2:
# 41 "data/maps/Route118_Blindmans_Home/scripts.pory"
	.string "Hmm I see... You're a trainer, aren't you?\n"
	.string "And you need to learn braille? Very well,\l"
	.string "I will help you. On one condition\l"
	.string "though...$"

Route118_Blindmans_Home_Talk_To_Blind_Man_Before_Battle_Text_0:
# 45 "data/maps/Route118_Blindmans_Home/scripts.pory"
	.string "Defeat me in battle and I will teach you\n"
	.string "braille. It's been a long time since I\l"
	.string "last battled, so I'm sure you'll win.\l"
	.string "Right?$"

Route118_Blindmans_Home_Talk_To_Blind_Man_Before_Battle_Text_1:
# 50 "data/maps/Route118_Blindmans_Home/scripts.pory"
	.string "Very well, Some other time then...$"

Route118_Blindmans_Home_Talk_To_Defeated_Blind_Man_Text_0:
# 57 "data/maps/Route118_Blindmans_Home/scripts.pory"
	.string "I might have a book somewhere that\n"
	.string "could help you. My daughter used to use\l"
	.string "it to learn braille. Let me check...$"

Route118_Blindmans_Home_Talk_To_Defeated_Blind_Man_Text_1:
# 62 "data/maps/Route118_Blindmans_Home/scripts.pory"
	.string "Let's see...$"

Route118_Blindmans_Home_Talk_To_Defeated_Blind_Man_Text_2:
# 63 "data/maps/Route118_Blindmans_Home/scripts.pory"
	.string "Ha! Here it is!$"

Route118_Blindmans_Home_Talk_To_Defeated_Blind_Man_Text_3:
# 71 "data/maps/Route118_Blindmans_Home/scripts.pory"
	.string "There you go!$"

Route118_Blindmans_Home_Talk_To_Defeated_Blind_Man_Text_4:
# 73 "data/maps/Route118_Blindmans_Home/scripts.pory"
	.string "You can now read braille!$"

Route118_Blindmans_Home_Talk_To_Defeated_Blind_Man_Text_5:
# 76 "data/maps/Route118_Blindmans_Home/scripts.pory"
	.string "I'm sorry I can't see you off, but I'm\n"
	.string "sure you can find your way out. Safe\l"
	.string "travels!$"

Route118_Blindmans_Home_Talk_To_Blind_Man_Text_0:
# 83 "data/maps/Route118_Blindmans_Home/scripts.pory"
	.string "I'm sure braille will help you on your\n"
	.string "journey. Safe travels!$"

Route118_Blindmans_Home_Text_Blind_Man_Battle_Intro::
# 92 "data/maps/Route118_Blindmans_Home/scripts.pory"
	.string "Okay then, let's begin!$"

Route118_Blindmans_Home_Text_Blind_Man_Battle_Defeat::
# 96 "data/maps/Route118_Blindmans_Home/scripts.pory"
	.string "You are a worthy trainer! I'll help you!$"
