#include <MotorDriver.h>


const int myDelay = 1500;
MotorDriver m;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("hello world");

  for (int i = 1; i <= 4; ++i){
    m.motor(i, FORWARD, 120);
  }
  
  delay(myDelay);

  for (int i = 1; i <= 4; ++i){
    m.motor(i, BACKWARD, 120);
  }

  delay(myDelay);

  
}
