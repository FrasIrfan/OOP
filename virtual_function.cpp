#include <iostream>
using namespace std;
class A
{
public:
    virtual void show() //declaration of virtual function
    {
        cout << "Parent Class A" << endl;
    }
};
class B : public A
{
public:
    void show()
    {
        cout << "Child Class B" << endl;
    }
};
class C : public A
{
public:
    void show()
    {
        cout << "Child Class C" << endl;
    }
};

int main()
{
    A obj1;
    B obj2;
    C obj3;
    A *ptr; //A pointer ptr of type A is declared. This pointer can be used to point to objects of both the base class A and its derived classes.
    ptr = &obj1;
    ptr->show();
    ptr = &obj2;
    ptr->show();
    ptr = &obj3;
    ptr->show();
    return 0;
}