#include <Arduino.h>
#include <Servo.h>
#include "constants.h"

void forward(Servo *leftWheel, Servo *rightWheel, int duration){

  leftWheel->write(LEFT_FORWARD);
  rightWheel->write(RIGHT_FORWARD);
  delay(duration);

}

void backward(Servo *leftWheel, Servo *rightWheel, int duration){

  leftWheel->write(LEFT_BACKWARD);
  rightWheel->write(RIGHT_BACKWARD);
  delay(duration);
  
}

void stopBot(Servo *leftWheel, Servo *rightWheel, int duration){
  
  leftWheel->write(STOP_LEFT);
  rightWheel->write(STOP_RIGHT);
  delay(duration);
  
}

void turnLeft(Servo *leftWheel, Servo *rightWheel, int duration){
  leftWheel->write(LEFT_BACKWARD);
  rightWheel->write(RIGHT_FORWARD);
  delay(duration);
}

void turnRight(Servo *leftWheel, Servo *rightWheel, int duration){
  leftWheel->write(LEFT_FORWARD);
  rightWheel->write(RIGHT_BACKWARD);
  delay(duration);
}
