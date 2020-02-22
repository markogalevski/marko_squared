#include "state_machine.h"
#include "robot.h"
#include "main.h"

extern TIM_HandleTypeDef htim2;

static void sm_mapping_forward(robot_t *robot);

static void sm_turning_left(robot_t *robot);

static void sm_turning_right(robot_t *robot);

static void sm_turn_around(robot_t *robot);

static void sm_solving(robot_t *robot);

static void sm_stop(robot_t *robot);

static void sm_racing(robot_t *robot);

static state_method_t state_methods[NUM_STATES] =
{
	&sm_mapping_forward, &sm_turning_left, &sm_turning_right,
	&sm_turn_around, &sm_solving, &sm_stop, &sm_racing
};


sm_state_transition(robot_t robot)
{

}

void robot_run(robot_t *robot)
{
	(*state_methods[robot->current_state])(robot);
}

static void sm_mapping_forward(robot_t *robot)
{
	HAL_GPIO_WritePin(RIGHT_MOTOR_REVERSE_GPIO_Port, RIGHT_MOTOR_REVERSE_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LEFT_MOTOR_REVERSE_GPIO_Port, LEFT_MOTOR_REVERSE_Pin, GPIO_PIN_RESET);

	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_1);
}

static void sm_turning_left(robot_t *robot)
{

}

static void sm_turning_right(robot_t *robot)
{

}

static void sm_turn_around(robot_t *robot)
{

}

static void sm_solving(robot_t *robot)
{

}

static void sm_stop(robot_t *robot)
{

}

static void sm_racing(robot_t *robot)
{

}

static void robot_orientation_cw(robot_t *robot)
{
	robot->orientation = (robot->orientation++)%(NUM_ORIENTATIONS);
}

static void robot_orientation_ccw(robot_t *robot)
{
	if (--robot->orientation < 0)
		{
		robot->orientation = WEST;
		}
}
