#include<stdio.h>
int main(){
    char x;
    printf("Enter a letter:");
    scanf("%c", &x);
    if(x=='a'||x=='b'||x=='c'||x=='d'||x=='e'||x=='f'||x=='g'||x=='h'||x=='i'||x=='j'||x=='k'||x=='l'||x=='m'||x=='n'||x=='o'||x=='p'||x=='q'||x=='r'||x=='s'||x=='t'||x=='u'||x=='v'||x=='w'||x=='x'||x=='y'||x=='z'){
        printf("It is lowercase");
    }
    else{
        printf("Uppercase");
    }
}
