#include <stdio.h>
int main()
{
    int m[10],i,a,s=-1;
    for(i=0;i<10;i++)
       {
            printf("%d.enter number",i+1);
            scanf("%d",&m[i]);
       }
    printf("enter item");
    scanf("%d",&a);
    for(i=0;i<10;i++)
       {
            if(m[i]==a)
            {
                s=i;
                break;
            }
                
       }
    if (s==-1) 
        printf("item not in array");
    else
        printf("item in positon %d",s);
    return 0;
}
