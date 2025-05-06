//working code: 
void setup() {
  pinMode(13, OUTPUT); // Set pin 13 as OUTPUT
}

// Loop runs repeatedly
void loop() {
  digitalWrite(13, HIGH); // Turn LED ON
  delay(1000);             // Wait 1 second
  digitalWrite(13, LOW);  // Turn LED OFF
  delay(1000);             // Wait 1 second
}
/*
void setup()

{

Serial.begin(9600),

pinMode(2,OUTPUT);

}

Void loop()

{

serial.println("HIGH");

digitalWrite(2.1),

delay(1000);

Serial print("LOW");

digitalWrite(2,0);

delay(1000);

}
*/
