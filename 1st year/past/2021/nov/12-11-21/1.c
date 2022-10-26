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
    t=(((a+b)>c)&&((b+c)>a)&&((c+a)>b));
    printf("%d",t*(a+b+c));


   
    return 0;


}