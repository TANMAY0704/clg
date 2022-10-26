#include <stdio.h>
int main()
{
    float bs,gs,da,hra;
    printf("enter bs:");
    scanf("%f",&bs);
    if (bs<1500)
        {
        hra=bs*10/100;
        da=bs*40/100;
        }
    else
        {
        hra=500;
        da=bs*50/100;
        }
    gs=bs+hra+da;
    printf("gs=%f",gs);

    return 0;
}