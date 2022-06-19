#include<stdio.h>
int main(){
    int i ,j,x[31][31]; // initialize the array[][]
    long k =0;
    for (i = 0; i < 31; i++)
    {
        for ( j = 0; j < 31; j++)
        {
            x[i][j] = k++;
            printf("%d  ",x[i][j]);
        }
        printf("\n");
    }
    
}