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
    test operator/(test &ob1)
    {
        test ob3;
        ob3.a=a/ob1.a;
        ob3.b=b/ob1.b;
        ob3.c=c/ob1.c;
        return(ob3);
    }
};
int main()
{
    test ob1,ob2,ob3;
    ob1.read_data(10,12,14);
    ob1.display();
    ob2.read_data(5,6,7);
    ob2.display();
    ob3=ob1/ob2;
    ob3.display();
}