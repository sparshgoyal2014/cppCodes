#include<iostream>
using namespace std;

class integer 
{
	private :
	int x;
	public :
	void setdata(int a)
	{
		x=a;
	}
	void showdata()
	{
		cout<<x;
	}
};

int main()
{
	integer o1,*o2;
	o2=&o1;
	cout<<o2;
	return 0;
}