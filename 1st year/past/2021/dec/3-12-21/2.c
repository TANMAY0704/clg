#include <stdio.h>
int ucase()
{
    char ch;
    printf("enter any char\n");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
        return(ch);
    else  
        return(ch-32);
}

int main()
{
    int a;
    a=ucase();
    printf("%c",a);


    return 0;
}