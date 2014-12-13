#include <Servo.h>
#include "constants.h"
#include "functions.h"

Servo leftWheel, rightWheel;

void setup(){
  
   leftWheel.attach(LEFT);
   rightWheel.attach(RIGHT);
   
}

void loop(){
  stopBot(&leftWheel, &rightWheel, 3000);
  forward(&leftWheel, &rightWheel, 3000);

}
