#include <stdio.h>
int main()
{
    int p,c,m,e,b,per;
    printf("enter marks in the five subjects:");
    scanf("%d%d%d%d%d",&p,&c,&m,&e,&b);
    per=((int)(p+m+b+e+c)/5)+0.9;
    if (per>=60)
        printf("first division");
    else if (per>=50)
        printf("sencond diviosn");
    else if (per>=40)
        printf("third divion");
    else
        printf("fail");
    return 0;
}