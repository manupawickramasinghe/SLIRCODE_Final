#define convey1 26
#define convey2 28
#define convey3 30
#define sen1 2
#define sen2 3
#define sen3 18
#define sen4 19
#define sen5 16
#define sen6 17
#define sen7 20
#define rodless 5
#define TN1 7
#define suction 8
#define cylinder1 9
#define cylinder2 10
#define gripper 22
#define c1s1 21
#define c1s2 23
#define c2s1 25
#define c2s2 27
#define TN2 24
#define red 4
#define orange 46
#define green 6

bool b1 = true;
bool b2 = false;
bool b3 = false;
bool b4 = false;
bool b5 = false;
bool b6 = false;
bool b7 = false;
bool b8 = false;
bool b9 = false;
bool b10 = false;
bool b11 = false;
bool b12 = false;
bool b13 = false;
bool b14 = false;
bool b15 = false;
bool b16 = false;
bool b17 = false;
bool b18 = false;
bool b19 = false;
bool b20 = false;
bool b21 = false;
bool b22 = false;
bool b23 = false;
bool b24 = false;
bool b25 = false;
bool b26 = false;
bool b27 = false;
bool b28 = false;
bool b29 = false;
bool b30 = false;
bool b31 = false;
bool b32 = false;
bool b33 = false;
bool b34 = false;
bool b35 = false;
bool b36 = false;
bool b37 = false;
bool b38 = false;
bool b39 = false;
bool b40 = false;
bool b41 = false;

