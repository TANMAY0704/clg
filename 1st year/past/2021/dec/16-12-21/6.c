#include <stdio.h>
int main()
{
    int i,j,a[4][4],t=0;
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
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
     for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                t=1;
                break;
            }
        }
    }
    if(t==1)
        printf("its not symmetric");
    else
        printf("its symmetric");
    
   
}