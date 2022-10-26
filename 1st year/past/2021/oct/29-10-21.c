#include<stdio.h>
#define pi 3.14
#define sq(a) (a)*(a)
int main()
{
    float  r,ar,c;
    printf("enter r:");
    scanf("%f",&r);   
    ar=sq(r)*pi;
    c=2*pi*r;
    printf("\narea= %f",ar);
    printf("\ncircumference=%f\n\n\n",c);


    float g,da,ta,hra,d,net,b;
    printf("enter basic salary:");
    scanf("%f",&b);
    da=0.3*b;
    ta=0.2*b;
    d=0.2*b;
    hra=0.05*b;
    g=b+hra+ta+da;
    net=g-d;
    printf("\n gross salary=%f",g);
    printf("\n net salary=%f",net);
    printf("\n DA=%f",da);
    printf("\n TA=%f",ta);
    printf("\n hra=%f",hra);
    printf("\n d=%f",d);
    return 0;

    



}