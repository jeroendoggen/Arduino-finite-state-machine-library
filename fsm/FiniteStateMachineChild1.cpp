// FiniteStateMachineChild1.cpp - Arduino library for finite state machines
// Copyright 2014 Jeroen Doggen (jeroendoggen@gmail.com)

#include <Arduino.h>

#include <FiniteStateMachineChild1.h>
#include <defines.h>

/// Constructor
FiniteStateMachineChild1::FiniteStateMachineChild1()
{
}

/// Constructor
FiniteStateMachineChild1::FiniteStateMachineChild1(uint8_t name)
{
  _state = START_STATE;
  _setMachineName(name);
}

/// runStateMachine: run the state machine
void FiniteStateMachineChild1::runStateMachine()
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