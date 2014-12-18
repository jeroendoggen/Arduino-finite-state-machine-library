#include <fsmMaster.h>

fsmMaster machine1(1);
fsmMaster machine2(2);

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  machine1.run();
  if(machine1.getState() == 2)
  {
    machine2.run();
  }
  delay(1000);
}