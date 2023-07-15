#include <iostream>
using namespace std;

int main()
{
    int n;
    int *ptr;
    cout << "Enter an integer: ";
    cin >> n;
    ptr = &n;
    cout << "The value of n: " << n << endl;
    cout << "The address of n: " << ptr << endl;
    return 0;
}