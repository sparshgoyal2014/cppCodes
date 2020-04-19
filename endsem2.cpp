#include<iostream>
using namespace std;

class complex
{
	private :
	int a,b;
	public :
	void setdata()
	
	{
		cin>>a>>b;
	}
	void showdata()
	{
		cout<<a<<" "<<b<<endl;
	}
	
	complex operator-()
	{
		complex temp;
		temp.a=-a;
		temp.b=-b;
		return(temp);
	}
};
	int main()
	{
		complex c1,c2;
		cout<<"enter two integers of object c1"<<endl;
		
	c1.setdata();
	c2=-c1;
	c2.showdata();
	c1.showdata();
	return 0;
	}