#include <iostream>
using namespace std;

int main()
{
    int num1 = 10;
    double num2 = static_cast<double>(num1); //a way to convert a value from one data type to another at compile-time.
    cout << "Num 1: " << num1 << endl;
    cout << "Num 2: " << num2 << endl;
    return 0;
}