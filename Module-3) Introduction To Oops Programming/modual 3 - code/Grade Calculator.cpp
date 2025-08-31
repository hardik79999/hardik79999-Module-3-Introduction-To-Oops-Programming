#include <iostream>
using namespace std;

int main() 
{
    int marks;

    
    cout << "Enter student's marks: ";
    cin >> marks;

    
    if (marks > 90) 
	{
        cout << "Grade: A\n...Pass" << endl;
    } 
    else if (marks > 80) 
	{
        cout << "Grade: B\n...Pass" << endl;
    } 
    else if (marks > 70) 
	{
        cout << "Grade: C\n...Pass" << endl;
    }
	else if (marks > 60) 
	{
        cout << "Grade: D\n...Pass" << endl;
    }
	else 
	{
        cout << "Grade: E (Fail)" << endl;
    }  
    

    return 0;
}

