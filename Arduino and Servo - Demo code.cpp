#include <Servo.h>

Servo myservo;  
int pos = 0;    

void setup() {
  myservo.attach(9); // servo signal on pin 9
}

void loop() {
  myservo.write(0);     // move to 0°
  delay(1000);
  myservo.write(90);    // move to 90°
  delay(1000);
  myservo.write(180);   // move to 180°
  delay(1000);
}
