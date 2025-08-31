#include <iostream>
using namespace std;

int main() 
{
    int intVal = 10;
    float floatVal = intVal;  
    cout << "Implicit Conversion (int to float): " << floatVal << endl;

    float price = 99.99;
    int roundedPrice = price;  
    cout << "Implicit Conversion (float to int): " << roundedPrice << endl;

    double num = 10.75;
    int converted = (int)num;  
    cout << "Explicit Conversion (double to int): " << converted << endl;

    char ch = 'A';
    int asciiVal = static_cast<int>(ch);
    cout << "Explicit Conversion (char to int using static_cast): " << asciiVal << endl;

    return 0;
}
