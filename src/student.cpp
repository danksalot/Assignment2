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
    cout << "Enter the ID of Student " << studentNumber << ": ";
    cin >> student->ID;
    while (!StudentIdIsValid(student->ID))
    {
        cout << "StudentID must be 'S' followed by four digits.  Enter the ID of Student " << studentNumber << ": ";
        cin >> student->ID;
    }

    cout << "Enter the grade for COSC1 earned by Person " << studentNumber << ": ";
    cin >> student->Class1;
    while (!ScoreIsValid(student->Class1))
    {
        cout << "Scores must be between 0 and 100.  Enter the grade for COSC1 earned by Person " << studentNumber << ": ";
        cin >> student->Class1;
    }

    cout << "Enter the grade for COSC2 earned by Person " << studentNumber << ": ";
    cin >> student->Class2;
    while (!ScoreIsValid(student->Class2))
    {
        cout << "Scores must be between 0 and 100.  Enter the grade for COSC2 earned by Person " << studentNumber << ": ";
        cin >> student->Class2;
    }

    cout << "Enter the grade for COSC3 earned by Person " << studentNumber << ": ";
    cin >> student->Class3;
    while (!ScoreIsValid(student->Class3))
    {
        cout << "Scores must be between 0 and 100.  Enter the grade for COSC3 earned by Person " << studentNumber << ": ";
        cin >> student->Class3;
    }

    cout << "Enter the grade for COSC4 earned by Person " << studentNumber << ": ";
    cin >> student->Class4;
    while (!ScoreIsValid(student->Class4))
    {
        cout << "Scores must be between 0 and 100.  Enter the grade for COSC4 earned by Person " << studentNumber << ": ";
        cin >> student->Class4;
    }

    cout << "Enter the grade for COSC5 earned by Person " << studentNumber << ": ";
    cin >> student->Class5;
    while (!ScoreIsValid(student->Class5))
    {
        cout << "Scores must be between 0 and 100.  Enter the grade for COSC5 earned by Person " << studentNumber << ": ";
        cin >> student->Class5;
    }
    
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
