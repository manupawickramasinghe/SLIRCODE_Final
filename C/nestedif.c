#include <stdio.h>
int main(){
    int x;
    printf("Enter a number x: ");
    scanf("%d", &x);
    //printf("%d " ,x);
    if((x<5)||(x>10))
    {
        printf("In the range ");
    }
    else { 
        printf("not in the range ");}
}