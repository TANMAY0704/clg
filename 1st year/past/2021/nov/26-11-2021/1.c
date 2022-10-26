#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=2;i+=1)
    {
        for(j=1;j<=2;j+=1)
        {
            if(i==j)
                continue;
            printf("\n%d%d",i,j);
        }
    }
    return 0;
}