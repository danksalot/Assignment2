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
    if      (TotalPercent() > 90 && AllAbove(90)) { return "A+"; }
    else if (TotalPercent() > 90)                 { return "A";  }
    else if (TotalPercent() > 80 && AllAbove(80)) { return "B+"; }
    else if (TotalPercent() > 80)                 { return "B";  }
    else if (TotalPercent() > 70 && AllAbove(70)) { return "C+"; }
    else if (TotalPercent() > 70)                 { return "C";  }
    else if (TotalPercent() > 60 && AllAbove(60)) { return "D+"; }
    else if (TotalPercent() > 60)                 { return "D";  }
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

    student->ID = GetStudentIdFromInput(studentNumber, "StudentID format is 'S' followed by four digits.  Please enter the ID of Student ");
    student->Class1 = GetScoreFromInput(studentNumber, "Enter the score (0 - 100) for COSC1 earned by Person ");
    student->Class2 = GetScoreFromInput(studentNumber, "Enter the score (0 - 100) for COSC2 earned by Person ");
    student->Class3 = GetScoreFromInput(studentNumber, "Enter the score (0 - 100) for COSC3 earned by Person ");
    student->Class4 = GetScoreFromInput(studentNumber, "Enter the score (0 - 100) for COSC4 earned by Person ");
    student->Class5 = GetScoreFromInput(studentNumber, "Enter the score (0 - 100) for COSC5 earned by Person ");
    
    return student;
}

string GetStudentIdFromInput(int studentNumber, string message)
{
    string result;
    
    do {
        cout << message << studentNumber << ": ";
        cin >> result;
    } while (!StudentIdIsValid(result));
    
    return result;
}

int GetScoreFromInput(int studentNumber, string message)
{
    int result;
    
    do {
        cout << message << studentNumber << ": ";
        cin >> result;
    } while (!ScoreIsValid(result));
    
    return result;
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
