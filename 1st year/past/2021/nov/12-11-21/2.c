#include <stdio.h>

int main()
{
    float x1,x2,y1,y2,m1;
    printf("\nenter x1:");
    scanf("%f",&x1);
    printf("enter x2:");
    scanf("%f",&x2);
    printf("enter y1:");
    scanf("%f",&y1);
    printf("enter y2:");
    scanf("%f",&y2);
    m1=(y2-y1)/(x2-x1);
    float x3,x4,y3,y4,m2;
    printf("\nenter x3:");
    scanf("%f",&x3);
    printf("enter x4:");
    scanf("%f",&x4);
    printf("enter y3:");
    scanf("%f",&y3);
    printf("enter y4:");
    scanf("%f",&y4);
    m2=(y4-y3)/(x4-x3);
    printf("\nslope of line 1 is=%f",m1);
    printf("\nslope of line 2 is=%f",m2);
    printf("\nshow 1 if perpendicular else anyother number:%f",(m1*m2*(-1)));
    return 0;

}