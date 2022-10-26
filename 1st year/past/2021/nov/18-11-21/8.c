#include <stdio.h>
int main()
{
    char username[10];
    int pass;
    printf("enter username:");
    scanf("%s",&username);
    printf("enter password:");
    scanf("%d",&pass);
    if (strcmp(username,"username")==0)
        {
        if(pass==1234)
            printf("welcome");
        else
            printf("password is wrong");
        }
    else
        printf("username is wrong");

    return 0;
}