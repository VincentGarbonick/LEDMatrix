#define fastblink 30
#define medblink 200

void testFlash(){
  
	digitalWrite(3, HIGH);
	digitalWrite(A2,LOW);
	delay(500);
	digitalWrite(A2,HIGH);

}

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
	//make the columns come and go in 3's
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