#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    double fValue = 76.4;
    cout<< fValue << endl;
    cout<< fixed << fValue <<endl;
    cout<< setprecision(20) << fValue << endl;
    cout<< setprecision(2) << fValue <<endl;

     return 0;


}