TrainerHill_Elevator_MapScripts::
# 2 "data/maps/TrainerHill_Elevator/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_Elevator_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TrainerHill_Elevator_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/TrainerHill_Elevator/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, TrainerHill_Elevator_EventScript_EnterElevator
	.2byte 0


# 7 "data/maps/TrainerHill_Elevator/scripts.pory"

# 8 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_Attendant::
# 9 "data/maps/TrainerHill_Elevator/scripts.pory"
	end
# 10 "data/maps/TrainerHill_Elevator/scripts.pory"

# 11 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_ExitToRoof::
# 12 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Elevator_Movement_PlayerExitElevatorToRoof
# 13 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 14 "data/maps/TrainerHill_Elevator/scripts.pory"
	releaseall
# 15 "data/maps/TrainerHill_Elevator/scripts.pory"
	warp MAP_TRAINER_HILL_ROOF, 15, 5
# 16 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitstate
# 17 "data/maps/TrainerHill_Elevator/scripts.pory"
	end
# 18 "data/maps/TrainerHill_Elevator/scripts.pory"

# 19 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_EnterElevator::
# 20 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Elevator_Movement_PlayerApproachAttendant
# 21 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 22 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_TRAINER_HILL_ELEVATOR_ATTENDANT, TrainerHill_Elevator_Movement_AttendantFacePlayer
# 23 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 24 "data/maps/TrainerHill_Elevator/scripts.pory"
	lockall
# 25 "data/maps/TrainerHill_Elevator/scripts.pory"
	msgbox TrainerHill_Elevator_Text_ReturnToReception, MSGBOX_YESNO
# 26 "data/maps/TrainerHill_Elevator/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TrainerHill_Elevator_EventScript_ExitToRoof
# 27 "data/maps/TrainerHill_Elevator/scripts.pory"
	releaseall
# 28 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_TRAINER_HILL_ELEVATOR_ATTENDANT, TrainerHill_Elevator_Movement_AttendantFaceDown
# 29 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 30 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Elevator_Movement_PlayerMoveToCenterOfElevator
# 31 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 32 "data/maps/TrainerHill_Elevator/scripts.pory"
	call TrainerHill_Elevator_EventScript_MoveElevator
# 33 "data/maps/TrainerHill_Elevator/scripts.pory"
	delay 25
# 34 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Elevator_Movement_PlayerExitElevator
# 35 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 36 "data/maps/TrainerHill_Elevator/scripts.pory"
	warp MAP_TRAINER_HILL_ENTRANCE, 17, 8
# 37 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitstate
# 38 "data/maps/TrainerHill_Elevator/scripts.pory"
	end
# 39 "data/maps/TrainerHill_Elevator/scripts.pory"

# 40 "data/maps/TrainerHill_Elevator/scripts.pory"
@ Unused
# 41 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_ExitFloorSelect::
# 42 "data/maps/TrainerHill_Elevator/scripts.pory"
	goto TrainerHill_Elevator_EventScript_CloseFloorSelect
# 43 "data/maps/TrainerHill_Elevator/scripts.pory"
	end
# 44 "data/maps/TrainerHill_Elevator/scripts.pory"

# 45 "data/maps/TrainerHill_Elevator/scripts.pory"
@ Functionally unused
# 46 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_CloseFloorSelect::
# 47 "data/maps/TrainerHill_Elevator/scripts.pory"
	special CloseDeptStoreElevatorWindow
# 48 "data/maps/TrainerHill_Elevator/scripts.pory"
	releaseall
# 49 "data/maps/TrainerHill_Elevator/scripts.pory"
	end
# 50 "data/maps/TrainerHill_Elevator/scripts.pory"

# 51 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_MoveElevator::
# 52 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitse
# 53 "data/maps/TrainerHill_Elevator/scripts.pory"
	special MoveElevator
# 54 "data/maps/TrainerHill_Elevator/scripts.pory"
	return
# 55 "data/maps/TrainerHill_Elevator/scripts.pory"

# 56 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_PlayerMoveToCenterOfElevator:
# 57 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_up
# 58 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_up
# 59 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_right
# 60 "data/maps/TrainerHill_Elevator/scripts.pory"
	face_down
# 61 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end
# 62 "data/maps/TrainerHill_Elevator/scripts.pory"

# 63 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_PlayerApproachAttendant:
# 64 "data/maps/TrainerHill_Elevator/scripts.pory"
	delay_16
# 65 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_left
# 66 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end
# 67 "data/maps/TrainerHill_Elevator/scripts.pory"

# 68 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_PlayerExitElevator:
# 69 "data/maps/TrainerHill_Elevator/scripts.pory"
	delay_16
# 70 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_down
# 71 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_down
# 72 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end
# 73 "data/maps/TrainerHill_Elevator/scripts.pory"

# 74 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_PlayerExitElevatorToRoof:
# 75 "data/maps/TrainerHill_Elevator/scripts.pory"
	face_down
# 76 "data/maps/TrainerHill_Elevator/scripts.pory"
	delay_16
# 77 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end
# 78 "data/maps/TrainerHill_Elevator/scripts.pory"

# 79 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_AttendantFacePlayer:
# 80 "data/maps/TrainerHill_Elevator/scripts.pory"
	face_right
# 81 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end
# 82 "data/maps/TrainerHill_Elevator/scripts.pory"

# 83 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_AttendantFaceDown:
# 84 "data/maps/TrainerHill_Elevator/scripts.pory"
	face_down
# 85 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end
