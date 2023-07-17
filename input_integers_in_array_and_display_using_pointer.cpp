#include <iostream>
using namespace std;

int main()
{
    int Num[5];
    int *ptr;
    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter the value of Num[" << i << "]: ";
        cin >> Num[i];
    }
    ptr = Num;
    cout << "You entered the following values:\n";
    for (int i = 0; i <= 4; i++)
    {
        cout << *ptr++ << "\t";
        ptr++;
    }
    return 0;
}