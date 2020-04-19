#include<iostream>

using namespace std;

//void showValue(int,int);
void function(int, int);
int main()
/*
{
 //int x,y;
// showValue(x,y);    // output is 10 20..........

int x,y;

showValue(x=30,y=65);

return 0;

}


void showValue(int x, int y)
{
    x=10;
    y=20;

    cout<< "values Are : " << x << " "  << y << endl;
} 
*/

{

 int a=75,b=36;
 cout << "original values of variables a and b  are : " << a << " " << b << endl;

 function(a,b);
 cout << "changed values of a and b in the main function are : " << a << " " << b << endl;

 return 0;
}

void function(int x, int y){

    x=10;
    y=20;

    cout<< "changed values are : " << x << " " << y << endl;
}