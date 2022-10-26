#include <stdio.h>
int main()
{
    int a,b=0,c,d,e,f;
    printf("enter number:");
    scanf("%d",&a);
    c=a;
    while(c!=0)
    {
        d=c%8;
        b=b*10+d;
        c=c/8;

    
    }
    while(b!=0)
    {
        e=b%10;
        f=f*10+e;
        b=b/10;


    }
    printf("%d is the octadecimal",f);
    

    return 0;
}