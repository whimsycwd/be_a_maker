int laserPin = 11;


void setup() {
  // put your setup code here, to run once:
  pinMode(laserPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(laserPin, HIGH);
  delay(3000);
  digitalWrite(laserPin, LOW);
  delay(3000);    
  
}
