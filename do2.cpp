#include<iostream>
using namespace std;
int main()
{
	int i=1,sum=0;
	int x;
	cout<<"enter the no. upto which you want to get the sum"<<endl;
	cin>>x;
	
	do
	{
		sum+=i;
		i++;
		
	}
	while(i<=x);
	cout<<"the sum of "<<x<<"natural no.s is :"<<endl;
	cout<<sum<<endl;
	
	
	
	return 0;
}