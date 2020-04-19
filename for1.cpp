#include<iostream>
using namespace std;
int main()
{
int sum = 0,n,rem;
for(cin>>n;n>0;n/=10)
{
rem=n%10;
sum  += rem;
cout<<sum;
}
return 0;
}