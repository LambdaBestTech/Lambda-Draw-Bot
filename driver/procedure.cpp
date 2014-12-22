#include <Arduino.h>
#include <Servo.h>
#include "constants.h"
#include "functions.h"

void drawTheta(Servo *leftWheel, Servo *rightWheel, Servo *penServo){
  
  //DRAW THE OUTER SHELL OF THE THETA
  //Change DISTANCE in constants.h to change size of the Theta
    
  for(int i = 0; i < 2; i++){
  
    forward(leftWheel, rightWheel, DISTANCE*.587);
    stopBot(leftWheel, rightWheel, DISTANCE);
    
    for(int i = 0; i < 3; i++){
      turnRight(leftWheel, rightWheel, THETA_RIGHT_TURN);
      stopBot(leftWheel, rightWheel, DISTANCE);
      forward(leftWheel, rightWheel, DISTANCE*.293);
      stopBot(leftWheel, rightWheel, DISTANCE);
    }
    
    turnRight(leftWheel, rightWheel, THETA_RIGHT_TURN);
    stopBot(leftWheel, rightWheel, DISTANCE);
  
  }
  
  //DRAW THE MIDDLE PART OF THE THETA
  
  //First, position the robot. 
  penUp(leftWheel, rightWheel, penServo);      // Lift pen so it doesn't leave a trail
  forward(leftWheel, rightWheel, DISTANCE*.293); // Move to the middle of the shell
  turnRight(leftWheel, rightWheel, RIGHT_TURN_90_DEGREES); // Turn right
  forward(leftWheel, rightWheel, DISTANCE*.073);            // Go towards the center of circle
  turnLeft(leftWheel, rightWheel, LEFT_TURN_90_DEGREES / 2); // Turn to get ready for drawing
  
  // Now, let's actually draw the "lightning bolt", or center.
  // Put the pen down.
  penDown(leftWheel, rightWheel, penServo);
  
  // This part will actually draw the center.
  forward(leftWheel, rightWheel, DISTANCE*.146);
  turnRight(leftWheel, rightWheel, RIGHT_TURN_90_DEGREES / 2);
  forward(leftWheel, rightWheel, DISTANCE*.293);
  turnLeft(leftWheel, rightWheel, LEFT_TURN_90_DEGREES / 2);
  forward(leftWheel, rightWheel, DISTANCE*.146);
  
  // Stop the robot and lift the pen.
  // Freeze for ten seconds.
  penUp(leftWheel, rightWheel, penServo);
  stopBot(leftWheel, rightWheel, DISTANCE);

}

void moveToTau(Servo *leftWheel, Servo *rightWheel, Servo *penServo){
  turnLeft(leftWheel, rightWheel, LEFT_TURN_90_DEGREES / 2); //Move to the top of the Theta
  forward(leftWheel, rightWheel, DISTANCE*.087);
  forward(leftWheel, rightWheel, DISTANCE*.207);
  turnRight(leftWheel, rightWheel, RIGHT_TURN_90_DEGREES);
  forward(leftWheel, rightWheel, DISTANCE*.207); //Positioned at the top right corner of Theta
  forward(leftWheel, rightWheel, DISTANCE*293); //More forward to the next letter
  turnRight(leftWheel, rightWheel, LEFT_TURN_90_DEGREES);
}

void drawTau(Servo *leftWheel, Servo *rightWheel, Servo *penServo){
  
  //DRAWING THE SERIF MARKS AND TOP PART OF TAU
  
  penDown(leftWheel, rightWheel, penServo);   //Put pen down to start drawing
  forward(leftWheel, rightWheel, DISTANCE*.073); //drawing left serif
  penUp(leftWheel, rightWheel, penServo); //Raise pen up
  backward(leftWheel, rightWheel, DISTANCE*.073); //Move to initial point
  
  turnLeft(leftWheel, rightWheel, LEFT_TURN_90_DEGREES); //Turn to draw top of T
  forward(leftWheel, rightWheel, DISTANCE*293 + 2*(DISTANCE*.207));  //drawing top part of T
  
  turnRight(leftWheel, rightWheel, RIGHT_TURN_90_DEGREES);
  forward(leftWheel, rightWheel, DISTANCE*.073);  //drawing right serif
  
  //Now we want to move it to the center of T to continue drawing middle part of Tau
  penUp(leftWheel, rightWheel, penServo);    //penUp so it doesn't leave a trail  
  backward(leftWheel, rightWheel, DISTANCE*.073);
  turnRight(leftWheel, rightWheel, RIGHT_TURN_90_DEGREES);
  forward(leftWheel, rightWheel, (DISTANCE*293 + 2*(DISTANCE*.207)) / 2); // Move to the top center of Tau               
  turnLeft(leftWheel, rightWheel, LEFT_TURN_90_DEGREES);     //turn 90 degrees to get ready to draw bottom Tau
  penDown(leftWheel, rightWheel, penServo);    //put pen down to draw again
  forward(leftWheel, rightWheel, DISTANCE); 
  
  //DRAW BOTTOM PART OF TAU
  turnRight(leftWheel, rightWheel, RIGHT_TURN_90_DEGREES);
  forward(leftWheel, rightWheel, DISTANCE*.073);
  backward(leftWheel, rightWheel, DISTANCE*.146);
  penUp(leftWheel, rightWheel, penServo);  //completed drawing Tau, pen up. 
  stopBot(leftWheel, rightWheel, DISTANCE);  //finished drawing, freeze for ten seconds.   
}

