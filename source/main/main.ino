#include "function.h"
#include "portmap.h"

void setup() {

portInit();

planeInit();


}

void loop() {

for(int i = 0; i <= 6; i++){
	
	arcade();

}

for (int i = 0; i <= 3; i++){
	
	omniSweep();
	PlaneClear();

}

planeInit();


}
