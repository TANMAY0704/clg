#include <stdio.h>
int find_max(int l)
{
    int max,n,i;
    for(i=0;i<l;i++)
    {
        printf("enter next number for finding max:");
        scanf("%d",&n);
        if(max<n)
            max=n;
        
    }
    return(max);
}
int count_leader(int l)
{

    int max,n,i,count=0;
    for(i=0;i<l;i++)
    {
        printf("enter next number for counting leader:");
        scanf("%d",&n);
        if(max<n)
        {
            count++;
            max=n;
        } 
        
    }
    return(count);
}
int main()
{
    printf("%d%d",find_max(3),count_leader(5));
    

}