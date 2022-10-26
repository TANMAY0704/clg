//Write a program to find the sum of n natural numbers using parameterized constructor.
#include <iostream>
using namespace std;
class test1
{
    int n;
    int s;
    public:
        test1(int k)
        {
            s=k;
        }
        void initialize()
        {
            cout<<"\n Enter the last number";
            cin>>n;
        }
        void display()
        {
            cout<<"the sum is "<<s;
        }
        void calc();
    
};
void test1::calc()
{
    for(int i=1;i<=n;i++)
        s+=i;
}
int main()
{
    int p;
    cout<<"enter the default value";
    cin>>p;
    test1 ob(p);
    ob.initialize();
    ob.calc();
    ob.display();

}