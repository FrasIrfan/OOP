#include <iostream>
using namespace std;

int main()
{
    int n;
    int *ptr; // A pointer is a variable that stores the memory address of another variable
    cout << "Enter an integer: ";
    cin >> n;
    ptr = &n;
    cout << "The value of n: " << n << endl;
    cout << "The address of n: " << ptr << endl;
    return 0;
}