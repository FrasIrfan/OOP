#include <iostream>
using namespace std;
class Count
{
private:
    int n;

public:
    Count()
    {
        n = 10;
    }
    void show()
    {
        cout << "The value of n = " << n << endl;
    }
    void operator++() // Overloading ++ operator
    {
        n = n * 2; // give whatever functionality you can to the operator
    }
};

int main()
{
    Count obj;
    obj.show();
    ++obj;
    obj.show();
    return 0;
}