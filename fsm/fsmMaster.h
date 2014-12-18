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
    fsmMaster(uint8_t name, class fsm & slave);
//     fsmMaster(uint8_t name, class fsm & slave, class fsm & slave);
//     fsmMaster(uint8_t name, class fsm & slave, class fsm & slave, class fsm & slave);
    void run();

  private:
    fsm* _slave;
};
#endif
