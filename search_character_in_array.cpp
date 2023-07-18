#include <iostream>
using namespace std;

int main()
{
    char str[] = "Hello Programming";
    char ch, *ptr, s;
    s = 'n';
    ptr = str;
    cout << "Enter any character to find: ";
    cin >> ch;
    while (*ptr++ != '\0')
        if (*ptr == ch)
        {
            s = 'y';
        }
    if (s == 'y')
    {
        cout << "Character found" << endl;
    }
    else
    {
        cout << "Character not found" << endl;
    }
    return 0;
}