#include <MotorDriver.h>
#include "Vehicle.h"


const int myDelay = 1500;
MotorDriver motorDriver;
Vehicle vehicle = Vehicle(motorDriver);


void setup() {
}

void loop() {
  vehicle.move_forward();
  delay(myDelay);
  vehicle.spin_right();
  delay(myDelay / 10);
}
