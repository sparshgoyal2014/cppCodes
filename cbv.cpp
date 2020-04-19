#include<iostream>
using namespace std;

void change(int);
int main()
{
	int x=2,a;
	change(a);
	cout<<"changed data is :"<<a<<endl;
	cout<<x;
	return 0;
}
void change(int a)
{
	a=7;
}