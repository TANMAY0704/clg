#include<iostream>
using namespace std;
class test
{
    int a,b,c;
    public:
    void read_data(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;        
    }
    void display()
    {
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
    void operator-()
    {
        a=-a;
        b=-b;
        c=-c;
    }
};
int main()
{
    test ob;
    ob.read_data(5,6,7);
    cout<<"before\n";
    ob.display();
    -ob;
    cout<<"after\n";
    ob.display();
}