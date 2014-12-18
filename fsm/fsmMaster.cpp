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

/// Constructor: 1 slave
fsmMaster::fsmMaster(uint8_t name, class fsm & slave1)
{
  _state = START_STATE;
  _setMachineName(name);
  _slave1 = & slave1;
  _slaveCounter = 1;
}

/// Constructor: 2 slaves
fsmMaster::fsmMaster(uint8_t name, class fsm & slave1, class fsm & slave2)
{
  _state = START_STATE;
  _setMachineName(name);
  _slave1 = & slave1;
  _slave2 = & slave2;
  _slaveCounter = 2;
}

/// Constructor: 3 slaves
fsmMaster::fsmMaster(uint8_t name, class fsm & slave1, class fsm & slave2, class fsm & slave3)
{
  _state = START_STATE;
  _setMachineName(name);
  _slave1 = & slave1;
  _slave2 = & slave2;
  _slave3 = & slave3;
  _slaveCounter = 3;
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
      if(_slaveCounter >= 1){
        _slave1->run();
        _slave1->setState(SELFCHECK_STATE);
      }
      if(_slaveCounter >= 2){
        _slave2->run();
        _slave2->setState(IDLE_STATE);
      }
      if(_slaveCounter >= 3){
        _slave3->run();
        _slave3->setState(STOPPED_STATE);
      }
      break;
  }
}