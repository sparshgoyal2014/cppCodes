#include<iostream>
using namespace std;
int main()
{
int x,y,z;
y=0,x=2;
z=(++y)?2:y==1&&x;
cout<<z;
return 0;
}