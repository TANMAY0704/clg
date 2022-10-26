#include <stdio.h>
void area();
int main()
{
    area();
    return 0;
}
void area()
{
    float a;
    int r;
    printf("enter r:");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("area of the circle is %f",a);

}