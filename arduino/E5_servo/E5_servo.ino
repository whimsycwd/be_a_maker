#include<Servo.h>

int servoPin = 9;
int ponPin = 0;

int servoPosition = 1500;
int angle = 0;
int angleStep = 10;
int pos = 0;

Servo myservo;


void setup() {
  // put your setup code here, to run once:
  pinMode(servoPin, OUTPUT);
  Serial.begin(9600);
  myservo.attach(9);

}

void sweep_example() {
  pos = 0;
  while (pos <= 180) {
    myservo.write(pos);
    pos++;
    delay(15);
  }
  pos = 180;
  while (pos >=0) {
    myservo.write(pos);
    pos--;
    delay(15);
  }
}

int val;
void knob_example() {
  val = analogRead(ponPin);
  val = map(val, 0, 1023, 0, 180);
  myservo.write(val);
  Serial.print("Read value: ");
  Serial.println(val);
}

void loop() {
  // put your main code here, to run repeatedly:
  // sweep_example();
  // knob_example();

  
}
