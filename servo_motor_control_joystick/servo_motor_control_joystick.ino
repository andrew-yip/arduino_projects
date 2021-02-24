#include <Servo.h>

// define our servos
Servo servo1;

// define joystick pins (analog)
int joyX = 0;
int joyY = 1;

// variable to read the values from the analog pins
int joyVal;

void setup() {
  // put your setup code here, to run once:

  // attaches our servos on pins 3-5
  servo1.attach(3);

}

void loop() {
  // put your main code here, to run repeatedly:
  // read the values of joystick (between 0-1023)
  joyVal = analogRead(joyX);
  joyVal = map(joyVal, 0, 1023, 0, 180); // servo value between 0-180
  servo1.write(joyVal); // set the servo position according to the joystick value

}
