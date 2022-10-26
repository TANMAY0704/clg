#include <stdio.h>
void display1(int n,char ch)
{
    int i;

    for(i=0;i<n;i++)
        printf("%c",ch);
    
    printf("\n");
    return;
}
int main()
{
    display1(9,'$');
    display1(8,'a');
    return 0;
}