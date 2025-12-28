
#include <Servo.h>

Servo servo1; 

int pos = 0;
const int brightness =250;    
int maxangle = 180;

void setup() {
  servo1.attach(10)
  pinMode(9,OUTPUT);  
}

void loop() {
  for (pos = 0; pos <= maxangle; pos += 1) 
  { 
    servo1.write(pos);
    analogWrite(9,brightness);              
    delay(15);                       
  }
  for (pos = maxangle; pos >= 0; pos -= 1) 
  {
    servo1.write(pos);
    analogWrite(9,pos);             
    delay(15);                      
  }
}
