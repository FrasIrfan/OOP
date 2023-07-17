#include <iostream>
using namespace std;

int main()
{
    int Num[5] = {10, 20, 30, 40, 50};
    int *ptr = Num;
    cout << "The value of pointer: " << *ptr << endl;
    ptr++; // moves the index of the array
    cout << "The value of pointer: " << *ptr << endl;
    return 0;
}