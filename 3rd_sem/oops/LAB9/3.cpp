//Write a program to Convert class to class
#include <iostream>
using namespace std;
class c1 {
    int a = 3;
 
public:
    int get_int()
    {
        return (a);
    }

    void display()
    {
        cout << a << endl;
    }
};

class c2 {
    int b;
 
public:
    void operator=(c1 a)
    {
        b = a.get_int();
    }
    void display()
    {
        cout << b << endl;
    }
};
 
int main()
{
    c1 a;
    c2 b;
    b = a;
    a.display();
    b.display();
 
    return 0;
}