/*1. convert basic to class type.*/
#include <iostream> 
using namespace std;
class DistConv{
private:
    int kilometers;
    double meters;
    const static double kilometersPerMile;
public:
    DistConv(double mile)
    {
        double km = kilometersPerMile * mile;
        kilometers = int(km);
        meters = (km - kilometers) * 1000;
    }
    void display(void)
    {
        cout << kilometers << " kilometers and " << meters << " meters \n";
    }
};
const double DistConv::kilometersPerMile = 1.609344;
int main()
{
    DistConv d1 = 25.0;
    cout << "25.0 miles = ";
    d1.display();
    d1 = 12.0;
    cout << "12.0 miles = ";
    d1.display();
}