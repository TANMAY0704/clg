#include <stdio.h>
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("%d=x,%d=y",*x,*y);
}
int main()
{
     int a=10,b=20;
     swap(&a,&b);
     printf("a=%d,b=%d",a,b);
}