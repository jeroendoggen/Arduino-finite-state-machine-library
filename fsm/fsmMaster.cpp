// fsmMaster.cpp - Arduino library for finite state machines
// Copyright 2014 Jeroen Doggen (jeroendoggen@gmail.com)

#include <Arduino.h>

#include <fsmMaster.h>
#include <defines.h>

/// Constructor
fsmMaster::fsmMaster()
{
}

/// Constructor
fsmMaster::fsmMaster(uint8_t name)
{
  _state = START_STATE;
  _setMachineName(name);
}

/// Constructor
fsmMaster::fsmMaster(uint8_t name, class fsm & slave)
{
  _state = START_STATE;
  _setMachineName(name);
  _slave = & slave;
}

/// runStateMachine: run the state machine
void fsmMaster::run()
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
      _slave->run();
      _slave->setState(IDLE_STATE);
      break;
  }
}