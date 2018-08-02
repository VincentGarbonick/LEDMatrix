#define fastblink 30
#define medblink  200
#define arcadeSpeed 60
//60 is a good "arcade style" sweep speed......hmm

//clears the plane it is is called on
void PlaneClear(){
  
  for(int i = 2; i <= 10;i++){

     digitalWrite(i, LOW);

    }
}

//blinks each light in the matrix 
void singleSweep(){

  
  digitalWrite(A0, LOW);
  
  for(int i = 2; i <= 10; i++){

    digitalWrite(i, HIGH);
    delay(fastblink);
    digitalWrite(i, LOW);
    delay(fastblink);
  }

  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);

  for(int i = 2; i <=10; i++){
    
    digitalWrite(i, HIGH);
    delay(fastblink);
    digitalWrite(i, LOW);
    delay(fastblink);
    
    
  }

  digitalWrite(A1, HIGH);
  digitalWrite(A2, LOW);

  for(int i = 2; i <=10; i++){
    
    digitalWrite(i, HIGH);
    delay(fastblink);
    digitalWrite(i, LOW);
    delay(fastblink);
    
    
  }
  
  digitalWrite(A2, HIGH);
  
  
}

void planeSweep(){

	digitalWrite(A0, LOW);
  
  for(int i = 2; i <= 10; i++){

    digitalWrite(i, HIGH);

    }

    delay(medblink);
  
  for(int i = 2; i <= 10; i++){

    digitalWrite(i, LOW);

    }

  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);

  for(int i = 2; i <= 10; i++){

   digitalWrite(i, HIGH);

   }

   delay(medblink);
  
  for(int i = 2; i <= 10; i++){

    digitalWrite(i, LOW);

    }

  digitalWrite(A1, HIGH);
  digitalWrite(A2, LOW);

  for(int i = 2; i <= 10; i++){

    digitalWrite(i, HIGH);

    }

    delay(medblink);
  
  for(int i = 2; i <= 10; i++){

    digitalWrite(i, LOW);

    }
  
  digitalWrite(A2, HIGH);

}

void triSweep(){

	digitalWrite(A0, LOW);
	
	digitalWrite(A0, LOW);
  
  for(int i = 2; i <= 4; i++){

    digitalWrite(i, HIGH);

    }

	delay(medblink);
	PlaneClear();
	delay(medblink);
  
  for(int i = 5; i <= 7; i++){

    digitalWrite(i, HIGH);

    }

	delay(medblink);
	PlaneClear();
	delay(medblink);

  for(int i = 8; i <= 10; i++){

    digitalWrite(i, HIGH);

    }

	delay(medblink);
	PlaneClear();
	delay(medblink);
	
	digitalWrite(A0, HIGH);
	digitalWrite(A1, LOW);

  for(int i = 2; i <= 4; i++){

    digitalWrite(i, HIGH);

    }

	delay(medblink);
	PlaneClear();
	delay(medblink);
  
  for(int i = 5; i <= 7; i++){

    digitalWrite(i, HIGH);

    }

	delay(medblink);
	PlaneClear();
	delay(medblink);

  for(int i = 8; i <= 10; i++){

    digitalWrite(i, HIGH);

    }

	delay(medblink);
	PlaneClear();
	delay(medblink);

	digitalWrite(A1, HIGH);
	digitalWrite(A2, LOW);

  for(int i = 2; i <= 4; i++){

    digitalWrite(i, HIGH);

    }

	delay(medblink);
	PlaneClear();
	delay(medblink);
  
  for(int i = 5; i <= 7; i++){

    digitalWrite(i, HIGH);

    }

	delay(medblink);
	PlaneClear();
	delay(medblink);

  for(int i = 8; i <= 10; i++){

    digitalWrite(i, HIGH);

    }

	delay(medblink);
	PlaneClear();
	delay(medblink);


	digitalWrite(A2, HIGH);		

}

void omniSweep(){

	digitalWrite(A0, LOW);
	digitalWrite(A1, LOW);
	digitalWrite(A2, LOW);
	
	for(int i = 2; i <= 10; i++ ){

		digitalWrite(i, HIGH);

	}

	delay(medblink);

	digitalWrite(A0, HIGH);
	digitalWrite(A1, HIGH);
	digitalWrite(A2, HIGH);

	for(int i = 2; i <= 10; i++ ){

		digitalWrite(i, LOW);

	}

	delay(medblink);

}

void omniFade(){
	//sae as omnisweep, but uses PWM to fade in and out
}

void planeShift(){
	
	digitalWrite(2,LOW);
	digitalWrite(3,HIGH);
	digitalWrite(4,LOW);
	
	digitalWrite(5,HIGH);
	digitalWrite(6,LOW);
	digitalWrite(7,HIGH);

	digitalWrite(8,LOW);
	digitalWrite(9,HIGH);
	digitalWrite(10,LOW);

}

void invPlaneShift(){

	digitalWrite(2,HIGH);
	digitalWrite(3,LOW);
	digitalWrite(4,HIGH);
	
	digitalWrite(5,LOW);
	digitalWrite(6,HIGH);
	digitalWrite(7,LOW);

	digitalWrite(8,HIGH);
	digitalWrite(9,LOW);
	digitalWrite(10,HIGH);

}

void fastArcade(){

  planeShift();
  delay(arcadeSpeed);
  PlaneClear();

  
  
  invPlaneShift();
  delay(arcadeSpeed);
  PlaneClear();

}

void arcade(){

  planeShift();
  delay(medblink);
  PlaneClear();

  
  
  invPlaneShift();
  delay(medblink);
  PlaneClear();

}