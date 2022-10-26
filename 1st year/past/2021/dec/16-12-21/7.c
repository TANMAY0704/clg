#include <stdio.h>
int main()
{
    int a[10],i,b[10];
    for(i=0;i<10;i++)
       {
            printf("%d.enter number",i+1);
            scanf("%d",&a[i]);
       }
    for(i=0;i<10;i++)
       {
        printf("%d ",a[i]);    
       }
    for(i=0;i<10;i++)
       {
        b[9-i]=a[i];
       }
    for(i=0;i<10;i++)
       {
        printf("\n%d ",b[i]);    
       }
    
}