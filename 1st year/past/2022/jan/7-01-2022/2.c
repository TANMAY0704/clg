#include <stdio.h>
int compare(int*a,int*b,int n)
{
    int i=0,s1=0,s2=0;
    for(i=0;i<n;i++)
    {
        s1+=a[i];
        s2+=b[i];
    }
    if(s1==s2)
        return 0;
    else if (s1>s2)
        return 1;
    else
        return 2;
            

}
int main()
{
    int x[20],y[15],i,g;
    for(i=0;i<20;i++)
    {
        printf("\nenter element:");
        scanf("%d",&x[i]);
    }
    for(i=0;i<15;i++)
    {
        printf("\nenter element:");
        scanf("%d",&y[i]);
    }
    g=compare(x,y,10);
    if(!g)
        printf("equal");
    else if(g==1)
        printf("1st is greater than 2nd");
    else
        printf("2nd is greater than 1st");
}