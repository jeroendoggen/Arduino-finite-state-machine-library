// fsm.cpp - Arduino library for finite state machines
// Copyright 2014 Jeroen Doggen (jeroendoggen@gmail.com)

#include <Arduino.h>

#include <fsm.h>
#include <defines.h>

/// setState: set FSM state
void fsm::setState(uint8_t state)
{
  _state = state;
}

/// getState: get FSM state
uint8_t fsm::getState()
{
  return (_state);
}

/// getMachineName: get FSM machine name
uint8_t fsm::getMachineName()
{
  return (_machineName);
}

/// _setMachineName: set FSM machine name
void fsm::_setMachineName(uint8_t name)
{
  _machineName = name;
}

/// printInfo: print some debugging info
void fsm::printInfo()
{
  Serial.print("FSM: ");
  Serial.print(getMachineName());
  Serial.print(" --- state: ");
  Serial.println(getState());
}

