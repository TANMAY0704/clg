#include <stdio.h>
int main()
{
    int a,b,c,d=1;
    printf("enter base");
    scanf("%d",&a);
    printf("\nenter power");
    scanf("%d",&b);
    for(c=1;c<=b;c++)
    {
        d=d*a;
    }
    printf("%d",d);
    return 0;
}