#define red 4
#define green 5  
#define conv 46
#define d1 2
#define d2 3
#define d3 18
#define pc 6


bool b1 = true,b2 = false,b3 = false,b4 = false,b5 = false,b6 = false,b7 = false,b8 = false; 
void setup() {
 pinMode(red,OUTPUT);
 pinMode(green,OUTPUT);
 pinMode(conv,OUTPUT);
 pinMode(d1,INPUT);
 pinMode(d2,INPUT);
 pinMode(d3,INPUT);
 pinMode(pc,OUTPUT);
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  digitalWrite(conv,LOW);
  digitalWrite(pc,LOW);
  digitalWrite(green,HIGH);
}

void loop() {
  if(b1== true){
    if(digitalRead(d2)== HIGH){
      delay(2000);
    digitalWrite(conv,HIGH);
    b3 = true;
    b2 =false;
    b7 = true;
      b1 =false;
    }
  }
  if(b2==true){
    
  }
  if(b3== true){
    if(digitalRead(d3)== HIGH){
      digitalWrite(conv,LOW);
      digitalWrite(pc,HIGH);
      digitalWrite(red,HIGH);
      digitalWrite(green,LOW);
      delay(100);
      
      b1 = true;
      b3 =false;
    }
    else{
      b6 = true;
      } 
    }
     if(b6==true){
    delay(2000);
    digitalWrite(conv,HIGH);
    b7= true;
    b6 =false;
  } 
  if(b7== true){
    if(digitalRead(d3)== HIGH){
      digitalWrite(conv,LOW);
      b1 = true;
      b7 =false;
    }
  }

}
