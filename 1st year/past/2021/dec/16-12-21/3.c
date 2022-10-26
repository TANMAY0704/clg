#include <stdio.h>
int main()
{
    int a[20],i,count;
    for(i=0;i<20;i++)
       {
            printf("%d.enter number",i+1);
            scanf("%d",&a[i]);
       }
    for(i=0;i<20;i++)
       {
        printf("%d ",a[i]);    
       }
    count=0;

    for(i=0;i<20;i++)
       {
            
            if(a[i]<0)
                count++;
            
       }
    printf("\nno of -ve numbbers are=%d",count);
    count=0;
    for(i=0;i<20;i++)
       {
            
            if(a[i]>0)
                count++;
            
       }
    printf("\nno of +ve numbbers are=%d",count);
    count=0;
    for(i=0;i<20;i++)
       {
            
            if(a[i]%2==0)
                count++;
            
       }
    printf("\nthe number of even numbers =%d",count);
    count=0;
    for(i=0;i<20;i++)
       {
            
            if(a[i]%2==1||a[i]%2==-1)
                count++;
            
       }
    printf("\nthe number of odd numbers =%d",count);
    count=0;
}