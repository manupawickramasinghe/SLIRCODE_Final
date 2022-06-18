#line 1 "C:/Users/WDAGUtilityAccount/Desktop/Push Butt/MyProject.c"
void main() {while(1){
 TRISB.B0 = 1;
 TRISB.B1 = 0;
 if (PORTB.B0 ==1){
 PORTB.B1 = 1;
}
else{
PORTB.B1 = 0;
}
} }
