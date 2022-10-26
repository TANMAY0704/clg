#include<stdio.h>
int main(){
    unsigned int a=60;
    unsigned int b=13;
    int c=0;
    
    c=a&b;
    printf("c is %d\n",c);
    
    c=a|b;
    printf("c is %d\n",c);
    
    c=a^b;
    printf("c is %d\n",c);
    
    c=~a;
    printf("c is %d\n",c);
    
    c=a<<2;
    printf("c is %d\n",c);
    
    c=a>>2;
    printf("c is %d\n",c);
    
    return 0;
}