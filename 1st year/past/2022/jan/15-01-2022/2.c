#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,*ptr,i,sum=0;
    printf("enter number of elements");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("enter elemet of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("the sum of elements =%d",sum);
    free(ptr);
}