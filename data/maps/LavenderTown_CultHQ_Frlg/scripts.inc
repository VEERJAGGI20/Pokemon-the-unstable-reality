LavenderTown_CultHQ_Frlg_MapScripts::
	.byte 0

LavenderTown_CultHQ_EventScript_Grunt::
	lock
	faceplayer
	msgbox LavenderTown_CultHQ_Text_Grunt
	release
	end

LavenderTown_CultHQ_EventScript_Artifact::
	lock
	faceplayer
	msgbox LavenderTown_CultHQ_Text_Artifact
	setflag FLAG_PUTR_LAVENDER_ARTIFACT
	release
	end

LavenderTown_CultHQ_Text_Grunt::
	.string "We were told to guard the chamber.\p"
	.string "Not the chamber itself...\n"
	.string "the memory sealed inside it.$"

LavenderTown_CultHQ_Text_Artifact::
	.string "An ancient stone bears three figures.\p"
	.string "One creates.\n"
	.string "One balances.\n"
	.string "One destroys.\p"
	.string "The third has been scratched away.$"
