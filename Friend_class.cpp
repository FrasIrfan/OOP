#include <iostream>
using namespace std;
class first_class
{
private:
    int a, b;

public:
    first_class()
    {
        a = 10;
        b = 20;
    }
    friend class second_class; //FRIEND CLASS
};
class second_class
{
public:
    void showA(first_class obj1)
    {
        cout << "The value of class A is = " << obj1.a << endl;
    }
    void showB(first_class obj2)
    {
        cout << "The value of class B is = " << obj2.b << endl;
    }
};

int main()
{
    first_class x;
    second_class y;
    y.showA(x);
    y.showB(x);
    return 0;
}