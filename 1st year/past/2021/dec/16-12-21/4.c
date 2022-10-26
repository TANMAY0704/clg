#include <stdio.h>
int main()
{
    int i,j,a[3][4],c;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("enter input for row=%d and column=%d:\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter constant to be multiplyed:");
    scanf("%d",&c);
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",a[i][j]);
        
        }
    printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            a[i][j]=c*a[i][j];
            printf("%d ",a[i][j]);
        
        }
    printf("\n");
    }
}