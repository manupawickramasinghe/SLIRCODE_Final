#include<stdio.h>
int main(){
    char x;
    printf("Enter the character: ");
    scanf("%c", &x);
    if(x == 'a'||x == 'e'||x == 'i'||x == 'o'||x == 'u'||x == 'E'||x == 'A'||x == 'O'||x == 'I'||x == 'U'){
        printf("it is a vowel");
    }
    else{
        printf("it is not a vowel");
    }
}
