//waoop to read the rlno name and 3 marks of a student and display its grade
#include <iostream>
using namespace std;
class student
{
    int roll;
    char name[25];
    float marks[3],sum=0;
    char grade;

    public:
    void read_data();
    void display();
};
void student::read_data()
{
    int i;
    cout<<"enter roll ";
    cin>>roll;
    cout<<"\nenter name ";
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
    if(sum/3>90)
        grade='o';
        else if(sum/3>80)
            grade='e';
        else if(sum/3>70)
            grade='a';
        else if(sum/3>60)
            grade='b';
        else if(sum/3>50)
            grade='c';
        else if(sum/3>40)
            grade='d';
        else
            grade='f';    
}
void student::display()
{
    int i=0;
    cout<<"\nthe details of the student are";
    cout<<"\nroll no:"<<roll<<"\nname"<<name<<"\n";
    for(i=0;i<3;i++)
    {    
        cout<<"marks"<<i+1<<"are "<<marks[i]<<"\n";
    }
    cout<<"the sum is "<<sum<<"\nthe grade is"<<grade;
}
int main()
{
    student std;
    std.read_data();
    std.display();

}