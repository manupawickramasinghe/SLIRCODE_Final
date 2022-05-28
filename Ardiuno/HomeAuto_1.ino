void setup(){
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600);
}
bool activate;
char c[8];
int i;
void loop(){
  if(Serial.available() > 0) {
    char c[i] ;
    c[i] = Serial.read();
    }
    if(i==8){
        if(c[0] == '#' && c[-1] == '*') {
            if (c[1] == '8')
            {
                digitalWrite(2,HIGH);
                activate = true;
            }
            if(c[1 == '9'])
            {
                digitalWrite(3,HIGH);
            }

    }
    }
    if (i=='6' && c[1] == '7')
    {
        if (activate == true)
        {
          if(c[0] == '#' && c[1] == '7')
          {
            digitalWrite(9,LOW);
            digitalWrite(8,LOW);
            activate = false;
          }
        }
        
    }
    }
