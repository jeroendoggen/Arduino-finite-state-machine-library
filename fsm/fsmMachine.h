// fsm.h - Arduino library for finite state machines
// Copyright 2014 Jeroen Doggen (jeroendoggen@gmail.com)

#ifndef fsm_h
#define fsm_h
#include <Arduino.h>


#define __cxa_pure_virtual()

//abstract class fsm
class fsm
{
  public:
    void setState(uint8_t state);
    uint8_t getState();
    uint8_t getMachineName();
    virtual void run();

  protected:
    void _setMachineName(uint8_t name);
    void printInfo();
    uint8_t _state;
    uint8_t _machineName; 
};
#endif
