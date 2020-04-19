#include<iostream>
using namespace std;



 void displayNo(int,int);

int main()
{

int a=5;
int b=6;

cout<< "value of a and b in main is :  " << a << " " << b << endl;
displayNo(a,b);


return 0;

}


void displayNo(int x,int y)
 {
     cout << "value of parameters in display fun. is : " << x << " " << y  << endl;

  }