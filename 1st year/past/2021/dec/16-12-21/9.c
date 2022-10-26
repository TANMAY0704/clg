#include <stdio.h>
int main()
{
    int i,j,a[5][5],max;
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
    max=a[0][0];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(max<a[i][j])
                max=a[i][j];
        
        }
    }
    printf("max is=%d",max);

}