#include <fsmMaster.h>

fsmMaster machine1(1);
fsmMaster machine2(2);
fsmMaster machine3(3);

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  machine1.run();
  machine2.run();
  machine2.run();

  machine3.run();
  machine3.run();
  machine3.run();
  delay(1000);
}