#include <stdio.h>
int main()
{
    int x=1,y=1;
    while(x>0)
    {
        printf("%d\n",x); 
        if(y<9)
            x+=1;
        else
            x=x-1;
        y+=1;
    }
    return 0;
}