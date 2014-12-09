Lambda Drawbot
==============

This is the build project for the Lambda Pledge Class of the Theta Tau Epsilon Delta chapter. We are making an Arduino robot that can draw shapes using pre-made functions. 

So far, the project consists of the following materials: 

* Arduino Uno
* External battery charger for Android / iPhones (used to externally power the Arduino)
* Two continuous servo motors with wheels
* One standard servo motor with rubber band so that the pen can be attached
* LaserCAMM cut acrylic

It is highly recommended you compile and develop your main driver on the Arduino IDE if you are a beginner. You can [download it here][arduino_download].

A picture of how our robot is set up is provided to help you with reproduction. AutoCAD files are also provided in case you are planning to use LaserCAMM or a similar product to cut out your acrylic. Please note that the code we provide should work on *most* robots with this particular style in mind.

**Note:** The code and instructions provided are specifically catered for our continuous servo motors. If you are planning to do a similar project, be sure to modify the constants.h file to calibrate your particular motors. Not all servo motors come out of the factory the same!

Functions
--------------

Here is the current list of functions in the Lambda Drawbot, starting with the wheel functions:

Function      | Parameters    | Description                                                        
------------- |-------------- | ---------------
forward       | int duration  | Moves the drawbot forward for "duration", which is in milliseconds. 
backward      | int duration  | Moves the drawbot backward for "duration", which is in milliseconds. 
stopBot       | int duration  | Stops the drawbot for "duration", which is in milliseconds. 
turnLeft      | int duration  | Turns the drawbot left for "duration", which is in milliseconds. 
turnRight     | int duration  | Turns the drawbot right for "duration", which is in milliseconds. 

Because continuous servos are just modified standard servos, they can only be programmed to spin for a certain amount of time. Therefore, trial and error is required if you desire your robot to turn *exactly* a certain way. Some constants for turning a robot exactly 90 degrees based on duration is provided in the constants.h file.

Here are the pen functions:

Function      | Parameters    | Description                                                        
------------- |-------------- | ---------------
penUp         | None          | Lifts the writing utensil up.
penDown       | None          | Puts the writing utensil down.

If the pen is down, the pen is in drawing mode and marks will be left on the floor, so be careful.

Credits 
--------------

Created by the Lambda Pledge Class
	
	Abouremeleh, Yusef
	Deng, David
	Fields, Alex
	Guiterrez, Christian
	Huynh, Blake
	Kim, Kaiser
	Li, Claire
	Lin, Wendy
	Tea, Teddy
	Tiwapong, Nat
	Tunchez, Alex
	Wong, Eunice
	Zhou, Jesse

Special thanks to our Pledge Instructor and Pledge Marshall for giving us the opportunity to work on this project.


[arduino_download]: http://arduino.cc/en/main/software
