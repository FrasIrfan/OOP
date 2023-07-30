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

    // Advantages of using vectors

    // 1. Vectors are dynamic arrays. They can grow and shrink in size as needed.
    // 2. Vectors are very easy to use. They have a lot of built-in functions that make it easy to perform operations on them.
    // 3. Vectors are very efficient. They are implemented as dynamic arrays, so they have the same performance as arrays.
    // 4. Vectors are very similar to arrays. If you know how to use arrays, you can easily learn how to use vectors.

    //    1. Dynamic Size
    //    2. Automatic Memory Management
    //    3. Efficient Access
    //    4. Dynamic Resizing
    //    5. Convenient Size Tracking
    //    6. Versatile Data Structure
    //    7. STL Compatibility
    //    8. Wide Support
    //    9. Easy Iteration
    //    10. No Fixed Size Limit

    // In conclusion, it is always better to use an array if you know exactly how many items

    return 0;
}
