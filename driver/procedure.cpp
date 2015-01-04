#include <Arduino.h>
#include <Servo.h>
#include "constants.h"
#include "functions.h"

void drawTT(Servo *leftWheel, Servo *rightWheel, Servo *penServo){
    drawTheta(leftWheel, rightWheel, penServo);
    moveToTau(leftWheel, rightWheel, penServo);
    drawTau(leftWheel, rightWheel, penServo);
}

void drawTheta(Servo *leftWheel, Servo *rightWheel, Servo *penServo){
  
  ///// DRAW THE OUTER SHELL OF THE THETA /////
  //Change DISTANCE in constants.h to change size of the Theta
 
    forward(leftWheel, rightWheel, DISTANCE*.587); //Draws the left Theta edge  
    
    turnRight(leftWheel, rightWheel, THETA_RIGHT_TURN); //Draws top left corner
    forward(leftWheel, rightWheel, DISTANCE*.293);   
    
    turnRight(leftWheel, rightWheel, THETA_RIGHT_TURN); //Draws top of Theta
    forward(leftWheel, rightWheel, DISTANCE*.293);
    
    turnRight(leftWheel, rightWheel, THETA_RIGHT_TURN); //Draws top right corner
    forward(leftWheel, rightWheel, DISTANCE*.293);
    
    turnRight(leftWheel, rightWheel, THETA_RIGHT_TURN); //Draws the right edge
    forward(leftWheel, rightWheel, DISTANCE*.587);
    
    turnRight(leftWheel, rightWheel, THETA_RIGHT_TURN); //Draws lower right corner
    forward(leftWheel, rightWheel, DISTANCE*.293);
    
    turnRight(leftWheel, rightWheel, THETA_RIGHT_TURN); //Draws bottom of Theta
    forward(leftWheel, rightWheel, DISTANCE*.253);
    
    turnRight(leftWheel, rightWheel, THETA_RIGHT_TURN); //Draws bottom left corner
    forward(leftWheel, rightWheel, DISTANCE*.293);
    
    turnRight(leftWheel, rightWheel, THETA_RIGHT_TURN * 1.1); //Draws the right edge
  
  ///// DRAW THE MIDDLE PART OF THE THETA /////
  //First, position the robot. 
  penUp(leftWheel, rightWheel, penServo); //Raise pen up
  forward(leftWheel, rightWheel, DISTANCE*.293); // Move to the middle of the shell
  turnRight(leftWheel, rightWheel, RIGHT_TURN_90_DEGREES); // Turn right
  forward(leftWheel, rightWheel, DISTANCE*.073);            // Go towards the center of circle
  
  // Now, let's actually draw the "lightning bolt", or center.
  turnLeft(leftWheel, rightWheel, LEFT_TURN_90_DEGREES / 2); // Turn to get ready for drawing
  penDown(leftWheel, rightWheel, penServo);  // Put the pen down.
  
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
  forward(leftWheel, rightWheel, DISTANCE*(.417 + .1)); //Moving over to the next letter
  turnLeft(leftWheel, rightWheel, LEFT_TURN_90_DEGREES / 2);

}

void drawTau(Servo *leftWheel, Servo *rightWheel, Servo *penServo){
  
  //DRAWING THE SERIF MARKS AND TOP PART OF TAU
  penDown(leftWheel, rightWheel, penServo);   //Put pen down to start drawing
  backward(leftWheel, rightWheel, DISTANCE*.09); //drawing left serif
  forward(leftWheel, rightWheel, DISTANCE*.09); //Move to initial point
   
  
  turnRight(leftWheel, rightWheel, RIGHT_TURN_90_DEGREES); //Turn to draw top of T
  forward(leftWheel, rightWheel, DISTANCE*.293 + 2*(DISTANCE*.207));  //drawing top part of T
  
  turnRight(leftWheel, rightWheel, RIGHT_TURN_90_DEGREES);
  forward(leftWheel, rightWheel, DISTANCE*.09);  //drawing right serif
  backward(leftWheel, rightWheel, DISTANCE*.09);
  
  //Now we want to move it to the center of T to continue drawing middle part of Tau
  //penUp(leftWheel, rightWheel, penServo);    //penUp so it doesn't leave a trail  
  turnRight(leftWheel, rightWheel, RIGHT_TURN_90_DEGREES * 0.9);
  penUp(leftWheel, rightWheel, penServo);  //penUp so it doesn't leave a trail
  forward(leftWheel, rightWheel, (DISTANCE*.293 + 2*(DISTANCE*.207)) / 2); // Move to the top center of Tau  
  penDown(leftWheel, rightWheel, penServo);    //put pen down to draw again
  turnLeft(leftWheel, rightWheel, LEFT_TURN_90_DEGREES);     //turn 90 degrees to get ready to draw bottom Tau
  forward(leftWheel, rightWheel, DISTANCE); 
  
  //DRAW BOTTOM PART OF TAU
  turnRight(leftWheel, rightWheel, RIGHT_TURN_90_DEGREES);
  forward(leftWheel, rightWheel, DISTANCE*.073);
  backward(leftWheel, rightWheel, DISTANCE*.135);
  penUp(leftWheel, rightWheel, penServo);  //completed drawing Tau, pen up. 
  stopBot(leftWheel, rightWheel, DISTANCE);  //finished drawing, freeze for ten seconds.   
}

