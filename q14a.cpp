#include<iostream>
using namespace std;
int main()
{
int val=0xCAFE;
int bits=val&0xF;
if(bits==0x7||bits==0xB||(bits>=0xD))
cout<<"at least three of last four bits(LSB) are on";
else
cout<<"not as required";
return 0;
}