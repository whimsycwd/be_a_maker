
#include<Stepper.h>

#define STEPS 2048

Stepper stepper(STEPS, 2, 4, 3, 5);

void setup() {
  // put your setup code here, to run once:
 
}

void loop() {
  // put your main code here, to run repeatedly:
  stepper.setSpeed(10);
  stepper.step(STEPS);
  delay(1000);
  stepper.setSpeed(10);
  stepper.step(-STEPS);
  delay(1000);
}
