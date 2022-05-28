void setup()
{
    pinMode(3,OUTPUT);
    int x=0;
    while(x<255){
    analogWrite(3, x);
    x += 1;
    delay(50);
    }    
}
