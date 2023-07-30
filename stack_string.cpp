#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    stack<string> myStack;

    myStack.push(" Hehe ");
    myStack.push(" Fras ");
    myStack.push(" Is ");
    myStack.push(" Name ");
    myStack.push(" My ");

    cout << "Top element is" << myStack.top() << endl;

    // removes the element that was most recently added (the top element)
    myStack.pop();

    // removes Hehe (top element)
    cout << "Top element is" << myStack.top() << endl;

    // Pushing more elements
    myStack.push(" Hi! ");

    cout << "Top element is" << myStack.top() << endl;

    // Check if the stack is empty
    if (myStack.empty())
    {
        std::cout << "The stack is empty." << std::endl;
    }
    else
    {
        std::cout << "The stack is not empty." << std::endl;
    }

    // Print all elements in the stack
    std::cout << "Elements in the stack: ";
    while (!myStack.empty())
    {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }

    return 0;
}