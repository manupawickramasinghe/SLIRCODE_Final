void setup(){
	pinMode(2,INPUT_PULLUP);
	//pinMode(3,INPUT_PULLUP);
	pinMode(8,OUTPUT);}
void loop(){
	byte x = !digitalRead(2), y = !digitalRead(3);
	byte z = x ^ y;
	digitalWrite(8,z);
	}