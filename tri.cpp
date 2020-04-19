#include<iostream>
using namespace std;
int main()
{
int i,j,c,m,n;
cin>>m;
for(i=1;i<=m;i++)
	{for(j=1;j<=i;j++)
		{for(n=0;;n++)
		{
if(i==j+(2*n))
{
c=1;
cout<<c;
break;
}
if(i==j+(2*n-1))
{
c=0;
cout<<c;
break;
}
		}
		}
	cout<<endl;}
	return 0;
}