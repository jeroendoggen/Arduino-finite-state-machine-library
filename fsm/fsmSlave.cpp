// fsmSlave.cpp - Arduino library for finite state machines
// Copyright 2014 Jeroen Doggen (jeroendoggen@gmail.com)

#include <Arduino.h>

#include <fsmSlave.h>
#include <defines.h>

/// Constructor
fsmSlave::fsmSlave()
{
}

/// Constructor
fsmSlave::fsmSlave(uint8_t name)
{
  _state = START_STATE;
  _setMachineName(name);
}

/// runStateMachine: run the state machine
void fsmSlave::run()
{
  switch(getState() ) {
    case START_STATE: // The first state in the FSM
      printInfo();
      break;

    case SELFCHECK_STATE:
      printInfo();
      break;

    case IDLE_STATE:
      printInfo();
      break;

    case STOPPED_STATE:
      printInfo();
      break;

    case BATTERY_LOW_STATE:
      printInfo();
      break;

    case ERROR_STATE:
      printInfo();
      break;
  }
}