#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void forward(Servo *leftWheel, Servo *rightWheel, int duration);
void backward(Servo *leftWheel, Servo *rightWheel, int duration);
void stopBot(Servo *leftWheel, Servo *rightWheel, int duration);
void turnLeft(Servo *leftWheel, Servo *rightWheel, int duration);
void turnRight(Servo *leftWheel, Servo *rightWheel, int duration);

#endif
