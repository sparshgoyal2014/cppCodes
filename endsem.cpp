#include<iostream>
using namespace std;

class integer
{
	private :
	int x;
	public :
	void get();
	void display();
	void sum(integer o);
};
void integer::get()
{
	cin>>x;
}
void integer::display()
{
	cout<<x<<endl;
}
void integer :: sum(integer o)
{
	x+=o.x;
}
int main()
{
integer o1,o2;
cout<<"enter the integer i1\n";
o1.get();
cout<<"enter another integer i2\n";
o2.get();
cout<<"the value of i1 is :\n";
o1.display();
cout<<"the value of i2 is :"<<endl;
o2.display();
cout<<"the sum of i1 and i2 is :"<<endl;
o1.sum(o1);
o1.display();
return 0;
}
