#include <dht.h>
dht DHT;
#define DHT11_PIN 7
const int AOUTpin=0;
const int DOUTpin=8;
const int ledPin=13;

int limit;
int value;

void setup(){
Serial.begin(9600);
pinMode(DOUTpin, INPUT);
pinMode(ledPin, OUTPUT);
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  
  Serial.print(DHT.temperature);
  Serial.print("|");
  Serial.print(DHT.humidity);
  
  value= analogRead(AOUTpin);
  limit= digitalRead(DOUTpin);
 // Serial.print("CO value: ");
   Serial.print("|");
  Serial.println(value);
  //Serial.print("Limit: ");
  //Serial.print(limit);
  delay(1000);
  //if (limit == HIGH){
  //digitalWrite(ledPin, HIGH); 
 // }
  //else{
  //digitalWrite(ledPin, LOW);
 // }
}

