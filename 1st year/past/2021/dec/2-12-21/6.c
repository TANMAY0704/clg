#include <stdio.h>
int main()
{
    int a,b,c,d;
    do
    {
        printf("enter your income:");
        scanf("%d",&a);
        printf("\nenter hours worked:");
        scanf("%d",&b);
        if(b>40)
        {
            c=12*(b-40);
            printf("\nthe overtime pay for you is %d\n",c);
        }
        else
            printf("not elegiable for overtime");
        printf("enter 1 to do for next employee anything else 2 end");
        scanf("%d",&d);
    }while(d==1);
    
    return 0;
}