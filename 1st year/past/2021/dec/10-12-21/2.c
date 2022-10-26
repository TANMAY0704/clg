#include <stdio.h>
int sum();
int main()
{
    sum();
}
int sum()
{
    int a,b,c;
    printf("enter 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    printf("the sum is %d",a+b+c);
}