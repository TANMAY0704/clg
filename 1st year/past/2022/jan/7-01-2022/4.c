#include <stdio.h>
int main()
{
    int i,j,a[4][5],b[]={0,0,0,0};
    int (*pa)[5],*pb;
    pa=a;
    pb=b;
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("enter element");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
            printf("%d",a[i][j]);
        printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        b[i]+=a[i][j];
    }
    for(i=0;i<4;i++)
    {
        printf("%d",b[i]);
        printf("\n");
    }

}