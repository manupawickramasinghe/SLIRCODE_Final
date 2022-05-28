void setup() {
  
 Serial.begin(9600);
     pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);
  
}
int count = 0;
int state =0;
void loop() {
  
  if(digitalRead(2) ==0 && state ==0){
  digitalWrite(3,HIGH);
  count += 1;
  state = 1;
  Serial.println(count); 
  } 
  if(digitalRead(2) ==1){
  digitalWrite(3,LOW);
  state = 0;
  }
  
}
