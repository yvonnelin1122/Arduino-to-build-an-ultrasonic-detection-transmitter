
#include <Servo.h>

Servo myservo;
const int IN_D0 = 3; /*保險*/
int Trig = 7; int Echo = 8;/*distance*/
float echotime; float distance; float T = 22.0;
float v = (331 + 0.6 * T) * 100 / 1000000; //unit:cm/微秒
int swPin = 2; int swState;
int led =3 ;
int warn=11;
int value_D0;
void setup() {
  Serial.begin(9600);
  pinMode(Trig, OUTPUT); pinMode(Echo, INPUT);
  pinMode(swPin, INPUT); pinMode(led, OUTPUT);
  pinMode(warn, OUTPUT);
  myservo.attach(10);/**/
 
  pinMode (IN_D0, INPUT);
  int value_D0;
}
void loop() {
  swState = digitalRead(swPin);
 //if (swState == 1) { myservo.write(90);              // tell servo to go to position in variable 'pos'
    //delay(170);
 //   myservo.write(90);delay(1000);}

   
  
  digitalWrite(Trig, HIGH); delay(5); digitalWrite(Trig, 0);
  echotime = pulseIn(Echo, 1);
  distance = v * (echotime / 2);
  
  Serial.print("D= "); Serial.print(distance);
Serial.println(" cm");
  value_D0 = digitalRead(IN_D0);
  delay(100);





  
  
  if 
  ( distance <= 100 && value_D0==0)
 {
    myservo.write(0);              // tell servo to go to position in variable 'pos'
    delay(170); 
    myservo.write(90);
  

    delay(1000);
  }


  delay(100);

}
