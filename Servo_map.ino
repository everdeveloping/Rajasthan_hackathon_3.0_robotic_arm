#include <Servo.h>

Servo servomotor;
int y;
int angle;
const int xpin = A3;                  // x-axis of the accelerometer
const int ypin = A2;                  // y-axis
const int zpin = A1;                  // z-axis (only on 3-axis models)

void setup() {
  // initialize the serial communications:
  Serial.begin(9600);
  servomotor.attach(9); 
  y=0;

  }

void loop() {
  y=analogRead(A2);
  y=map(y,275,372,180,0);
  Serial.print(y);
  Serial.print("\t");
  angle=servomotor.read();
  Serial.println(angle);
  servomotor.write(y);
  delay(100);

}
