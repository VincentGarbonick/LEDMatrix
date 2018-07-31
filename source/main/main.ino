#include "function.h"
#include "portmap.h"

void setup() {

portInit();

}

void loop() {

digitalWrite(0, HIGH);
digitalWrite(A2,LOW);
delay(500);
digitalWrite(A2,HIGH);
delay(500);

}
