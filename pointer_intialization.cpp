#include <iostream> 
using namespace std;

int main()
{
    int a;
    int *ptr = &a; // A pointer is a variable that stores the memory address of another variable
    cout << "Enter an integer: ";
    cin >> a;
    cout << "The value of a: " << a << endl;
    return 0;
}