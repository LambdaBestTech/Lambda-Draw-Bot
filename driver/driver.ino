#include <Servo.h>
#include "constants.h"
#include "functions.h"

Servo leftWheel, rightWheel;

Servo penServo; //create servo object

void setup(){
  
   leftWheel.attach(LEFT);
   rightWheel.attach(RIGHT);
   penServo.attach(PEN);
   
   stopBot(&leftWheel, &rightWheel, 1000); // Stop bot from moving
   calibratePen(&penServo); // Calibrate the pen, in case it isn't attached yet
   
}

void loop(){
  
}
