void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    char rcv=Serial.read();
    if(rcv =='A'){
      digitalWrite(2,HIGH);
    }
    if(rcv =='B'){
      digitalWrite(2,LOW);
    
  }

}}
