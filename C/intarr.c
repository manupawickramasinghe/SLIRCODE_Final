#include<stdio.h>
int main(){
    int max =0;
    for (int i = 1; i < 6; i++)
    {
       int x[i];
       x[0]=0;
        printf("Enter a number:");
        scanf("%d", &x[i]);
        //printf("\nThe Output is %d \n", x[i]);
        if (x[i]>x[i-1])
        {
            max = x[i];
        }
        else
        {
            max = x[i-1];
        }
    }
    printf("\nThe max is %d", max);
}