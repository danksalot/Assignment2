#include <iostream>
#include "student.h"

using namespace std;

int Student::TotalScore()
{
    return Class1 + Class2 + Class3 + Class4 + Class5;
}

double Student::TotalPercent()
{
    return TotalScore() / 5.0;
}

std::string Student::Grade()
{
    return "A+";
}

Student * GetStudentFromInput(int studentNumber)
{
    Student *student = new Student();
    cout << "Enter the ID of Student " << studentNumber << ": ";
    cin >> student->ID;
    cout << "Enter the grade for COSC1 earned by Person " << studentNumber << ": ";
    cin >> student->Class1;
    cout << "Enter the grade for COSC2 earned by Person " << studentNumber << ": ";
    cin >> student->Class2;
    cout << "Enter the grade for COSC3 earned by Person " << studentNumber << ": ";
    cin >> student->Class3;
    cout << "Enter the grade for COSC4 earned by Person " << studentNumber << ": ";
    cin >> student->Class4;
    cout << "Enter the grade for COSC5 earned by Person " << studentNumber << ": ";
    cin >> student->Class5;
    
    return student;
}
