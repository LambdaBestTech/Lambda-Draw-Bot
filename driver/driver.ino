#include <Servo.h>
#include "constants.h"
#include "functions.h"

Servo leftWheel, rightWheel;
Servo penServo; //create servo object

void setup(){
  
   Serial.begin(9600);
   Serial.println("Starting Drawbot... Awaiting your orders.");
  
   leftWheel.attach(LEFT);
   rightWheel.attach(RIGHT);
   penServo.attach(PEN);
   
   stopBot(&leftWheel, &rightWheel, 1000); // Stop bot from moving
   
}
void loop(){
    
  if(Serial.available() > 0){

    int received = Serial.read();
    
    switch(received){
      case DRAW_THETA_TAU:
        drawTT(&leftWheel, &rightWheel, &penServo);
        break;
      case MOVE_FORWARD:
        controlForward(&leftWheel, &rightWheel);
        break;
      case MOVE_BACKWARD:
        controlBackward(&leftWheel, &rightWheel);
        break;
      case MOVE_RIGHT:
        controlRight(&leftWheel, &rightWheel);
        break;
      case MOVE_LEFT:
        controlLeft(&leftWheel, &rightWheel);
        break;
      case MOVE_STOP:
        controlStop(&leftWheel, &rightWheel);
        break;
      case PEN_UP:
        penUp(&leftWheel, &rightWheel, &penServo);
        break;
      case PEN_DOWN:
        penDown(&leftWheel, &rightWheel, &penServo);
        break;
    }
    
  }
}
  



