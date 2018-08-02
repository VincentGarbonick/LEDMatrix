#include "function.h"
#include "portmap.h"

void setup() {

portInit();

digitalWrite(A0, LOW);
digitalWrite(A1, LOW);
digitalWrite(A2, LOW);


}

void loop() {

arcade();

}
