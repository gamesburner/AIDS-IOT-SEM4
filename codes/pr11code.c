float mintemp;  
float maxtemp;  
bool initialtemp = true;  
 
void setup() 
{  
  Serial.begin(9600);  // Initialize the serial communication 
}  
 
void loop() 
{  
  int raw = analogRead(A0);  // Read the analog value from pin A0 
  float volt = raw * (5.0 / 1023.0);  // Convert raw reading to voltage 
  float temp = volt * 100.0;  // Convert voltage to temperature in Celsius (assuming a 10mV per degree sensor) 
  float fare = (temp * 1.8) + 32.0;  // Convert Celsius to Fahrenheit 
   
  Serial.print("Temperature in Fahrenheit: "); 
  Serial.println(fare);  
   
  if (initialtemp)  
  {  
    mintemp = maxtemp = fare;  // Initialize the min and max temperatures 
    initialtemp = false;  
  }  
  else 
  {  
    if (fare > maxtemp)  
      maxtemp = fare;  // Update maximum temperature 
     
    if (fare < mintemp)  
      mintemp = fare;  // Update minimum temperature 
  } 
 
  Serial.print("MAXIMUM TEMPERATURE: "); 
  Serial.println(maxtemp); 
   
  Serial.print("MINIMUM TEMPERATURE: "); 
  Serial.println(mintemp); 
   
  delay(1000);  // Wait for a second before the next reading 
}
