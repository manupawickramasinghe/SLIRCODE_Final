#include <stdio.h>
#include <stdlib.h>
int main(){
    int h,rate;
   printf("Enter the working hours: ");
   scanf("%d",&h);
   if(h<=100){
       rate = h*100;
   }
   else if(h<=125){
       rate = (h-100)*120 + 10000;
   }
   else if(h<=150){
       rate = (h-125)*150 + 10000 + 3000;
   }
   else if(h<=200){
       rate = (h-150)*180 + 10000 + 3000 + 3750;
   }
   else {
       rate = (h-200)*120 + 10000 + 3000 + 3750+ 9000;
   }
   printf("The salaray is:  %d",rate);
}