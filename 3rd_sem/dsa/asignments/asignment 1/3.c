#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void input(struct node *start)
{
    int s;
    struct node *nnode;
    printf("enter data");
    scanf("%d",&start->data);
    c:
    printf("press 1 to continue");
    scanf("%d",&s);
    start->next=NULL;
    if(s==1)
    {
        nnode=(struct node*)malloc(sizeof(struct node));
        if(nnode==NULL)
        {
            printf("not enouch space");
            exit(0);
        }
        start->next=nnode;
        start=nnode;
        printf("enter data");
        scanf("%d",&start->data);
        
        goto c;
    }    
    
}
void print(struct node *start)
{
    while(start!=NULL)
    {
        printf("%d ",start->data);
        start=start->next;
    }
    printf("\n");
    
}
void add(struct node *a,struct node *b)
{
    
    while(a->next!=NULL)
        a=a->next;
    a->next=b;
   
    
}
int main()
{
    struct node *a,*b,*c;
    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
    if(a==NULL||b==NULL)
    {
        printf("not enouch space");
        exit(0);
    }
    printf("enter ll 1\n");
    input(a);
    printf("enter ll 2\n");
    input(b);
    printf("ll 1 is\n");
    print(a);
    printf("ll 2 is\n");
    print(b);
    add(a,b);
    printf("the lists added to the end are\n");
    print(a);
}