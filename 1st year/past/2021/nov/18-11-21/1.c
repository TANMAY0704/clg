#include <stdio.h>
int main()
{
    int age,marks;
    printf("enter age:");
    scanf("%d",&age);
    printf("enter marks:");
    scanf("%d",&marks);
    marks=marks+40;
    if(age>50)
        marks=marks+20;
    printf("marks are=%d",marks);

    return 0;
}