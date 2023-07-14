#include <iostream>
using namespace std;
class Parent // ABSTRACT CLASS
{
public:
    virtual void show() = 0;
};
class Child1 : public Parent
{
public:
    void show()
    {
        cout << "Child Class 1" << endl;
    }
};
class Child2 : public Parent
{
public:
    void show()
    {
        cout << "Child Class 2" << endl;
    }
};

int main()
{
    Parent *ptr[2];
    ptr[0] = new Child1;
    ptr[1] = new Child2;
    ptr[0]->show();
    ptr[1]->show();
    
    return 0;
}