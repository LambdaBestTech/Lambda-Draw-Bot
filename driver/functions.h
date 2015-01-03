#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void controlForward(Servo *leftWheel, Servo *rightWheel);
void controlStop(Servo *leftWheel, Servo *rightWheel);
void controlBackward(Servo *leftWheel, Servo *rightWheel);
void controlRight(Servo *leftWheel, Servo *rightWheel);
void controlLeft(Servo *leftWheel, Servo *rightWheel);

void forward(Servo *leftWheel, Servo *rightWheel, int duration);
void backward(Servo *leftWheel, Servo *rightWheel, int duration);
void stopBot(Servo *leftWheel, Servo *rightWheel, int duration);
void turnLeft(Servo *leftWheel, Servo *rightWheel, int duration);
void turnRight(Servo *leftWheel, Servo *rightWheel, int duration);

// pen functions
void penUp(Servo *leftWheel, Servo *rightWheel, Servo *myServo);
void penDown(Servo *leftWheel, Servo *rightWheel, Servo *myServo);
void calibratePen(Servo *penServo);
void calibrateTurn(Servo *leftWheel, Servo*rightWheel);

// procedure functions
void drawTheta(Servo *leftWheel, Servo *rightWheel, Servo *penServo);
void drawTau(Servo *leftWheel, Servo *rightWheel, Servo *penServo);
void moveToTau(Servo *leftWheel, Servo *rightWheel, Servo *penServo);
void drawTT(Servo *leftWheel, Servo *rightWheel, Servo *penServo);

#endif
