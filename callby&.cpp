#include<iostream>

using namespace std;

void function(int,int);

int main()
{
 int a=75,b=36;
 cout << "original values of variables a and b  are : " << a << " " << b << endl;

 function(a,b);

 return 0;


}


void function(int x, int y)
{
    x=10;
    y=20;

    cout<< "changed values are : " << x << " " << y << endl;


 }


