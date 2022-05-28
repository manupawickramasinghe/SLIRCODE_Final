#include<stdio.h>
int main(){
    char x;
    printf("Enter a letter:");
    scanf("%c", &x);
    if(x >='a'&& x<='z')
    {
        printf("Lowercase\n");
    }
    else{
        printf("upepercase\n");
    }
    
    }
