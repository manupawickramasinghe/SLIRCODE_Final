#include<stdio.h>
int main(){
    int i=1,j= 1;
    while(i<1000){
        //i++;
        i = j*j*j ;
        printf("%i\n" ,i);
        j++;
    }
}