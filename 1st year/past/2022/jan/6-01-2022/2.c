int main()
{
    int x[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
      
    printf("%d\n",&x);
    printf("%d\n",*&x);
    printf("%d\n",*x);
    printf("%d\n",**x);
    printf("%d\n",*(*(x+2)+1));
    return 0;
}