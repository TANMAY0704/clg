#include <stdio.h>
int pow();
int main()
{
    int x,y;
    printf("enter base");
    scanf("%d",&x);
    printf("enter power");
    scanf("%d",&y);
    printf("%d",pow(x,y));
}
int pow(int a, int b)
{
    if(b==1)
        return(a);
    else
        return(a*pow(a,b-1));
}
