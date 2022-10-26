#include <stdio.h>
int factorial(int n)
{
    if(n==1)
        return(1);
    else    
        return(n*factorial(n-1));

}
int main()
{
    int a,f;
    printf("enter number:");
    scanf("%d",&a);
    f=factorial(a);
    printf("%d",f);
    return 0;


}