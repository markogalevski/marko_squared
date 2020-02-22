#ifndef _ROBOT_H
#define _ROBOT_H

#include "state_machine.h"
#include <stdint.h>
typedef enum
{
	NORTH,
	SOUTH,
	EAST,
	WEST,
	NUM_ORIENTATIONS
}orientation_t;

typedef struct
{
	states_t current_state;
	state_method_t state_method;
	uint8_t x_location;
	uint8_t y_location;
	orientation_t orientation;
}robot_t;

void robot_run(robot_t *robot);

#endif
