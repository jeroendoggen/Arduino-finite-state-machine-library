// FiniteStateMachine.cpp - Arduino library for finite state machines
// Copyright 2014 Jeroen Doggen (jeroendoggen@gmail.com)

#include <Arduino.h>

#include <FiniteStateMachine.h>
#include <defines.h>

/// Constructor
// FiniteStateMachine::FiniteStateMachine()
// {
//   _state = START_STATE;
// }
// 


/// runStateMachine: run the state machine
// void FiniteStateMachine::runStateMachine()
// {
//   switch(getState() ) {
//     case START_STATE: // The first state in the FSM
//       printInfo();
//       setState(SELFCHECK_STATE);
//       break;
// 
//     case SELFCHECK_STATE:
//       printInfo();
//       setState(IDLE_STATE);
//       break;
// 
//     case IDLE_STATE:
//       printInfo();
//       setState(STOPPED_STATE);
//       break;
// 
//     case STOPPED_STATE:
//       printInfo();
//       setState(BATTERY_LOW_STATE);
//       break;
// 
//     case BATTERY_LOW_STATE:
//       printInfo();
//       setState(ERROR_STATE);
//       break;
// 
//     case ERROR_STATE:
//       printInfo();
//       setState(IDLE_STATE);
//       break;
//   }
// }


/// setState: set FSM state
void FiniteStateMachine::setState(uint8_t state)
{
  _state = state;
}

/// getState: get FSM state
uint8_t FiniteStateMachine::getState()
{
  return (_state);
}

/// getMachineName: get FSM machine name
uint8_t FiniteStateMachine::getMachineName()
{
  return (_machineName);
}

/// _setMachineName: set FSM machine name
void FiniteStateMachine::_setMachineName(uint8_t name)
{
  _machineName = name;
}

/// printInfo: print some debugging info
void FiniteStateMachine::printInfo()
{
  Serial.print("FSM: ");
  Serial.print(getMachineName());
  Serial.print(" --- state: ");
  Serial.println(getState());
}

