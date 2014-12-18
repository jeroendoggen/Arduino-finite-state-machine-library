// FiniteStateMachineChild1.h - Arduino library for finite state machines
// Copyright 2014 Jeroen Doggen (jeroendoggen@gmail.com)

#ifndef FiniteStateMachineChild1_h
#define FiniteStateMachineChild1_h
#include <Arduino.h>

#include <FiniteStateMachine.h>
#define __cxa_pure_virtual()

//abstract class FiniteStateMachineChild1
class FiniteStateMachineChild1 : public FiniteStateMachine
{
  public:
    FiniteStateMachineChild1();
    FiniteStateMachineChild1(uint8_t name);

    void runStateMachine();
/*
  private:
    uint8_t _state;
    uint8_t _machineName;*/
};
#endif
