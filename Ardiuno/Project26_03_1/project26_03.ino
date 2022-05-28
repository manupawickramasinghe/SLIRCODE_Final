void setup()
{
    pinMode(3,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);    
}
void loop(){
    int x=0;
    while(x<255){
    analogWrite(3, x);
    x += 1;
    delay(255-x);
    }
    while(x>0){
    analogWrite(3, x);
    x -= 1;
    delay(x);
    }    
}