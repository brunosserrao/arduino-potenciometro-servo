#include <Servo.h>
const int analogPort = 0;

Servo servo;

void setup(){
  servo.attach(2);
  Serial.begin(9600);
}

void loop(){
  int val = analogRead(analogPort);

  int angle = val / 5.7;
  servo.write(angle);

  // Serial.println(val);
  // Serial.println(angle);

  // delay(100);
}
