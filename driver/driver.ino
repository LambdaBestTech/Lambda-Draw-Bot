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
   calibratePen(&penServo); // Calibrate the pen, in case it isn't attached yet
   
}
void loop(){
  if(Serial.available() > 0){

    int received = Serial.read();
    if(received == DRAW_THETA_TAU){
      drawTT(&leftWheel, &rightWheel, &penServo);
      Serial.println("Writing Theta Tau letters...");
    }
    else if(received == STOP_DRAWING){
      stopBot(&leftWheel, &rightWheel, 1000);
      Serial.println("Stopping Drawbot...");
    }
    
  }
}
  



