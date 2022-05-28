void setup()
{
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);    
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
    int time = 1000,x,i;
    while(true){
        i = 0;
        x=2;
        while (i < 100)
        {
            while(x<12){
                digitalWrite(x,HIGH);
                digitalWrite(x-1,LOW);
                x++;
				delay(100);
            }
            while(x>2){
                digitalWrite(x,HIGH);
                digitalWrite(x+1,LOW);
                x--;
			delay(100);
            }
        i++;
        }
        
    }

}
