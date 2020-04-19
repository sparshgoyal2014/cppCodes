#include<iostream>
using namespace std;
int main()
{
int x,y,z,sparsh;
cin>>x>>y>>z;
sparsh=x>y?(x>z?x:z):(y>z?y:z);
cout<<sparsh<<"is greatest";
return 0;
}
