int trigPin = 11;    // Trigger
int echoPin = 12;    // Echo
long duration, cm;
 
void setup() {
  //Serial Port begin
  Serial.begin (9600);
  //Define inputs and outputs
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
 
void loop() {
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
 
  duration = pulseIn(echoPin, HIGH);
 
  // Convert the time into a distance
  //distance = (traveltime/2) x speed of sound
  cm = (duration*0.034)/2;     //  multiply by  0.0343 cm/uS
  Serial.println("distance");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  
  delay(250);
}
