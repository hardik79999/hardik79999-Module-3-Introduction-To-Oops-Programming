#include <iostream>
#include<string>
using namespace std;

int main() 
{
    int age = 22;
    string student_name = "HARDIK";
    float height = 5.9;
    char grade = 'A';

    const int maxMarks = 100;

    cout << "Student Details:" << endl;
    cout << "Age: " << age << endl;
    cout<<"student name :"<<student_name<<endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Maximum Marks Allowed: " << maxMarks << endl;

    int obtainedMarks = 85;
    int remainingMarks = maxMarks - obtainedMarks;

    cout << "Marks Scored: " << obtainedMarks << endl;
    cout << "Marks Left to get full: " << remainingMarks << endl;

    return 0;
}
