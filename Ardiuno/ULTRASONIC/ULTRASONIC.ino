#define trigpin 13
#define echopin 12
#define LMotor_pulse 5
#define RMotor_pulse 6
#define LMotor_dir 2
#define RMotor_dir 3
void setup() {
  pinMode(LMotor_pulse,OUTPUT);
  pinMode(RMotor_pulse,OUTPUT);
  pinMode(LMotor_dir,OUTPUT);
  pinMode(LMotor_dir,OUTPUT);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int dur,distance;
  digitalWrite(trigpin,HIGH);
  delay(1);
  digitalWrite(trigpin,LOW);
  dur = pulseIn(echopin,HIGH);
  distance = (dur/2)*(1/29.1);
  Serial.println(distance);
  delay(50);
  if(distance > 20){
  digitalWrite(LMotor_pulse,LOW);
  digitalWrite(RMotor_pulse,LOW);
  analogWrite(LMotor_dir,127);
  analogWrite(RMotor_dir,127);
  
  }
  else
  {
digitalWrite(LMotor_pulse,LOW);
  digitalWrite(RMotor_pulse,HIGH);
  analogWrite(LMotor_dir,127);
  analogWrite(RMotor_dir,127);

  }

}
