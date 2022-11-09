int red_led = 13;
int blue_led = 7;

void setup()
{
    pinMode(red_led, OUTPUT);  
    pinMode(blue_led, OUTPUT);
}
void loop()
{  
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

    delay(50);               
    digitalWrite(blue_led,HIGH); 
    delay(50);               
    digitalWrite(blue_led,LOW); 
    delay(50);               
    digitalWrite(blue_led,HIGH); 
    delay(50);               
    digitalWrite(blue_led,LOW); 
    delay(100);               
    digitalWrite(blue_led,HIGH); 
    delay(100);               
    digitalWrite(blue_led,LOW); 
} 
