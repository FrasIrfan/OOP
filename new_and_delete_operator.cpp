#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr = new int;
    cout << "Enter a Integer: ";
    cin >> *ptr;
    cout << "You entered: " << *ptr << endl;
    cout << "Is is stored at " << ptr << endl;
    delete ptr;
    cout << "Is is stored at " << ptr << endl;

    return 0;
}