#include "Vehicle.h"

Vehicle::Vehicle(int speed) {
  motorDriver = new MotorDriver();
  this->speed = speed;
}

void Vehicle::set_speed(int newSpeed) {
  speed = newSpeed;
}

int Vehicle::get_speed() {
  return speed;
}

void Vehicle::move_forward() {
  motorDriver->motor(MOTOR1, FORWARD, speed);
  motorDriver->motor(MOTOR2, FORWARD, speed);
  motorDriver->motor(MOTOR3, FORWARD, speed);
  motorDriver->motor(MOTOR4, FORWARD, speed);
}

void Vehicle::move_backward() {
  motorDriver->motor(MOTOR1, BACKWARD, speed);
  motorDriver->motor(MOTOR2, BACKWARD, speed);
  motorDriver->motor(MOTOR3, BACKWARD, speed);
  motorDriver->motor(MOTOR4, BACKWARD, speed);
}

void Vehicle::stop() {
  motorDriver->motor(MOTOR1, RELEASE, speed);
  motorDriver->motor(MOTOR2, RELEASE, speed);
  motorDriver->motor(MOTOR3, RELEASE, speed);
  motorDriver->motor(MOTOR4, RELEASE, speed);
}

void Vehicle::spin_left() {
  motorDriver->motor(MOTOR1, BACKWARD, speed);
  motorDriver->motor(MOTOR2, BACKWARD, speed);
  motorDriver->motor(MOTOR3, FORWARD, speed);
  motorDriver->motor(MOTOR4, FORWARD, speed);
}

void Vehicle::spin_right() {
  motorDriver->motor(MOTOR1, FORWARD, speed);
  motorDriver->motor(MOTOR2, FORWARD, speed);
  motorDriver->motor(MOTOR3, BACKWARD, speed);
  motorDriver->motor(MOTOR4, BACKWARD, speed);
}
