#include <iostream>
using namespace std;
class Add
{
private:
    int a, b;

public:
    Add()
    {
        a = b = 0;
    }
    void input()
    {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
    }
    void output()
    {
        cout << "The value of a = " << a << endl;
        cout << "The value of b = " << b << endl;
    }
    Add operator+(Add p) // overloading operator by passing parameter 
    {
        Add temp;
        temp.a = a - p.a;
        temp.b = b - p.b;
        return temp;
    }
};

int main()
{
    Add obj1, obj2, obj3;
    obj1.input();
    obj2.input();
    obj3 = obj1 + obj2;
    obj1.output();
    obj2.output();
    obj3.output();

    return 0;
}