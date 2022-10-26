#include <stdio.h>
#include<stdlib.h>
union Data
{
    int a;
    float b;
    char c[20];
};
int main()
{
    union Data t;
    t.a=10;
    t.b=20;
    t.c="adsd";
    printf("%s",t.c);
        
    
}