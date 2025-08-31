//#include <iostream>
//using namespace std;
//
//float calculateArea(float length, float width) 
//{
//    return length * width;
//}
//
//int main() 
//{
//    float length, width;
//    cout << "Enter length: ";
//    cin >> length;
//    cout << "Enter width: ";
//    cin >> width;
//
//    float area = calculateArea(length, width);
//    cout << "Area = " << area << endl;
//    return 0;
//}

#include <iostream>
using namespace std;

class Rectangle 
{
	public:
    	float length, width;

    void getInput() 
	{
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    float calculateArea() 
	{
        return length * width;
    }
};

int main() 
{
    Rectangle r;
    r.getInput();
    cout << "Area = " << r.calculateArea() << endl;
    return 0;
}


