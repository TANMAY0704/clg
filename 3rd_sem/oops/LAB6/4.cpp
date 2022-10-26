/*Write a program using single inheritance to calculate the grade of the students, use the
parent class person to read the name and use the child class to read three marks of the
student and display the grade.*/
#include <iostream>
using namespace std;

class person
{
    int roll;
    char name[25];
    public:
    void read_data()
    {
        cin>>roll;
        cin>>name;
    }
    void display()
    {
        cout<<roll<<"\t"<<name;
    }
};

class student:public person
{
    int m[3];
    char grade;
    int t;
    public:
    void sread_data()
    {
        cout<<"Enter marks";
        for(int i=0; i<3; i++)
        {
            cin>>m[i];
        }
    }
    void calc_grade()
    {
        int s=0;
        for(int i=0;i<3;i++)
        {
            s=s+m[i];
        }
        t=s;
        if(s>270)
            grade='O';
        else if(s>270)
            grade='E';    
        else if(s>240)
            grade='A';
        else if(s>210)
            grade='B';
        else if(s>180)
            grade='C';
        else if(s>150)
            grade='D';
        else
            grade='F';    
    }
    void sdisplay()
    {
        cout<<"\nTotal"<<t<<endl;
        cout<<grade;
    }
};

int main()
{
    student stud;
    stud.read_data();
    stud.sread_data();
    stud.calc_grade();
    stud.display();
    stud.sdisplay();
}