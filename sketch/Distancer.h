#ifndef Distancer_h
#define Distancer_h

#include <NewPing.h> 

class Distancer {
  public:
    Distancer(int trigPin, int echoPin, int maxDistanceCm);
    Distancer(int trigPin, int echoPin) : Distancer(trigPin, echoPin, 200){}
    int ping_cm();
    int get_max_distance_cm();
  private:
    int trigPin, echoPin;
    int maxDistanceCm;
    NewPing *sonar;
};




#endif
