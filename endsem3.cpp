#include<iostream>
using namespace std;

class account
{
	public:
	int x=1;
	static int y;
	
	void integer()
	{
	cout<<x<<" "<<y<<endl;
	}
};
int account::y=0;
int main()
{
	account o1;
	o1.integer();
	return 0;
}