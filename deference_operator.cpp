#include <iostream>
using namespace std;

int main()
{
    //deference operator is used to access the value of the variable whose memory address is stored in pointer.
    int a, b, s, *p1, *p2;
    p1 = &a;
    p2 = &b;
    cout << "Enter an integer: ";
    cin >> *p2;
    s = *p1 + *p2;
    cout << *p1 << " + " << *p2 << " = " << s << endl;
    return 0;
}