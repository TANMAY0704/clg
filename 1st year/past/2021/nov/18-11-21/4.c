#include <stdio.h>
int main()
{
    int a,b,c,max;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter c");
    scanf("%d",&c);
    max=a;
    if (max<b)
        max=b;
    if(max<c)
        max=c;
    printf("the greatest number is %d",max);
    





    return 0;
}