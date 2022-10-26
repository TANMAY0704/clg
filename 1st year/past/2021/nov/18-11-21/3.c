#include <stdio.h>
int main()
{
    float p,q,r,s;
    printf("enter p:");
    scanf("%f",&p);
    printf("enter q:");
    scanf("%f",&q);
    printf("enter r:");
    scanf("%f",&r);
    printf("enter s:");
    scanf("%f",&s);
    if(p*s==q*r)
        printf("\n the wheatstone bridge is balaced");
    else
       {
        s=r*q/p;
        printf("\nthe wheetstone brighe is not balanced it would be balanced if s=%f",s);
       }
    return 0;
}