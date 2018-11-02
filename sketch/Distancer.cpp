#include "Distancer.h"

Distancer::Distancer(int trigPin, int echoPin, int maxDistanceCm) {
  this->maxDistanceCm = maxDistanceCm;
  this->trigPin = trigPin;
  this->echoPin = echoPin;
  sonar = new NewPing(trigPin, echoPin, maxDistanceCm);
}

int Distancer::ping_cm() {
  return sonar->ping_cm();
}

int Distancer::get_max_distance_cm() {
  return maxDistanceCm;
}
