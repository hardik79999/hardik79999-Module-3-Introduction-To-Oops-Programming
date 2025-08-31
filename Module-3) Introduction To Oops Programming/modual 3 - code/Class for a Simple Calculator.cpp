#include <iostream>
using namespace std;

class calculator
{
	
	public:
	
	float add(float a, float b)
	{
		return a + b;
	}
	
	float sub(float a, float b)
	{
		return a - b;
	}
	
	float multi(float a, float b)
	{
		return a * b;
	}
	
	float div(float a, float b)
	{
		if(b != 0)
		return a / b;
		else
		{
			cout<<"Not Division By Zero "<<endl;
			return 0;
		}
	}
};

int main()
{
	calculator cal;
	float num1, num2;
	char op;
	
	cout<<"Enter Your Number : "<<endl;
	cin>>num1;
	
	cout<<"Select Any One :  (+ , - , * , / ,):  ";
	cin>>op;
	
	cout<<"Enter Your Number : "<<endl;
	cin>>num2;
	
	switch (op)
	{
		case '+': 
			cout<<"Result = "<<cal.add(num1, num2)<<endl;
			break;
			
		case '-':
			cout<<"Result = "<<cal.div(num1, num2)<<endl;
			break;
			
		case '*':
			cout<<"Result = "<<cal.multi(num1, num2)<<endl;
			break;
			
		case '/':
			cout<<"Result = "<<cal.sub(num1, num2)<<endl;
			break;
			
		default:
			cout<<"Invalid operetor"<<endl;
	}
}
