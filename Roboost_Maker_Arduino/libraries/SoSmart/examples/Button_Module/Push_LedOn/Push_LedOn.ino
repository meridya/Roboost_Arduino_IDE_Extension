#define led 2
#define button 3

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  //Simplest
  // digitalWrite(led, !digitalRead(button));
  if (digitalRead(button) == 1) {
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
}
