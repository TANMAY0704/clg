#include <stdio.h>
int main()
{
    int a,b,c;
    for(a=0;a<5;a++)
    {
        for(c=0;c<2*a+1;c++)
            printf("$");
        for(b=0;b<4-a;b++)
            printf(" ");
        for(b=0;b<4-a;b++)
            printf(" ");
        for(c=0;c<2*a+1;c++)
            printf("$");
        for(b=0;b<4-a;b++)
            printf(" ");
        for(b=0;b<4-a;b++)
            printf(" ");
        for(c=0;c<2*a+1;c++)
            printf("$");
        
            
    printf("\n");
        
    }
    for(a=3;a>=0;a--)
    {
        for(c=0;c<2*a+1;c++)
            printf("$");
        for(b=0;b<4-a;b++)
            printf(" ");
        for(b=0;b<4-a;b++)
            printf(" ");
        for(c=0;c<2*a+1;c++)
            printf("$");
        for(b=0;b<4-a;b++)
            printf(" ");
        for(b=0;b<4-a;b++)
            printf(" ");
        for(c=0;c<2*a+1;c++)
            printf("$");
    printf("\n");
        
    }
    return 0;
}