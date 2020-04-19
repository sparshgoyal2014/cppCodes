#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
char dir='a';
int x=10,y=10;
while(dir != '\r')
{
cout<<"\nyour location is"<<x<<","<<y;
cout<<"\nenter direction(n,s,w,e):";
dir=getche();
switch(dir)
{
case 'n': y--;break;
case 's': y++;break;
case 'e': x++;break;
case 'w': x--;break;
}
if(x==7 && y==11)
{
cout<<"\nyou found the treasure!\n";
exit(0);
}
}
return 0;
}