#include <fsmMaster.h>
#include <fsmSlave.h>

// TODO: write an example with a 'master FSM' that is controlling three slave FSMs here



fsmSlave slave1(1);
// fsmSlave slave2(2);
// fsmSlave slave3(3);

fsmMaster master(0, slave1);

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  master.run();
  delay(1000);
}



