#include <stdio.h>
#define g 9.8
int main()
{ 
    int a,b,sum;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    sum=a+b;
    printf("sum=%d",sum);

    printf("\n\n\n");

    float x1,x2,y1,y2,m;
    printf("\nenter x1:");
    scanf("%f",&x1);
    printf("enter x2:");
    scanf("%f",&x2);
    printf("enter y1:");
    scanf("%f",&y1);
    printf("enter y2:");
    scanf("%f",&y2);
    m=(y2-y1)/(x2-x1);
    printf("\nslope is=%f",m);

    printf("\n\n\n");

    int pt,st,pv,sv;
    printf("enter pv:");
    scanf("%d",&pv);
    printf("enter pt:");
    scanf("%d",&pt);
    printf("enter st:");
    scanf("%d",&st);
    sv=pv*st/pt;
    printf("sv=%d",sv);

    printf("\n\n\n");

    int r1,r2,r3,voltage,rs;
    float is,z,rp,ip;
    printf("enter r1,r2,r3:");
    scanf("%d%d%d",&r1,&r2,&r3);
    printf("input voltage");
    scanf("%d",&voltage);
    rs=r1+r2+r3;
    is=(float)voltage/rs;
    z=1.0/r1+1.0/r2+1.0/r3;
    rp=1/z;
    ip=voltage/rp;
    printf("\nrs=%d is=%f",rs,is);
    printf("\nrp=%f ip=%f",rp,ip);

    printf("\n\n\n");
    
    int u,t;
    float v,s;
    printf("enter u:");
    scanf("%d",&u);
    t=1;
    v=u+g*t;
    s=u*t+g*t*t/2;
    printf("\nv=%fm/s and s=%f m after t=%d",v,s,t);
    t=2;
    v=u+g*t;
    s=u*t+g*t*t/2;
    printf("\nv=%fm/s and s=%f m after t=%d",v,s,t);
    t=3;
    v=u+g*t;
    s=u*t+g*t*t/2;
    printf("\nv=%fm/s and s=%f m after t=%d",v,s,t);
    t=4;
    v=u+g*t;
    s=u*t+g*t*t/2;
    printf("\nv=%fm/s and s=%f m after t=%d",v,s,t);



    return 0;
}