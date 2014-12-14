#include <Arduino.h>
#include <Servo.h>
#include "constants.h"

void stopBot(Servo *leftWheel, Servo *rightWheel, int duration){
  
  leftWheel->write(STOP_LEFT);
  rightWheel->write(STOP_RIGHT);
  delay(duration);
  
}

void forward(Servo *leftWheel, Servo *rightWheel, int duration){

  leftWheel->write(LEFT_FORWARD);
  rightWheel->write(RIGHT_FORWARD);
  delay(duration);
  stopBot(leftWheel, rightWheel, PAUSE);
  
}

void backward(Servo *leftWheel, Servo *rightWheel, int duration){

  leftWheel->write(LEFT_BACKWARD);
  rightWheel->write(RIGHT_BACKWARD);
  delay(duration);
  stopBot(leftWheel, rightWheel, PAUSE);
  
}

void turnLeft(Servo *leftWheel, Servo *rightWheel, int duration){
  leftWheel->write(LEFT_BACKWARD);
  rightWheel->write(RIGHT_FORWARD);
  delay(duration);
  stopBot(leftWheel, rightWheel, PAUSE);
  
}

void turnRight(Servo *leftWheel, Servo *rightWheel, int duration){
  leftWheel->write(LEFT_FORWARD);
  rightWheel->write(RIGHT_BACKWARD);
  delay(duration);
  stopBot(leftWheel, rightWheel, PAUSE);
  
}

//lifts the pen up
void penUp(Servo *leftWheel, Servo *rightWheel, Servo *myServo)
{
 myServo->write(UP);
 stopBot(leftWheel, rightWheel, PAUSE);
}

//brings the pen down
void penDown(Servo *leftWheel, Servo *rightWheel, Servo *myServo) 
{
  myServo->write(DOWN);
  stopBot(leftWheel, rightWheel, PAUSE);
}

void calibratePen(Servo *penServo){
  //Start with the pen down to calibrate.
   //Attach the pen at this point.
   //You will have 5 seconds to attach the pen.
   penServo->write(DOWN);
   delay(5000);
   
   //Tests the penServo movement by moving it up
   //and down. If this satisfies the user, then continue.
   //Otherwise, power off and restart.
   for(int i = 0; i < 3; i++){
     penServo->write(UP);
     delay(300);
     penServo->write(DOWN);
     delay(300);
   }
   
   delay(PAUSE); // Delays slightly to wait for user
}


