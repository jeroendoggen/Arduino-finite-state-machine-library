// fsmSlave.h - Arduino library for finite state machines
// Copyright 2014 Jeroen Doggen (jeroendoggen@gmail.com)

#ifndef fsmSlave_h
#define fsmSlave_h
#include <Arduino.h>

#include <fsm.h>
#define __cxa_pure_virtual()

//abstract class fsmSlave
class fsmSlave : public fsm
{
  public:
    fsmSlave();
    fsmSlave(uint8_t name);

    void run();
};
#endif
