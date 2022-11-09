int buttonPin = 2;    
int red_led = 7;    
int buttonState = 0;       

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(red_led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  delay(500);               
 
  if (buttonState == HIGH) {
      Serial.print(buttonState); 
      
      digitalWrite(red_led,HIGH); 
      delay(50);               
      digitalWrite(red_led,LOW); 
      delay(50);               
      digitalWrite(red_led,HIGH); 
      delay(50);               
      digitalWrite(red_led,LOW); 
      delay(50);               
      digitalWrite(red_led,HIGH); 
      delay(50);               
      digitalWrite(red_led,LOW); 

  } 
  else {
    Serial.print(buttonState); 
  }
}
