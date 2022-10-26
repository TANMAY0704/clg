#include <stdio.h>
int main()
{
    FILE *f;
    
    char ch;
    f=fopen("1.c","r");
    while((ch=fgetc(f))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(f);
    
    return 0;
}