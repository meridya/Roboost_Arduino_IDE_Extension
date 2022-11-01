#define Red PWM0
#define Grn PWM1
#define Ble PWM2

void setup() {
  pinMode(Red, OUTPUT);
  pinMode(Grn, OUTPUT);
  pinMode(Ble, OUTPUT);
  
  analogWrite(Red, 0);
  analogWrite(Grn, 0);
  analogWrite(Ble, 0);
}
byte i = 0, j = 0, k = 0;
void loop() {
  delay(500);
  analogWrite(Red, i++);
  analogWrite(Grn, i++);
  analogWrite(Ble, i++);
}
