bool b1=true,b2 = false,b3 =false ,b4 =false,b5 =false,b6 =false;
void setup(){
  pinMode(2,INPUT_PULLUP);
  //pinMode(3,INPUT_PULLUP);
  pinMode(8,OUTPUT);
  }
void loop(){
if(b1 == true){
  if(digitalRead(2) == LOW){
        b1 = false;
        b2 = true;}
    }
    if(b2 == true){
  digitalWrite(8,HIGH);
  b2 = false;
  b3 = true;
    }
  if(b3 == true){
  if(digitalRead(2) == HIGH){
        b3 = false;
        b4 = true;}
    }
    if(b4 == true){
  if(digitalRead(2) == LOW){
        b4 = false;
        b5 = true;}
    }
    
    if(b5 == true){
  digitalWrite(8,LOW);
  b5 = false;
  b6 = true;
      if(b6 == true){
  if(digitalRead(2) == LOW){
        b6 = false;
        b1 = true;}
    }
    }
}
