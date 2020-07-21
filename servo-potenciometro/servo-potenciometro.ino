#include <Servo.h>
const int analogPort = 0;
const int digitalPort = 7;

Servo servo;

void setup(){
  servo.attach(2);
  pinMode(digitalPort, OUTPUT); 
  
  Serial.begin(9600);
}

void loop(){
  int val = analogRead(analogPort);
  int angle = val / 5.7;
  int bright = val/4;

  servo.write(angle);
  analogWrite(digitalPort, bright); 


  Serial.println(bright);
  // Serial.println(angle);
  // delay(100);
}
