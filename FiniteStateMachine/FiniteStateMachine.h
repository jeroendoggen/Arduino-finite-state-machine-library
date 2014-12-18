// FiniteStateMachine.h - Arduino library for finite state machines
// Copyright 2014 Jeroen Doggen (jeroendoggen@gmail.com)

#ifndef FiniteStateMachine_h
#define FiniteStateMachine_h

class FiniteStateMachine
{
  public:
    FiniteStateMachine();
    FiniteStateMachine(uint8_t name);

    void runStateMachine();
    void testStateMachine();

    void setState(uint8_t state);
    uint8_t getState();

    uint8_t getMachineName();

  private:
    void _setMachineName(uint8_t name);

    uint8_t _state;
    uint8_t _machineName;
    void printInfo();
};
#endif
