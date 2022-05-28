void setup() {
  // put your setup code here, to run once:
#define trigpin  13
#define echopin 12
Serial.begin(9600);
pinMode(echopin,INPUT);
pinMode(trigpin,OUTPUT);
pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int dist,dur;
//digitalWrite(2,LOW);
digitalWrite(trigpin,HIGH);
delay(1);
digitalWrite(trigpin,LOW);
dur = pulseIn( echopin , HIGH);
dist = dur * (1/58.2);
Serial.println(dist);
delay(50);
if (dist < 20)
{
 digitalWrite(2,HIGH);
 
}
else 
{
 digitalWrite(2,LOW) ;
}
}
