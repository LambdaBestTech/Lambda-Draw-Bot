---
layout: post
title:  Project Plan
date:   2014-11-1
categories: hardware
---
#Project Overview

The purpose of this project is to create a microcontroller robot that can draw various shapes and patterns on potentially different kinds of surfaces. The minimum requirement for our project is to draw two Greek letters - Theta and Tau - in one continuous run. In this post, we will outline our initial plan and budget for the project, as well as any underlying concerns we have for the future.

#The Plan

The general idea is to have a microcontroller robot that emulates the behavior of a "turtle" from Turtle World, which is a well-known beginner programming project at UCSD. Generally, in Turtle World, you can draw shapes and patterns by sending directions in the form of code to your Turtle object. For example, if you tell the Turtle to go forward, make a right angle turn, and then go forward again, you would make a "L" shape on the Turtle World canvas. (add link to TW)

However, replicating such behavior in real life is a little harder. If the robot turned, for example, and the pen attached to the robot turned with the robot, it would leave an undesired mark on the paper.

##Parts we need

The parts we need for the project are as follows:

1. 2 continuous servo motors
2. 1 standard servo motor
3. Some kind of pen mount
4. Arduino Uno
5. Acrylic for the base
6. Battery, 9V
7. Servo driver from Adafruit

The servo motors are the best choice for this project because they are easily programmable when connected to an Arduino Uno, and because they are used in many Arduino projects online. There is extensive documentation online for how to use servo motors, and this will allow our team to easily program movement and pen lifting of the robot.

#Sequence of events

Here is the (planned) timeline:

1. Create Github (this repository)
2. Buy parts, create the base, and assemble the robot
3. Program the robot's movement and pen up and pen down functions
4. Code procedure to draw
5. Debug and test the robot

This is only for the minimum requirement. We have a couple of reach goals for the project as well, which will be listed below.

#Reach Goals
After completing the minimum requirements for this project, we decided to pursue a few ambitious reach goals that would make our project more impressive.

These included:

1. Bluetooth Android microcontroller
2. A more efficient pen mount
3. Drawing all the letters of the Greek Alphabet
4. Making a casing for the robot

The Bluetooth Android microcontroller would allow us to potentially draw anything we want by using an Android phone. The GUI would be designed like a video game controller and we would control the robot through directional buttons. As for the pen mount, we are using a rubber band to support the pen for now. If time allows for it, we will try to find a more efficient and aesthetically pleasing pen mount. Finally, we will attempt to program the robot so that it can draw any letter of the Greek Alphabet. This will further allow us to show how superior we are in comparison to Triangle.

#Conclusion

By being a part of this build project, we have learned many useful tools that will help us as engineers in the future. It also helped us in terms of working as a group to accomplish one goal. We sincerely believe that this robot could revolutionize the way people will write in the future. We hope to use the skills and assets we obtained from this project and apply them in the future.
