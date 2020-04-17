int startPin = 5;
int endPin = 7;
int index = 0;

void setup() {
  // put your setup code here, to run once:
  for (int i = startPin; i <= endPin; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = startPin; i <= endPin; i++) {
    digitalWrite(i, LOW);
  }

  digitalWrite(startPin + index, HIGH);
  index = (index + 1) % (endPin - startPin + 1);
  delay(100); 
}
