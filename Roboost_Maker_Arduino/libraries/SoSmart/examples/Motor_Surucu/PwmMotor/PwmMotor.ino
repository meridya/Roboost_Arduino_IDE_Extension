void setup ()
{

  pinMode(PWM0, OUTPUT);
  pinMode(PWM1, OUTPUT);
  Serial.begin(9600);
  while (!Serial);
}
void loop() {
  ///Forward
  Serial.println("Forward");
  analogWrite(PWM0, 0);
  //Speed Up
  for (int i = 64; i < 256; i++) {
    analogWrite(PWM1, i);
    Serial.println(i);
    delay(250);
  }
  //Speed Down
  for (int i = 255; i >= 0; i--) {
    analogWrite(PWM1, i);
    Serial.println(i);
    delay(250);
  }

  delay(2000);
  //Rewerse
  Serial.println("Rewerse");
  analogWrite(PWM1, 0);
  //Speed Up
  for (int i = 64; i < 256; i++) {
    analogWrite(PWM0, i);
    Serial.println(i);
    delay(250);
  }
  //Speed Down
  for (int i = 255; i >= 0; i--) {
    analogWrite(PWM0, i);
    Serial.println(i);
    delay(250);
  }
  delay(2000);
}
