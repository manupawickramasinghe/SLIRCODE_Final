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
    if((x<y && y<z) || (x>y && y>z))
    {
      printf("Y is Mid");}
    else {if((x<z && z<y) || (x>z && y<z))
    {
      printf("Z is Mid");}
      else {if((x>z && x<y) || (x<z && y>x))
    {
      printf("X is Mid");}}
      }}
