#include <stdio.h>
#include <stdlib.h>
int main(){
    int h,rate,m;
   printf("Enter the hours: ");
   scanf("%d",&h);
   printf("Enter the minutes: ");
   scanf("%d",&m);
   if (m>0){h = h + 1;}
   else  { h= h;} 
   if(h<=1){
       rate = h*40;
   }
   else if(h<=4){
       rate = (h-1)*30 + 40;
   }
   else {
       rate = (h-5)*20 + 40 + 120;
   }
   
   printf("The amount to pay is:  %d",rate);
}