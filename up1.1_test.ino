#include <Servo.h> 

// Create a servo "object", called servo1. Each servo object
// controls one servo (you can have a maximum of 12):

Servo servo4;
Servo servo5;
Servo servo6;//int servoposition=0;
// Define the analog input pin to measure flex sensor position:

const int flexpin1 = 0; 
const int flexpin2 = 0;
const int flexpin3 = 0;
void setup() 
{ 
  // Use the serial monitor window to help debug our sketch:

  Serial.begin(9600);

  // Enable control of a servo on pin 9:

  servo4.attach(3);
  servo5.attach(5);
  servo6.attach(6);
  servo4.write(90);
  servo5.write(90);
  servo6.write(90);
  
} 
void loop()
{

}
/*
void loop() 
{ 
  int flexposition1;
  int flexposition2;
  int flexposition3;// Input value from the analog pin.
  int servoposition4;
  int servoposition5;
  int servoposition6;// Output value to the servo.

  // Read the position of the flex sensor (0 to 1023):

  flexposition1 = analogRead(flexpin1);
  flexposition2 = analogRead(flexpin2);
  flexposition3 = analogRead(flexpin3);
  // Because the voltage divider circuit only returns a portion
  // of the 0-1023 range of analogRead(), we'll map() that range
  // to the servo's range of 0 to 180 degrees. The flex sensors
  // we use are usually in the 600-900 range:

  servoposition4 = map(flexposition1, 62, 82, 0, 180);
  servoposition4 = constrain(servoposition4, 0, 180);
  servoposition5 = map(flexposition2, 62, 82, 0, 180);
  servoposition5 = constrain(servoposition5, 0, 180);
  servoposition6 = map(flexposition3, 62, 82, 0, 180);
  servoposition6 = constrain(servoposition6, 0, 180);
  // if(flexposition<82)
   //{
    //servoposition=servoposition+2;
    //if(servoposition>=180)
    //servoposition=180;
    //delay(15);
    
   //}
     // if(flexposition>85)
   //{
    //servoposition=servoposition-2;
    //if(servoposition<=0)
    //servoposition=0;
    //delay(15);
    
   //}
  // Now we'll command the servo to move to that position:

  servo4.write(servoposition4);
  servo5.write(servoposition5);
  servo6.write(servoposition6);
  // Because every flex sensor has a slightly different resistance,
  // the 600-900 range may not exactly cover the flex sensor's
  // output. To help tune our program, we'll use the serial port to
  // print out our values to the serial monitor window:

  Serial.print("sensor: ");
  Serial.print(flexposition1 "\t" felxposition2 "\t" flexposition3"\t");
  Serial.print("  servo4: ");
  Serial.println(servoposition4 "\t" servoposition5 "\t" servoposition6 "\n");
  delay(250);
  // Note that all of the above lines are "print" except for the
  // last line which is "println". This puts everything on the
  // same line, then sends a final carriage return to move to
  // the next line.

  // After you upload the sketch, turn on the serial monitor
  // (the magnifying-glass icon to the right of the icon bar).
  // You'll be able to see the sensor values. Bend the flex sensor
  // and note its minimum and maximum values. If you replace the
  // 600 and 900 in the map() function above, you'll exactly match
  // the flex sensor's range with the servo's range.

  //delay(100);  // wait 20ms between servo updates
} */
