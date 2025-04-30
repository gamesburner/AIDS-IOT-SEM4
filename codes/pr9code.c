// Pin definitions
 int redPin = 11;
 int greenPin = 9;
 int bluePin = 10;
 // Potentiometer pins
 int potRed = A0;
 int potGreen = A1;
 int potBlue = A2;
 // Variables to store potentiometer values
 int redValue = 0;
 int greenValue = 0;
 int blueValue = 0;
 void setup()
 { 
pinMode(redPin, OUTPUT);
 pinMode(greenPin, OUTPUT);
 pinMode(bluePin, OUTPUT);
 Serial.begin(9600); 
}
 void loop()
 { 
// Read values from potentiometers
 redValue = analogRead(potRed);
 greenValue = analogRead(potGreen);
 blueValue = analogRead(potBlue); 
// Map 0-1023 to 0-255 
redValue = redValue / 4; // or use map(redValue, 0, 1023, 0, 255);
 greenValue = greenValue / 4;
 blueValue = blueValue / 4;
 // Write PWM values to the RGB pins
 analogWrite(redPin, redValue);
 analogWrite(greenPin, greenValue);
 analogWrite(bluePin, blueValue);
 // Print the values to the Serial Monitor
 Serial.print("Red:\t");
 Serial.print(redValue);
 Serial.print("\tGreen:\t");
 Serial.print(greenValue);
 Serial.print("\tBlue:\t");
 Serial.println(blueValue);
 delay(100); 
}
