#ifndef _ROBOT_H
#define _ROBOT_H

#include "states.h"
#include <stdint.h>

#define ENCODER_STEPS 20	//TO BEST TESTED
#define ENCODER_360_TURN 55 //TO BE TESTED
#define ENCODER_180_TURN ENCODER_360_TURN/2
#define ENCODER_90_TURN ENCODER_180_TURN/2

#define CONVERT_TO_CELL(diff)

typedef enum
{
	NORTH,
	SOUTH,
	EAST,
	WEST,
	NUM_ORIENTATIONS
}orientation_t;

typedef enum
{
	ENCODER_L,
	ENCODER_R,
	NUM_ENCODERS
}encoder_t;

typedef struct
{
	states_t current_state;
	states_t next_state;
	state_method_t state_method;
	uint8_t x_location;
	uint8_t y_location;
	orientation_t orientation;
}robot_t;

void robot_run(robot_t *robot);

#endif
