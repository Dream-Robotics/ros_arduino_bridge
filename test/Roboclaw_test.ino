/*
  Based on the Arduino Example provided by Roboclaw
*/

#include <Servo.h> 

#define channel1 3
#define channel2 4
 
Servo myservo1;  // create servo object to control a Roboclaw channel
Servo myservo2;  // create servo object to control a Roboclaw channel
 
int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
  Serial.begin(9600);
  myservo1.attach(channel1);
  myservo2.attach(channel2);
} 
 
void loop() 
{ 
  myservo1.writeMicroseconds(1250);  //full forward
  myservo2.writeMicroseconds(1750);  //full reverse
  delay(2000);
  myservo1.writeMicroseconds(1750);  //full reverse
  myservo2.writeMicroseconds(1250);  //full forward
  delay(2000);
} 
