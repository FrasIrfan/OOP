#include <iostream>
using namespace std;
class B;
class A
{
private:
    int first_variable;

public:
    A()
    {
        first_variable = 10;
    }
    friend void show(A, B);
};
class B
{
private:
    int second_variable;

public:
    B()
    {
        second_variable = 20;
    }
    friend void show(A, B);
};

void show(A x, B y) // show that takes two parameters an object of class A (denoted as x) and an object of class B (denoted as y).
{
    int r;
    r = x.first_variable + y.second_variable;
    cout << "The value of class A object = " << x.first_variable << endl;
    cout << "The value of class B object = " << y.second_variable << endl;
    cout << "Sum is " << r << endl;
}

int main()
{
    A obj1;
    B obj2;
    show(obj1, obj2);
    return 0;
}