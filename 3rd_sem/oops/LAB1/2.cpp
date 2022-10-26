#include <iostream>
using namespace std;

int main()
{
    int a,b,c,max;
    cout<<"enter 3 numbers";
    cin>>a>>b>>c;
    max=a;
    if(b>max)
    {   max=b;}
    if(c>max)
    {    max=c;}
     
    
    cout<<"the largest number is "<<max;
    return 0;
}