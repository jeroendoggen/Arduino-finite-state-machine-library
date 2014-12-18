#include <FiniteStateMachine.h>

FiniteStateMachine stateMachine;

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  stateMachine.runStateMachine();
  delay(500);                                     //make it readable
}
