#include <stdio.h>
int main()
{   
    int a,b,c,d,e,f;
    printf("enter number to do functions on:\n");
    scanf("%d",&b);
    a:

    printf("1.factorial of a number\n2.prime or not\n3.odd or even\n4.exit\nenter your choice:");
    scanf("%d",&a);

    if(a==1)
    {
        printf("the factors of the number r:\n");
        for(c=1;c<=b;c++)
            {
                if(b%c==0)
                    printf("%d ",c);
            }
    }
    else if(a==2)
    {
        e=b/2;
        for(d=2;d<=e;d++)
        {   
            f=1;
            if(b%d==0)
            {
                f=0;
                printf("its not prime");
                break;

            }
        if(f==1)
            printf("%d is prime",b);
                   

        }
    }
    else if(a==3)
    {
        if(b%2==0)
            printf("its even");
        else
            printf("its odd");
    }
    else if(a==4)
        printf("thank you");
    else
    {
        printf("plz enter a valid option");
        goto a;
    }
    
    return 0;
}