#include <Servo.h>

Servo myServo; //create servo object

int pos = 0; //variable to store the servo position

void setup()
{
myServo.attach(10); //attach the servo on pin 10 to the servo object

}

void loop()
{
  penDown();
  delay(3000);
  penUp();
  delay(3000);
}

void penUp() //lifts the pen up
{
 myServo.write(150); 
}

void penDown() //brings the pen down
{
  myServo.write(90);
}




