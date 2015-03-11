---
layout: post
title:  Coding the robotic movement
date:   2014-12-20
categories: hardware
---

#Language

Most of the coding for the Arduino Robot was done using a modified version of C++. C++ is a language that trades in saftey measures for speed, so the tradeoff for it being faster is that we have to deal with things like pointers and memory management, things that one normally doesn't have to deal with in Java.

Luckily, with our experience at UCSD, we already have experience in programming in C++, and the modified version of it that Arduino gives us actually allows us to not worry about memory management that much. We did however still have to worry about pointers. It was the only way to write the parameters for objects inside of each function we wanted to write.

#Functions

We will try our best to update the actual functions themselves on the actual README itself, but the most basic functions that are used to move the robot are pretty simple. We will do our best to describe them here.

**Movement Functions:** Simple functions that take in two `Servo *` and an `int` for duration. It's important to realize that modified Servo motors – which are the kinds of motors we are using – don't have encoding on them, which means that they can't really precisely stop and draw the exact same thing every time we execute the function. Modified servo motors instead *spin at a speed for a select duration of time*. We have realized that this makes our robot's movement pretty unreliable, since the motors would spin a slightly different distance every time we ran them.

**Pen functions:** Functions that took a `Servo *` that represented the pen servo. This particular servo wasn't modified, so it could only move 180 dgrees. By moving the servo arm between certain degrees, we lifted the pen up and down from the paper. However, it wasn't lifting in the strictest sense, since the pen would actually "swipe" up and down when lifting. It was more of a scissor-lift than anything else.

**Procedure Functions:** Functions that combined all of these previous functions to draw the desired shapes and letters. They weren't entirely accurate, but it ended up working out.

#Bluetooth Functionality

Implementing the bluetooth receiver wasn't that difficult. The bluetooth receiver we bought for the Arduino could receive bits using a secure Bluetooth connection, so to move the robot, we basically assigned the different directions bit values, so that when the Android application sent a bit value of "3" for example, it would move left.

We did this for all directions, procedures, and pen lifting of the application. To differentiate between what to do for each bit value, we used a switch case.

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

Pretty cool stuff.
