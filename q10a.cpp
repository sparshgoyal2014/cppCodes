#include<iostream>
using namespace std;
int main()
{
int y=0,x=1;
int z=(y++)?2:y==1&&x;
cout<<z;
return 0;
}