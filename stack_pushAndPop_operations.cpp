#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> myStack; //a variable declaration that creates a stack container of integers named myStack

    myStack.push(10); // Pushes 10 onto the stack
    myStack.push(20); // Pushes 20 onto the stack
    myStack.push(30); // Pushes 30 onto the stack

    cout << "Top element: " << myStack.top() << endl; // Outputs 30

    myStack.pop(); // Removes the top element (30)

    cout << "Top element after pop: " << myStack.top() << endl; // Outputs 20

    return 0;
}