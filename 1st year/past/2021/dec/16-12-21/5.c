#include <stdio.h>
int main()
{
    int i,j,a[4][4],b[4][4];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("enter input for row=%d and column=%d:\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("enter input for row=%d and column=%d:\n",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);
        
        }
    printf("\n");
    }
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",b[i][j]);
        
        }
    printf("\n");
    }
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            a[i][j]+=b[i][j];
            printf("%d ",a[i][j]);
        
        }
    printf("\n");
    }
}