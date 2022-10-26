#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter sides of the triangle");
    scanf("%d%d%d",&a,&a,&a);
    if (((a+b)>c)&&((b+c)>a)&&((c+a)>b))
        printf("its a triangle");
    else 
        printf("its not an triangle");
    return 0;
}