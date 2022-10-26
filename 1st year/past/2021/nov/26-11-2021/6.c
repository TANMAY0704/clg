#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter number:");
    scanf("%d",&a);
    c=a;
    do 
    {
        b=b*10+a%10;3;
        a=a/10;
    }
    while(a!=0);
    printf("\n the rev of the nu is=%d\n",b);
    if(c==b)
        printf("the number is a palindrome");
    else
        printf("its not");



    return 0;
}