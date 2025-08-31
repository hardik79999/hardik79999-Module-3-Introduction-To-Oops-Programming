#include <iostream>
using namespace std;

// Global variable
int globalVar = 100;

void showScope() 
{
    // Local variable 
    int localVar = 50;

    cout << "In side function:" << endl;
    cout << "Global Variable: " << globalVar << endl;
    cout << "Local Variable: " << localVar << endl;
    
}

int main() 
{
    int localVar = 10;  // This localVar

    cout << "In side main:" << endl;
    cout << "Global Variable: " << globalVar << endl;
    cout << "Local Variable: " << localVar << endl;

    showScope();
    

    return 0;
}

