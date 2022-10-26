#include <stdio.h>
int gcd(int n,int m)
{
    return(n%m==0 ? m : gcd(m,n%m));
}
int main()
{
    int a,b,c,d;
    printf("enter 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(b>a)
        a=a+b;
        b=a-b;
        a=a-b;
    d=gcd(a,b);
    if(d>c)
        d=d+c;
        c=d-c;
        d=d-c;
    printf("%d",gcd(c,d));
    



    
}