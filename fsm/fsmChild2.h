// fsmChild2.h - Arduino library for finite state machines
// Copyright 2014 Jeroen Doggen (jeroendoggen@gmail.com)

#ifndef fsmChild2_h
#define fsmChild2_h
#include <Arduino.h>

#include <fsm.h>
#define __cxa_pure_virtual()

//abstract class fsmChild1
class fsmChild2 : public fsm
{
  public:
    fsmChild2();
    fsmChild2(uint8_t name);

    void run();
/*
  private:
    uint8_t _state;
    uint8_t _machineName;*/
};
#endif
