#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,(*a)[5],i,j,sum=0;
    printf("enter number of rows");
    scanf("%d",&n);
    a=(int(*)[5])malloc(n*5*sizeof(int));
    printf("enter elemet of array");
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    }
    printf("the sum of elements =%d",sum);
    free(a);
}