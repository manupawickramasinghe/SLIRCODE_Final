void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}
char c[8] ;
void loop() {
  if(Serial.available() > 0) {
    for (int i = 0; i < 8; i++)
    {
    char c[i] ;
    c[i] = Serial.read();
    }
    if(c[0] == '#') {
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
    
         if(c[1] == '2') {
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
    }
    else if(c[2] == '3') {
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
    }
    }
    
    
  }

}
