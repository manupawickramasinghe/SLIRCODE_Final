void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
digitalWrite(2,LOW);
delay(2000);
digitalWrite(3,LOW);
delay(2000);
digitalWrite(4,LOW);
delay(2000);
digitalWrite(4,HIGH);
delay(2000);
digitalWrite(3,HIGH);
delay(2000);
digitalWrite(2,HIGH);
delay(2000);
digitalWrite(3,LOW);
delay(2000);
digitalWrite(4,LOW);
delay(2000);
digitalWrite(4,HIGH);
delay(2000);
digitalWrite(3,HIGH); 4
}
