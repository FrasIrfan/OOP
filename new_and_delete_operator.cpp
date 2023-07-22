#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr = new int; //memory is allocated using the new operator to store an integer on the heap.
    cout << "Enter a Integer: ";
    cin >> *ptr;
    cout << "You entered: " << *ptr << endl;
    cout << "Is is stored at " << ptr << endl;
    delete ptr; // delete operator is used to avoid MEMORY LEAK 
    cout << "Is is stored at " << ptr << endl;

    return 0;
}