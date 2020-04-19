#include<iostream>
using namespace std;
int main()
{
int x,y;
int z=(y++)?2:y==1&&x;
cout<<z;
return 0;
}