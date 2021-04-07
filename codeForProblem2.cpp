#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int tc;cin>>tc;
	int temp=tc;
	while(tc--)
	{
		int n,a=0,b=0;cin>>n;
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='A')
				a++;
			else
				b++;
		}
		cout<<"Case #"<<temp-tc<<": ";
		(abs(a-b)>2)?cout<<"N\n":cout<<"Y\n";

	}
}