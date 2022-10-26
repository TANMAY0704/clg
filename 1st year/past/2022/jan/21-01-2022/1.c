#include <stdio.h>
int main()
{
    FILE *f;
    int i,a[]={10,2,3,4,5,6,7,8,9};
    f=fopen("data.out","w");
    for(i=0;i<10;i++)
    {
        fprintf(f,"%d",a[i]);

    }
    fclose(f);
    return 0;






}