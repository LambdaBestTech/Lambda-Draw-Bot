#include <Servo.h>

#define LEFT 5
#define RIGHT 6

#define LEFT_FORWARD 180
#define LEFT_BACKWARD 0
#define RIGHT_FORWARD 0
#define RIGHT_BACKWARD 180
#define STOP_LEFT 94
#define STOP_RIGHT 95

#define LEFT_TURN_90_DEGREES 930
#define RIGHT_TURN_90_DEGREES 950

Servo leftWheel, rightWheel;

void setup(){

   leftWheel.attach(LEFT);
   rightWheel.attach(RIGHT);

}

void loop(){
  stopBot(3000);
  turnRight(RIGHT_TURN_90_DEGREES);
  stopBot(3000);
  turnLeft(LEFT_TURN_90_DEGREES);
}

void forward(int duration){

  leftWheel.write(LEFT_FORWARD);
  rightWheel.write(RIGHT_FORWARD);
  delay(duration);

}

void backward(int duration){

  leftWheel.write(LEFT_BACKWARD);
  rightWheel.write(RIGHT_BACKWARD);
  delay(duration);
  
}

void stopBot(int duration){
  
  leftWheel.write(STOP_LEFT);
  rightWheel.write(STOP_RIGHT);
  delay(duration);
  
}

void turnLeft(int duration){
  leftWheel.write(LEFT_BACKWARD);
  rightWheel.write(RIGHT_FORWARD);
  delay(duration);
}

void turnRight(int duration){
  leftWheel.write(LEFT_FORWARD);
  rightWheel.write(RIGHT_BACKWARD);
  delay(duration);
}
