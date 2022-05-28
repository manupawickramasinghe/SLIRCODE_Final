void setup() {
#define Start 2
#define Stop 3
#define D1 4
#define D2 5
#define D3 6
#define Motor 7
#define Heater 8
#define Red 9
#define Green 10
  pinMode(Start, INPUT_PULLUP);
  pinMode(Stop, INPUT_PULLUP);
  pinMode(D1, INPUT);
  pinMode(D2, INPUT);
  pinMode(D3, INPUT);
  pinMode(Motor, OUTPUT);
  pinMode(Heater, OUTPUT);
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  digitalWrite(Motor, HIGH);
  digitalWrite(Heater, HIGH);
  digitalWrite(Red, HIGH);
  digitalWrite(Green, LOW);
  Serial.begin(9600);
}
int count1 = 0,stat, count3 = 0;
void loop() {
  Serial.println(digitalRead(D2));
  if (digitalRead(Start) == 0)
  {
    digitalWrite(Motor, LOW);
    digitalWrite(Green, LOW);
    digitalWrite(Red, HIGH);
  }
  if (digitalRead(D1) == 1)
  {
    count1 += 1;
  }
  if (digitalRead(D2) == 1)
  {
    digitalWrite(Motor, HIGH);
    digitalWrite(Green, HIGH);
    digitalWrite(Red, HIGH);
    digitalWrite(Heater, LOW);
    delay(5000);
    digitalWrite(Motor, LOW);
    digitalWrite(Heater, HIGH);
    delay(5000);
    stat = 1;
  }
  if (stat == 1)
  {
    digitalWrite(Motor, LOW);
    digitalWrite(Green, LOW);
    digitalWrite(Red, LOW);
    
  }
  if (digitalRead(D3) == 1)
  {
    count3 += 1 ;
  }
  if (count1 - count3 > 7)
  {
    digitalWrite(Motor, HIGH);
    digitalWrite(Green, HIGH);
    digitalWrite(Red, LOW);
  }





  if (digitalRead(Stop) == 1)
  {
    digitalWrite(Motor, HIGH);
    digitalWrite(Green, HIGH);
    digitalWrite(Red, LOW);
  }

}
