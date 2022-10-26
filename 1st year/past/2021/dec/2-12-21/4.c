#include <stdio.h>
int main()
{   
    int a,b,c,d;
    printf("prime numbers from 1 to 300 r:\n");
    for(a=1;a<300;a++)
    {   
        c=a/2;
        d=1;
        for(b=2;b<=c;b++)
        {   
           
            if(a%b==0)
            {
                d=0;
                break;
            }    
       

        }
         if(d==1 && a>1)
            printf("%d ",a);
    }
    return 0;
}