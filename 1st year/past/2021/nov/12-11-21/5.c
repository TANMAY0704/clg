#include <stdio.h>
#include<math.h>
#define pi 3.14
#define g 9.8

int main()
{
    int l;
    float T;
    printf("Length      Time period");
    l=10;
    T=2*pi*(sqrt(l/g));
    printf("\n%d          %f",l,T);
    l=20;
    T=2*pi*(sqrt(l/g));
    printf("\n%d          %f",l,T);
    l=30;
    T=2*pi*(sqrt(l/g));
    printf("\n%d          %f",l,T);
    l=40;
    T=2*pi*(sqrt(l/g));
    printf("\n%d          %f",l,T);

    return 0;

}