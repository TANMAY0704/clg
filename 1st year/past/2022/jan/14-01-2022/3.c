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
    struct book *ptr, b[10];
    ptr=b;

    for(i=0;i<10;i++)
    {
        printf("\nenter name price pages of book %d ",i+1);
        scanf("%s%f%d",(ptr+i)->name,&(ptr+i)->price,&(ptr+i)->pages);
    }
     for(i=0;i<10;i++)
    {
        printf("\nname=%s price=%f pages of book=%d ",(ptr+i)->name,(ptr+i)->price,(ptr+i)->pages);
        
    }
    return 0;

}