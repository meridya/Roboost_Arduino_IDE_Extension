#define Laser 3
#define RCV 2

void setup() {
  pinMode(Laser, OUTPUT);
  pinMode(RCV, INPUT);
  digitalWrite(Laser, HIGH);
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(RCV));
}