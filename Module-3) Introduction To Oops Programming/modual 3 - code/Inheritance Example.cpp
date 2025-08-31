#include <iostream>
#include <string>
using namespace std;

class Person 
{
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a) 
	{
        name = n;
        age = a;
    }

    void displayPerson() 
	{
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};


class Student : public Person 
{
private:
    string course;
    int rollNo;

public:
    void setStudent(string n, int a, string c, int r) 
	{
        setPerson(n, a);   
        course = c;
        rollNo = r;
    }

    void displayStudent() 
	{
        cout << "\n--- Student Info ---" << endl;
        displayPerson();   
        cout << "Course: " << course << "\nRoll No: " << rollNo << endl;
    }
};

// Derived class Teacher
class Teacher : public Person 
{
private:
    string subject;
    double salary;

public:
    void setTeacher(string n, int a, string s, double sal) 
	{
        setPerson(n, a);   
        subject = s;
        salary = sal;
    }

    void displayTeacher() 
	{
        cout << "\n--- Teacher Info ---" << endl;
        displayPerson();   
        cout << "Subject: " << subject << "\nSalary: " << salary << endl;
    }
};

int main() 
{
    Student s1;
    s1.setStudent("Hardik", 20, "Computer Science", 101);
    s1.displayStudent();

    Teacher t1;
    t1.setTeacher("Mr. Sharma", 40, "Mathematics", 50000);
    t1.displayTeacher();

    return 0;
}

