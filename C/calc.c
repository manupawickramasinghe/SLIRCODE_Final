#include<stdio.h>
int main(){
    int n1,n2,result;
    char op;
    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("\nEnter the second number: ");
    scanf("%d",&n2);
    printf("\nEnter an operation: ");
    printf("\nAdd +,Substract -, Divide / , Multiply * ");
    scanf(" %c", &op);
    if (op== '+')
    {
        result =n1+n2;
        printf("Sum= %d \n", result);
    }
    if (op== '-')
    {
        result =n1-n2;
        printf("Subs= %d \n", result);
    }if (op== '*')
    {
        result =n1*n2;
        printf("multiply= %d \n", result);
     }if (op== '/')
    {
        result =n1/n2;
        printf("Divide= %d \n", result);
 }   
}
