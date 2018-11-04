#include "Vehicle.h"
#include "Distancer.h"

const int loopDelay = 75;
Vehicle *vehicle;
Distancer *distancer;

void setup() {
  Serial.begin(9600);
  vehicle = new Vehicle(200);
  distancer = new Distancer(24, 22);
}

void loop() {
  delay(loopDelay);
  int distCm= distancer->ping_cm();
  Serial.print(distCm);
  Serial.println("cm");
  if (distCm < 25) {
    vehicle->spin_right();
    delay(2000);
  } else {
    vehicle->move_forward();
  }
  delay(loopDelay);
}
