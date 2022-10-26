#include <stdio.h>
int main()
{
    int b,c;
    printf("enter number :");
    scanf("%d",&b);
    printf("the factors of the number r:\n");
    for(c=1;c<=b;c++)
        {
            if(b%c==0)
                printf("%d ",c);
         }
    return 0;
}