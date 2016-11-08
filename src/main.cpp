#include <iostream>
#include "student.h"

using namespace std;

void GetInputFromUser(int, Student *);
void PrintResults(int, Student *);

int main()
{
    Student* students = 0;
    int NumberOfStudents = 0;
    
    do {
        cout << "Student list can contain 3 - 10 students.  How many students are there? "; 
        cin >> NumberOfStudents;
    } while (NumberOfStudents < 3 || NumberOfStudents > 10);
    
    students = new Student[NumberOfStudents];
    
    GetInputFromUser(NumberOfStudents, students);
    
    PrintResults(NumberOfStudents, students);
    
    delete[] students;
    
    return 0;
}

void GetInputFromUser(int NumberOfStudents, Student *students)
{
    for (int i = 1; i <= NumberOfStudents; i++)
    {
        Student *student = GetStudentFromInput(i);
        students[i-1] = *student;
    }
}

void PrintResults(int NumberOfStudents, Student *students)
{
    printf ("| %7s | %7s | %7s | %7s | %7s | %7s | %7s | %7s | %7s |\n", "ID", "COSC1", "COSC2", "COSC3", "COSC4", "COSC5", "Total", "Percent", "Grade");
    printf ("| %7s | %7s | %7s | %7s | %7s | %7s | %7s | %7s | %7s |\n", "-------", "-------", "-------", "-------", "-------", "-------", "-------", "-------", "-------");
    for (int i = 0; i < NumberOfStudents; i++)
    {
        printf ("| %7s | %7d | %7d | %7d | %7d | %7d | %7d | %7.2f | %7s |\n", 
            students[i].ID.c_str(),
            students[i].Class1,
            students[i].Class2,
            students[i].Class3,
            students[i].Class4,
            students[i].Class5,
            students[i].TotalScore(),
            students[i].TotalPercent(),
            students[i].Grade().c_str());
    }
}
