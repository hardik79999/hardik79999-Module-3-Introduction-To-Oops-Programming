#include<iostream>
using namespace std;
int main()
{
	int n;
	float sum=0;
	float average;
	
	cout<<"How many number you want"<<endl;
	cin>>n;
	
	float arr[n];
	
	for (int i = 0; i <n; i++)
	{
		cout<<"number"<<i+1<<":"<<endl;
		cin>>arr[i];
		sum = sum + arr[i];
		
	}
	
	average = sum/n;
	
	cout<<"SUM = "<<sum<<endl;
	cout<<"AVREGE : "<<average<<endl;
}
