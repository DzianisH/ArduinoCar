#include <MotorDriver.h>


const int myDelay = 1500;
MotorDriver m;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("hello world");

  m.motor(1,FORWARD,255);
  delay(myDelay);
  m.motor(1,FORWARD,125);
  delay(myDelay);
  m.motor(1,RELEASE,0);
  delay(myDelay);
  m.motor(1,BACKWARD,125); 
  delay(myDelay);
  m.motor(1,BACKWARD,255); 
  delay(myDelay);
  m.motor(1,BACKWARD,125); 
  delay(myDelay);
  m.motor(1,RELEASE,0);
  delay(myDelay);
}
