// fsmChild1.h - Arduino library for finite state machines
// Copyright 2014 Jeroen Doggen (jeroendoggen@gmail.com)

#ifndef fsmChild1_h
#define fsmChild1_h
#include <Arduino.h>

#include <fsm.h>
#define __cxa_pure_virtual()

//abstract class fsmChild1
class fsmChild1 : public fsm
{
  public:
    fsmChild1();
    fsmChild1(uint8_t name);

    void run();
};
#endif
