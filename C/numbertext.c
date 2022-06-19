#include<stdio.h>
int main(){
    int x,y,z;
    //char ten;
    //char one;
    printf("Enter a letter:");
    scanf("%i", &x);
    y = x / 10;
    z= x % 10;
    switch(x){
        case(0):
        printf("Zero");
        break;
                case(1):
        printf("One");
        break;
                case(2):
        printf("Two");
        break;
                case(3):
        printf("Three");
        break;
                case(4):
        printf("Four");
        break;
                case(5):
        printf("Six");
        break;
                case(6):
        printf("six");
        break;
                case(7):
        printf("seven");
        break;
                case(8):
        printf("Eight");
        break;
                case(9):
        printf("nine");
        break;
                case(10):
        printf("Ten");
        break;
                case(11):
        printf("Eleven");
        break;
                case(12):
        printf("Twelve");
        break;
                case(13):
        printf("Thirteen");
        break;
                case(14):
        printf("Fourteen");
        break;
                case(15):
        printf("Fifiteen");
        break;
                case(16):
        printf("Sixteen");
        break;
                case(17):
        printf("Seventeen");
        break;
                case(18):
        printf("eighteen");
        break;
                case(19):
        printf("Nineteen");
        break;

        default:
            switch (y)
            {
            case 2:
                *ten = "twenty";
                break;
            case (3):
                *ten = "Thirty";
                break;
            case (4):
                *ten = "Forty";
                break;
            case (5):
                *ten = "Fifty";
                break;
            case (6):
                *ten = "Sixty";
                break;
            case (7):
                *ten = "Seventy";
                break;
            case (8):
                *ten = "Eighty";
                break;
            case (9):
                *ten = "ninety";
                break;
            default:
                break;
            }
            switch(z){
                case 0:
                    *one = "";
                    break;
                case(1) :
                    *one = "One" ;
                    break;
                case(2) :
                    *one = "Two" ;
                    break;
                case(3):
                *one = "Three" ;
                break;
                case(4) :
                *one = "Four" ;
                break;
                case(5) :
                *one = "Six" ;
                break;
                case(6) :
                *one = "six" ;
                break;
                case(7) :
                *one = "seven" ;
                break;
                case(8) :
                *one = "Eight" ;
                break;
                case(9) :
                *one = "nine" ;
                break;
                default:
                break;
                }
        printf("%s %s",ten,one);
    ;}printf("%s %s",ten,one);
}
