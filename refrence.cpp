#include<iostream>
using namespace std;

void change_data1(int&);

void change_data2(int);
int main()
{
	int a=5;
	cout<<a<<endl;
	change_data2(a);
	cout<<a<<endl;
	change_data1(a);
	cout<<a<<endl;
	
	return 0;
	
}
	
	
	void change_data1(int & a)
	{
		a=6;
	}
	

void change_data2(int a)
{
a=7;
}	
	
	
	
	
	
	