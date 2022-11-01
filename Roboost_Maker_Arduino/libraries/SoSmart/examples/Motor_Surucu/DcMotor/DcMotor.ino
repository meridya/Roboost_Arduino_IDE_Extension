int H = 4;
int L = 5;

void setup ()
{

  pinMode(L, OUTPUT);
  pinMode(H, OUTPUT);

}
void loop() {
  digitalWrite(H, 0);
  digitalWrite(L, 1);
  delay(250);
  digitalWrite(H, 0);
  digitalWrite(L, 0);
  delay(250);
  digitalWrite(H, 1);
  digitalWrite(L, 0);
  delay(250);
  digitalWrite(H, 1);
  digitalWrite(L, 1);
}
