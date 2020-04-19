#include<iostream>
using namespace std;
int main()
{
int x;
cin>>x;
if((x&1)==0)
{cout<<"the number"<<x<<"is even"<<endl;}
else
{cout<<"the number"<<x<<"is odd"<<endl;}
return 0;
}