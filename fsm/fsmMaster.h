// fsmMaster.h - Arduino library for finite state machines
// Copyright 2014 Jeroen Doggen (jeroendoggen@gmail.com)

#ifndef fsmMaster_h
#define fsmMaster_h
#include <Arduino.h>

#include <fsm.h>
#define __cxa_pure_virtual()

//abstract class fsmMaster
class fsmMaster : public fsm
{
  public:
    fsmMaster();
    fsmMaster(uint8_t name);
    fsmMaster(uint8_t name, class fsm & slave1);
    fsmMaster(uint8_t name, class fsm & slave1, class fsm & slave2);
    fsmMaster(uint8_t name, class fsm & slave1, class fsm & slave2, class fsm & slave3);
    void run();

  private:
    uint8_t _slaveCounter;
    fsm* _slave1;
    fsm* _slave2;
    fsm* _slave3;
};
#endif
