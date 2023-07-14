#include <iostream>
using namespace std;

int main()
{
    int a = 3, b = 4;
    ++a *= ++b;
    cout << a << endl;
    return 0;
}