#include <iostream>
using namespace std;
class s2;
class s1
{
    int a;
    int b;
    
    public:
        void get_s1(int x,int y)
        {
            a=x;
            b=y;
        }
        void disp_s1()
        {
            cout<<a<<b<<endl;
        }
        friend void swap(s1 &,s2 &);
        

};
class s2
{
    int c;
    int d;
    
    public:
        void get_s2(int x,int y)
        {
            c=x;
            d=y;
        }
        void disp_s2()
        {
            cout<<c<<d<<endl;
        }
        friend void swap(s1 &,s2 &);
    
};
void swap(s1 &i,s2 &j)
{
    int t1,t2;
    t1=i.a;
    t2=i.b;
    i.a=j.c;
    i.b=j.d;
    j.c=t1;
    j.d=t2;    
}
int main()
{
    s1 p;
    s2 q;
    p.get_s1(2,3);
    q.get_s2(5,4);
    p.disp_s1();
    q.disp_s2();
    swap(p,q);
    p.disp_s1();
    q.disp_s2();

    

}