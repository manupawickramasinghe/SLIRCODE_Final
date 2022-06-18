void main() {
     while(1){
     TRISB = 0;
     PORTB = 0b00000001;
     delay_ms(200);
     PORTB = 0b00000010;
     delay_ms(200);
     PORTB = 0b00000100;
     delay_ms(200);
     PORTB = 0b00001000;
     delay_ms(200);
     PORTB = 0b00010000;
     delay_ms(200);
     PORTB = 0b0010000;

}       }