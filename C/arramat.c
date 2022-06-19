#include<stdio.h>
int main(){
    int i ,j,k;
    int x[5][1],y[5][1];
    for (i = 0; i < 5; i++)
    {
        for ( j = 0; j < 1; j++)
        {
            printf("Enter x[%d] y[%d] value:  ",i,j);
            scanf("%d",&x[i][j]);
            
        }
    }
      for (i = 0; i < 5; i++)
    {
        for ( j = 0; j < 1; j++)
        {
            for(i = 0; i < 5; j++){
            if(x[i][1] < x[i+1][1]){
                k++;
                y[k][1] =  x[i][j];
            }}
        printf("%d  ",y[i][j]);    
        }
        printf("\n");
    }
}