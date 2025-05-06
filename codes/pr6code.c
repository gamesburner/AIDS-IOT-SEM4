int counter; 
void setup() 
{ 
Serial.begin(9600); 
pinMode(11, OUTPUT); 
pinMode(12, OUTPUT); 
pinMode(13, OUTPUT); 
} 
void loop() 
{ 
if (counter == 300) 
{ 
counter = 0; 
} 
if (counter > 0 && counter < 100) 
{ 
digitalWrite(11, HIGH); 
digitalWrite(12, LOW); 
digitalWrite(13, LOW); 
} 
if(counter>101&&counter<200)  
{ 
digitalWrite(12,HIGH); 
digitalWrite(11,LOW); 
digitalWrite(13,LOW); 
}  
if(counter>200&&counter<300) 
{ 
digitalWrite(13,HIGH); 
digitalWrite(11,LOW); 
digitalWrite(12,LOW); 
} 
counter=counter+10; 
delay(500); 
Serial.println(counter); 
}
