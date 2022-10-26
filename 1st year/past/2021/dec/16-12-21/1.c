#include <stdio.h>
int main()
{
    int i,j,a[4][5];
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("enter input for row=%d and column=%d:\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",a[i][j]);
        
        }
    printf("\n");
    }
}