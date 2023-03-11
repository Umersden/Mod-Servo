
#include <Servo.h>
long i=0;
Servo servo;
int potPin = 2;    // select the input pin for the potentiometer
int val = 0;       // variable to store the value coming from the sensor
int output = 0;

void setup() {
  Serial.begin(9600);
  val = analogRead(potPin);    // read the value from the sensor
  output= map(val,77,475,0,180);
  delay(1000);
  servo.write(output);
  servo.attach(8);
  servo.detach();

  
  
}

void loop() {
    while (Serial.available() == 0){
       val = analogRead(potPin); 
    output= map(val,77,475,0,180);
      Serial.println(val);}

    i=Serial.parseInt();
    Serial.println(i);
    servo.write(i);
    servo.attach(8);
    delay(1000);
    
    delay(1000);
    servo.detach();
       
     
     
     
               
}
