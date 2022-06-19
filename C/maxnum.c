#include <stdio.h>
int main(){
    int x , y ,z;
    printf("Enter a number x: ");
    scanf("%d", &x);
    printf("Enter a number y: ");
    scanf("%d", &y);
    printf("Enter a number z: ");
    scanf("%d", &z);
    //printf("%d " ,x);
    if(x<y)
    {
      if(y<z)
    {
        printf("Z is max");
    }
    else{ printf("y is max");}  
            }
    else {
        if(z > x){
        printf("Z is max");
    }
    else{ printf("x is max");}  
            }}