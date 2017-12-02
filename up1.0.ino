#include <Servo.h>

Servo servomotor1,servomotor2;
int y,x;
int pos,pos1;
const int xpin = A3;                  // x-axis of the accelerometer
const int ypin = A2;                  // y-axis
const int zpin = A1;                  // z-axis (only on 3-axis models)

void setup() {
  // initialize the serial communications:
  Serial.begin(9600);
  servomotor2.attach(9);
  servomotor1.attach(10);
  pos = 90;
  pos1 = 90;
  servomotor2.write(90);
  servomotor1.write(90);
  delay(100);

}

void loop() {
  y = analogRead(A2);
  x = analogRead(A3);
  if (y < 300)
  { pos=pos-2;
    if (pos <= 0)
      pos = 0;
      delay(15);
  }
  
  if (y > 340)
  { pos=pos+2;
    if (pos >= 180)
      pos = 180;
      delay(15);
  }

  int angle =servomotor2.read();
  Serial.println(angle);
  
  //servomotor2.write(pos);
  
  //delay(50);
  
  if (x < 285)
  { pos1=pos1+2;
    if (pos1 >= 180)
      pos1 = 180;
      delay(15);
  }
  
  if (x > 335)
  { pos1=pos1-2;
    if (pos1 <= 0)
      pos1 = 0;
      delay(15);
  }

  int angle1 =servomotor1.read();
  Serial.println(angle1);
  
  servomotor2.write(pos);
  servomotor1.write(pos1);
  delay(50);
}
