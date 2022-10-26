// waoop to read the rlno name and 3 marks of a student and display its grade
#include <iostream>
using namespace std;
class student
{
    int roll;
    char name[25];
    float marks[3], sum;
    char grade;

public:
    void read_data();
    void calc_grade();
    void display();
};
void student::read_data()
{
    int i;
    cout << "enter roll ";
    cin >> roll;
    cout << "\nenter name ";
    cin >> name;
    for (i = 0; i < 3; i++)
    {
        cout << "\nenter marks";
        cin >> marks[i];
    }
}
void student::calc_grade()
{
    int i;
    sum = 0;
    for (i = 0; i < 3; i++)
    {
        sum += marks[i];
    }

    if (sum / 3 > 90)
        grade = 'o';
    else if (sum / 3 > 80)
        grade = 'e';
    else if (sum / 3 > 70)
        grade = 'a';
    else if (sum / 3 > 60)
        grade = 'b';
    else if (sum / 3 > 50)
        grade = 'c';
    else if (sum / 3 > 40)
        grade = 'd';
    else
        grade = 'f';
}
void student::display()
{
    int i = 0;
    for (i = 0; i < 50; i++)
    {
        cout << "_ ";
    }
    cout << "\n\t" << roll << "\t" << name;
    for (i = 0; i < 3; i++)
    {
        cout << "\t" << marks[i];
    }
    cout << "\t" << sum << "\t" << grade << "\n";
}
int main()
{
    int i = 0;
    student std;
    std.read_data();
    for (i = 0; i < 50; i++)
    {
        cout << "_ ";
    }
    cout << "\n\troll no\tname\tm1\tm2\tm3\ttotal\tgrade\n";
    std.calc_grade();
    std.display();
    for (i = 0; i < 50; i++)
    {
        cout << "_ ";
    }
}