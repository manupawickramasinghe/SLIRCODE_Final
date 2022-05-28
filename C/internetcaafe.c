#include <stdio.h>
#include <stdlib.h>
int main(){
    float h,rate;
   printf("Enter the hours (as a decimal): ");
   scanf("%f",&h);
   if(h<=1){
       rate = h*40;
   }
   else if(h<=4){
       rate = (h-1)*30 + 40;
   }
   else {
       rate = (h-4)*20 + 40 + 90;
   }
   
   printf("The amount to pay is:  %.2f",rate);
}