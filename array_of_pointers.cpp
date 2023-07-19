#include <iostream>
using namespace std;

int main()
{
    int *ptr[3], a, b, c;
    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;
    cout << "Enter three Integers: " << endl;
    cin >> a >> b >> c;
    cout << "The values are: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << *ptr[i] << endl;
    }
    return 0;
}
