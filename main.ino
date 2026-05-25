int irPin = 2; 
int alcoholPin = 3; 
int vibrationPin = 4; 
int buzzerPin = 6; 
int relayPin = 7; 
int greenLED = 8; 
int redLED = 9; 
void setup() { 
pinMode(irPin, INPUT); 
pinMode(alcoholPin, INPUT); 
pinMode(vibrationPin, INPUT); 
pinMode(buzzerPin, OUTPUT); 
pinMode(relayPin, OUTPUT); 
pinMode(greenLED, OUTPUT); 
pinMode(redLED, OUTPUT); 
} 
void loop() { 
int helmet = digitalRead(irPin); 
int alcohol = digitalRead(alcoholPin); 
int vibration = digitalRead(vibrationPin);
if (vibration == LOW) { 
digitalWrite(redLED, HIGH); 
digitalWrite(greenLED, LOW); 
digitalWrite(buzzerPin, HIGH); 
digitalWrite(relayPin, LOW); 
delay(2000); // quick alert 
} 
else if (helmet == LOW && alcohol == HIGH) { 
digitalWrite(greenLED, HIGH); 
digitalWrite(redLED, LOW); 
digitalWrite(buzzerPin, LOW); 
digitalWrite(relayPin, HIGH); 
} 
else { 
digitalWrite(greenLED, LOW); 
digitalWrite(redLED, HIGH); 
digitalWrite(buzzerPin, HIGH); 
digitalWrite(relayPin, LOW); 
delay(500); // faster response for alcohol/helmet 
} 
}
