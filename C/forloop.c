#include<stdio.h>
int main(){
    int count=1;
    for (long i = 0; i < 30000000; i++)
    {
        printf("Hello World times %d \n",count++);
    }
    
}