// fsmChild3.h - Arduino library for finite state machines
// Copyright 2014 Jeroen Doggen (jeroendoggen@gmail.com)

#ifndef fsmChild3_h
#define fsmChild3_h
#include <Arduino.h>

#include <fsm.h>
#define __cxa_pure_virtual()

//abstract class fsmChild1
class fsmChild3 : public fsm
{
  public:
    fsmChild3();
    fsmChild3(uint8_t name);

    void run();
/*
  private:
    uint8_t _state;
    uint8_t _machineName;*/
};
#endif
