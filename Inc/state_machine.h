#ifndef _STATE_MACHINE_H
#define _STATE_MACHINE_H

typedef (*state_method_t)(states_t);

typedef enum
{
	STATE_MAPPING_FORWARD,
	STATE_MAPPING_MEASURE,
	STATE_MAPPING_DEAD_RECKONING,
	STATE_TURNING_LEFT,
	STATE_TURNING_RIGHT,
	STATE_TURN_AROUND,
	STATE_SOLVING,
	STATE_RACING,
	NUM_STATES
}states_t;

void sm_state_transition(states_t current_state);



#endif
