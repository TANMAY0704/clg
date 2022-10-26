#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter 2 numbers";
    cin>>a>>b;
    cout<<"before swaping "<<a<<","<<b;
    c=b;
    b=a;
    a=c;
    cout<<"\nafter swaping "<<a<<","<<b;
}