// fsmChild2.cpp - Arduino library for finite state machines
// Copyright 2014 Jeroen Doggen (jeroendoggen@gmail.com)

#include <Arduino.h>

#include <fsmChild2.h>
#include <defines.h>

/// Constructor
fsmChild2::fsmChild2()
{
}

/// Constructor
fsmChild2::fsmChild2(uint8_t name)
{
  _state = START_STATE;
  _setMachineName(name);
}

/// runStateMachine: run the state machine
void fsmChild2::run()
{
  switch(getState() ) {
    case START_STATE: // The first state in the FSM
      printInfo();
      setState(SELFCHECK_STATE);
      break;

    case SELFCHECK_STATE:
      printInfo();
      break;
  }
}