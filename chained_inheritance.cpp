
#include <iostream>
using namespace std;

// Base class
class Person
{
public:
    string name;

    void displayPerson()
    {
        cout << "Name: " << name << endl;
    }
};

// Derived class 1
class Student : public Person
{
public:
    int studentID;

    void displayStudent()
    {
        cout << "Student ID: " << studentID << endl;
    }
};

// Derived class 2
class UniversityStudent : public Student
{
public:
    string course;

    void displayCourse()
    {
        cout << "Course: " << course << endl;
    }
};

int main()
{
    UniversityStudent s;

    s.name = "Pauline";
    s.studentID = 101;
    s.course = "Biomedical Engineering";

    s.displayPerson();
    s.displayStudent();
    s.displayCourse();

    return 0;
}