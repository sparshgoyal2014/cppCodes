#include<iostream>
using namespace std;
int main()
{
int val=0xCAFE,val1;
val1=(val>>4) | ((val&0xF)<<12);
cout<<"value in decimal is "<<val1<<endl;
cout<<"value in hexadecimal is "<<hex<<val1;
return 0;
}