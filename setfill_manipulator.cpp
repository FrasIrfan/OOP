#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string str = "OOP Using C++";
    cout << "SETFILL MANIPULATOR" << endl;
    cout << setw(20) << setfill('*') << str << endl; //used to set the fill character for output streams.
    cout << setw(25) << setfill('#') << str << endl;
    cout << setw(30) << setfill('@') << str << endl;

    return 0;
}
