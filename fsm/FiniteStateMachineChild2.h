// FiniteStateMachineChild2.h - Arduino library for finite state machines
// Copyright 2014 Jeroen Doggen (jeroendoggen@gmail.com)

#ifndef FiniteStateMachineChild2_h
#define FiniteStateMachineChild2_h
#include <Arduino.h>

#include <FiniteStateMachine.h>
#define __cxa_pure_virtual()

//abstract class FiniteStateMachineChild1
class FiniteStateMachineChild2 : public FiniteStateMachine
{
  public:
    FiniteStateMachineChild2();
    FiniteStateMachineChild2(uint8_t name);

    void runStateMachine();
/*
  private:
    uint8_t _state;
    uint8_t _machineName;*/
};
#endif
