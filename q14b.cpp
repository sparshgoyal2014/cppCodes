#include<iostream>
using namespace std;
int main()
{
int val=0xCAFE,val1;
val1=((0xFF&val)<<8) | (val>>8);
cout<<"value in decimal is "<val1<<endl;
cout<<"value in hexahexadecimal is "<<hex<<val1;
return 0;
}