#include <iostream>

using namespace std;

class book
{
    int code;
    float price;
    static int count;
    public:
    void get_book(int x, float y)
    {
        code=x;
        price=y;
        count++;
    }
    void display()
    {
        cout<<"\nCode"<<code;
        cout<<"\nPrice"<<price;
    }
    static void disp_count()
    {
        cout<<count;
    }
};
int book::count=0;

int main()
{
    book bk;
    bk.get_book(35,50);
    cout<<"\nbook no";
    bk.disp_count();
    bk.display();
   
    
    book bk1;
    bk1.get_book(15,50);
    cout<<"\nbook no";
    book::disp_count();
    bk1.display();
    
    
    book bk2;
    bk2.get_book(95,70);
    cout<<"\nbook no";
    book::disp_count();
    bk2.display();
    return 0;
}