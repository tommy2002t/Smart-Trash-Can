#include <Servo.h>

Servo servo;
const int servoPin = 8; 
const int buttonPin = 11;
int buttonState = 0; 


const int closed_deg = 0;   
const int open_deg = 90;  

void openCap() 
{
  servo.write(open_deg); 
  delay(3000);                  
  servo.write(closed_deg); 
}


void setup() {
  servo.attach(servoPin);     
  pinMode(buttonPin, INPUT); 
  servo.write(closed_deg); 
}

void loop() {

  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) 
  { 
    openCap();             
  }
}




