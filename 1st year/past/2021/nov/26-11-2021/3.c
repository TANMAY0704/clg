#include <stdio.h>
int main()
{
    int a,b,c;
    for(a=0;a<5;a++)
    {
        for(b=0;b<4-a;b++)
            printf(" ");
        for(c=0;c<2*a+1;c++)
            printf("%d",a+1);
        
        for(b=0;b<4-a;b++)
            printf(" ");
        for(b=0;b<4-a;b++)
            printf(" ");
        for(c=0;c<2*a+1;c++)
            printf("%d",a+1);
    printf("\n");
        
    }
    for(a=3;a>=0;a--)
    {
        for(b=0;b<4-a;b++)
            printf(" ");
        for(c=0;c<2*a+1;c++)
            printf("%d",a+1);
        
        for(b=0;b<4-a;b++)
            printf(" ");
        for(b=0;b<4-a;b++)
            printf(" ");
        for(c=0;c<2*a+1;c++)
            printf("%d",a+1);
    printf("\n");
        
    }
    return 0;
}