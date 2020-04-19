#include<iostream>
using namespace std;
int factorial(int);
int main()
{
int n,f;
cin>>n;
cout<<"factorial of a no. "<<n<<"is:"<<endl;
f=factorial(n);
cout<<f;
return 0;
}
int factorial(int num1)
{
int f=1;
for(int i=1;i<=num1;i++)
f=f*i;
cout<<f;
}