int out; 
void setup() { 
Serial.begin(9600); 
} 
void loop() { if 
 (Serial.available() > 0) { 
 int num = Serial.parseInt(); 
 Serial.print("I received:"); 
 Serial.println(num); 
out = num * num; 
Serial.print("Enter the Number for Square: "); 
Serial.println(out); 
} 
}
