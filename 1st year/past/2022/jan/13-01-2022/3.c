#include <stdio.h>
int rowadd(int(*pa)[5],int*pb)
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        pb[i]+=pa[i][j];
        
    }
    
}
int main()
{
    int i,j,a[4][5],b[]={0,0,0,0},c;
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
    rowadd(a,b);
    for(i=0;i<4;i++)
    {
        printf("%d",b[i]);
        printf("\n");
    }

}


