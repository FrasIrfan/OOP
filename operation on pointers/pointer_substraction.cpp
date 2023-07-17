#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    cout << "The value of pointer: " << ptr << endl;
    ptr = ptr - 1;
    cout << "The value of pointer: " << ptr << endl;

    return 0;
}