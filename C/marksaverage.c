#include <stdio.h>
int main(){
    float m1, m2,m3, avg;
    char i;
    printf("Enter the marks for first subject:  ");
    scanf("%f", &m1);
    printf("\nEnter the marks for second subject: ");
    scanf("%f", &m2);
    printf("\nEnter the marks for third subject: ");
    scanf("%f", &m3);
    avg = (m1+ m2+ m3) / 3;
    printf("\nAverage marks is: %.2f" , avg);
    scanf("%c", &i);
    return 0;
}