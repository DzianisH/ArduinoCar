#include "Vehicle.h"
#include "Distancer.h"

const int myDelay = 75;
Vehicle *vehicle;
Distancer *distancer;

void setup() {
  Serial.begin(9600);
  vehicle = new Vehicle(180);
  distancer = new Distancer(24, 22);
}

void loop() {
  int dist_cm = distancer->ping_cm();
  Serial.print(dist_cm);
  Serial.println("c!");
  if (dist_cm < 25  ) {
    vehicle->stop();
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
    vehicle->move_forward();
  }
  delay(myDelay);
}
