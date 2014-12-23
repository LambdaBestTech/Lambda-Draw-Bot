#include <Arduino.h>
#include <Servo.h>
#include "constants.h"
#include "functions.h"

void drawTau(Servo *leftWheel, Servo *rightWheel, Servo *penServo){
  
  //DRAWING THE SERIF MARKS AND TOP PART OF TAU
  
  penDown(leftWheel, rightWheel, penServo);   //Put pen down to start drawing
  forward(leftWheel, rightWheel, DIST_SERIF); //drawing left serif
  
  turnRight(leftWheel, rightWheel, RIGHT_TURN_90_DEGREES);
  forward(leftWheel, rightWheel, DIST);         //drawing top part of T
  
  turnRight(leftWheel, rightWheel, RIGHT_TURN_90_DEGREES);
  forward(leftWheel, rightWheel, DIST_SERIF);  //drawing right serif
  
  //Now we want to move it to the center of T to continue drawing middle part of Tau
  penUp(leftWheel, rightWheel, penServo);    //penUp so it doesn't leave a trail  
  backward(leftWheel, rightWheel, DIST_SERIF);
  turnRight(leftWheel, rightWheel, RIGHT_TURN_90_DEGREES);
  forward(leftWheel, rightWheel, DIST/2);                
  turnLeft(leftWheel, rightWheel, LEFT_TURN_90_DEGREES);     //turn 90 degrees to get ready to draw bottom Tau
  penDown(leftWheel, rightWheel, penServo);    //put pen down to draw again
  forward(leftWheel, rightWheel, DIST_MIDDLE); 
  
  //DRAW BOTTOM PART OF TAU
  turnRight(leftWheel, rightWheel, RIGHT_TURN_90_DEGREES);
  forward(leftWheel, rightWheel, DIST/8);
  backward(leftWheel, rightWheel, DIST/4);
  penUp(leftWheel, rightWheel, penServo);  //completed drawing Tau, pen up. 
  stopBot(leftWheel, rightWheel, 10000);  //finished drawing, freeze for ten seconds.  
  
}

