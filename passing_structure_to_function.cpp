#include <iostream>
using namespace std;

struct Student
{
    int rno, marks;
    float gpa;
};

void input(Student *);
void output(Student *);

int main()
{
    Student s;
    input(&s);
    output(&s);
    return 0;
}

void input(Student *p)
{
    cout << "Enter roll no: ";
    cin >> p->rno;
    cout << "Enter marks: ";
    cin >> p->marks;
    cout << "Enter GPA: ";
    cin >> p->gpa;
}

void output(Student *m)
{
    cout << "Roll no: " << m->rno << endl;
    cout << "Marks: " << m->marks << endl;
    cout << "GPA: " << m->gpa << endl;  
}