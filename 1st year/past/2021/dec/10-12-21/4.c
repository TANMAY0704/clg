#include <stdio.h>
int main()
{
    int a[10],i,sum,count=0,avg;
    for(i=0;i<10;i++)
       {
            printf("%d.enter number",i+1);
            scanf("%d",&a[i]);
       }
    for(i=0;i<10;i++)
       {
            sum=sum+a[i];
            if (a[i]>89)
                count++;
            
       }
    avg=sum/10;
    printf("avg =%d no of students above 90-%d",avg,count);
   
}