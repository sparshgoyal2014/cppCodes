#include<iostream>
using namespace std;
int main()
{
int i,j;
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
for(int c=65;c<=68;c++)
{
char a=c;
cout<<a;
}
}cout<<endl;
}
return 0;
}