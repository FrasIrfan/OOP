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
    // cout << "ptr = " << ptr << endl;
    ptr = &arr[4];
    // cout << "ptr = " << ptr << endl;
    cout << "The values in reverse order: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr-- << "\t";
    }
    return 0;
}