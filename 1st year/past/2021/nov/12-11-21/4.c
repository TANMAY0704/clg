#include <stdio.h>

int main()
{
    int a,b,c,t;
    printf("input a:");
    scanf("%d",&a);
    printf("input b:");
    scanf("%d",&b);
    printf("input c:");
    scanf("%d",&c);
    t=(((a*a+b*b)==c*c)||((b*b+c*c)==a*a)||((c*c+a*a)==b*b));
    printf("%d",t);


   
    return 0;


}