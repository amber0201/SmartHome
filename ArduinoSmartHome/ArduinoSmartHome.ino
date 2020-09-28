void setup() {
 pinMode(12,OUTPUT);
 pinMode(11,OUTPUT);
 
}

void loop() {
digitalWrite(12, HIGH);
pinMode(11,LOW);
delay(500);
digitalWrite(12, LOW);
pinMode(11,HIGH);
delay(500);
}
