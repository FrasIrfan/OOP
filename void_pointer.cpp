#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    float f = 25.18;
    char c = '$';
    void *ptr; //a type of pointer that can store the address of any type of variable
    ptr = &n;
    cout << "The value of n: " << n << endl;
    cout << "The address of n: " << ptr << endl;
    ptr = &f;
    cout << "The value of f: " << f << endl;
    cout << "The address of f: " << ptr << endl;
    ptr = &c;
    cout << "The value of c: " << c << endl;
    cout << "The address of c: " << ptr << endl;
    return 0;
}