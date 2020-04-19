#include<iostream>
using namespace std;
int main()
{
unsigned int numb,j;
unsigned long fact=1;
cout<<"enter a number: ";
cin>>numb;
for(j=numb;j>0;j--)
fact=fact*j;
cout<<"factorial is "<<fact<<endl;
return 0;
}