#include<iostream>
using namespace std;
void add(int);
int main()
{
int data=10;
add(data);

cout<<data;
	return 0;
}


void add(int x)
{
	int d;
	cout<<"enter the no. you want to enter in the data"<<endl;
	cin>>d;
	x=x+d;
}