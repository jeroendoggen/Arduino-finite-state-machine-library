#include <FiniteStateMachine.h>
#include <FiniteStateMachineChild1.h>
#include <FiniteStateMachineChild2.h>
#include <FiniteStateMachineChild3.h>

// TODO: write an example with a 'master FSM' that is controlling two slave FSMs here

FiniteStateMachineChild1 child1(1);
FiniteStateMachineChild2 child2(2);
FiniteStateMachineChild3 child3(3);

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  child1.runStateMachine();
  child2.runStateMachine();
  child3.runStateMachine();
  delay(1000);
}



