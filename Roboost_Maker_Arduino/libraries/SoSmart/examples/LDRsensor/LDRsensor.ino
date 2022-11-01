void setup() {
  Serial.begin(9600);
}
void loop() {
  int sensorDegeri = analogRead(A0);
  Serial.println(sensorDegeri); 
  delay(10); 
}
