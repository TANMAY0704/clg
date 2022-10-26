#include <stdio.h>
int sod(int n)
{
    if(n%10==0)
        return(n);
    else 
        return(n%10+sod(n/10));
}
int main()
{
    int a,f;
    printf("enter number:");
    scanf("%d",&a);
    f=sod(a);
    printf("%d",f);
    return 0;


}
