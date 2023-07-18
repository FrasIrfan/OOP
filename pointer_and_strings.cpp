#include <iostream>
using namespace std;

int main()
{
    char name[20], *ptr;
    cout << "Enter your name: ";
    cin.get(name, 20);
    ptr = name;
    cout << "Your name is: " << ptr << endl;
    return 0;
}