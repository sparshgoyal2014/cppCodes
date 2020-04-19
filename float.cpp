#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
float x=1;

cout << fixed << x << endl; 
cout<<x << endl;
cout << setprecision(10) << x << endl;
return 0;
}