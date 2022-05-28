#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("\nEnter the second number: ");
    scanf("%d",&y);
    if (x > y)
    {
        printf("X is greater than Y");
    }
    else if (x == y)
    {
        printf("X is equal to Y");
    }
    else 
    {
        printf("X is less than Y");}
    
}
