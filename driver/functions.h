#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void forward(Servo *leftWheel, Servo *rightWheel, int duration);
void backward(Servo *leftWheel, Servo *rightWheel, int duration);
void stopBot(Servo *leftWheel, Servo *rightWheel, int duration);
void turnLeft(Servo *leftWheel, Servo *rightWheel, int duration);
void turnRight(Servo *leftWheel, Servo *rightWheel, int duration);

// pen functions
void penUp(Servo *leftWheel, Servo *rightWheel, Servo *myServo);
void penDown(Servo *leftWheel, Servo *rightWheel, Servo *myServo);
void calibratePen(Servo *penServo);

// procedure functions
void drawTheta(Servo *leftWheel, Servo *rightWheel, Servo *penServo);

void drawTau(Servo *leftWheel, Servo *rightWheel, Servo *penServo);

void drawTau(Servo *leftWheel, Servo *rightWheel, Servo *penServo);

#endif
