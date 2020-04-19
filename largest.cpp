#include<iostream>
using namespace std;
int main()
{
int x,y,z;
cout<<"enter the first numbrer";
cin>>x;
cout<<"enter the second number ";
cin>>y;
cout<< "enter the third number";
cin>>z;
if(x>y && x>z)
{
cout<<x<<"is largest number";
}
else if (y>x && y>z)
{
cout<<y<< "is the largest number ";
}
else if(z>x && z>y)
{
cout<<z<< "is the largest number";
}
else
cout<<"wrong input";

return 0;
}  