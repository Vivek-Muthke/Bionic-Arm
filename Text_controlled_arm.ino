
#include <Servo.h>


Servo wrist; // WRIST MOTOR
Servo indexx; // INDEX FINGER
Servo middle;
Servo ring; 
Servo thumb;

void setup()
{  wrist.attach(10);
   indexx.attach(8);
   middle.attach(6);
   ring.attach(9);
   thumb.attach(7);

  Serial.begin(38400);

}
void loop()
{
  
     if (Serial.available()) {
    char val = Serial.read(); 
    if(val=='A'){
      indexx.write(180);
      middle.write(180);
     ring.write(0);
      thumb.write(180);
      wrist.write(180);
      }
     if(val=='B'){
      indexx.write(180);
      middle.write(180);
     ring.write(0);
      thumb.write(180);
      wrist.write(90);
      }
       if(val=='C'){
      indexx.write(180);
      middle.write(180);
     ring.write(180);
      thumb.write(180);
      wrist.write(180);
      }
       if(val=='D'){
      indexx.write(180);
      middle.write(180);
     ring.write(180);
      thumb.write(180);
      wrist.write(90);
      }
       if(val=='E'){
      indexx.write(180);
      middle.write(0);
     ring.write(180);
      thumb.write(180);
      wrist.write(180);
      }
       if(val=='F'){
      indexx.write(0);
      middle.write(0);
     ring.write(180);
      thumb.write(0);
      wrist.write(90);
      }
      if(val=='N'){
      indexx.write(0);
      middle.write(0);
     ring.write(180);
      thumb.write(0);
      wrist.write(180);
      }
     
  }
 
}


