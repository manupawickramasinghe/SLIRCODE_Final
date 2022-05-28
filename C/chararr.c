#include<stdio.h>
int main(){
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
    char x[i];
    printf("Enter a letter:");
    scanf("%c", &x[i]);
    if(x[i]=='a'||x[i]=='b'||x[i]=='c'||x[i]=='d'||x[i]=='e'||x[i]=='f'||x[i]=='g'||x[i]=='h'||x[i]=='i'||x[i]=='j'||x[i]=='k'||x[i]=='l'||x[i]=='m'||x[i]=='n'||x[i]=='o'||x[i]=='p'||x[i]=='q'||x[i]=='r'||x[i]=='s'||x[i]=='t'||x[i]=='u'||x[i]=='v'||x[i]=='w'||x[i]=='x'||x[i]=='y'||x[i]=='z'){
        printf("\nIt is lowercase\n");
        count++;
    }
    else{
        printf("\nUppercase\n");
    }
    }
    printf("\nThe number of lowercase letters is %d", count);
    
}