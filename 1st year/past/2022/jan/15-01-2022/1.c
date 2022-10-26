#include <stdio.h>
#include <stdlib.h>
void increment()
{
    int m=1;
    printf("%d",m);
    m++;

}
void increment1()
{
    static int m=1;
    printf("%d",m);
    m++;

}
int main()
{
    increment();
    increment();
    increment();
    increment1();
    increment1();
    increment1();

}

