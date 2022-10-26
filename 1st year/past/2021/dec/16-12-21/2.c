#include <stdio.h>
int main()
{
    int i,j,a[5][5],b[5][5],t;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("enter input for row=%d and column=%d:\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",a[i][j]);
        
        }
    printf("\n");
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            b[j][i]=a[i][j];
        
        }
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",b[i][j]);
        
        }
    printf("\n");
    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",a[i][j]);
        
        }
    printf("\n");
    }

}