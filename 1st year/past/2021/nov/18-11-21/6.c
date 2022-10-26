#include <stdio.h>
int main()
{
    int a;
    printf("enter acc of vehical ");
    scanf("%d",&a);
    if(a==0)
        printf("the vehical moves with constant velocity");
    else if(a>0)
        printf("the vehicals velocity is increasing");
    else
        printf("the vehicals velocity is decreasing");

}