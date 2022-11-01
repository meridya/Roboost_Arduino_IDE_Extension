void setup() {
  digitalWrite(5, 0);

}

void loop() {
  // no need to repeat the melody.
  digitalWrite(5, 1);
  delay(500);
  digitalWrite(5, 0);
  delay(500);
}