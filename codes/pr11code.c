feat mintemp; 
foat maxtemp; 
bool iniƟaltemp true; 
void setup(){ 
Serial.begin(9600); 
void loop(){ 
int raw analogRead(A0); 
float volt=raw * 4.88; 
float temp= volt/10: 
float fare =(temp * 1.8) + 32.0; 
Serial.println("Temperature in Fahrenheit:"); 
Serial.println(fare); 
Delay(1000); 
if(iniƟaltemp) 
{ 
mintemp =maxtemp = fare: 
iniƟaltemp false; 
} 
Else{ 
if (fare > maxtemp) 
maxtemp fare: 
} 
if (faremintemp) 
{ 
mintemp fare; } } Serial.println("MAXIMUM TEMPERATURE:"); Serial.println(maxtemp);
 Serial.println("MINIMUM TEMPERATURE:"); Serial.println(mintemp); 
} 
