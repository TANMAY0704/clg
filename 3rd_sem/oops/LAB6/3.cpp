//Write a program to demonstrate a copy constructor.
#include <iostream>
using namespace std;
class c1
{
    int i;
    public:
    c1()
    {
        i=0;
    }
    c1(c1 &s)
    {
        i=s.i;
    }
    void get()
    {
        cout<<"enter data";
        cin>>i;
    }
    void display()
    {
        cout<<i;
    }
};
int main()
{
    c1 a;
    a.get();
    a.display();
    c1 b(a);
    b.display();
}