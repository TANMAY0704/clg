#include <stdio.h>
int fib(int n)
{
    return(n==1 || n==2 ? 1 : fib(n-2)+fib(n-1));    
}
int main()
{
    int a,f,i;
    printf("enter number:");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        f=fib(i+1);
        printf("%d\n",f);
    }
    return 0;


}