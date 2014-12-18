#include <fsmMaster.h>

fsmMaster machine1(1);

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  machine1.run();
  delay(500);                                     //make it readable
}
