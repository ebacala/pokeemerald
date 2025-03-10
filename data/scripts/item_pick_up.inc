EventScript_ItemPickUp::
# 2 "data/scripts/item_pick_up.pory"
	lock
# 5 "data/scripts/item_pick_up.pory"
	setvar VAR_0x8005, 0
# 8 "data/scripts/item_pick_up.pory"
	specialvar VAR_0x8004, Special_CheckPickedUpItems
# 9 "data/scripts/item_pick_up.pory"
	compare VAR_0x8004, 0
	goto_if_ne EventScript_ItemPickUp_5
EventScript_ItemPickUp_4:
EventScript_ItemPickUp_1:
# 27 "data/scripts/item_pick_up.pory"
	release
	return

EventScript_ItemPickUp_5:
# 10 "data/scripts/item_pick_up.pory"
	addvar VAR_0x8005, 1
# 11 "data/scripts/item_pick_up.pory"
	bufferitemname STR_VAR_1, VAR_0x8004
# 13 "data/scripts/item_pick_up.pory"
	checkitemspace VAR_0x8004, 1
# 14 "data/scripts/item_pick_up.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_ItemPickUp_7
# 19 "data/scripts/item_pick_up.pory"
	msgbox EventScript_ItemPickUp_Text_1
	goto EventScript_ItemPickUp_1

EventScript_ItemPickUp_7:
# 15 "data/scripts/item_pick_up.pory"
	msgbox EventScript_ItemPickUp_Text_0
# 16 "data/scripts/item_pick_up.pory"
	giveitem VAR_0x8004
# 17 "data/scripts/item_pick_up.pory"
	special Special_RemoveFirstPokemonPickedUpItem
	goto EventScript_ItemPickUp_4


EventScript_ItemPickUp_Text_0:
# 15 "data/scripts/item_pick_up.pory"
	.string "One of your POKéMON picked up\n"
	.string "{STR_VAR_1}.$"

EventScript_ItemPickUp_Text_1:
# 19 "data/scripts/item_pick_up.pory"
	.string "One of your POKéMON picked up\n"
	.string "{STR_VAR_1}. But there is no space\l"
	.string "left in the BAG.$"
