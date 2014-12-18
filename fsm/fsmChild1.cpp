// fsmChild1.cpp - Arduino library for finite state machines
// Copyright 2014 Jeroen Doggen (jeroendoggen@gmail.com)

#include <Arduino.h>

#include <fsmChild1.h>
#include <defines.h>

/// Constructor
fsmChild1::fsmChild1()
{
}

/// Constructor
fsmChild1::fsmChild1(uint8_t name)
{
  _state = START_STATE;
  _setMachineName(name);
}

/// runStateMachine: run the state machine
void fsmChild1::run()
{
  switch(getState() ) {
    case START_STATE: // The first state in the FSM
      printInfo();
      setState(SELFCHECK_STATE);
      break;

    case SELFCHECK_STATE:
      printInfo();
      setState(IDLE_STATE);
      break;

    case IDLE_STATE:
      printInfo();
      break;
  }
}