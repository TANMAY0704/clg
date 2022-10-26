#include <stdio.h>
int compare(char *s1,char *s2)
{
    int i,t=0;
    
    for(i=0;s1[i]||s2[i];i++)
    {
        if(s1[i]==s2[i])
            t=0;
        else
            return 0;
    }
    if(t==0)
        return 1;
}
int main()
{
    char str1[20],str2[20],c;
    int i;
    printf("enter str1");
    scanf("%s",str1);
    printf("enter str2");
    scanf("%s",str2);
    if(compare(str1,str2))
        printf("they are the same");
    else 
    {
        printf("they are not");
        for(i=0;str1[i]||str2[i];i++)
        {
            if(str1[i]!=str2[i])
            {
                printf("\nchar start to differ from %d last same char is %c",i,str1[i-1]);
                break;
            }

            
        }
    }

}