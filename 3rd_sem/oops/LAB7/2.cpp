#include<iostream>
using namespace std;
class test
{
    public:
        int a;
};
class d1:virtual public test
{
   public:
        int b; 
};
class d2:public d1
{
   public:
        int total; 
};
int main()
{
    d2 ob;
    ob.a=5;
    ob.b=6;
    ob.total=ob.a+ob.b;
    cout<<ob.total;
}