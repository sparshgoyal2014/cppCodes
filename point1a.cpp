#include<iostream>
using namespace std;
int main()
{
	int x,*ptr;
	 x=5;
    ptr=&x;
	cout<<ptr<<endl;
	cout<<*ptr;
	return 0;
}