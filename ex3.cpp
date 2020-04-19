#include<iostream>
using namespace std;
int main()
{
unsigned int x;
unsigned long fact;
fact=1;
cout<<"enter your nmber";
cin>>x;
for(int j=x;j>0;j--);
fact *=j;
cout<<"factorial is"<<fact<<endl;
return 0;
}