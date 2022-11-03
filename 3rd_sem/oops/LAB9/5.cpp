//WAP using exception handling to test division by 0.
#include<iostream>
using namespace std;
void divide(double x,double y)
{
    try
    {
        if(y!=0){
            cout<<x<<"/"<<y<<" = "<<x/y<<endl<<endl;
        }
        else{
            cout<<x<<"/"<<y<<" = ";
            throw y; 
        }
    }
    catch(double){
        cout<<"\nException Occur\n ";
        throw;
    }
}
int main()
{
    try
    {
        divide(25.6,3.0);
        divide(36.9,0.0);
    }
    catch(double)
    {
        cout<<"Division by zero is not possible";
        cout<<"\nResult= Infinite";
    }
    cout<<"\nEND";
}