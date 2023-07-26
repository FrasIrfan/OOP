#include <iostream>
using namespace std;
struct student
{
    int rollNo;
    int marks;
    float percentage;
    char grade;
};

int main()

{
    student fras;
    cout << "Enter Roll no: ";
    cin >> fras.rollNo;
    cout << "Enter Marks: ";
    cin >> fras.marks;
    cout << "Enter Percentage: ";
    cin >> fras.percentage;
    if (fras.percentage >= 85)
    {
        fras.grade = 'A';
    }
    else if (fras.percentage >= 80)
    {
        fras.grade = 'B';
    }
    else if (fras.percentage >= 70)
    {
        fras.grade = 'C';
    }
    else if (fras.percentage >= 60)
    {
        fras.grade = 'D';
    }
    else if (fras.percentage >= 50)
    {
        fras.grade = 'E';
    }
    else
    {
        fras.grade = 'F';
    }
    cout << "Roll No: " << fras.rollNo << endl;
    cout << "Marks: " << fras.marks << endl;
    cout << "Percentage: " << fras.percentage << endl;
    cout << "Grade: " << fras.grade << endl;

    return 0;
}