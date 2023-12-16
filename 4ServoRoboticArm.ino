#include<Servo.h>

Servo myservo;
Servo myservo2;

void setup() {
  Serial.begin(9600);
  myservo.attach(5);
}

void loop() {
  myservo.write(0);
  delay(1500);
  myservo.write(180);
  delay(1500);
}
