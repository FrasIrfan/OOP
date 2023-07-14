#include <iostream>
using namespace std;
class A
{
private:
    int n;

public:
    void looptable()
    {
        cout << "Enter a number: ";
        cin >> n;

        int i = 1;
        do
        {
            cout << n << "*" << i << "=" << n * i << "\n";
            i++;
        } while (i <= 10);
    }
};

int main()
{
    A obj1;
    obj1.looptable();
    return 0;
}
