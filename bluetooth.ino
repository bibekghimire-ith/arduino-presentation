void setup() 
{
  
 pinMode(13,OUTPUT);
 
 Serial.begin(9600);
 
}

void loop() 
{
  
  if(Serial.available()>0)
  {
    int data = Serial.read();
    
    Serial.println(data);
    
    switch(data)
    
    {
      case 49:   //ascii value of 1
      
    digitalWrite(13,HIGH);
    
    break;
    

    case 50:   //ascii value of 2
    
    digitalWrite(13,LOW);
    
    break;
    
    }
           }
                 }
