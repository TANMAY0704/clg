//Write a program to find the factorial of n natural numbers using default constructor.
#include <iostream>
using namespace std;
class test
{
    int n;
    int f;
    public:
        test()
        { 
            f=1;
        }
        void read_data()
        {
            cout<<"\n Enter a number";
            cin>>n;
        }
        void display()
        {
            cout<<"the factorial is "<<f;
        }
        void calc();
};
void test::calc()
{
    for(int i=1;i<=n;i++)
        f=f*i;
}
int main()
{
    test ob;
    ob.read_data();
    ob.calc();
    ob.display();
}