#include<iostream>
using namespace std;
int main()
{
int intvar=1500000000;
intvar=(intvar*10)/10;
cout<<"intvar="<<intvar<<endl;
intvar=1500000000;
intvar=(static_cast<double>((intvar*10)/10);
cout<<"intvar= "<<intvar<<endl;
return 0;
}