void setup() {
  pinMode(convey1, OUTPUT);
  pinMode(convey2, OUTPUT);
  pinMode(convey3, OUTPUT);
  pinMode(sen1, INPUT_PULLUP);
  pinMode(sen2, INPUT_PULLUP);
  pinMode(sen3, INPUT_PULLUP);
  pinMode(sen4, INPUT_PULLUP);
  pinMode(sen5, INPUT_PULLUP);
  pinMode(sen6, INPUT_PULLUP);
  pinMode(sen7, INPUT_PULLUP);
  pinMode(rodless, OUTPUT);
  pinMode(TN1, OUTPUT);
  pinMode(TN2, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(suction, OUTPUT);
  pinMode(cylinder1, OUTPUT);
  pinMode(cylinder2, OUTPUT);
  pinMode(gripper, OUTPUT);
  pinMode(c1s1, INPUT_PULLUP);
  pinMode(c1s2, INPUT_PULLUP);
  pinMode(c2s1, INPUT_PULLUP);
  pinMode(c2s2, INPUT_PULLUP);

}

void loop() {
if(b1== true){
digitalWrite(convey1,LOW);
digitalWrite(convey2,LOW);
digitalWrite(convey3,LOW);
digitalWrite(red,LOW);
digitalWrite(orange,LOW);
digitalWrite(green,LOW);
digitalWrite(gripper,LOW);
digitalWrite(rodless,LOW);
digitalWrite(TN1,LOW);
digitalWrite(TN2,LOW);
digitalWrite(suction,LOW);
digitalWrite(cylinder1,LOW);
digitalWrite(cylinder2,LOW);
b1=false;
b2=true;
}
if(b2== true){
if (digitalRead(sen1) == LOW) {
      delay(2000);
      b2 = false;
      b3 = true;
}}
if(b3== true){
delay(2000);
    analogWrite(convey1, 127);
    b3 = false;
    b4 = true;

}
if(b4== true){
if (digitalRead(sen2) == HIGH) {
      b4 = false;
      b5 = true;
}}
if(b5== true){
    digitalWrite(convey1, HIGH);
    digitalWrite(orange, LOW);
    digitalWrite(green, HIGH);
    delay(5000);
    digitalWrite(orange, HIGH);
    digitalWrite(green, LOW);
    analogWrite(convey1, 127);
    b5 = false;
    b6 = true;
  } if (b6 == true) {
    if (digitalRead(sen3) == LOW) {
      b6 = false;
      b7 = true;

}}
if(b7== true){
digitalWrite(convey1, HIGH);
    delay(2000);
    digitalWrite(rodless, LOW);
    delay(3000);
    digitalWrite(TN1, LOW);
    delay(2000);
    digitalWrite(suction, LOW);
    delay(2000);
    digitalWrite(TN1, HIGH);
    delay(2000);
    digitalWrite(rodless, HIGH);
    delay(2000);
    digitalWrite(TN1, LOW);
    delay(2000);
    digitalWrite(suction, HIGH);
    delay(2000);
    digitalWrite(TN1, HIGH);
    delay(2000);
    b7 = false;
    b8 = true;

}
if(b8== true){
if (digitalRead(sen4) == LOW) {
      b9 = true;
      b10 = false;

}}
if(b10== true){
delay(2000);
    analogWrite(convey2, 127);
    b10 = false;
    b11 = true;

}
if(b11== true){
if (digitalRead(sen5) == LOW) {
      b11 = false;
      b12 = true;

}}
if(b12== true){
digitalWrite(convey2, HIGH);
    delay(2000);
    b13 = false;
    b14 = true;
  

}
if(b13== true){
if (digitalRead(c1s1) == LOW && digitalRead(c2s1) == LOW) {
      b14 = false;
      b15 = true;

}}
if(b14== true){
  
    if (digitalRead(c1s1) == LOW && digitalRead(c2s1) == LOW) {
      b14 = false;
      b15 = true;
    }


}
if (b15 == true) {
    digitalWrite(gripper, LOW);
    delay(2000);
    digitalWrite(cylinder2, LOW);
    b15 = false;
    b16 = true;
  } if (b16 == true) {
    if (digitalRead(c2s2) == LOW) {
      b16 = false;
      b17 = true;
    }
  } if (b17 == true) {
    delay(2000);
    digitalWrite(gripper, HIGH);
    delay(2000);
    digitalWrite(cylinder2, HIGH);
    b17 = false;
    b18 = true;
  } if (b18 == true) {
    if (digitalRead(c2s1) == LOW) {
      b18 = false;
      b19 = true;
    }
  } if (b19 == true) {
    delay(2000);
    digitalWrite(cylinder1, LOW);
    b19 = false;
    b20 = true;
  } if (b20 == true) {
    if (digitalRead(c1s2) == LOW) {
      b20 = false;
      b21 = true;
    }
  } if (b21 == true) {
    delay(2000);
    digitalWrite(cylinder2, LOW);
    b21 = false;
    b22 = true;
  } if (b22 == true) {
    if (digitalRead(c2s2) == LOW) {
      b22 = false;
      b23 = true;
    }
  } if (b23 == true) {
    delay(2000);
    digitalWrite(gripper, LOW);
    delay(2000);
    digitalWrite(cylinder2, HIGH);
    b23 = false;
    b24 = true;
  } if (b24 == true) {
    if (digitalRead(c2s1) == LOW) {
      b24 = false;
      b25 = true;
    }
  } if (b25 == true) {
    digitalWrite(green, HIGH);
    digitalWrite(orange, LOW);
    delay(5000);
    digitalWrite(orange, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(cylinder2, LOW);
    b25 = false;
    b26 = true;
  } if (b26 == true) {
    if (digitalRead(c2s2) == LOW) {
      b26 = false;
      b27 = true;
    }
  } if (b27 == true) {
    delay(2000);
    digitalWrite(gripper, HIGH);
    delay(2000);
    digitalWrite(cylinder2, HIGH);
    b27 = false;
    b28 = true;
  } if (b28 == true) {
    if (digitalRead(c2s1) == LOW) {
      b28 = false;
      b29 = true;
    }
  } if (b29 == true) {
    delay(2000);
    digitalWrite(cylinder1, HIGH);
    b29 = false;
    b30 = true;
  } if (b30 == true) {
    if (digitalRead(c1s1) == LOW) {
      b30 = false;
      b31 = true;
    }
  } if (b31 == true) {
    delay(2000);
    digitalWrite(cylinder2, LOW);
    b31 = false;
    b32 = true;
  } if (b32 == true) {
    if (digitalRead(c2s2) == LOW) {
      b33 = true;
      b32 = false;
    }
  } if (b33 == true) {
    delay(2000);
    digitalWrite(gripper, LOW);
    delay(2000);
    digitalWrite(cylinder2, HIGH);
    b34 = true;
    b33 = false;
  } if (b34 == true) {
    if (digitalRead(c2s1) == LOW){
    b34 = false;
    b35 = true;
  }
} if (b35 == true) {
    delay(2000);
    digitalWrite(gripper, HIGH);
    delay(2000);
    b35 = false;
    b36 = true;
  }  if (b36 == true) {
    if (digitalRead(sen5) == LOW) {
      b36 = false;
      b37 = true;
    }
  } if (b37 == true) {
    delay(2000);
    analogWrite(convey2, 127);
    b37 = false;
    b38 = true;
  } if (b38 == true) {
    if (digitalRead(sen6) == LOW) {
      b38 = false;
      b39 = true;
    }
  } if (b39 == HIGH) {
    digitalWrite(convey2, HIGH);
    delay(2000);
    analogWrite(convey3, 127);
    digitalWrite(TN2, LOW);
    delay(2000);
    digitalWrite(TN2, HIGH);
    b39 = false;
    b40 = true;
  }
  if (b40 == true) {
    if (digitalRead(sen7) == LOW) {
      b40 = false;
      b41 = true;
    }
  } if (b41 == true) {
    digitalWrite(convey3, HIGH);
  }
}
 
