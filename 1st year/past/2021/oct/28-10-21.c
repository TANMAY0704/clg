#include<stdio.h>
int main()
{ 
    int a,b,c,d,e,avg,f;
    printf("enter a:");
    scanf("%d",&a);   
    printf("enter b:");
    scanf("%d",&b);
    printf("enter c:");
    scanf("%d",&c);
    printf("enter d:");
    scanf("%d",&d);
    printf("enter e:");
    scanf("%d",&e);
    avg=(a+b+c+d+e)/5;


    printf("avg is=%d",avg);
     printf("\nenter a:");
    scanf("%d",&a);   
    printf("\n1enter b:");
    scanf("%d",&b);
    printf("\na= %d",a);
    printf("\nb= %d",b);
    a=a+b;
    b=a-b;
    a=a-b;


    printf("\na= %d",a);
    printf("\nb= %d",b);
    f=a;
    a=b;
    b=f;


    printf("\na= %d",a);
    printf("\nb= %d",b);
    float  r,ar,p,rate,t,si,net;
    ar=r*r*3.14;
    printf("\nenter r:");
    scanf("%f",&r);   
    ar=r*r*3.14;
    printf("\narea= %f",ar);
    printf("\nenter p:");
    scanf("%f",&p);
    printf("\nenter t:");
    scanf("%f",&t);   
    printf("\nenter :rate");
    scanf("%f",&rate);
    si=(p*rate*t)/100;
    net=si+p;
    printf("\nsi= %f",si);
    printf("\nnet= %f",net);
    
}