// This Arduino example demonstrates bidirectional operation of a
// 28BYJ-48, using a SoSmart Motor interface board to drive the stepper.
// The 28BYJ-48 motor is a 4-phase, 8-beat motor, geared down by
// a factor of 68. One bipolar winding is on motor pins 1 & 3 and
// the other on motor pins 2 & 4. The step angle is 5.625/64 and the
// operating Frequency is 100pps. Current draw is 92mA.
////////////////////////////////////////////////
//declare variables for the motor pins
int motorPin1 = 2; // Blue - 28BYJ48 pin 1
int motorPin2 = 3; // Pink - 28BYJ48 pin 2
int motorPin3 = 4; // Yellow - 28BYJ48 pin 3
int motorPin4 = 5; // Orange - 28BYJ48 pin 4
// Red - 28BYJ48 pin 5 (VCC)
int motorSpeed = 550; //variable to set stepper speed max 550 to min 50000
int count = 0, clock_w = 1; // count of steps made
int countsperrev = 1200; // number of steps per full revolution
int lookup[8] = {0B1000, 0B1100, 0B0100, 0B0110, 0B0010, 0B0011, 0B0001, 0B1001};
//////////////////////////////////////////////////////////////////////////////
void setup() {
  //declare the motor pins as outputs
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  Serial.begin(9600);
}
//////////////////////////////////////////////////////////////////////////////
void loop() {
  if (count == countsperrev ) {
    clock_w = !clock_w;
    count = 0;
  }
  if (clock_w)
    clockwise();
  else
    anticlockwise();
  count++;
}
//////////////////////////////////////////////////////////////////////////////
//set pins to ULN2003 high in sequence from 1 to 4
//delay "motorSpeed" between each pin setting (to determine speed)
void anticlockwise()
{
  for (int i = 0; i < 8; i++)
  {
    setOutput(i);
    delayMicroseconds(motorSpeed);
  }
}
void clockwise()
{
  for (int i = 7; i >= 0; i--)
  {
    setOutput(i);
    delayMicroseconds(motorSpeed);
  }
}
void setOutput(int out)
{
  digitalWrite(motorPin1, bitRead(lookup[out], 0));
  digitalWrite(motorPin2, bitRead(lookup[out], 1));
  digitalWrite(motorPin3, bitRead(lookup[out], 2));
  digitalWrite(motorPin4, bitRead(lookup[out], 3));
}
