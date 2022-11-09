
#include <IRremote.h>

int RECV_PIN = 11;//The definition of the infrared receiver pin 11
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  Serial.begin(9600); //Open serial 
  irrecv.enableIRIn(); // Initialization infrared receiver
} 

void loop() 
{
  if (irrecv.decode(&results)) {
    if (results.value == 16761405)
    {
      Serial.println("Signal received");
    }
    irrecv.resume();
  }
}
