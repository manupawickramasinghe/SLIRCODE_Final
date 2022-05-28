#include <stdio.h>
int main(){
    float x =15 , y =10;
    float res;
    res = x + y;
    printf("%.0f" ,res);
    res = x-y;
    printf("\n%.0f" ,res);
    res = x*y;
    printf("\n%.0f" ,res);
    res = x/ y;
    printf("\n%.2f" ,res);
}