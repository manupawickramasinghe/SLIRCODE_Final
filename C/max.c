#include <stdio.h>
int main(){
    int x,y,z;
    printf("Enter a number x: ");
    scanf("%d", &x);
    printf("Enter a number y: ");
    scanf("%d", &y);
    printf("Enter a number z: ");
    scanf("%d", &z);
    if(x< z && z > y)
    {
        printf("Z is max");   
        }
        else{
     if(y > z && y > x){
            printf("Y is max");}
        else{printf("X is max");}
    
    }
    }
