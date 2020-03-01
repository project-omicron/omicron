#include "AFMotor.h"
 
AF_DCMotor motor(1, MOTOR12_64KHZ); // create motor #2, 64KHz pwm
AF_DCMotor motor2(2, MOTOR12_64KHZ); // create motor #2, 64KHz pwm
AF_DCMotor motor3(3, MOTOR12_64KHZ); // create motor #2, 64KHz pwm
AF_DCMotor motor4(4, MOTOR12_64KHZ); // create motor #2, 64KHz pwm
 
void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Motor test!");
  
  motor.setSpeed(150);     // set the speed to 200/255
  motor2.setSpeed(150);     // set the speed to 200/255
  motor3.setSpeed(150);     // set the speed to 200/255
  motor4.setSpeed(150);     // set the speed to 200/255
}
 
void loop() {
  Serial.print("tick");
  
  motor.run(FORWARD);      // turn it on going forward
  motor2.run(FORWARD);      // turn it on going forward
  motor3.run(FORWARD);      // turn it on going forward
  motor4.run(FORWARD);      // turn it on going forward
  delay(1000);
 /*
  Serial.print("tock");
  motor.run(BACKWARD);     // the other way
  delay(1000);
  
  Serial.print("tack");
  motor.run(RELEASE);      // stopped
  delay(1000);
  */
}
