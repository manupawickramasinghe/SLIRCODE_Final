int ledDelay = 10000; 
int redPin = 13;
int yellowPin = 12;
int greenPin = 11;
void setup() { 
  pinMode (redPin, OUTPUT); 
  pinMode (yellowPin, OUTPUT); 
  pinMode (greenPin, OUTPUT); 
  }

void loop(){
digitalWrite (redPin, HIGH); 
delay (ledDelay); 
digitalWrite (yellowPin, HIGH);
delay (2000); 
digitalWrite (greenPin, HIGH); 
digitalWrite (redPin, LOW); 
digitalWrite (yellowPin, LOW); 
delay(ledDelay); 
digitalWrite (yellowPin, HIGH); 
digitalWrite (greenPin, LOW);
delay (2000);
digitalWrite (yellowPin, LOW);
}
