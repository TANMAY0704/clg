//waoop to read the rlno name and 3 marks of a student and display it and its sum
#include <iostream>
using namespace std;
class student
{
    int roll;
    char name[25];
    float marks[3],sum=0;

    public:
    void read_data();
    void display();
};
void student::read_data()
{
    int i;
    cout<<"enter roll";
    cin>>roll;
    cout<<"\nenter name";
    cin>>name;
    for(i=0;i<3;i++)
    {    
        cout<<"\nenter marks";
        cin>>marks[i];
    }
    for(i=0;i<3;i++)
    {    
        sum+=marks[i];
    }
    
}
void student::display()
{
    int i=0;
    cout<<"\nthe details of the student are";
    cout<<"\nroll no:"<<roll<<"\nname:"<<name<<"\n";
    for(i=0;i<3;i++)
    {    
        cout<<"marks"<<i+1<<"are "<<marks[i]<<"\n";
    }
    cout<<"the sum is "<<sum;

}
int main()
{
    student std;
    std.read_data();
    std.display();

}