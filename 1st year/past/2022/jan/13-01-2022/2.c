#include <stdio.h>
int len(char*s)
{
    int k=-1;
    while(s[++k]);
        return k;

}
int main()
{
    char s1[20],s2[20];
    int i,j;
    printf("enter string 1");
    gets(s1);
    printf("enter string 2");
    gets(s2);
    j=len(s1);
    s1[j]=' ';
    for(i=0;s1[(j+1)]=s2[i];i++,j++)
    ;
    printf("\nafter joining %s",s1);

}