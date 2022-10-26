#include <stdio.h>
int main()
{
    char *p[5];
    char a[]="name1",b[]="name2",c[]="name3",d[]="name4",e[]="name5";
    int i,j,k=0;
    p[0]=a;
    p[1]=b;
    p[2]=c;
    p[3]=d;
    p[4]=e;
    
    for(i=0;i<5;i++)
    {
      printf(" \n%s",p[i]);  
    }
    for(i=0;i<5;i++)
    {
        for(j=0;p[i][j];j++)
        {
           k+=p[i][j]=='a';
        }
    }   
    printf("\nnumber of a's%d",k);
   
    
    
}