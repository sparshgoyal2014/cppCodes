#include<iostream>
using namespace std;
int main()
{
char input;
input='y';
while(input=='y')
{
cout<<"hello world";
cout<<"continue?(y or n)"<<endl;
cin>>input;
if(input=='n')
cout<<"why"<<endl;
return 0;
}
cout<<"OK THANKYOU"<<endl;
return 0;
}