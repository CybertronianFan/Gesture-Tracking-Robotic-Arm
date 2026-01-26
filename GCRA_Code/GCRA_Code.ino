#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

// Servo PWM limits
#define SERVOMIN 150   // 0 degrees
#define SERVOMAX 600   // 180 degrees

// Flex sensor pins
#define SENSOR_GRIP A2
#define SENSOR_FORE A1
#define SENSOR_ARM  A0

// Function to map sensor reading to PWM
int sensorToPWM(int sensorValue) {
  // Map 50–200 sensor reading to SERVOMIN–SERVOMAX
  return map(sensorValue, 50, 200, SERVOMIN, SERVOMAX);
}

void setup() {
  pwm.begin();
  pwm.setPWMFreq(50);  // 50 Hz for servos
  delay(10);
  Serial.begin(9600);
}

void loop() {
  // Read sensors
  int gripperVal = analogRead(SENSOR_GRIP);
  int forearmVal = analogRead(SENSOR_FORE);
  int armVal    = analogRead(SENSOR_ARM);

  // Convert to PWM for servos
  int gripperPWM = sensorToPWM(gripperVal);
  int forearmPWM = sensorToPWM(forearmVal);
  int armPWM    = sensorToPWM(armVal);

  // Move servos
  pwm.setPWM(0, 0, gripperPWM);  // Gripper servo on channel 0
  pwm.setPWM(1, 0, forearmPWM);  // Forearm servo on channel 1
  pwm.setPWM(2, 0, armPWM);      // Arm servo on channel 2



  delay(50);  
}
