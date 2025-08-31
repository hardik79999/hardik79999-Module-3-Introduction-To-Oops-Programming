#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    // Arithmetic Operators
    cout << "Arithmetic Operators:\n";
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    // Relational Operators
    cout << "\nRelational Operators:\n";
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    // Logical Operators
    // Logical Operators
    cout << "\nLogical Operators:\n";
    cout << "(a > 0 && b > 0): " << (a > 0 && b > 0) << endl;
    cout << "(a > 0 || b < 0): " << (a > 0 || b < 0) << endl;
    cout << "!(a == b): " << !(a == b) << endl;

    // Bitwise Operators
    cout << "\nBitwise Operators:\n";
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;

    return 0;
}

