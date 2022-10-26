#include <stdio.h>
int main()
{
    int a=0;
    while(a++<255)
        printf("ASCII value of %c=%d\n",a,a);
    return 0;
}