#include <stdio.h>
#include <stdlib.h>
struct polly
{
    int maxexpox;
    int coeffx[11];
    int maxexpoy;
    int coeffy[11];
};
void input(struct polly *a)
{
    int i;
    printf("enter max expo for x");
    scanf("%d",&a->maxexpox);
    printf("enter max expo for y");
    scanf("%d",&a->maxexpoy);
    if(a->maxexpox>10)
        printf("taking max expo for x=10");
     for(i=0;i<11;i++)
        a->coeffx[i]=0;
    if(a->maxexpoy>10)
        printf("taking max expo for y=10");
     for(i=0;i<11;i++)
        a->coeffy[i]=0;
    
    for(i=0;i<a->maxexpox+1;i++)
    {
        printf("enter coeff of x^%d=",i);
        scanf("%d",&a->coeffx[i]);
    }
    for(i=0;i<a->maxexpoy+1;i++)
    {
        printf("enter coeff of y^%d=",i);
        scanf("%d",&a->coeffy[i]);        
    }
}
void print(struct polly *a)
{
    int i;
    for(i=0;i<a->maxexpox+1;i++)
        printf("(%dx^%d)+",a->coeffx[i],i);     
    for(i=0;i<a->maxexpoy;i++)
        printf("(%dy^%d)+",a->coeffy[i],i); 
    printf("(%dy^%d)\n",a->coeffy[a->maxexpoy],a->maxexpoy);
}
void add(struct polly *a,struct polly *b,struct polly *c)
{
    int i;
    if(a->maxexpox<b->maxexpox)
        c->maxexpox=b->maxexpox;
    else
        c->maxexpox=a->maxexpox;
    for(i=0;i<c->maxexpox+1;i++)
        c->coeffx[i]=a->coeffx[i]+b->coeffx[i];
    if(a->maxexpoy<b->maxexpoy)
        c->maxexpoy=b->maxexpoy;
    else
        c->maxexpoy=a->maxexpoy;
    for(i=0;i<c->maxexpoy+1;i++)
        c->coeffy[i]=a->coeffy[i]+b->coeffy[i];
}
int main()
{
    struct polly a,b,c;
    input(&a);
    input(&b);
    add(&a,&b,&c);
    print(&a);
    print(&b);
    print(&c);
    
}