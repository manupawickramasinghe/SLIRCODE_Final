int a =0,z;
bool c=1,d =0;
void setup(){
  pinMode(2,INPUT_PULLUP);
  //pinMode(3,INPUT_PULLUP);
  pinMode(8,OUTPUT);}
void loop(){
    z = 1;
  if (c == 1){
    if(digitalRead(2)== 1){
        digitalWrite(8,z);
        a +=1;
        d = 1;
c=0;
  if(d==0){

  if(digitalRead(2)== 0){
        digitalWrite(8,!z);
        c = 1;
  d=0;
  }}
  
      }}
}
