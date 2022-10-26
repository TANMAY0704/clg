#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,*a,i,j,sum=0;
    printf("enter number of elements");
    scanf("%d",&n);
    a=(int(*))calloc(n,sizeof(int));
    printf("enter elemet of array");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(*a<*(a+i))
        {
            *a=*(a+i);
        }

    }
    printf("largest =%d",*a);
    free(a);
}