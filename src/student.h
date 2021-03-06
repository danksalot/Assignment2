#ifndef STUDENT_H
#define STUDENT_H

class Student
{
    public:
        std::string ID;
        int Class1;
        int Class2;
        int Class3;
        int Class4;
        int Class5;
        
        int TotalScore();
        double TotalPercent();
        std::string Grade();
        bool AllAbove(int);
};

Student * GetStudentFromInput(int);
std::string GetStudentIdFromInput(std::string, std::string);
int GetScoreFromInput(std::string, std::string);
bool StudentIdIsValid(std::string);
bool ScoreIsValid(int);

#endif
