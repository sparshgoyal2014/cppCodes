include<iostream>
using namespace std;
int main()
{
	int n,flag=0;
	cin>>n;
	for(int i=2;i<=n/2;i++)
	{
	if(n%i==0)
	flag=0;
	else
	flag++;
	}
	if(flag==0)
	cout<<" not prime";
	else
	cout<<"prime";
	return 0 ;
}