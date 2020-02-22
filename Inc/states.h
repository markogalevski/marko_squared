#ifndef _STATES_H
#define _STATES_H


typedef enum
{
	STATE_FORWARD,
	STATE_TURNING_LEFT,
	STATE_TURNING_RIGHT,
	STATE_TURN_AROUND,
	STATE_SOLVING,
	STATE_SOLVING_COMPLETE,
	STATE_STOP,
	STATE_RACING,
	STATE_MEASURE,
	STATE_DEAD_RECKONING,
	NUM_STATES
}states_t;

typedef void (*state_method_t)(states_t);


#endif
