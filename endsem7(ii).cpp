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
	integer o2;
	o2.setdata(2);
    o2.showdata();
	return 0;
}