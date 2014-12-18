// FiniteStateMachine.h - Arduino library for finite state machines
// Copyright 2014 Jeroen Doggen (jeroendoggen@gmail.com)

#ifndef FiniteStateMachine_h
#define FiniteStateMachine_h
#include <Arduino.h>


#define __cxa_pure_virtual()

//abstract class FiniteStateMachine
class FiniteStateMachine
{
  public:
//     FiniteStateMachine();

    void setState(uint8_t state);
    uint8_t getState();

    uint8_t getMachineName();
  
  private:
    virtual void runStateMachine();

  protected:
    void _setMachineName(uint8_t name);
    void printInfo();
    uint8_t _state;
    uint8_t _machineName; 
};
#endif
