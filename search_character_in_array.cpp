#include <iostream>
using namespace std;

int main()
{
    char str[] = "Hello Programming";
    char searchCharacter, *ptr, flag;
    flag = 'n';
    ptr = str;
    cout << "Enter any character to find: ";
    cin >> searchCharacter;
    while (*ptr++ != '\0')
    {
        if (*ptr == searchCharacter)
        {
            flag = 'y';
        }
    }
    if (flag == 'y')
    {
        cout << "Character found" << endl;
    }
    else
    {
        cout << "Character not found" << endl;
    }
    return 0;
}
