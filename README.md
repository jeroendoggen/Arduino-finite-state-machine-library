# Arduino Library for Finite State Machines
This library should help when designing FSM-based Arduino projects.

## How it works:
 * One or more state machines are created in an Arduino sketch (.ino file)
 * Every state machine has several states: defined in "defines.h"
 * Every machine has getters and setters for the state and the machine name
 * "runStateMachine()" runs the state machine.
 * "printInfo()" prints out some info about the current state & the currenly active state machine

## Using the code:
 * Create new states in "defines.h"
 * Create your own custom state transitions in the "runStateMachine" function
 * Use the setters to control multiple state machines that are running in parallel

## Todo:
 * Add timing: calculate how long a FSM is in a given state
 * Timeouts: stay in a given state for 'x' seconds and proceed to state 'y'