#include <stdio.h>
int main()
{
    int x[12]={1,2,3,4,5,6,7,8,9,10,11,12}, *b,i,s=0;
    b=x;
    for(i=0;i<12;i++)
    {
        printf("%d\n",*(x+i));
        s+=*(x+i);
    
    }
    printf("%d",s);
    return 0;
    
}