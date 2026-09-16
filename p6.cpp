#include <iostream>
using namespace std;

class StudentResult
{
private:
    int rollNo;
    string name;
    int marks1, marks2, marks3;

    static int totalStudents;

public:
    StudentResult(int r, string n, int m1, int m2, int m3)
    {
        rollNo = r;
        name = n;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
        totalStudents++;
    }

    static void showTotalStudents()
    {
        cout << "Total Students: " << totalStudents << endl;
    }

    ~StudentResult()
    {
        cout << "StudentResult object destroyed for " << name << endl;
    }

    friend class ResultAnalyzer;
};

int StudentResult::totalStudents = 0;

class ResultAnalyzer
{
public:
    void analyze(StudentResult &s)
    {
        int total = s.marks1 + s.marks2 + s.marks3;
        double percentage = total / 3.0;

        cout << "Roll No: " << s.rollNo << endl;
        cout << "Name: " << s.name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (s.marks1 >= 33 && s.marks2 >= 33 && s.marks3 >= 33)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main()
{

    StudentResult s1(101, "Abhay", 80, 75, 90);
    StudentResult s2(102, "Shreya", 65, 70, 55);

    StudentResult::showTotalStudents();

    ResultAnalyzer analyzer;

    analyzer.analyze(s1);
    cout << endl;
    analyzer.analyze(s2);

    return 0;
}