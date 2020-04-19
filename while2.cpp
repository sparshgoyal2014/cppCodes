#include<iostream>
using namespace std;
int main()
{
	int x,sum=0;
	int i=1;
	cout<<"enter the no. upto which you want to get te sum"<<endl;
	cin>>x;
	
	while( i<=x)
	{
		sum +=i;
	    i++;
	}
	cout<<"the sum of "<<x<<"natural numbers is :"<<endl;
	cout<<sum<<endl;
	return 0;
}

	