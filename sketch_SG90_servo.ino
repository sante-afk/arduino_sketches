#include <Servo.h> 
Servo myServo;

const int joystickXPin = A0; 
const int servoPin = 9;  

int angle = 90;

void setup() {
  myServo.attach(servoPin);
  myServo.write(angle);
  
  Serial.begin(9600);
}

void loop() {
  int joystickValue = analogRead(joystickXPin);
  
  angle = map(joystickValue, 0, 1023, 0, 180);
  
  myServo.write(angle);
  
  Serial.print("Joystick: ");
  Serial.print(joystickValue);
  Serial.print(" | Angle: ");
  Serial.println(angle);
  
  delay(15);
}