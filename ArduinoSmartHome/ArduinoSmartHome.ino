void setup() {
 pinMode(12, OUTPUT);
 pinMode(11, OUTPUT);
 pinMode(7, OUTPUT);
}

void loop() {
digitalWrite(12, HIGH);
pinMode(11,LOW);
tone(7, 100, 500);
delay(500);
digitalWrite(12, LOW);
pinMode(11, HIGH);
tone(7, 800, 500);
delay(500);
}
