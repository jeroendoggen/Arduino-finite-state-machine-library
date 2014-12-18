#include <FiniteStateMachine.h>

// TODO: write an example with a 'master FSM' that is controlling two slave FSMs here

FiniteStateMachine Master(1);
FiniteStateMachine Slave1(2);
FiniteStateMachine Slave2(3);

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  Master.runStateMachine();
  Slave1.runStateMachine();
  Slave1.runStateMachine();
  delay(500);
}



