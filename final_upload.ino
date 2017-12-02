#include <Servo.h>

Servo servomotor1, servomotor2;
Servo servo4;
Servo servo5;
Servo servo6;
int y, x;
int pos, pos1;
const int xpin = A5;                  // x-axis of the accelerometer
const int ypin = A4;                  // y-axis
const int zpin = A3;                  // z-axis (only on 3-axis models)
const int flexpin1 = A0;
const int flexpin2 = A1;
const int flexpin3 = A2;

void setup() {
  // initialize the serial communications:
  Serial.begin(9600);
  servomotor2.attach(9);
  servomotor1.attach(10);
  servo4.attach(4);
  servo5.attach(5);
  servo6.attach(6);
  pos = 90;
  pos1 = 90;
  servomotor2.write(90);
  servomotor1.write(90);
  servo4.write(90);
  servo5.write(90);
  servo6.write(90);
  delay(100);

}

void loop() {
  int flexposition1;
  int flexposition2;
  int flexposition3;
  int servoposition4;
  int servoposition5;
  int servoposition6;
  y = analogRead(ypin);
  x = analogRead(xpin);
  if (y < 300)
  { pos = pos + 2;
    if (pos >= 180)
      pos = 180;
    delay(15);
  }

  if (y > 340)
  {  pos = pos - 2;
    if (pos <= 0)
      pos = 0;
    delay(15);
  }

  int angle = servomotor2.read();
  Serial.println(angle);

  //servomotor2.write(pos);

  //delay(50);

  if (x < 285)
  { pos1 = pos1 + 2;
    if (pos1 >= 180)
      pos1 = 180;
    delay(15);
  }

  if (x > 335)
  { pos1 = pos1 - 2;
    if (pos1 <= 0)
      pos1 = 0;
    delay(15);
  }

  int angle1 = servomotor1.read();
  Serial.println(angle1);
  flexposition1 = analogRead(flexpin1);
  flexposition2 = analogRead(flexpin2);
  flexposition3 = analogRead(flexpin3);
  servoposition4 = map(flexposition1, 922, 850, 90, 45);
  //servoposition4 = constrain(servoposition4, 0, 180);
  servoposition5 = map(flexposition2, 922, 850, 90, 45);
  //servoposition5 = constrain(servoposition5, 0, 180);
  servoposition6 = map(flexposition3, 922, 850, 90, 135);

  servomotor2.write(pos);
  servomotor1.write(pos1);
  servo4.write(servoposition4);
  servo5.write(servoposition5);
  servo6.write(servoposition6);
  delay(50);
}
