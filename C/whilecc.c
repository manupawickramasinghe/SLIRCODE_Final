#include<stdio.h>
int main(){
    int x=0, y,z=0;
    while(x<10){
        printf("Enter the number:");
        scanf("%d",&y);
        if(y>z){
            z = y;
        }
        x++;
         }
    printf("%d",z);
}