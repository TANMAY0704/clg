
#include <iostream>
using namespace std;
class test2
{
    int p;
    int q;
    public:
    test2()
    {
        cout<<"\n Default constructor executed";
    }
    test2(int m,int n)
    {
        p=m;
        q=n;
        cout<<"\n paramaterized constructor executed";
        cout<<p<<q;

    }

};
int main()
{
    test2 ob1;
    test2 ob2(5,6);
}
