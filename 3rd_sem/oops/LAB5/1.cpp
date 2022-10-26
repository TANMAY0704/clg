#include <iostream>

using namespace std;

class friend1
{
    float a;
    float b;
    
    public:
    void get_data(float i,float j)
    {
        a=i;
        b=j;
    }
    friend void calc_avg(friend1,friend1);
};

void calc_avg(friend1 x,friend1 y)
{
    cout<<"\nThe average is "<<(x.a+y.b)/2;
}

int main()
{
    friend1 t;
    t.get_data(25,14);
    calc_avg(t,t);
    return 0;
}
