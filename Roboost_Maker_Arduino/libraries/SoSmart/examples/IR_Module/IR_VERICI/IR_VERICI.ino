#include <nvtIRremote.h>
IRsend irsend;
void setup() {
  Serial.begin(9600);
  Serial.println("IR Remote Transmit test\n");
}
byte i = 0;
void loop() {
  long sonycmd[] = {0xA9A, 0x91A, 0x61A}; // power 0 7
  Serial.print("Send Sony Cmd ");
  Serial.println(sonycmd[i],HEX);
  irsend.sendSony(sonycmd[i], SONY_BITS);  // run send/recv concurrently
  i = (i + 1) % 3;
  delay(3000);   

}