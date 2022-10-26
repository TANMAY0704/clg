#include <stdio.h>
int main()
{
    int po;
    printf("press 1 if the obj is at infinity:\n");
    printf("press 2 if the obj is beyond c\n");
    printf("press 3 if the obj is at c\n ");
    printf("press 4 if the obj is between c and f\n");
    printf("press 5 if the object is at f\n");
    scanf("%d",&po);
    if (po==1)
        {printf("the image is at f");
        printf("\nthe size of the image is highly diminished");}
    else if(po==2)
        {printf("the image is at");
        printf("\nthe size of the image is");}
    else if(po==1)
        {printf("the image is between f and c");
        printf("\nthe size of the image is diminished");}
    else if(po==3)
        {printf("the image is at c");
        printf("\nthe size of the image is the same");}
    else if(po==4)
       {printf("the image is beyond c");
        printf("\nthe size of the image is enlarged");}
    else if(po==5)
        {printf("the image is at infinty");
        printf("\nthe size of the image is highly enlarged");}
    else 
        printf("invalid input");



    return 0;
}