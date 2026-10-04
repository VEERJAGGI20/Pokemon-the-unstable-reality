LavenderTown_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_OnTransition
	.byte 0

LavenderTown_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_LAVENDER_TOWN
	setvar VAR_MAP_SCENE_S_S_ANNE_2F_CORRIDOR, 1
	setflag FLAG_HIDE_SS_ANNE_RIVAL
	end

LavenderTown_EventScript_LittleGirl::
	lock
	faceplayer
	msgbox LavenderTown_Text_DoYouBelieveInGhosts, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LavenderTown_EventScript_LittleGirlBelieve
	msgbox LavenderTown_Text_JustImaginingWhiteHand
	release
	end

LavenderTown_EventScript_LittleGirlBelieve::
	msgbox LavenderTown_Text_SoThereAreBelievers
	release
	end

LavenderTown_EventScript_WorkerM::
	msgbox LavenderTown_Text_TownKnownAsMonGraveSite, MSGBOX_NPC
	end

LavenderTown_EventScript_Boy::
	msgbox LavenderTown_Text_GhostsAppearedInTower, MSGBOX_NPC
	end

LavenderTown_EventScript_TownSign::
	msgbox LavenderTown_Text_TownSign, MSGBOX_SIGN
	end

LavenderTown_EventScript_SilphScopeNotice::
	msgbox LavenderTown_Text_SilphScopeNotice, MSGBOX_SIGN
	end

LavenderTown_EventScript_VolunteerHouseSign::
	msgbox LavenderTown_Text_VolunteerPokemonHouse, MSGBOX_SIGN
	end

LavenderTown_EventScript_PokemonTowerSign::
	msgbox LavenderTown_Text_PokemonTowerSign, MSGBOX_SIGN
	end

LavenderTown_Text_DoYouBelieveInGhosts::
	.string "Do you believe in ghosts?$"

LavenderTown_Text_SoThereAreBelievers::
	.string "Really?\n"
	.string "So there are believers…$"

LavenderTown_Text_JustImaginingWhiteHand::
	.string "Hahaha, I guess not.\p"
	.string "That white hand on your shoulder…\n"
	.string "I'm just imagining it.$"

LavenderTown_Text_TownKnownAsMonGraveSite::
	.string "This town is known as the grave\n"
	.string "site of POKéMON.\p"
	.string "Memorial services are held in\n"
	.string "POKéMON TOWER.$"

LavenderTown_Text_GhostsAppearedInTower::
	.string "Ghosts appeared in POKéMON TOWER.\p"
	.string "I think they're the spirits of\n"
	.string "POKéMON that the ROCKETS killed.$"

LavenderTown_Text_TownSign::
	.string "LAVENDER TOWN\n"
	.string "The Noble Purple Town$"

LavenderTown_Text_SilphScopeNotice::
	.string "New SILPH SCOPE!\n"
	.string "Make the Invisible Plain to See!\p"
	.string "SILPH CO.$"

LavenderTown_Text_VolunteerPokemonHouse::
	.string "LAVENDER VOLUNTEER\n"
	.string "POKéMON HOUSE$"

LavenderTown_Text_PokemonTowerSign::
	.string "POKéMON TOWER\n"
	.string "Becalm the Spirits of POKéMON$"



LavenderTown_EventScript_PutrLeader::
	lock
	faceplayer
	msgbox LavenderTown_Text_PutrLeader
	fadescreen FADE_TO_BLACK
	setwildbattle SPECIES_DRAGONITE, 42
	dowildbattle
	fadescreen FADE_FROM_BLACK
	setflag FLAG_PUTR_LAVENDER_LEADER
	setflag FLAG_PUTR_LAVENDER_BATTLE
	msgbox LavenderTown_Text_PutrLeaderAfterBattle
	release
	end

LavenderTown_EventScript_PutrCultEntrance::
	lock
	faceplayer
	goto_if_unset FLAG_PUTR_LAVENDER_BATTLE, LavenderTown_EventScript_PutrCultEntranceLocked
	msgbox LavenderTown_Text_CultEntranceOpen
	closemessage
	warp MAP_LAVENDER_TOWN_CULT_HQ, 3, 6
	waitstate
	end

LavenderTown_EventScript_PutrCultEntranceLocked::
	msgbox LavenderTown_Text_CultEntranceLocked
	release
	end

LavenderTown_Text_PutrLeader::
	.string "You came farther than we expected.\p"
	.string "The seal beneath this town is older\n"
	.string "than your history books claim.\p"
	.string "And something has noticed you.\p"
	.string "If you want the truth,\n"
	.string "you will have to survive its shadow.$"

LavenderTown_Text_PutrLeaderAfterBattle::
	.string "You survived...\p"
	.string "That Dragonite was only a warning.\p"
	.string "The thing beneath Kanto is awake enough\n"
	.string "to notice your presence now.\p"
	.string "Find what my people buried below this town.\p"
	.string "Then ask yourself why your parents\n"
	.string "were so afraid of the answer.$"

LavenderTown_Text_CultEntranceOpen::
	.string "The markings are no longer hidden.\p"
	.string "A cold draft rises from below...$"

LavenderTown_Text_CultEntranceLocked::
	.string "There is nothing unusual here.\p"
	.string "But the markings feel strangely old.$"
