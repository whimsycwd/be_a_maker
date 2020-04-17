int ledPin = 13;
int val;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

}


void serial_input_example() {
  val = Serial.read();
  if (-1 != val) {
    if ('H' == val) {
      digitalWrite(ledPin, HIGH);
      delay(500);
      digitalWrite(ledPin, LOW);

      Serial.print("Available: ");
      Serial.println(Serial.available(), DEC);
    }
  }
}


void serial_output_example() {
  Serial.println("Hello World!");
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  // demo 1
  // serial_input_example();

  serial_output_example();
}
