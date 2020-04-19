#include<iostream>
using namespace std;
int max(int,int);
int main()
{
int x,y;
max(x=20,y=30);
return 0;
}
int max(int x,int y)
{
if(x>y)
cout<<x<<"is max";
else
cout<<y<<"is max";
return 0;
}