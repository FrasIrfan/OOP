#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declaration and Initialization of a vector
    vector<int> myVector = {1, 2, 3, 4, 5};

    // Accessing elements using indexing
    cout << "Element at index 0: " << myVector[0] << endl; // Outputs 1

    // Modifying elements
    myVector[0] = 50; // Changes the first element to 100

    // Adding elements to the end of the vector
    myVector.push_back(6);
    myVector.push_back(7);

    cout << "Element at index 5: " << myVector[5] << endl; // Outputs 6
    cout << "Element at index 6: " << myVector[6] << endl; // Outputs 7

    // Size of the vector
    cout << "Size of the vector: " << myVector.size() << endl; // Outputs 6

    // Resizing the vector
    myVector.resize(6); // Removes the last two elements (6 and 7)

    cout << "Size of the vector: " << myVector.size() << endl; // Outputs 6


    return 0;
}
