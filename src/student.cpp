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
    if (TotalPercent() > 90 && AllAbove(90)) { return "A+"; }
    else if (TotalPercent() > 90 && !AllAbove(90)) { return "A";  }
    else if (TotalPercent() > 80 &&  AllAbove(80)) { return "B+"; }
    else if (TotalPercent() > 80 && !AllAbove(80)) { return "B";  }
    else if (TotalPercent() > 70 &&  AllAbove(70)) { return "C+"; }
    else if (TotalPercent() > 70 && !AllAbove(70)) { return "C";  }
    else if (TotalPercent() > 60 &&  AllAbove(60)) { return "D+"; }
    else if (TotalPercent() > 60 && !AllAbove(60)) { return "D";  }
    else return "F";
}

bool Student::AllAbove(int minScore)
{
    return Class1 >= minScore &&
        Class2 >= minScore &&
        Class3 >= minScore &&
        Class4 >= minScore &&
        Class5 >= minScore;
}

Student * GetStudentFromInput(int studentNumber)
{
    Student *student = new Student();
    do {
        cout << "StudentID format is 'S' followed by four digits.  Please enter the ID of Student " << studentNumber << ": ";
        cin >> student->ID;
    } while (!StudentIdIsValid(student->ID))

    do {
        cout << "Enter the score (0 - 100) for COSC1 earned by Person " << studentNumber << ": ";
        cin >> student->Class1;
    } while (!ScoreIsValid(student->Class1))

    do {
        cout << "Enter the score (0 - 100) for COSC2 earned by Person " << studentNumber << ": ";
        cin >> student->Class2;
    } while (!ScoreIsValid(student->Class2))

    do {
        cout << "Enter the score (0 - 100) for COSC3 earned by Person " << studentNumber << ": ";
        cin >> student->Class3;
    } while (!ScoreIsValid(student->Class3))

    do {
        cout << "Enter the score (0 - 100) for COSC4 earned by Person " << studentNumber << ": ";
        cin >> student->Class4;
    } while (!ScoreIsValid(student->Class4))
    
    do {
        cout << "Enter the score (0 - 100) for COSC5 earned by Person " << studentNumber << ": ";
        cin >> student->Class5;
    } while (!ScoreIsValid(student->Class5))
    
    return student;
}

bool StudentIdIsValid(string input)
{
    return input.length() == 5 &&
        input.at(0) == 'S' &&
        isdigit(input.at(1)) == 1 &&
        isdigit(input.at(2)) == 1 &&
        isdigit(input.at(3)) == 1 &&
        isdigit(input.at(4)) == 1;
}

bool ScoreIsValid(int input)
{
    return 0 <= input && input <= 100;
}
