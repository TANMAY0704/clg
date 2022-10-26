#include <stdio.h>
int main()
{
    int x,y,z,sum,count;
    for(y=1;y<11;y+=1)
        {
            printf("%d.Enter number:",y);
            scanf("%d",&x);
            if(x%2)
            {
                count++;
                sum+=x;
            }
         }
         printf("number of odd nos=%d,their sum=%d",count,sum);
    return 0;
}