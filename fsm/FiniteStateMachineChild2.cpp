// FiniteStateMachineChild2.cpp - Arduino library for finite state machines
// Copyright 2014 Jeroen Doggen (jeroendoggen@gmail.com)

#include <Arduino.h>

#include <FiniteStateMachineChild2.h>
#include <defines.h>

/// Constructor
FiniteStateMachineChild2::FiniteStateMachineChild2()
{
}

/// Constructor
FiniteStateMachineChild2::FiniteStateMachineChild2(uint8_t name)
{
  _state = START_STATE;
  _setMachineName(name);
}

/// runStateMachine: run the state machine
void FiniteStateMachineChild2::runStateMachine()
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