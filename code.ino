const int IN1 = 8;
const int IN2 = 9;
const int EN = 10;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(EN, OUTPUT);

  analogWrite(EN, 255); // Full speed
}

void loop() {

  // Clockwise for 5 sec
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delay(5000);


  // Anticlockwise for 50 sec
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(5000);
}