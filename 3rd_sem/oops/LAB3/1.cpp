//waoop to read the rlno name and marks of a student and display it
#include <iostream>
using namespace std;
class student
{
    int roll;
    char name[25];
    float marks;

    public:
    void read_data();
    void display();
};
void student::read_data()
{
    cout<<"enter roll";
    cin>>roll;
    cout<<"\nenter name";
    cin>>name;
    cout<<"\nenter marks";
    cin>>marks;
}
void student::display()
{
    cout<<"\nthe details of the student are";
    cout<<"\nroll no:"<<roll<<"\nname "<<name<<"\nmarks "<<marks;
}
int main()
{
    student std;
    std.read_data();
    std.display();
}