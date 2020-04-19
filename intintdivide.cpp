#include<iostream>
using namespace std;
int main()
{
	int x=3;
	int y=2;
	double z;
	z=x/y;

	cout<<z << endl;

	z = double(x/y);
	cout << z << endl;

	z = (double(x))/(double(y));
	cout << z << endl;
	return 0;
	
}