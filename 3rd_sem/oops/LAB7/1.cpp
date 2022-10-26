#include<iostream>
using namespace std;
class d1
{
    public:
        int a;
};
class d2
{
   public:
        int b; 
};
class test:public d1,public d2
{
   public:
        int total; 
};
int main()
{
    test ob;
    ob.a=5;
    ob.b=6;
    ob.total=ob.a+ob.b;
    cout<<ob.total;
}