// project 4 
#define LED 3 
#define BUTTON 7
#define d 500

void setup()
{
  pinMode(LED, OUTPUT);   // output for the LED 
  pinMode(BUTTON, INPUT); // input for the button
}
 
void loop()
{
   if ( digitalRead(BUTTON) == HIGH )
   {
      digitalWrite(LED, HIGH); // turn on the LED
      delay(d);              // wait for 0.5 seconds
      digitalWrite(LED, LOW);  // turn off the LED
   }
}