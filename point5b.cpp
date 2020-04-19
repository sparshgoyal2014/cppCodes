#include<iostream>
using namespace std;
int x=2;

int& test();

int main()
{
test();
return 0;
}	

int& test()
{

	return x;
}	