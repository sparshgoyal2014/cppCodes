#include<iostream>
using namespace std;
int main()
{
	int x=5.0;
	int *p=&x;     /* if int *pa
					*p=&x   ........not work because execution and definition are on different lines */
	
	cout<<p;
	return 0;
}