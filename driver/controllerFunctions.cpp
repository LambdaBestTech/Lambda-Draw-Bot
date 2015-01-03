#include <Arduino.h>
#include <Servo.h>
#include "constants.h"

void controlForward(Servo *leftWheel, Servo *rightWheel){
  leftWheel->write(LEFT_FORWARD);
  rightWheel->write(RIGHT_FORWARD);
}

void controlStop(Servo *leftWheel, Servo *rightWheel){
  leftWheel->write(STOP_LEFT);
  rightWheel->write(STOP_RIGHT);
}

void controlBackward(Servo *leftWheel, Servo *rightWheel){
  leftWheel->write(LEFT_BACKWARD);
  rightWheel->write(RIGHT_BACKWARD);
}

void controlLeft(Servo *leftWheel, Servo *rightWheel){
  leftWheel->write(LEFT_BACKWARD);
  rightWheel->write(RIGHT_FORWARD);
}

void controlRight(Servo *leftWheel, Servo *rightWheel){
  leftWheel->write(LEFT_FORWARD);
  rightWheel->write(RIGHT_BACKWARD);
}
