#include <iostream>
using namespace std;

int main()
{
    int x = 20, y = 35;
    x = y++ + x++;  // addition to two increment operator variable
    y = ++y + ++x;  // vice versa
    cout << x << endl;
    cout << y << endl;
    return 0;
}