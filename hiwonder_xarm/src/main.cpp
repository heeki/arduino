#include <Arduino.h>
#include <xArmServoController.h>

xArmServoController myArm = xArmServoController(xArm, Serial);
xArmServo configuration[] = {
  {1, 1500U},
  {2, 1500U},
  {3, 1500U},
  {4, 1500U},
  {5, 1500U},
  {6, 1500U}
};

void setHome() {
  Serial.println("\nsetting home position...");
  configuration[0].position = 1500U;
  configuration[1].position = 1500U;
  configuration[2].position = 1500U;
  configuration[3].position = 1500U;
  configuration[4].position = 1500U;
  configuration[5].position = 1500U;
  myArm.setPosition(configuration, 6, 1000, true);
}

void printPosition() {
  for (int i = 0; i < 6; i++) {
    char buffer[32];
    sprintf(buffer, "{\"servo\": %d, \"position\": %d}", i, configuration[i].position);
    Serial.println(buffer);
  }
}

void test() {
  configuration[5].position = 500U;
  myArm.setPosition(configuration, 6, 3000, true);
  delay(500);
  setHome();
  configuration[5].position = 2500U;
  myArm.setPosition(configuration, 6, 3000, true);
  delay(500);
  setHome();
}

void rotateWrist() {
  // rotate wrist counterclockwise, close the claw
  configuration[0].position = 2500U;
  configuration[1].position = 500U;
  myArm.setPosition(configuration, 2, 3000, true);
  delay(500);
  setHome();
  // rotate wrist clockwise, close the claw
  configuration[0].position = 2500U;
  configuration[1].position = 2500U;
  myArm.setPosition(configuration, 2, 3000, true);
  delay(500);
  setHome();
}

void pickUpInFront() {
  // move forward
  configuration[2].position = 2000U;
  configuration[3].position = 2400U;
  configuration[4].position = 1300U;
  myArm.setPosition(configuration, 6, 1000, true);
  delay(500);
  // close claw
  configuration[0].position = 2400U;
  myArm.setPosition(configuration, 6, 1000, true);
  delay(500);
  // move up
  configuration[2].position = 1500U;
  configuration[3].position = 1500U;
  configuration[4].position = 1500U;
  myArm.setPosition(configuration, 6, 1000, true);
  delay(500);
  // move forward
  configuration[2].position = 2000U;
  configuration[3].position = 2400U;
  configuration[4].position = 1300U;
  myArm.setPosition(configuration, 6, 1000, true);
  delay(500);
  // open claw
  configuration[0].position = 1500U;
  myArm.setPosition(configuration, 6, 1000, true);
  delay(500);

  setHome();
}

void setup() {
  Serial.begin(9600);
  Serial.println("hello world!\n");
  setHome();
  printPosition();
}

void loop() {
  // test();
  pickUpInFront();
  delay(1000);
}