#include <FiniteStateMachine.h>

FiniteStateMachine stateMachine1(1);
FiniteStateMachine stateMachine2(2);
FiniteStateMachine stateMachine3(3);

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  stateMachine1.runStateMachine();

  stateMachine2.runStateMachine();
  stateMachine2.runStateMachine();

  stateMachine3.runStateMachine();
  stateMachine3.runStateMachine();
  stateMachine3.runStateMachine();
  delay(500);
}
