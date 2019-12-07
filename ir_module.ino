void setup() {
  
 Serial.begin(9600);
 pinMode(8,INPUT);
 
}

void loop() {
  int detect = digitalRead(8); // the status of object is store in detect variable
  if(detect==LOW)
  {
   Serial.println(" obstacle on the way"); 
  
    }

   else
   {
    Serial.println("All are clear");
    }
  
  }
