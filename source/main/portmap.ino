//function to initalize all of the ports
void portInit(){

//set 0-10 as outputs in order to route each positive column to
  
  for(int i = 0; i <= 10;i++){

      pinMode(i,OUTPUT);
      
    }
    
//set A0, A1, A2 as outputs and pull them to high- these are for your ground plane

pinMode(A0,OUTPUT);
pinMode(A1, OUTPUT);
pinMode(A2, OUTPUT);

digitalWrite(A0, HIGH);
digitalWrite(A1, HIGH);
digitalWrite(A2, HIGH);

  
}

