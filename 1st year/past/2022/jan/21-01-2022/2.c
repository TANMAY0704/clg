#include <stdio.h>
int main()
{
    FILE *f;
    int i,a[10];
    f=fopen("data.in","r");
    for(i=0;i<10;i++)
    {
        fscanf(f,"%d",&a[i]);

    }
    fclose(f);
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);

    }
    
    return 0;
}