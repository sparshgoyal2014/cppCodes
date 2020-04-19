#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
	int x=2,y=3;
	cout<<x<<" "<<y<<endl;
	
	swap(x,y);
	cout<<x<<" "<<y<<endl;
	
	return 0;
	
	
	
	
}

void swap(int &a,int &b)
{
	int t;
	t=a;
	a=b;
	b=t;
}