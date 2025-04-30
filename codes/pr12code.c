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
