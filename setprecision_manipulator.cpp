#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double r, n1 = 132.364, n2 = 26.91;
    r = n1 / n2;
    cout << r << endl;
    cout << "SET PRECISION" << endl;
    cout << setprecision(5) << r << endl; //sets the number of decimal places to display for floating-point values in output streams.
    cout << setprecision(4) << r << endl;
    cout << setprecision(3) << r << endl;
    cout << setprecision(2) << r << endl;
    cout << setprecision(1) << r << endl;

    return 0;
}