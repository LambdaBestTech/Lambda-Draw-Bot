#include <Arduino.h>
#include <Servo.h>
#include "constants.h"
#include "functions.h"

void drawTheta(Servo *leftWheel, Servo *rightWheel, Servo *penServo){
  
  //DRAW THE OUTER SHELL OF THE THETA
  //Change DISTANCE in constants.h to change size of the Theta
    
  for(int i = 0; i < 2; i++){
  
    forward(leftWheel, rightWheel, DISTANCE);
    stopBot(leftWheel, rightWheel, DISTANCE);
    
    for(int i = 0; i < 3; i++){
      turnRight(leftWheel, rightWheel, THETA_RIGHT_TURN);
      stopBot(leftWheel, rightWheel, DISTANCE);
      forward(leftWheel, rightWheel, DISTANCE/2);
      stopBot(leftWheel, rightWheel, DISTANCE);
    }
    
    turnRight(leftWheel, rightWheel, THETA_RIGHT_TURN);
    stopBot(leftWheel, rightWheel, DISTANCE);
  
  }
  
  //DRAW THE MIDDLE PART OF THE THETA
  
  //First, position the robot. 
  penUp(leftWheel, rightWheel, penServo);      // Lift pen so it doesn't leave a trail
  forward(leftWheel, rightWheel, DISTANCE / 2); // Move to the middle of the shell
  turnRight(leftWheel, rightWheel, RIGHT_TURN_90_DEGREES); // Turn right
  forward(leftWheel, rightWheel, DISTANCE / 8);            // Go towards the center of circle
  turnLeft(leftWheel, rightWheel, LEFT_TURN_90_DEGREES / 2); // Turn to get ready for drawing
  
  // Now, let's actually draw the "lightning bolt", or center.
  // Put the pen down.
  penDown(leftWheel, rightWheel, penServo);
  
  // This part will actually draw the center.
  forward(leftWheel, rightWheel, DISTANCE / 4);
  turnRight(leftWheel, rightWheel, RIGHT_TURN_90_DEGREES / 2);
  forward(leftWheel, rightWheel, DISTANCE/2);
  turnLeft(leftWheel, rightWheel, LEFT_TURN_90_DEGREES / 2);
  forward(leftWheel, rightWheel, DISTANCE / 4);
  
  // Stop the robot and lift the pen.
  // Freeze for ten seconds.
  penUp(leftWheel, rightWheel, penServo);
  stopBot(leftWheel, rightWheel, 10000);

}

