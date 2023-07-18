#include <iostream>
using namespace std;

int main()
{
    float arr[5], *ptr;
    int i;
    cout << "Enter five floating point values:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter floating value " << i << ":";
        cin >> arr[i];
    }
    ptr = &arr[4]; //assigns the address of the last element of the arr array to the pointer variable ptr
    cout << "The values in reverse order: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr-- << "\t"; //The asterisk (*) before ptr is the dereference operator. It retrieves the value stored at the memory location
    }
    return 0;
}