

#include <Servo.h>

Servo servo_1;
Servo servo_2;
int x = 0;
void setup(){
 servo_1.attach(2);
 servo_2.attach(3);
}
void loop(){
  
  for (x = 0; x <= 180; x += 1){
    servo_1.write(x);
    servo_2.write(x);
    delay(18);
  }
  for (x = 180; x >= 0; x -= 1){
    servo_1.write(x);
    servo_2.write(x);
    delay(18);
    
   }
}