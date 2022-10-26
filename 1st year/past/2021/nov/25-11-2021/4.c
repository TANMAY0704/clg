#include <stdio.h>
int main()
{
    int x,y,z=0,t;
    a:
    printf("\nenter number:");
    scanf("%d",&x);
    if(x<2)
    {
        printf("binary or -ve try again\n");
        goto a;
    }
    t=x/2;
    for(y=2;y<=t;y++)
    {
        if(x%y==0)
            {z=1;
            break;}

    }
    if(z)
    printf("not prime");
    else
    printf("prime");

    


    return 0;
}