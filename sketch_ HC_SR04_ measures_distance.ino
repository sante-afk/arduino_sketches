int echoPin = 8; 
int trigPin = 9; 
 
void setup() { 
    Serial.begin (9600); 
    pinMode(trigPin, OUTPUT); 
    pinMode(echoPin, INPUT); 
} 
 
void loop() { 
    int duration, cm; 
    digitalWrite(trigPin, LOW); 
    delayMicroseconds(2); 
    digitalWrite(trigPin, HIGH); 
    delayMicroseconds(10); 
    digitalWrite(trigPin, LOW); 
    duration = pulseIn(echoPin, HIGH); 
    cm = duration / 58;
    Serial.print(cm); 
    Serial.println(" cm"); 
    delay(100);
}