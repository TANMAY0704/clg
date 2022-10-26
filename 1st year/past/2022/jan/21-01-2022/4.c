#include <stdio.h>
int main()
{
    FILE *f;
    int noc=0,nob=0,not=0,non=0;
    char ch;
    f=fopen("2.c","r");
    while((ch=fgetc(f))!=EOF)
    {
        noc++;
        if(ch==' ')
            nob++;
        if(ch=='\t')
            not++;
        if(ch=='\n')
            non++;
               
    }
    fclose(f);
    printf("\nNo of charaters =%d",noc);
    printf("\nNo of blanks =%d",nob);
    printf("\nNo of tabs=%d",not);
    printf("\nNo of lines=%d",non);
    
    
    return 0;
}