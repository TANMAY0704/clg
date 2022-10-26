#include <stdio.h>
int main()
{
    int score,count,i=1;
    a:
    printf("\n enter score:");
    scanf("%d",&score);
    if(score<0)
        {
        printf("score cant b -ve");
        goto a;
        }
    count+=score/100;
    if(i<11)
        {
        i++;
        goto a;
        }
   
    printf("total no of centuries is=%d",count);
    return 0;
}