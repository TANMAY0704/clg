#include <iostream>
using namespace std;

int main()
{
    int a,b,c=0;
    cout<<"enter number";
    cin>>a;
    for(b=a;b!=0;b=b/10)
    {
        c=c*10+(b%10);
    }
    cout<<c;
}