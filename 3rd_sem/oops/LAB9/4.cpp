/*WAP in switch case to perform 
Unary operator overloading
Binary operator overloading*/
#include<iostream>
using namespace std;
class test
{
    int a,b,c;
    public: 
    void read_data(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;        
    }
    void display()
    {
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
    void operator++()
    {
        a++;
        b++;
        c++;
    }
    void operator--()
    {
        a--;
        b--;
        c--;
    }
    void operator-()
    {
        a=-a;
        b=-b;
        c=-c;
    }
    test operator/(test &ob1)
    {
        test ob3;
        ob3.a=a/ob1.a;
        ob3.b=b/ob1.b;
        ob3.c=c/ob1.c;
        return(ob3);
    }
    test operator*(test &ob1)
    {
        test ob3;
        ob3.a=a*ob1.a;
        ob3.b=b*ob1.b;
        ob3.c=c*ob1.c;
        return(ob3);
    }
    test operator-(test &ob1)
    {
        test ob3;
        ob3.a=a-ob1.a;
        ob3.b=b-ob1.b;
        ob3.c=c-ob1.c;
        return(ob3);
    }
    test operator+(test &ob1)
    {
        test ob3;
        ob3.a=a+ob1.a;
        ob3.b=b+ob1.b;
        ob3.c=c+ob1.c;
        return(ob3);
    }
};
int main()
{
    int s;
    test ob,ob1,ob2;
    ob.read_data(5,6,7);
    ob1.read_data(10,12,14);
    cout<<"before ob=\n";
    ob.display();
    cout<<"\nbefore ob1=\n";
    ob1.display();
    cout<<"enter 1 for unary operator 2 for binary:";
    cin>>s;
    switch (s)
    {
    case 1:
        cout<<"enter 1 for ++ operator 2 for -- operator 3 for - operator:";
        cin>>s;
        switch(s)
        {
            case 1:
                ++ob;
                break;
            case 2:
                --ob;
                break;
            case 3:
                -ob;
                break;
            default:
                cout<<"wrong input";
        }
        cout<<"after\n";
        ob.display();
        break;
        case 2:
        cout<<"enter 1 for + operator 2 for - operator 3 for / operator press 4 for * operator:";
        cin>>s;
        switch(s)
        {
            case 1:
                ob2=ob1+ob;
                break;
            case 2:
                ob2=ob1-ob;
                break;
            case 3:
                ob2=ob1/ob;
            case 4:
                ob2=ob1*ob;
                break;
            default:
                cout<<"wrong input";
        } 
        cout<<"after\n";
        ob2.display();
       
        
        break;

    
    default:
        cout<<"wrong input";
        break;
    }  
}