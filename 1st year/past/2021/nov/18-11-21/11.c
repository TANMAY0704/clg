#include <stdio.h>
int main()
{
    int score,i=0,sum=0,avg;
    a :
    printf("enter score:");
    scanf("%d",&score);
    i++;
    sum=score+sum;
    if(i<11)
        goto a;
    avg=sum/11;
    printf("total score=%d,avg score=%d",sum,avg);

    
    return 0;
}