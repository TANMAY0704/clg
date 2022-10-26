#include <stdio.h>
struct book
{
    char name[20];
    float price;
    int pages;
};
int main()
{
    int i;
    struct book b[10];
    for(i=0;i<10;i++)
    {
        printf("enter name price pages of book %d",i);
        scanf("%s%f%d",b[i].name,&b[i].price,&b[i].pages);
    }
     for(i=0;i<10;i++)
    {
        printf("\nname=%s price=%f pages of book=%d ",b[i].name,b[i].price,b[i].pages);
        
    }

}