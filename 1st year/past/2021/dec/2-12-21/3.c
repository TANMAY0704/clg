#include <stdio.h>
int main()

{   
    int i,j=21,k,l,m;
    b:
    for(i=1;j!=1;i++)
    {   
        a:
        printf("enter number of stciks u want 2 pick 1,2,3,4\n");
        scanf("%d",&k);
        if(k>4||k<0)
        {
            printf("enter valid number of sticks\n");
            goto a;
        }
        l=5-k;
        j-=k+l;
        printf("you picked %d sticks the computer picks %d sticks %d sticks left\n",k,l,j);

    }
    
    printf("only 1 stick is left you loose press 1 to try again anything else 2 quit");
    scanf("%d",&m);
    if(m==1)
        goto b;

    return 0;
}