#include <stdio.h>
int main(){
    char ui;
    printf("Enter a letter ui: ");
    scanf("%c", &ui);
    //printf("%d " ,ui);
    if((ui == 'a')||(ui == 'e')||(ui == 'i')||(ui == 'o')||(ui == 'u')||(ui == 'A')||(ui == 'E')||(ui == 'I')||(ui == 'O')||(ui == 'U'))
    {
        printf("Its a vowel");
    }
    else if(ui == '0' ||ui == '1' ||ui == '2' ||ui == '3' ||ui == '4' ||ui == '5' ||ui == '6' ||ui == '7' ||ui == '8' ||ui == '9' ){printf("Its a number");}
    else { 
        printf("Its a consonant");}
}