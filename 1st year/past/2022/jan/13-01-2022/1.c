#include <stdio.h>
int main()
{
    char src[20],des[20],a;
    int i,c=0;
    printf("enter string");
    gets(src);
    
    printf("enter char to check for\n");
    scanf("%c",&a);
    for(i=0;src[i];++i)
    {
        des[i]=src[i];
        if(src[i]=a)
            c++;

    }
    printf("%d\n",i);
    printf("%s\n%s",des,src);
    printf("\nfrequency of char is%d",c);
    return 0;
    


}
