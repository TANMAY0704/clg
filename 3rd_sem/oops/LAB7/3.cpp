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
class d2:virtual public test
{
   public:
        int c; 
};
class d3:public d1,public d2
{
   public:
        int total; 
};
int main()
{
    d3 ob;
    ob.a=5;
    ob.b=6;
    ob.c=7;
    ob.total=ob.a+ob.b+ob.c;
    cout<<ob.total;
}