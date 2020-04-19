
int bPin = 2;
int gPin = 3;
int rPin = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rPin, HIGH);
  delay(1000);
  digitalWrite(rPin, LOW);

  digitalWrite(gPin, HIGH);
  delay(1000);
  digitalWrite(gPin, LOW);
  
  digitalWrite(bPin, HIGH);
  delay(1000);
  digitalWrite(bPin, LOW);


  digitalWrite(rPin, HIGH);
  digitalWrite(gPin, HIGH);
  digitalWrite(bPin, HIGH);
  delay(1000);
  digitalWrite(rPin, LOW);
  digitalWrite(gPin, LOW);
  digitalWrite(bPin, LOW);  

  
  
}
