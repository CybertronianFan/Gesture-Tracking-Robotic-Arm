# Gesture Tracking Robotic Arm



This repository details on the code and hardware on how to code a gesture tracking robotic arm glove using flex sensors and a 4 DOF robotic arm.



#### General Guidance:

* To properly make this you would need a glove to connect the flex sensors to. I recommend a glove that is ever so slightly stretchy enough for you to fit your fingers in but not very stretchy because that can change the shape of the glove that the flex sensors are attached to.
* You will need a way to attach the flex sensors to the glove. I find the best method to be zip ties. Do not put the zip ties on too tightly or you won't be able to fit your fingers through the glove.
* If you are unable to solder I would recommend using crocodile clips to male breadboard wires to connect the flex sensors to the breadboard.





#### Sensor Connection Guide:

* Clip one pad of the flex sensor and attach it to the positive rail of the breadboard.
* Clip the second pad of the flex sensor and put it on the breadboard.
* In the same row put a jumper wire and connect it to A0 of the Arduino Uno.
* In the same row put one end of a 10k Ohm resistor and the other end into the ground rail of the breadboard.
* Repeat the above steps but with A1 and A2.
* Connect the breadboard to the 5V and Ground of the Arduino.
