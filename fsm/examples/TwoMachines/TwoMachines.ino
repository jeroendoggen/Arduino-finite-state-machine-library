#include <FiniteStateMachine.h>

FiniteStateMachine stateMachine1(1);
FiniteStateMachine stateMachine2(2);

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  stateMachine1.runStateMachine();
  if(stateMachine1.getState() == 2)
  {
    stateMachine1.runStateMachine();
    stateMachine2.runStateMachine();
  }
  delay(500);
}
