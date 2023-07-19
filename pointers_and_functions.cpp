#include <iostream>
using namespace std;

void exchange(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int n1, n2;
    cout << "Enter two integers: " << endl;
    cin >> n1 >> n2;
    cout << "Values before swapping:\n";
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;
    exchange(&n1, &n2);
    cout << "Values after swapping:\n";
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;
    return 0;
}