//display 3 times table while loop
#include<stdio.h>
int main(){
    int x =0 , y =1;
    while (x<12)
    {
        printf("3 x %d = %d\n"  ,y,y*3);
        x++;
        y++;
    }
}