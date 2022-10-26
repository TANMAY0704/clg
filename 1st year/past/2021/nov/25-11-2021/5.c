#include <stdio.h>
#include <math.h>
#define g 9.8
#define pi 3.14
int main()

{
    int l;
    for(l=10;l<60;l=l+10)
        printf("\n%f is the time period for lenghth %d",(2*pi*sqrt(l/g)),l);
    
    return 0;
}