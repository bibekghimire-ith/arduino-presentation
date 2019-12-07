//Libraries
#include <DHT.h>

//constants
#define DHTPIN 2//the arduino pin in which we are connetced
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);//initialize DHT sensor for normal 16mhz Arduino


//variables
int chk; 
float hum; //store humidity value 
float temp; //stores temperatur value

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
  

}

void loop() {
 //read data and store it to variable hum and temp
 hum=dht.readHumidity();
 temp=dht.readTemperature();
//print hum and temp on serial monitor
Serial.println("humidity");
Serial.print(hum);
Serial.println(" % ");
Serial.println("temperature");
Serial.println(temp);


}
