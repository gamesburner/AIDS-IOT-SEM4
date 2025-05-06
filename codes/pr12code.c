void setup() 
{ 
Serial.begin(9600); 
pinMode(8, OUTPUT);  // LED 1 
pinMode(10, OUTPUT);  // LED 2 
pinMode(13, OUTPUT);  // LED 3 
pinMode(3, OUTPUT);   // Buzzer on pin 3 
pinMode(7, INPUT);    // IR sensor signal pin 
} 
void loop() 
{ 
int s1 = digitalRead(7);  // Read IR sensor 
Serial.println(s1);       
delay(200); 
// Show value in Serial Monitor 
  
if (s1 == 0) // Object detected 
{ 	
digitalWrite(8, HIGH); // LED ON 
digitalWrite(10, HIGH); // LED ON 
digitalWrite(13, HIGH); // LED ON 
digitalWrite(3, HIGH);  // Buzzer ON 
} 
  
else // No object 
{ 
digitalWrite(12, LOW);  // LED OFF 
digitalWrite(13, LOW);  // LED OFF 
digitalWrite(3, LOW);   // Buzzer OFF 
} 
}

/*
Void setup()
 Serial.begin(9600);
 (12, OUTPUT);
 pinMode=(13, OUTPUT);
 }
 void loop() {
 int s1-analogRead(40);
 Serial.println(s1);
 delay(200);
 if(s1>100)
 {
 digitalWrite(12,LOW);
 digitalWrite(13, LOW);
 }
 else {
 digitalwrite(12, HIGH);
 digitale ite(13, HIGH);
 }
}
*/
