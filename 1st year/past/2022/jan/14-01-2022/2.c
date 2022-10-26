#include <stdio.h>
struct employee
{
    char name[20];
    char add[20];
    float salary;
    int age;
};
int main()
{
    int i;
    float sum=0,avg;
    struct employee b[4];
    for(i=0;i<4;i++)
    {
        printf("enter name adress salary age of employee %d :",i+1);
        scanf("%s%s%f%d",b[i].name,b[i].add,&b[i].salary,&b[i].age);
    }
     for(i=0;i<4;i++)
    {
        printf("\nname=%s address-%s salary=%f age=%d ",b[i].name,b[i].add,b[i].salary,b[i].age);
        sum+=b[i].salary;
    }
    avg=sum/4;
    printf("\navg salary is=%f",avg);

}