#include<iostream>
using namespace std;

int main()
{
	int *ptr,c,y;
	c=5;
	ptr=&c;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	*ptr=2;
	ptr=&c;
	
	cout<<*ptr<<endl;
	cout<<ptr<<endl;
	cout<<c<<endl;
	
	
	ptr=&y;
	cout<<ptr<<endl;
	
	return 0;
}