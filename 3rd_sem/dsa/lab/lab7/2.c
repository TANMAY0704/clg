#include <stdio.h>
#include <stdlib.h>
struct node
{
    int cgpa;
    int rlno;
    struct node * next;
};
struct node *push(struct node *top)
{
    
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    
    if(temp==NULL)
    {
        printf("out of memory");
        exit(0);
    }
    printf("enter rlno");
    scanf("%d",&temp->rlno);
    printf("enter cgpa");
    scanf("%d",&temp->cgpa);
    

    temp->next=top;
    top=temp;
    return(top);
    
}
struct node *pop(struct node *top)
{
    struct node *temp;
    temp=top;
    top=top->next;
    free(temp);
    return(top);
}
void dispaly(struct node *top)
{
    struct node *temp;
    temp=top;
    while(temp!=NULL)
    {
        printf("%d-%d\n",temp->rlno,temp->cgpa);
        temp=temp->next;
    }
}
int main()
{
    struct node *a;
    int i;
    a=(struct node*)malloc(sizeof(struct node));
    if(a==NULL)
    {
        printf("out of memory");
        exit(0);
    }
    printf("enter rlno");
    scanf("%d",&a->rlno);
    printf("enter cgpa");
    scanf("%d",&a->cgpa);
    a->next=NULL;
    r:
    printf("1.push\n2.pop\n3.display\nExit");
    scanf("%d",&i);

    switch (i)
    {
    case 1:
        a=push(a);
        goto r;
        break;
    case 2:
        a=pop(a);
        goto r;
        break;
    case 3:
        dispaly(a);
        break;
    default:
        printf("EXIT");
        break;
    }
    
}