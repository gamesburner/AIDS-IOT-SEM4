int mychar = 0; 
 
void setup() { 
  Serial.begin(9600); 
 
  pinMode(11, OUTPUT); // e.g., Red LED 
  pinMode(6, OUTPUT);  // e.g., Yellow LED 
  pinMode(2, OUTPUT);  // e.g., Green LED 
} 
 
void loop() { 
  if (Serial.available() > 0) { 
    mychar = Serial.read(); // Read the incoming byte 
 
    Serial.print("I received: "); 
    Serial.println((char)mychar); // Print the received character 
 
    if (mychar == 'r') { // Red 
      digitalWrite(11, HIGH); 
      digitalWrite(6, LOW); 
      digitalWrite(2, LOW); 
    } 
    else if (mychar == 'y') { // Yellow 
      digitalWrite(11, LOW); 
      digitalWrite(6, HIGH); 
      digitalWrite(2, LOW); 
    } 
    else if (mychar == 'g') { // Green 
      digitalWrite(11, LOW); 
      digitalWrite(6, LOW); 
      digitalWrite(2, HIGH); 
    } 
    else if (mychar == 'b') { // Blink Green 
      digitalWrite(11, LOW); 
      digitalWrite(6, LOW); 
      digitalWrite(2, HIGH); 
      delay(1000); 
       digitalWrite(2, LOW); 
      delay(1000); 
    } 
  } 
}
