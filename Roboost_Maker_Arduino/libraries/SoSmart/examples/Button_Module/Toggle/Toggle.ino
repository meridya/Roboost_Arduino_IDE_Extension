#define led 2
#define button 3

void setup() {
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
  pinMode(button, INPUT);
}
byte out = LOW;
void loop() {
  //If button pressed
  if (digitalRead(button)) {
    out = !out;
    //debounce fixed line
    while (digitalRead(button));
  }
  digitalWrite(led, out);
}