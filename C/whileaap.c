#include<stdio.h>

int main(){
    int x=0, y=3;
    while(x<5){
        if(x !=y){
            printf ("A\n");
        }
        else{
            printf("B\n");
        }
        x++;
    }
}