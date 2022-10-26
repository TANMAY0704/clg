#include <iostream>
using namespace std;

int main()
{
    int a,i;
    cout<<"enter number betwenn 1 and 10";
    cin>>a;
    if(a>0&&a<11)
    {
        for(i=1;i<11;i++)
        {
            cout<<a<<"*"<<i<<"="<<a*i<<"\n";
        }
    }
    else
        cout<<"number is not between 1 to 10";
}