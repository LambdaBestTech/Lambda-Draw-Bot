#include <Servo.h>
#include "constants.h"
#include "functions.h"

Servo leftWheel, rightWheel;

Servo penServo; //create servo object

void setup(){
  
   leftWheel.attach(LEFT);
   rightWheel.attach(RIGHT);
   penServo.attach(PEN);
   
}

void loop(){
  stopBot(&leftWheel, &rightWheel, 3000);
  forward(&leftWheel, &rightWheel, 3000);

}
