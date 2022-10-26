#include <stdio.h>
int main()
{
    int a,b,c;
    for(a=7;a>=0;a--)
    {
        for(c=0;c<2*a+1;c++)
            printf("A");
        for(b=0;b<6-a;b++)
            printf(" ");
        for(b=0;b<7-a;b++)
            printf(" ");
        for(c=0;c<2*a+1;c++)
            printf("A");
        for(b=0;b<7-a;b++)
            printf(" ");
        for(b=0;b<7-a;b++)
            printf(" ");
        for(c=0;c<2*a+1;c++)
            printf("A");
    printf("\n");
        
    }
    return 0;
}